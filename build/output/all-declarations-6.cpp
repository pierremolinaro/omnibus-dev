#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@functionDeclarationListAST-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_functionDeclarationListAST_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcSignature var_signature = GALGAS_funcSignature::constructor_emptyList (SOURCE_FILE ("func-declaration.galgas", 112)) ;
  cEnumerator_funcFormalArgumentList enumerator_4200 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_4200.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_4200.current_mFormalArgumentTypeName (HERE), var_typeProxy COMMA_SOURCE_FILE ("func-declaration.galgas", 114)) ;
    }
    var_signature.addAssign_operation (enumerator_4200.current_mSelector (HERE), var_typeProxy  COMMA_SOURCE_FILE ("func-declaration.galgas", 115)) ;
    enumerator_4200.gotoNextObject () ;
  }
  GALGAS_modeMap var_functionModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("func-declaration.galgas", 118)) ;
  cEnumerator_lstringlist enumerator_4421 (inObject.mAttribute_mFunctionModeList, kEnumeration_up) ;
  while (enumerator_4421.hasCurrentObject ()) {
    {
    var_functionModeMap.setter_insertKey (enumerator_4421.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 120)) ;
    }
    enumerator_4421.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, inObject.mAttribute_mResultTypeName, var_resultType COMMA_SOURCE_FILE ("func-declaration.galgas", 123)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mFunctionMap.setter_insertKey (inObject.mAttribute_mFunctionName, var_functionModeMap, var_signature, var_resultType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 125)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@functionDeclarationListAST-element functionSemanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_functionSemanticAnalysis (const GALGAS_functionDeclarationListAST_2D_element inObject,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_functionModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("func-declaration.galgas", 150)) ;
  cEnumerator_lstringlist enumerator_5646 (inObject.mAttribute_mFunctionModeList, kEnumeration_up) ;
  while (enumerator_5646.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_5646.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 152)) ;
    var_functionModeSet.addAssign_operation (enumerator_5646.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("func-declaration.galgas", 153)) ;
    enumerator_5646.gotoNextObject () ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (function_mangledNameForFunction (inObject.mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 157)), constinArgument_inContext, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 156)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, inObject.mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 162)) ;
  {
  var_variableMap.setter_insertOutputFormalArgument (inObject.mAttribute_mResultVarName, var_resultType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_resultType, inObject.mAttribute_mResultVarName.mAttribute_string  COMMA_SOURCE_FILE ("func-declaration.galgas", 167)), GALGAS_bool (true), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("func-declaration.galgas", 169)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 163)) ;
  }
  GALGAS_funcFormalArgumentListForGeneration var_formalArguments = GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("func-declaration.galgas", 174)) ;
  cEnumerator_funcFormalArgumentList enumerator_6447 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_6447.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_6447.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 176)) ;
    {
    var_variableMap.setter_insertConstantInputFormalArgument (enumerator_6447.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_6447.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("func-declaration.galgas", 181)), var_typeProxy.getter_copiable (inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 182)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("func-declaration.galgas", 183)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 177)) ;
    }
    var_formalArguments.addAssign_operation (var_typeProxy, function_mangledNameForLocalVariable (enumerator_6447.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 187))  COMMA_SOURCE_FILE ("func-declaration.galgas", 187)) ;
    enumerator_6447.gotoNextObject () ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph = GALGAS_lstring::constructor_new (function_mangledNameForFunction (inObject.mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 190)), inObject.mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("func-declaration.galgas", 190)) ;
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("func-declaration.galgas", 191)).operator_not (SOURCE_FILE ("func-declaration.galgas", 191)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 192)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("func-declaration.galgas", 198)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, var_routineNameForInvocationGraph, constinArgument_inContext, var_functionModeSet, var_functionModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 203)) COMMA_SOURCE_FILE ("func-declaration.galgas", 203)).operator_not (SOURCE_FILE ("func-declaration.galgas", 203)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 199)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfFuncLocation, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 210)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.setter_insertKey (inObject.mAttribute_mFunctionName, var_formalArguments, var_instructionGenerationList, var_resultType, inObject.mAttribute_mResultVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 212)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::GALGAS_functionMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mInstructionGenerationList (),
mAttribute_mResultType (),
mAttribute_mResultVarName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::~ GALGAS_functionMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::GALGAS_functionMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_funcFormalArgumentListForGeneration & inOperand1,
                                                                  const GALGAS_instructionListIR & inOperand2,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                  const GALGAS_string & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mInstructionGenerationList (inOperand2),
mAttribute_mResultType (inOperand3),
mAttribute_mResultVarName (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_instructionListIR::constructor_emptyList (HERE),
                                          GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_funcFormalArgumentListForGeneration & inOperand1,
                                                                                  const GALGAS_instructionListIR & inOperand2,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                  const GALGAS_string & inOperand4 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_functionMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionMapIR_2D_element::objectCompare (const GALGAS_functionMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (inOperand.mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultVarName.objectCompare (inOperand.mAttribute_mResultVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mResultType.isValid () && mAttribute_mResultVarName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mResultType.drop () ;
  mAttribute_mResultVarName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMapIR_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @functionMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultVarName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_functionMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_functionMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMapIR_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionMapIR_2D_element::getter_mResultVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @functionMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMapIR_2D_element ("functionMapIR-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_functionMapIR_2D_element result ;
  const GALGAS_functionMapIR_2D_element * p = (const GALGAS_functionMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@procedureDeclarationListAST-element enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInPrecedenceGraph (const GALGAS_procedureDeclarationListAST_2D_element inObject,
                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_procFormalArgumentList enumerator_5542 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
  while (enumerator_5542.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5542.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("proc-declaration.galgas", 166)) ;
    }
    enumerator_5542.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@procedureDeclarationListAST-element enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_procedureDeclarationListAST_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureSignature var_signature = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 199)) ;
  cEnumerator_procFormalArgumentList enumerator_6914 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
  while (enumerator_6914.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6914.current_mFormalArgumentTypeName (HERE), var_typeProxy COMMA_SOURCE_FILE ("proc-declaration.galgas", 201)) ;
    }
    var_signature.addAssign_operation (enumerator_6914.current_mFormalArgumentPassingMode (HERE), enumerator_6914.current_mSelector (HERE).mAttribute_string, var_typeProxy  COMMA_SOURCE_FILE ("proc-declaration.galgas", 202)) ;
    enumerator_6914.gotoNextObject () ;
  }
  GALGAS_modeMap var_procedureModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("proc-declaration.galgas", 205)) ;
  cEnumerator_lstringlist enumerator_7171 (inObject.mAttribute_mProcedureModeList, kEnumeration_up) ;
  while (enumerator_7171.hasCurrentObject ()) {
    {
    var_procedureModeMap.setter_insertKey (enumerator_7171.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 207)) ;
    }
    enumerator_7171.gotoNextObject () ;
  }
  GALGAS_bool var_weakProcedure = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_7320 (inObject.mAttribute_mProcedureAttributeList, kEnumeration_up) ;
  bool bool_0 = var_weakProcedure.operator_not (SOURCE_FILE ("proc-declaration.galgas", 211)).isValidAndTrue () ;
  if (enumerator_7320.hasCurrentObject () && bool_0) {
    while (enumerator_7320.hasCurrentObject () && bool_0) {
      var_weakProcedure = GALGAS_bool (kIsEqual, enumerator_7320.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 212)))) ;
      enumerator_7320.gotoNextObject () ;
      if (enumerator_7320.hasCurrentObject ()) {
        bool_0 = var_weakProcedure.operator_not (SOURCE_FILE ("proc-declaration.galgas", 211)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = ioArgument_ioContext.mAttribute_mProcedureMap.getter_hasKey (inObject.mAttribute_mProcedureName.mAttribute_string COMMA_SOURCE_FILE ("proc-declaration.galgas", 215)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bool var_weak = ioArgument_ioContext.mAttribute_mProcedureMap.getter_mWeakProcedureForKey (inObject.mAttribute_mProcedureName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 216)) ;
    GALGAS_bool test_2 = var_weakProcedure ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = var_weak.operator_not (SOURCE_FILE ("proc-declaration.galgas", 217)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_4 = var_weakProcedure ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_weak ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (inObject.mAttribute_mProcedureName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("this weak procedure overrides a weak procedure")  COMMA_SOURCE_FILE ("proc-declaration.galgas", 220)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_7 = var_weakProcedure.operator_not (SOURCE_FILE ("proc-declaration.galgas", 221)) ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = var_weak ;
        }
        const enumGalgasBool test_8 = test_7.boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          GALGAS_bool joker_7884_4 ; // Joker input parameter
          GALGAS_modeMap joker_7884_3 ; // Joker input parameter
          GALGAS_procedureSignature joker_7884_2 ; // Joker input parameter
          GALGAS_bool joker_7884_1 ; // Joker input parameter
          ioArgument_ioContext.mAttribute_mProcedureMap.setter_removeKey (inObject.mAttribute_mProcedureName, joker_7884_4, joker_7884_3, joker_7884_2, joker_7884_1, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 222)) ;
          }
          {
          ioArgument_ioContext.mAttribute_mProcedureMap.setter_insertKey (inObject.mAttribute_mProcedureName, GALGAS_bool (false), var_procedureModeMap, var_signature, var_weakProcedure, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 223)) ;
          }
        }else if (kBoolFalse == test_8) {
          {
          ioArgument_ioContext.mAttribute_mProcedureMap.setter_insertKey (inObject.mAttribute_mProcedureName, GALGAS_bool (false), var_procedureModeMap, var_signature, var_weakProcedure, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 231)) ;
          }
        }
      }
    }
  }else if (kBoolFalse == test_1) {
    {
    ioArgument_ioContext.mAttribute_mProcedureMap.setter_insertKey (inObject.mAttribute_mProcedureName, GALGAS_bool (false), var_procedureModeMap, var_signature, var_weakProcedure, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 240)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@procedureDeclarationListAST-element procedureSemanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_procedureSemanticAnalysis (const GALGAS_procedureDeclarationListAST_2D_element inObject,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_procedureModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("proc-declaration.galgas", 325)) ;
  cEnumerator_lstringlist enumerator_11586 (inObject.mAttribute_mProcedureModeList, kEnumeration_up) ;
  while (enumerator_11586.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_11586.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 327)) ;
    var_procedureModeSet.addAssign_operation (enumerator_11586.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("proc-declaration.galgas", 328)) ;
    enumerator_11586.gotoNextObject () ;
  }
  GALGAS_bool var_warnIfUnused = GALGAS_bool (true) ;
  GALGAS_bool var_weakProcedure = GALGAS_bool (false) ;
  GALGAS_bool var_nullOnNoException = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_11834 (inObject.mAttribute_mProcedureAttributeList, kEnumeration_up) ;
  while (enumerator_11834.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_11834.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 335)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_warnIfUnused.operator_not (SOURCE_FILE ("proc-declaration.galgas", 336)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_11834.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicate @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 337)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 337))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 337)) ;
      }
      var_warnIfUnused = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_11834.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 340)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_weakProcedure.boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_11834.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("duplicate @").add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 342)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 342))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 342)) ;
        }
        var_weakProcedure = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_11834.current_mValue (HERE).mAttribute_string.objectCompare (function_nullWhenPanicDisabledAttribute (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 345)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          const enumGalgasBool test_7 = var_nullOnNoException.boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_location location_8 (enumerator_11834.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_8, GALGAS_string ("duplicate @").add_operation (function_nullWhenPanicDisabledAttribute (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 347)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 347))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 347)) ;
          }
          var_nullOnNoException = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_6) {
          GALGAS_location location_9 (enumerator_11834.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_9, GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 351)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 352)).add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 353))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 351)) ;
        }
      }
    }
    enumerator_11834.gotoNextObject () ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (GALGAS_string ("proc ").add_operation (inObject.mAttribute_mProcedureName.getter_string (SOURCE_FILE ("proc-declaration.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 358)), constinArgument_inContext, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 357)) ;
  GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 363)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mAttribute_mProcFormalArgumentList, var_variableMap, var_formalArguments, inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 364)) ;
  }
  GALGAS_lstring var_procNameForInvocationGraph = GALGAS_lstring::constructor_new (GALGAS_string ("proc ").add_operation (inObject.mAttribute_mProcedureName.getter_string (SOURCE_FILE ("proc-declaration.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 371)), inObject.mAttribute_mProcedureName.mAttribute_location  COMMA_SOURCE_FILE ("proc-declaration.galgas", 371)) ;
  const enumGalgasBool test_10 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_procNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("proc-declaration.galgas", 372)).operator_not (SOURCE_FILE ("proc-declaration.galgas", 372)).boolEnum () ;
  if (kBoolTrue == test_10) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_procNameForInvocationGraph, inObject.mAttribute_mProcedureName, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 373)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 379)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, var_procNameForInvocationGraph, constinArgument_inContext, var_procedureModeSet, var_procedureModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 384)) COMMA_SOURCE_FILE ("proc-declaration.galgas", 384)).operator_not (SOURCE_FILE ("proc-declaration.galgas", 384)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 380)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfProcLocation, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 391)) ;
  const enumGalgasBool test_11 = ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.getter_hasKey (inObject.mAttribute_mProcedureName.mAttribute_string COMMA_SOURCE_FILE ("proc-declaration.galgas", 393)).boolEnum () ;
  if (kBoolTrue == test_11) {
    GALGAS_bool var_weak = ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.getter_mWeakForKey (inObject.mAttribute_mProcedureName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 394)) ;
    GALGAS_bool test_12 = var_weakProcedure ;
    if (kBoolTrue == test_12.boolEnum ()) {
      test_12 = var_weak.operator_not (SOURCE_FILE ("proc-declaration.galgas", 395)) ;
    }
    const enumGalgasBool test_13 = test_12.boolEnum () ;
    if (kBoolTrue == test_13) {
    }else if (kBoolFalse == test_13) {
      GALGAS_bool test_14 = var_weakProcedure ;
      if (kBoolTrue == test_14.boolEnum ()) {
        test_14 = var_weak ;
      }
      const enumGalgasBool test_15 = test_14.boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_location location_16 (inObject.mAttribute_mProcedureName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_16, GALGAS_string ("this weak procedure overrides a weak procedure")  COMMA_SOURCE_FILE ("proc-declaration.galgas", 398)) ;
      }else if (kBoolFalse == test_15) {
        GALGAS_bool test_17 = var_weakProcedure.operator_not (SOURCE_FILE ("proc-declaration.galgas", 399)) ;
        if (kBoolTrue == test_17.boolEnum ()) {
          test_17 = var_weak ;
        }
        const enumGalgasBool test_18 = test_17.boolEnum () ;
        if (kBoolTrue == test_18) {
          {
          GALGAS_procFormalArgumentListForGeneration joker_14479_6 ; // Joker input parameter
          GALGAS_instructionListIR joker_14479_5 ; // Joker input parameter
          GALGAS_bool joker_14479_4 ; // Joker input parameter
          GALGAS_bool joker_14479_3 ; // Joker input parameter
          GALGAS_bool joker_14479_2 ; // Joker input parameter
          GALGAS_bool joker_14479_1 ; // Joker input parameter
          ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.setter_removeKey (inObject.mAttribute_mProcedureName, joker_14479_6, joker_14479_5, joker_14479_4, joker_14479_3, joker_14479_2, joker_14479_1, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 400)) ;
          }
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.setter_insertKey (inObject.mAttribute_mProcedureName, var_formalArguments, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (inObject.mAttribute_mProcedureName.mAttribute_string COMMA_SOURCE_FILE ("proc-declaration.galgas", 405)), var_warnIfUnused, var_weakProcedure, var_nullOnNoException, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 401)) ;
          }
        }else if (kBoolFalse == test_18) {
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.setter_insertKey (inObject.mAttribute_mProcedureName, var_formalArguments, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (inObject.mAttribute_mProcedureName.mAttribute_string COMMA_SOURCE_FILE ("proc-declaration.galgas", 415)), var_warnIfUnused, var_weakProcedure, var_nullOnNoException, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 411)) ;
          }
        }
      }
    }
  }else if (kBoolFalse == test_11) {
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.setter_insertKey (inObject.mAttribute_mProcedureName, var_formalArguments, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (inObject.mAttribute_mProcedureName.mAttribute_string COMMA_SOURCE_FILE ("proc-declaration.galgas", 426)), var_warnIfUnused, var_weakProcedure, var_nullOnNoException, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 422)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element::GALGAS_procedureMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mInstructionGenerationList (),
mAttribute_mIsRequired (),
mAttribute_mWarnIfUnused (),
mAttribute_mWeak (),
mAttribute_mNullOnNoException () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element::~ GALGAS_procedureMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element::GALGAS_procedureMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                    const GALGAS_instructionListIR & inOperand2,
                                                                    const GALGAS_bool & inOperand3,
                                                                    const GALGAS_bool & inOperand4,
                                                                    const GALGAS_bool & inOperand5,
                                                                    const GALGAS_bool & inOperand6) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mInstructionGenerationList (inOperand2),
mAttribute_mIsRequired (inOperand3),
mAttribute_mWarnIfUnused (inOperand4),
mAttribute_mWeak (inOperand5),
mAttribute_mNullOnNoException (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element GALGAS_procedureMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_procedureMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (HERE),
                                           GALGAS_instructionListIR::constructor_emptyList (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element GALGAS_procedureMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                                    const GALGAS_instructionListIR & inOperand2,
                                                                                    const GALGAS_bool & inOperand3,
                                                                                    const GALGAS_bool & inOperand4,
                                                                                    const GALGAS_bool & inOperand5,
                                                                                    const GALGAS_bool & inOperand6 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_procedureMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureMapIR_2D_element::objectCompare (const GALGAS_procedureMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (inOperand.mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsRequired.objectCompare (inOperand.mAttribute_mIsRequired) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWarnIfUnused.objectCompare (inOperand.mAttribute_mWarnIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWeak.objectCompare (inOperand.mAttribute_mWeak) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNullOnNoException.objectCompare (inOperand.mAttribute_mNullOnNoException) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mIsRequired.isValid () && mAttribute_mWarnIfUnused.isValid () && mAttribute_mWeak.isValid () && mAttribute_mNullOnNoException.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mIsRequired.drop () ;
  mAttribute_mWarnIfUnused.drop () ;
  mAttribute_mWeak.drop () ;
  mAttribute_mNullOnNoException.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMapIR_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @procedureMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsRequired.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWarnIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWeak.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNullOnNoException.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procedureMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_procedureMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMapIR_2D_element::getter_mIsRequired (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsRequired ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMapIR_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarnIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMapIR_2D_element::getter_mWeak (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWeak ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMapIR_2D_element::getter_mNullOnNoException (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNullOnNoException ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procedureMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureMapIR_2D_element ("procedureMapIR-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element GALGAS_procedureMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procedureMapIR_2D_element result ;
  const GALGAS_procedureMapIR_2D_element * p = (const GALGAS_procedureMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@infixOperatorMap checkBinaryOperationWith'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkBinaryOperationWith (const GALGAS_infixOperatorMap inObject,
                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inLeftType,
                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRightType,
                                              const GALGAS_location constinArgument_inOperatorLocation,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outResultType,
                                              GALGAS_infixOperatorDescription & outArgument_outOperation,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultType.drop () ; // Release 'out' argument
  outArgument_outOperation.drop () ; // Release 'out' argument
  GALGAS_lstring var_lkey = function_combineTypeNamesForInfixOperator (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 80)), constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 80)) ;
  const GALGAS_infixOperatorMap temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.getter_hasKey (var_lkey.mAttribute_string COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_infixOperatorMap temp_2 = inObject ;
    temp_2.method_searchKey (var_lkey, outArgument_outResultType, outArgument_outOperation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)) ;
  }else if (kBoolFalse == test_1) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("infix operation between '").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)).add_operation (GALGAS_string (" and "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)).add_operation (GALGAS_string ("' is not defined"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 84)) ;
    outArgument_outResultType.drop () ; // Release error dropped variable
    outArgument_outOperation.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category method '@prefixOperatorMap checkWith'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkWith (const GALGAS_prefixOperatorMap inObject,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                               const GALGAS_location constinArgument_inOperatorLocation,
                               GALGAS_unifiedTypeMap_2D_proxy & outArgument_outResultType,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultType.drop () ; // Release 'out' argument
  GALGAS_lstring var_lkey = GALGAS_lstring::constructor_new (constinArgument_inType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 40)), constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 40)) ;
  const GALGAS_prefixOperatorMap temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.getter_hasKey (var_lkey.mAttribute_string COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 41)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_prefixOperatorMap temp_2 = inObject ;
    temp_2.method_searchKey (var_lkey, outArgument_outResultType, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 42)) ;
  }else if (kBoolFalse == test_1) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("prefix operation is not defined for '").add_operation (constinArgument_inType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 45)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 45))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 44)) ;
    outArgument_outResultType.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Getter '@procEffectiveParameterPassingModeAST passingModeForActualSelector'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_passingModeForActualSelector (const GALGAS_procEffectiveParameterPassingModeAST & inObject,
                                                            GALGAS_lstring inArgument_inSelector,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_procEffectiveParameterPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, inArgument_inSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.plusAssign_operation(inArgument_inSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@unifiedTypeMap-proxy llvmTypeName'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_llvmTypeName (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 131)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      result_outResult = GALGAS_string ("i1") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      result_outResult = GALGAS_string ("<<boolset>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      const cEnumAssociatedValues_typeKind_enumeration * extractPtr_5374 = (const cEnumAssociatedValues_typeKind_enumeration *) (temp_0.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 131)).unsafePointer ()) ;
      const GALGAS_enumConstantMap extractedValue_constantMap = extractPtr_5374->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("i").add_operation (extractedValue_constantMap.getter_count (SOURCE_FILE ("semantic-context.galgas", 134)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 134)).getter_significantBitCount (SOURCE_FILE ("semantic-context.galgas", 134)).getter_string (SOURCE_FILE ("semantic-context.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 134)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const cEnumAssociatedValues_typeKind_structure * extractPtr_5468 = (const cEnumAssociatedValues_typeKind_structure *) (temp_0.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 131)).unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_5468->mAssociatedValue0 ;
      const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_5468->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("%").add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 135)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_5555 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 131)).unsafePointer ()) ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_5555->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_5555->mAssociatedValue3 ;
      result_outResult = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("semantic-context.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 136)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      result_outResult = GALGAS_string ("i8*") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalInteger:
    {
      result_outResult = GALGAS_string ("<<literalInteger>>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mAttribute_mPointerSize (),
mAttribute_mBooleanType (),
mAttribute_mLiteralIntegerType (),
mAttribute_mExceptionCodeType (),
mAttribute_mExceptionLineType (),
mAttribute_mTypeMap (),
mAttribute_mProcedureMap (),
mAttribute_mFunctionMap (),
mAttribute_mInitRoutineMap (),
mAttribute_mExceptionSetupRoutinePriorityMap (),
mAttribute_mExceptionLoopRoutinePriorityMap (),
mAttribute_mRegisterMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mConstructorMap (),
mAttribute_mModeMap (),
mAttribute_mEqualOperatorMap (),
mAttribute_mNonEqualOperatorMap (),
mAttribute_mStrictInfOperatorMap (),
mAttribute_mInfEqualOperatorMap (),
mAttribute_mStrictSupOperatorMap (),
mAttribute_mSupEqualOperatorMap (),
mAttribute_mAndOperatorMap (),
mAttribute_mOrOperatorMap (),
mAttribute_mXorOperatorMap (),
mAttribute_mBooleanXorOperatorMap (),
mAttribute_mAddOperatorMap (),
mAttribute_mAddNoOvfOperatorMap (),
mAttribute_mSubOperatorMap (),
mAttribute_mSubNoOvfOperatorMap (),
mAttribute_mMulOperatorMap (),
mAttribute_mMulNoOvfOperatorMap (),
mAttribute_mDivOperatorMap (),
mAttribute_mDivNoOvfOperatorMap (),
mAttribute_mModOperatorMap (),
mAttribute_mModNoOvfOperatorMap (),
mAttribute_mLeftShiftOperatorMap (),
mAttribute_mRightShiftOperatorMap (),
mAttribute_mUnaryMinusOperatorMap (),
mAttribute_mNotOperatorMap (),
mAttribute_mUnsignedComplementOperatorMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_uint & inOperand0,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                const GALGAS_unifiedTypeMap & inOperand5,
                                                const GALGAS_procedureMap & inOperand6,
                                                const GALGAS_functionMap & inOperand7,
                                                const GALGAS_initRoutineMap & inOperand8,
                                                const GALGAS_exceptionRoutinePriorityMap & inOperand9,
                                                const GALGAS_exceptionRoutinePriorityMap & inOperand10,
                                                const GALGAS_registerMap & inOperand11,
                                                const GALGAS_globalConstantMap & inOperand12,
                                                const GALGAS_globalVariableMap & inOperand13,
                                                const GALGAS_constructorMap & inOperand14,
                                                const GALGAS_modeMap & inOperand15,
                                                const GALGAS_infixOperatorMap & inOperand16,
                                                const GALGAS_infixOperatorMap & inOperand17,
                                                const GALGAS_infixOperatorMap & inOperand18,
                                                const GALGAS_infixOperatorMap & inOperand19,
                                                const GALGAS_infixOperatorMap & inOperand20,
                                                const GALGAS_infixOperatorMap & inOperand21,
                                                const GALGAS_infixOperatorMap & inOperand22,
                                                const GALGAS_infixOperatorMap & inOperand23,
                                                const GALGAS_infixOperatorMap & inOperand24,
                                                const GALGAS_infixOperatorMap & inOperand25,
                                                const GALGAS_infixOperatorMap & inOperand26,
                                                const GALGAS_infixOperatorMap & inOperand27,
                                                const GALGAS_infixOperatorMap & inOperand28,
                                                const GALGAS_infixOperatorMap & inOperand29,
                                                const GALGAS_infixOperatorMap & inOperand30,
                                                const GALGAS_infixOperatorMap & inOperand31,
                                                const GALGAS_infixOperatorMap & inOperand32,
                                                const GALGAS_infixOperatorMap & inOperand33,
                                                const GALGAS_infixOperatorMap & inOperand34,
                                                const GALGAS_infixOperatorMap & inOperand35,
                                                const GALGAS_infixOperatorMap & inOperand36,
                                                const GALGAS_infixOperatorMap & inOperand37,
                                                const GALGAS_prefixOperatorMap & inOperand38,
                                                const GALGAS_prefixOperatorMap & inOperand39,
                                                const GALGAS_prefixOperatorMap & inOperand40) :
mAttribute_mPointerSize (inOperand0),
mAttribute_mBooleanType (inOperand1),
mAttribute_mLiteralIntegerType (inOperand2),
mAttribute_mExceptionCodeType (inOperand3),
mAttribute_mExceptionLineType (inOperand4),
mAttribute_mTypeMap (inOperand5),
mAttribute_mProcedureMap (inOperand6),
mAttribute_mFunctionMap (inOperand7),
mAttribute_mInitRoutineMap (inOperand8),
mAttribute_mExceptionSetupRoutinePriorityMap (inOperand9),
mAttribute_mExceptionLoopRoutinePriorityMap (inOperand10),
mAttribute_mRegisterMap (inOperand11),
mAttribute_mGlobalConstantMap (inOperand12),
mAttribute_mGlobalVariableMap (inOperand13),
mAttribute_mConstructorMap (inOperand14),
mAttribute_mModeMap (inOperand15),
mAttribute_mEqualOperatorMap (inOperand16),
mAttribute_mNonEqualOperatorMap (inOperand17),
mAttribute_mStrictInfOperatorMap (inOperand18),
mAttribute_mInfEqualOperatorMap (inOperand19),
mAttribute_mStrictSupOperatorMap (inOperand20),
mAttribute_mSupEqualOperatorMap (inOperand21),
mAttribute_mAndOperatorMap (inOperand22),
mAttribute_mOrOperatorMap (inOperand23),
mAttribute_mXorOperatorMap (inOperand24),
mAttribute_mBooleanXorOperatorMap (inOperand25),
mAttribute_mAddOperatorMap (inOperand26),
mAttribute_mAddNoOvfOperatorMap (inOperand27),
mAttribute_mSubOperatorMap (inOperand28),
mAttribute_mSubNoOvfOperatorMap (inOperand29),
mAttribute_mMulOperatorMap (inOperand30),
mAttribute_mMulNoOvfOperatorMap (inOperand31),
mAttribute_mDivOperatorMap (inOperand32),
mAttribute_mDivNoOvfOperatorMap (inOperand33),
mAttribute_mModOperatorMap (inOperand34),
mAttribute_mModNoOvfOperatorMap (inOperand35),
mAttribute_mLeftShiftOperatorMap (inOperand36),
mAttribute_mRightShiftOperatorMap (inOperand37),
mAttribute_mUnaryMinusOperatorMap (inOperand38),
mAttribute_mNotOperatorMap (inOperand39),
mAttribute_mUnsignedComplementOperatorMap (inOperand40) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_uint::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_procedureMap::constructor_emptyMap (HERE),
                                 GALGAS_functionMap::constructor_emptyMap (HERE),
                                 GALGAS_initRoutineMap::constructor_emptyMap (HERE),
                                 GALGAS_exceptionRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_exceptionRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_registerMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalVariableMap::constructor_emptyMap (HERE),
                                 GALGAS_constructorMap::constructor_emptyMap (HERE),
                                 GALGAS_modeMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_uint & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                const GALGAS_unifiedTypeMap & inOperand5,
                                                                const GALGAS_procedureMap & inOperand6,
                                                                const GALGAS_functionMap & inOperand7,
                                                                const GALGAS_initRoutineMap & inOperand8,
                                                                const GALGAS_exceptionRoutinePriorityMap & inOperand9,
                                                                const GALGAS_exceptionRoutinePriorityMap & inOperand10,
                                                                const GALGAS_registerMap & inOperand11,
                                                                const GALGAS_globalConstantMap & inOperand12,
                                                                const GALGAS_globalVariableMap & inOperand13,
                                                                const GALGAS_constructorMap & inOperand14,
                                                                const GALGAS_modeMap & inOperand15,
                                                                const GALGAS_infixOperatorMap & inOperand16,
                                                                const GALGAS_infixOperatorMap & inOperand17,
                                                                const GALGAS_infixOperatorMap & inOperand18,
                                                                const GALGAS_infixOperatorMap & inOperand19,
                                                                const GALGAS_infixOperatorMap & inOperand20,
                                                                const GALGAS_infixOperatorMap & inOperand21,
                                                                const GALGAS_infixOperatorMap & inOperand22,
                                                                const GALGAS_infixOperatorMap & inOperand23,
                                                                const GALGAS_infixOperatorMap & inOperand24,
                                                                const GALGAS_infixOperatorMap & inOperand25,
                                                                const GALGAS_infixOperatorMap & inOperand26,
                                                                const GALGAS_infixOperatorMap & inOperand27,
                                                                const GALGAS_infixOperatorMap & inOperand28,
                                                                const GALGAS_infixOperatorMap & inOperand29,
                                                                const GALGAS_infixOperatorMap & inOperand30,
                                                                const GALGAS_infixOperatorMap & inOperand31,
                                                                const GALGAS_infixOperatorMap & inOperand32,
                                                                const GALGAS_infixOperatorMap & inOperand33,
                                                                const GALGAS_infixOperatorMap & inOperand34,
                                                                const GALGAS_infixOperatorMap & inOperand35,
                                                                const GALGAS_infixOperatorMap & inOperand36,
                                                                const GALGAS_infixOperatorMap & inOperand37,
                                                                const GALGAS_prefixOperatorMap & inOperand38,
                                                                const GALGAS_prefixOperatorMap & inOperand39,
                                                                const GALGAS_prefixOperatorMap & inOperand40 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid () && inOperand31.isValid () && inOperand32.isValid () && inOperand33.isValid () && inOperand34.isValid () && inOperand35.isValid () && inOperand36.isValid () && inOperand37.isValid () && inOperand38.isValid () && inOperand39.isValid () && inOperand40.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30, inOperand31, inOperand32, inOperand33, inOperand34, inOperand35, inOperand36, inOperand37, inOperand38, inOperand39, inOperand40) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPointerSize.objectCompare (inOperand.mAttribute_mPointerSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBooleanType.objectCompare (inOperand.mAttribute_mBooleanType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLiteralIntegerType.objectCompare (inOperand.mAttribute_mLiteralIntegerType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionCodeType.objectCompare (inOperand.mAttribute_mExceptionCodeType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLineType.objectCompare (inOperand.mAttribute_mExceptionLineType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeMap.objectCompare (inOperand.mAttribute_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureMap.objectCompare (inOperand.mAttribute_mProcedureMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMap.objectCompare (inOperand.mAttribute_mFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitRoutineMap.objectCompare (inOperand.mAttribute_mInitRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionSetupRoutinePriorityMap.objectCompare (inOperand.mAttribute_mExceptionSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLoopRoutinePriorityMap.objectCompare (inOperand.mAttribute_mExceptionLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterMap.objectCompare (inOperand.mAttribute_mRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstructorMap.objectCompare (inOperand.mAttribute_mConstructorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModeMap.objectCompare (inOperand.mAttribute_mModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEqualOperatorMap.objectCompare (inOperand.mAttribute_mEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonEqualOperatorMap.objectCompare (inOperand.mAttribute_mNonEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStrictInfOperatorMap.objectCompare (inOperand.mAttribute_mStrictInfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInfEqualOperatorMap.objectCompare (inOperand.mAttribute_mInfEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStrictSupOperatorMap.objectCompare (inOperand.mAttribute_mStrictSupOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSupEqualOperatorMap.objectCompare (inOperand.mAttribute_mSupEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAndOperatorMap.objectCompare (inOperand.mAttribute_mAndOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOrOperatorMap.objectCompare (inOperand.mAttribute_mOrOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mXorOperatorMap.objectCompare (inOperand.mAttribute_mXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBooleanXorOperatorMap.objectCompare (inOperand.mAttribute_mBooleanXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddOperatorMap.objectCompare (inOperand.mAttribute_mAddOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mAddNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubOperatorMap.objectCompare (inOperand.mAttribute_mSubOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mSubNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMulOperatorMap.objectCompare (inOperand.mAttribute_mMulOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMulNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mMulNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDivOperatorMap.objectCompare (inOperand.mAttribute_mDivOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDivNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mDivNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModOperatorMap.objectCompare (inOperand.mAttribute_mModOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mModNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLeftShiftOperatorMap.objectCompare (inOperand.mAttribute_mLeftShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRightShiftOperatorMap.objectCompare (inOperand.mAttribute_mRightShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnaryMinusOperatorMap.objectCompare (inOperand.mAttribute_mUnaryMinusOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNotOperatorMap.objectCompare (inOperand.mAttribute_mNotOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnsignedComplementOperatorMap.objectCompare (inOperand.mAttribute_mUnsignedComplementOperatorMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mAttribute_mPointerSize.isValid () && mAttribute_mBooleanType.isValid () && mAttribute_mLiteralIntegerType.isValid () && mAttribute_mExceptionCodeType.isValid () && mAttribute_mExceptionLineType.isValid () && mAttribute_mTypeMap.isValid () && mAttribute_mProcedureMap.isValid () && mAttribute_mFunctionMap.isValid () && mAttribute_mInitRoutineMap.isValid () && mAttribute_mExceptionSetupRoutinePriorityMap.isValid () && mAttribute_mExceptionLoopRoutinePriorityMap.isValid () && mAttribute_mRegisterMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mConstructorMap.isValid () && mAttribute_mModeMap.isValid () && mAttribute_mEqualOperatorMap.isValid () && mAttribute_mNonEqualOperatorMap.isValid () && mAttribute_mStrictInfOperatorMap.isValid () && mAttribute_mInfEqualOperatorMap.isValid () && mAttribute_mStrictSupOperatorMap.isValid () && mAttribute_mSupEqualOperatorMap.isValid () && mAttribute_mAndOperatorMap.isValid () && mAttribute_mOrOperatorMap.isValid () && mAttribute_mXorOperatorMap.isValid () && mAttribute_mBooleanXorOperatorMap.isValid () && mAttribute_mAddOperatorMap.isValid () && mAttribute_mAddNoOvfOperatorMap.isValid () && mAttribute_mSubOperatorMap.isValid () && mAttribute_mSubNoOvfOperatorMap.isValid () && mAttribute_mMulOperatorMap.isValid () && mAttribute_mMulNoOvfOperatorMap.isValid () && mAttribute_mDivOperatorMap.isValid () && mAttribute_mDivNoOvfOperatorMap.isValid () && mAttribute_mModOperatorMap.isValid () && mAttribute_mModNoOvfOperatorMap.isValid () && mAttribute_mLeftShiftOperatorMap.isValid () && mAttribute_mRightShiftOperatorMap.isValid () && mAttribute_mUnaryMinusOperatorMap.isValid () && mAttribute_mNotOperatorMap.isValid () && mAttribute_mUnsignedComplementOperatorMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mAttribute_mPointerSize.drop () ;
  mAttribute_mBooleanType.drop () ;
  mAttribute_mLiteralIntegerType.drop () ;
  mAttribute_mExceptionCodeType.drop () ;
  mAttribute_mExceptionLineType.drop () ;
  mAttribute_mTypeMap.drop () ;
  mAttribute_mProcedureMap.drop () ;
  mAttribute_mFunctionMap.drop () ;
  mAttribute_mInitRoutineMap.drop () ;
  mAttribute_mExceptionSetupRoutinePriorityMap.drop () ;
  mAttribute_mExceptionLoopRoutinePriorityMap.drop () ;
  mAttribute_mRegisterMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mConstructorMap.drop () ;
  mAttribute_mModeMap.drop () ;
  mAttribute_mEqualOperatorMap.drop () ;
  mAttribute_mNonEqualOperatorMap.drop () ;
  mAttribute_mStrictInfOperatorMap.drop () ;
  mAttribute_mInfEqualOperatorMap.drop () ;
  mAttribute_mStrictSupOperatorMap.drop () ;
  mAttribute_mSupEqualOperatorMap.drop () ;
  mAttribute_mAndOperatorMap.drop () ;
  mAttribute_mOrOperatorMap.drop () ;
  mAttribute_mXorOperatorMap.drop () ;
  mAttribute_mBooleanXorOperatorMap.drop () ;
  mAttribute_mAddOperatorMap.drop () ;
  mAttribute_mAddNoOvfOperatorMap.drop () ;
  mAttribute_mSubOperatorMap.drop () ;
  mAttribute_mSubNoOvfOperatorMap.drop () ;
  mAttribute_mMulOperatorMap.drop () ;
  mAttribute_mMulNoOvfOperatorMap.drop () ;
  mAttribute_mDivOperatorMap.drop () ;
  mAttribute_mDivNoOvfOperatorMap.drop () ;
  mAttribute_mModOperatorMap.drop () ;
  mAttribute_mModNoOvfOperatorMap.drop () ;
  mAttribute_mLeftShiftOperatorMap.drop () ;
  mAttribute_mRightShiftOperatorMap.drop () ;
  mAttribute_mUnaryMinusOperatorMap.drop () ;
  mAttribute_mNotOperatorMap.drop () ;
  mAttribute_mUnsignedComplementOperatorMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPointerSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBooleanType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLiteralIntegerType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionCodeType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLineType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstructorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStrictInfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInfEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStrictSupOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSupEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAndOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOrOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBooleanXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMulOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMulNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDivOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDivNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLeftShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRightShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnaryMinusOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNotOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnsignedComplementOperatorMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticContext::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPointerSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mBooleanType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBooleanType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mLiteralIntegerType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralIntegerType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mExceptionCodeType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionCodeType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mExceptionLineType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLineType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap GALGAS_semanticContext::getter_mProcedureMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_semanticContext::getter_mFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_semanticContext::getter_mInitRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticContext::getter_mExceptionSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticContext::getter_mExceptionLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap GALGAS_semanticContext::getter_mRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_semanticContext::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_semanticContext::getter_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_semanticContext::getter_mConstructorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_semanticContext::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mNonEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictInfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictSupOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictSupOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSupEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSupEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAndOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mBooleanXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBooleanXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnaryMinusOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnaryMinusOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mNotOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNotOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnsignedComplementOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnsignedComplementOperatorMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Getter '@valueIR string'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_string (const GALGAS_valueIR & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_valueIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valueIR::kNotBuilt:
    break ;
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_valueIR_literalInteger * extractPtr_1195 = (const cEnumAssociatedValues_valueIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_1195->mAssociatedValue0 ;
      result_outResult = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 31)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmLocalObject * extractPtr_1258 = (const cEnumAssociatedValues_valueIR_llvmLocalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1258->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("%").add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 32)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmStructureConstant:
    {
      const cEnumAssociatedValues_valueIR_llvmStructureConstant * extractPtr_1495 = (const cEnumAssociatedValues_valueIR_llvmStructureConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_inValues = extractPtr_1495->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("{") ;
      cEnumerator_operandIRList enumerator_1358 (extractedValue_inValues, kEnumeration_up) ;
      while (enumerator_1358.hasCurrentObject ()) {
        result_outResult.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1358.current_mOperand (HERE).mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)).add_operation (extensionGetter_string (enumerator_1358.current_mOperand (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)) ;
        if (enumerator_1358.hasNextObject ()) {
          result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 37)) ;
        }
        enumerator_1358.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 39)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_valueIR_literalString * extractPtr_1739 = (const cEnumAssociatedValues_valueIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_size = extractPtr_1739->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_index = extractPtr_1739->mAssociatedValue1 ;
      GALGAS_string var_sizeStr = extractedValue_size.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 41)) ;
      result_outResult = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 42)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 42)).add_operation (var_sizeStr, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 42)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 42)) ;
      result_outResult.plusAssign_operation(function_literalCharacterArrayName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 43)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 43)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Category Getter '@valueIR name'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_name (const GALGAS_valueIR & inObject,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_valueIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valueIR::kNotBuilt:
    break ;
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_valueIR_literalInteger * extractPtr_1995 = (const cEnumAssociatedValues_valueIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_1995->mAssociatedValue0 ;
      result_outResult = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 51)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmLocalObject * extractPtr_2052 = (const cEnumAssociatedValues_valueIR_llvmLocalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_2052->mAssociatedValue0 ;
      result_outResult = extractedValue_name ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmStructureConstant:
    {
      result_outResult = GALGAS_string ("{...}") ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_valueIR_literalString * extractPtr_2186 = (const cEnumAssociatedValues_valueIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_index = extractPtr_2186->mAssociatedValue1 ;
      result_outResult = function_literalStringName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 54)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Category Getter '@valueIR isStatic'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isStatic (const GALGAS_valueIR & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_valueIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valueIR::kNotBuilt:
    break ;
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmStructureConstant:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalString:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category Getter '@objectInMemoryIR name'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_name (const GALGAS_objectInMemoryIR & inObject,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_3550 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_3550->mAssociatedValue1 ;
      GALGAS_location location_1 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("@objectInMemoryIR name")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 87)) ;
      result_outName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_3650 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_3650->mAssociatedValue1 ;
      result_outName = GALGAS_string ("@").add_operation (function_mangledNameForGlobalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 89)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_3743 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_3743->mAssociatedValue1 ;
      result_outName = GALGAS_string ("%").add_operation (function_mangledNameForLocalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_3810 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_3810->mAssociatedValue1 ;
      result_outName = GALGAS_string ("%").add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 93)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_4078 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_4078->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_4078->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fielfType = extractPtr_4078->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_4078->mAssociatedValue3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 98)), GALGAS_string ("@objectInMemoryIR name")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 98)) ;
      result_outName.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_outName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category Getter '@objectInMemoryIR type'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy extensionGetter_type (const GALGAS_objectInMemoryIR & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result_outType ; // Returned variable
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_4358 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_4358->mAssociatedValue0 ;
      result_outType = extractedValue_type ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_4434 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_4434->mAssociatedValue0 ;
      result_outType = extractedValue_type ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_4504 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_4504->mAssociatedValue0 ;
      result_outType = extractedValue_type ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_4578 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_4578->mAssociatedValue0 ;
      result_outType = extractedValue_type ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_4846 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_4846->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_4846->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fielfType = extractPtr_4846->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_4846->mAssociatedValue3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 118)), GALGAS_string ("@objectInMemoryIR name")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 118)) ;
      result_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_outType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category Getter '@objectInMemoryIR address'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR extensionGetter_address (const GALGAS_objectInMemoryIR & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIR result_outOperand ; // Returned variable
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 127)), GALGAS_string ("@objectInMemoryIR address")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 127)) ;
      result_outOperand.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 129)), GALGAS_string ("@objectInMemoryIR address")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 129)) ;
      result_outOperand.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_5388 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_5388->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_5388->mAssociatedValue1 ;
      result_outOperand = GALGAS_operandIR::constructor_new (extractedValue_type, GALGAS_valueIR::constructor_llvmLocalObject (function_mangledNameForLocalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 131))  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 131))  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 131)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 133)), GALGAS_string ("@objectInMemoryIR address")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 133)) ;
      result_outOperand.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_5754 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_5754->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_5754->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fielfType = extractPtr_5754->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_5754->mAssociatedValue3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 138)), GALGAS_string ("@objectInMemoryIR address")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 138)) ;
      result_outOperand.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_outOperand ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mAttribute_mStaticStringMap (),
mAttribute_mRegisterMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mProcedureMapIR (),
mAttribute_mFunctionMapIR (),
mAttribute_mRequiredProcedureSet (),
mAttribute_mBootList (),
mAttribute_mInitList (),
mAttribute_mExceptionSetupInstructionListIR (),
mAttribute_mExceptionLoopInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_staticStringMap & inOperand0,
                                                              const GALGAS_registerMapIR & inOperand1,
                                                              const GALGAS_globalVariableMapIR & inOperand2,
                                                              const GALGAS_globalConstantMapIR & inOperand3,
                                                              const GALGAS_procedureMapIR & inOperand4,
                                                              const GALGAS_functionMapIR & inOperand5,
                                                              const GALGAS_stringset & inOperand6,
                                                              const GALGAS_bootListIR & inOperand7,
                                                              const GALGAS_initListIR & inOperand8,
                                                              const GALGAS_instructionListIR & inOperand9,
                                                              const GALGAS_instructionListIR & inOperand10) :
mAttribute_mStaticStringMap (inOperand0),
mAttribute_mRegisterMap (inOperand1),
mAttribute_mGlobalVariableMap (inOperand2),
mAttribute_mGlobalConstantMap (inOperand3),
mAttribute_mProcedureMapIR (inOperand4),
mAttribute_mFunctionMapIR (inOperand5),
mAttribute_mRequiredProcedureSet (inOperand6),
mAttribute_mBootList (inOperand7),
mAttribute_mInitList (inOperand8),
mAttribute_mExceptionSetupInstructionListIR (inOperand9),
mAttribute_mExceptionLoopInstructionListIR (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_staticStringMap::constructor_emptyMap (HERE),
                                        GALGAS_registerMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalVariableMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalConstantMapIR::constructor_emptyMap (HERE),
                                        GALGAS_procedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_functionMapIR::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_bootListIR::constructor_emptyList (HERE),
                                        GALGAS_initListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_staticStringMap & inOperand0,
                                                                              const GALGAS_registerMapIR & inOperand1,
                                                                              const GALGAS_globalVariableMapIR & inOperand2,
                                                                              const GALGAS_globalConstantMapIR & inOperand3,
                                                                              const GALGAS_procedureMapIR & inOperand4,
                                                                              const GALGAS_functionMapIR & inOperand5,
                                                                              const GALGAS_stringset & inOperand6,
                                                                              const GALGAS_bootListIR & inOperand7,
                                                                              const GALGAS_initListIR & inOperand8,
                                                                              const GALGAS_instructionListIR & inOperand9,
                                                                              const GALGAS_instructionListIR & inOperand10 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStaticStringMap.objectCompare (inOperand.mAttribute_mStaticStringMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterMap.objectCompare (inOperand.mAttribute_mRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureMapIR.objectCompare (inOperand.mAttribute_mProcedureMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMapIR.objectCompare (inOperand.mAttribute_mFunctionMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcedureSet.objectCompare (inOperand.mAttribute_mRequiredProcedureSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBootList.objectCompare (inOperand.mAttribute_mBootList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitList.objectCompare (inOperand.mAttribute_mInitList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionSetupInstructionListIR.objectCompare (inOperand.mAttribute_mExceptionSetupInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLoopInstructionListIR.objectCompare (inOperand.mAttribute_mExceptionLoopInstructionListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mAttribute_mStaticStringMap.isValid () && mAttribute_mRegisterMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mProcedureMapIR.isValid () && mAttribute_mFunctionMapIR.isValid () && mAttribute_mRequiredProcedureSet.isValid () && mAttribute_mBootList.isValid () && mAttribute_mInitList.isValid () && mAttribute_mExceptionSetupInstructionListIR.isValid () && mAttribute_mExceptionLoopInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::drop (void) {
  mAttribute_mStaticStringMap.drop () ;
  mAttribute_mRegisterMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mProcedureMapIR.drop () ;
  mAttribute_mFunctionMapIR.drop () ;
  mAttribute_mRequiredProcedureSet.drop () ;
  mAttribute_mBootList.drop () ;
  mAttribute_mInitList.drop () ;
  mAttribute_mExceptionSetupInstructionListIR.drop () ;
  mAttribute_mExceptionLoopInstructionListIR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStaticStringMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredProcedureSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBootList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionSetupInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLoopInstructionListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap GALGAS_intermediateCodeStruct::getter_mStaticStringMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStaticStringMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR GALGAS_intermediateCodeStruct::getter_mRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_intermediateCodeStruct::getter_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_intermediateCodeStruct::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR GALGAS_intermediateCodeStruct::getter_mProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR GALGAS_intermediateCodeStruct::getter_mFunctionMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_intermediateCodeStruct::getter_mRequiredProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcedureSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_intermediateCodeStruct::getter_mBootList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_intermediateCodeStruct::getter_mInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::getter_mExceptionSetupInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionSetupInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::getter_mExceptionLoopInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLoopInstructionListIR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @intermediateCodeStruct type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  const GALGAS_intermediateCodeStruct * p = (const GALGAS_intermediateCodeStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_intermediateCodeStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("intermediateCodeStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@binaryOperationIR enterCodeForOverflowOperation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_binaryOperationIR_enterCodeForOverflowOperation> gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                        categoryMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) {
  gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                       const GALGAS_string constin_inOperation,
                                                       const GALGAS_uint constin_inCode,
                                                       GALGAS_string & io_ioLLVMcode,
                                                       const GALGAS_generationContext constin_inGenerationContext,
                                                       GALGAS_generationAdds & io_ioGenerationAdds,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_binaryOperationIR_enterCodeForOverflowOperation f = NULL ;
    if (classIndex < gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
      f = gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
           f = gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                                            const GALGAS_string constinArgument_inOperation,
                                                                            const GALGAS_uint constinArgument_inCode,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).getter_lastPathComponent (SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-binary-operation.galgas", 80)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 79)) ;
  }
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mOperandType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 83)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (GALGAS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  GALGAS_string var_labelName = extensionGetter_name (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".noovf\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_exception.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (constinArgument_inCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName.add_operation (GALGAS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)) ;
  ioArgument_ioGenerationAdds.mAttribute_mIntrinsicsDeclarationSet.addAssign_operation (GALGAS_string ("declare {").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)).add_operation (GALGAS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)).add_operation (GALGAS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  enterCategoryMethod_enterCodeForOverflowOperation (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                     categoryMethod_binaryOperationIR_enterCodeForOverflowOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForOverflowOperation (defineCategoryMethod_binaryOperationIR_enterCodeForOverflowOperation,
                                                                            freeCategoryMethod_binaryOperationIR_enterCodeForOverflowOperation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorException'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException> gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterCodeForDivisionWithZeroDivisorException (const int32_t inClassIndex,
                                                                       categoryMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException inMethod) {
  gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterCodeForDivisionWithZeroDivisorException (const cPtr_binaryOperationIR * inObject,
                                                                      const GALGAS_string constin_inOperation,
                                                                      const GALGAS_uint constin_inCode,
                                                                      GALGAS_string & io_ioLLVMcode,
                                                                      const GALGAS_generationContext constin_inGenerationContext,
                                                                      GALGAS_generationAdds & io_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException f = NULL ;
    if (classIndex < gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.count ()) {
      f = gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.count ()) {
           f = gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (const cPtr_binaryOperationIR * inObject,
                                                                                           const GALGAS_string constinArgument_inOperation,
                                                                                           const GALGAS_uint constinArgument_inCode,
                                                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).getter_lastPathComponent (SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-binary-operation.galgas", 110)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 109)) ;
  }
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mOperandType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (".isZero = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)) ;
  GALGAS_string var_labelName = extensionGetter_name (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".isZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".divideByZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".ok\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName.add_operation (GALGAS_string (".divideByZero:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_exception.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (constinArgument_inCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName.add_operation (GALGAS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (void) {
  enterCategoryMethod_enterCodeForDivisionWithZeroDivisorException (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                                    categoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (void) {
  gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (defineCategoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException,
                                                                                           freeCategoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@objectInMemoryIR loadFromMemory'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_loadFromMemory (const GALGAS_objectInMemoryIR inObject,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GALGAS_operandIR & outArgument_outResultingValue,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultingValue.drop () ; // Release 'out' argument
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_718 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_718->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_718->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_718->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 10)) ;
      }
      {
      categoryModifier_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name.mAttribute_string, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 12)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_1098 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1098->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1098->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isVolatile = extractPtr_1098->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 18)) ;
      }
      {
      categoryModifier_appendLoadGlobalVariable (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name, extractedValue_isVolatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 20)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_1429 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1429->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1429->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 26)) ;
      }
      {
      categoryModifier_appendLoadLocalVariable (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 28)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_1787 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1787->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1787->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 33)) ;
      }
      {
      categoryModifier_appendLoadGlobalVariable (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 35)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_2087 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_2087->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_2087->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fieldType = extractPtr_2087->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_2087->mAssociatedValue3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 44)), GALGAS_string ("@objectInMemoryIR loadFromMemory:fieldAccess")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 44)) ;
      outArgument_outResultingValue.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@objectInMemoryIR storeInMemory'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_storeInMemory (const GALGAS_objectInMemoryIR inObject,
                                   GALGAS_operandIR inArgument_inValue,
                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_2564 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2564->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_registerName = extractPtr_2564->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_2564->mAssociatedValue2 ;
      {
      categoryModifier_appendStoreVolatileRegister (ioArgument_ioInstructionGenerationList, extractedValue_registerName.mAttribute_string, extractedValue_type, extractedValue_address, inArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 56)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_2751 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2751->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_2751->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isVolatile = extractPtr_2751->mAssociatedValue2 ;
      {
      categoryModifier_appendStoreGlobalVariable (ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_type, inArgument_inValue, extractedValue_isVolatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 58)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_2895 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2895->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_2895->mAssociatedValue1 ;
      {
      categoryModifier_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_type, inArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 60)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 62)), GALGAS_string ("<<@objectInMemoryIR storeInMemory globalConstant>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 62)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_3212 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_3212->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_3212->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fielfType = extractPtr_3212->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_3212->mAssociatedValue3 ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@objectInMemoryIR enterAccessibleEntities'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_objectInMemoryIR inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_1089 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1089->mAssociatedValue1 ;
      ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("code-optimisation.galgas", 19)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_1185 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1185->mAssociatedValue1 ;
      ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_name  COMMA_SOURCE_FILE ("code-optimisation.galgas", 21)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_1229 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1229->mAssociatedValue1 ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_1323 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1323->mAssociatedValue1 ;
      ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_name  COMMA_SOURCE_FILE ("code-optimisation.galgas", 24)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_1535 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_1535->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_1535->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fielfType = extractPtr_1535->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_1535->mAssociatedValue3 ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@procedureMapIR-element enterAccessibleEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_procedureMapIR_2D_element inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 47)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@functionMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_functionMapIR_2D_element inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 53)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category Getter '@objectInMemoryIR mangledName'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mangledName (const GALGAS_objectInMemoryIR & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_775 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_775->mAssociatedValue1 ;
      result_outResult = function_mangledNameForRegister (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 10)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_871 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_871->mAssociatedValue1 ;
      result_outResult = function_mangledNameForGlobalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 12)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_960 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_960->mAssociatedValue1 ;
      result_outResult = function_mangledNameForLocalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 14)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_1054 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1054->mAssociatedValue1 ;
      result_outResult = function_mangledNameForGlobalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 16)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_1330 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_1330->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_1330->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fielfType = extractPtr_1330->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_1330->mAssociatedValue3 ;
      result_outResult = GALGAS_string ("<<@objectInMemoryIR mangledName:fieldAccess>>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element::GALGAS_structureFieldListAST_2D_element (void) :
mAttribute_mFieldName (),
mAttribute_mFieldTypeName (),
mAttribute_mInitExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element::~ GALGAS_structureFieldListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element::GALGAS_structureFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_expressionAST & inOperand2) :
mAttribute_mFieldName (inOperand0),
mAttribute_mFieldTypeName (inOperand1),
mAttribute_mInitExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element GALGAS_structureFieldListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_expressionAST & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structureFieldListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_structureFieldListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structureFieldListAST_2D_element::objectCompare (const GALGAS_structureFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFieldName.objectCompare (inOperand.mAttribute_mFieldName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldTypeName.objectCompare (inOperand.mAttribute_mFieldTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitExpression.objectCompare (inOperand.mAttribute_mInitExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structureFieldListAST_2D_element::isValid (void) const {
  return mAttribute_mFieldName.isValid () && mAttribute_mFieldTypeName.isValid () && mAttribute_mInitExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST_2D_element::drop (void) {
  mAttribute_mFieldName.drop () ;
  mAttribute_mFieldTypeName.drop () ;
  mAttribute_mInitExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @structureFieldListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFieldName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST_2D_element::getter_mFieldTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_structureFieldListAST_2D_element::getter_mInitExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @structureFieldListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureFieldListAST_2D_element ("structureFieldListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structureFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureFieldListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structureFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element GALGAS_structureFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureFieldListAST_2D_element result ;
  const GALGAS_structureFieldListAST_2D_element * p = (const GALGAS_structureFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mAttribute_mPropertyName (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_mPropertyName (inOperand0),
mAttribute_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList_2D_element (GALGAS_string::constructor_default (HERE),
                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyList_2D_element::objectCompare (const GALGAS_propertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyName.objectCompare (inOperand.mAttribute_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mAttribute_mPropertyName.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::drop (void) {
  mAttribute_mPropertyName.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @propertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_propertyList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @propertyList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyList_2D_element ("propertyList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  const GALGAS_propertyList_2D_element * p = (const GALGAS_propertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTypeProxy (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                              const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mTypeProxy (inOperand1),
mAttribute_mIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                        GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_uint & inOperand2 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_propertyMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyMap_2D_element::objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeProxy.objectCompare (inOperand.mAttribute_mTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTypeProxy.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTypeProxy.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyMap_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_propertyMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @propertyMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap_2D_element ("propertyMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  const GALGAS_propertyMap_2D_element * p = (const GALGAS_propertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element::GALGAS_allowedProcList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mProcName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element::~ GALGAS_allowedProcList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element::GALGAS_allowedProcList_2D_element (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mProcName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element GALGAS_allowedProcList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedProcList_2D_element (GALGAS_bool::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element GALGAS_allowedProcList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedProcList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedProcList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedProcList_2D_element::objectCompare (const GALGAS_allowedProcList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcName.objectCompare (inOperand.mAttribute_mProcName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedProcList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mProcName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedProcList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mProcName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedProcList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @allowedProcList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedProcList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedProcList_2D_element::getter_mProcName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedProcList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedProcList_2D_element ("allowedProcList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedProcList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedProcList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedProcList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedProcList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element GALGAS_allowedProcList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedProcList_2D_element result ;
  const GALGAS_allowedProcList_2D_element * p = (const GALGAS_allowedProcList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedProcList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedProcList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element::GALGAS_allowedInitList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mInitPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element::~ GALGAS_allowedInitList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element::GALGAS_allowedInitList_2D_element (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_lbigint & inOperand1) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mInitPriority (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element GALGAS_allowedInitList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedInitList_2D_element (GALGAS_bool::constructor_default (HERE),
                                            GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element GALGAS_allowedInitList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_lbigint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedInitList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedInitList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedInitList_2D_element::objectCompare (const GALGAS_allowedInitList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitPriority.objectCompare (inOperand.mAttribute_mInitPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedInitList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mInitPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mInitPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @allowedInitList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedInitList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedInitList_2D_element::getter_mInitPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedInitList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedInitList_2D_element ("allowedInitList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedInitList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedInitList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedInitList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedInitList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element GALGAS_allowedInitList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedInitList_2D_element result ;
  const GALGAS_allowedInitList_2D_element * p = (const GALGAS_allowedInitList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedInitList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedInitList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element::GALGAS_allowedExceptionList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mExceptionName (),
mAttribute_mExceptionPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element::~ GALGAS_allowedExceptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element::GALGAS_allowedExceptionList_2D_element (const GALGAS_bool & inOperand0,
                                                                                const GALGAS_lstring & inOperand1,
                                                                                const GALGAS_lbigint & inOperand2) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mExceptionName (inOperand1),
mAttribute_mExceptionPriority (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element GALGAS_allowedExceptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedExceptionList_2D_element (GALGAS_bool::constructor_default (HERE),
                                                 GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element GALGAS_allowedExceptionList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lbigint & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedExceptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_allowedExceptionList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedExceptionList_2D_element::objectCompare (const GALGAS_allowedExceptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionName.objectCompare (inOperand.mAttribute_mExceptionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionPriority.objectCompare (inOperand.mAttribute_mExceptionPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedExceptionList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mExceptionName.isValid () && mAttribute_mExceptionPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedExceptionList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mExceptionName.drop () ;
  mAttribute_mExceptionPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedExceptionList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @allowedExceptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedExceptionList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedExceptionList_2D_element::getter_mExceptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedExceptionList_2D_element::getter_mExceptionPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @allowedExceptionList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedExceptionList_2D_element ("allowedExceptionList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedExceptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedExceptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedExceptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedExceptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element GALGAS_allowedExceptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_allowedExceptionList_2D_element result ;
  const GALGAS_allowedExceptionList_2D_element * p = (const GALGAS_allowedExceptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedExceptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedExceptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element::GALGAS_allowedRoutineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHasWriteAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element::~ GALGAS_allowedRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element::GALGAS_allowedRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_bool & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mHasWriteAccess (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element GALGAS_allowedRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element GALGAS_allowedRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bool & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedRoutineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedRoutineMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedRoutineMap_2D_element::objectCompare (const GALGAS_allowedRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHasWriteAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHasWriteAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @allowedRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedRoutineMap_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @allowedRoutineMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedRoutineMap_2D_element ("allowedRoutineMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element GALGAS_allowedRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_allowedRoutineMap_2D_element result ;
  const GALGAS_allowedRoutineMap_2D_element * p = (const GALGAS_allowedRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionMap_2D_element::GALGAS_allowedFunctionMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionMap_2D_element::~ GALGAS_allowedFunctionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionMap_2D_element::GALGAS_allowedFunctionMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionMap_2D_element GALGAS_allowedFunctionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedFunctionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionMap_2D_element GALGAS_allowedFunctionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedFunctionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_allowedFunctionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedFunctionMap_2D_element::objectCompare (const GALGAS_allowedFunctionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedFunctionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedFunctionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedFunctionMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @allowedFunctionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedFunctionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @allowedFunctionMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedFunctionMap_2D_element ("allowedFunctionMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedFunctionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedFunctionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedFunctionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedFunctionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionMap_2D_element GALGAS_allowedFunctionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allowedFunctionMap_2D_element result ;
  const GALGAS_allowedFunctionMap_2D_element * p = (const GALGAS_allowedFunctionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedFunctionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedFunctionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::~ GALGAS_bootRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element GALGAS_bootRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element GALGAS_bootRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_bootRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bootRoutinePriorityMap_2D_element::objectCompare (const GALGAS_bootRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootRoutinePriorityMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @bootRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bootRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @bootRoutinePriorityMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootRoutinePriorityMap_2D_element ("bootRoutinePriorityMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element GALGAS_bootRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap_2D_element result ;
  const GALGAS_bootRoutinePriorityMap_2D_element * p = (const GALGAS_bootRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList_2D_element::GALGAS_initRequiredByProcList_2D_element (void) :
mAttribute_mProcName (),
mAttribute_mProcFormalArgumentList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList_2D_element::~ GALGAS_initRequiredByProcList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList_2D_element::GALGAS_initRequiredByProcList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_procFormalArgumentList & inOperand1) :
mAttribute_mProcName (inOperand0),
mAttribute_mProcFormalArgumentList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList_2D_element GALGAS_initRequiredByProcList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initRequiredByProcList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_procFormalArgumentList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList_2D_element GALGAS_initRequiredByProcList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_procFormalArgumentList & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initRequiredByProcList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_initRequiredByProcList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initRequiredByProcList_2D_element::objectCompare (const GALGAS_initRequiredByProcList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mProcName.objectCompare (inOperand.mAttribute_mProcName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcFormalArgumentList.objectCompare (inOperand.mAttribute_mProcFormalArgumentList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRequiredByProcList_2D_element::isValid (void) const {
  return mAttribute_mProcName.isValid () && mAttribute_mProcFormalArgumentList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList_2D_element::drop (void) {
  mAttribute_mProcName.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @initRequiredByProcList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mProcName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRequiredByProcList_2D_element::getter_mProcName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_initRequiredByProcList_2D_element::getter_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcFormalArgumentList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @initRequiredByProcList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRequiredByProcList_2D_element ("initRequiredByProcList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRequiredByProcList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRequiredByProcList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRequiredByProcList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRequiredByProcList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList_2D_element GALGAS_initRequiredByProcList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_initRequiredByProcList_2D_element result ;
  const GALGAS_initRequiredByProcList_2D_element * p = (const GALGAS_initRequiredByProcList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRequiredByProcList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRequiredByProcList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::GALGAS_initRoutineMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::~ GALGAS_initRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::GALGAS_initRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element GALGAS_initRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element GALGAS_initRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initRoutineMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_initRoutineMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initRoutineMap_2D_element::objectCompare (const GALGAS_initRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @initRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @initRoutineMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutineMap_2D_element ("initRoutineMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element GALGAS_initRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_initRoutineMap_2D_element result ;
  const GALGAS_initRoutineMap_2D_element * p = (const GALGAS_initRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::GALGAS_initRoutinePriorityMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::~ GALGAS_initRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::GALGAS_initRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element GALGAS_initRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element GALGAS_initRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_initRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initRoutinePriorityMap_2D_element::objectCompare (const GALGAS_initRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutinePriorityMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @initRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @initRoutinePriorityMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutinePriorityMap_2D_element ("initRoutinePriorityMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element GALGAS_initRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap_2D_element result ;
  const GALGAS_initRoutinePriorityMap_2D_element * p = (const GALGAS_initRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element::GALGAS_exceptionTypesAST_2D_element (void) :
mAttribute_mExceptionCodeTypeName (),
mAttribute_mExceptionLineTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element::~ GALGAS_exceptionTypesAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element::GALGAS_exceptionTypesAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mAttribute_mExceptionCodeTypeName (inOperand0),
mAttribute_mExceptionLineTypeName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element GALGAS_exceptionTypesAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_exceptionTypesAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element GALGAS_exceptionTypesAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_exceptionTypesAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_exceptionTypesAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_exceptionTypesAST_2D_element::objectCompare (const GALGAS_exceptionTypesAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionCodeTypeName.objectCompare (inOperand.mAttribute_mExceptionCodeTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLineTypeName.objectCompare (inOperand.mAttribute_mExceptionLineTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_exceptionTypesAST_2D_element::isValid (void) const {
  return mAttribute_mExceptionCodeTypeName.isValid () && mAttribute_mExceptionLineTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionTypesAST_2D_element::drop (void) {
  mAttribute_mExceptionCodeTypeName.drop () ;
  mAttribute_mExceptionLineTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionTypesAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @exceptionTypesAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExceptionCodeTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLineTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_exceptionTypesAST_2D_element::getter_mExceptionCodeTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionCodeTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_exceptionTypesAST_2D_element::getter_mExceptionLineTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLineTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @exceptionTypesAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_exceptionTypesAST_2D_element ("exceptionTypesAST-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_exceptionTypesAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exceptionTypesAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_exceptionTypesAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exceptionTypesAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element GALGAS_exceptionTypesAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_exceptionTypesAST_2D_element result ;
  const GALGAS_exceptionTypesAST_2D_element * p = (const GALGAS_exceptionTypesAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_exceptionTypesAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exceptionTypesAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element::GALGAS_exceptionRoutinePriorityMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element::~ GALGAS_exceptionRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element::GALGAS_exceptionRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element GALGAS_exceptionRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_exceptionRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element GALGAS_exceptionRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_exceptionRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_exceptionRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_exceptionRoutinePriorityMap_2D_element::objectCompare (const GALGAS_exceptionRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_exceptionRoutinePriorityMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionRoutinePriorityMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @exceptionRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_exceptionRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @exceptionRoutinePriorityMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_exceptionRoutinePriorityMap_2D_element ("exceptionRoutinePriorityMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_exceptionRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exceptionRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_exceptionRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exceptionRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element GALGAS_exceptionRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_exceptionRoutinePriorityMap_2D_element result ;
  const GALGAS_exceptionRoutinePriorityMap_2D_element * p = (const GALGAS_exceptionRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_exceptionRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exceptionRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element::GALGAS_funcFormalArgumentList_2D_element (void) :
mAttribute_mSelector (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element::~ GALGAS_funcFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element::GALGAS_funcFormalArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mAttribute_mSelector (inOperand0),
mAttribute_mFormalArgumentTypeName (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element GALGAS_funcFormalArgumentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_funcFormalArgumentList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element GALGAS_funcFormalArgumentList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_funcFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_funcFormalArgumentList_2D_element::objectCompare (const GALGAS_funcFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_funcFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mSelector.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList_2D_element::drop (void) {
  mAttribute_mSelector.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @funcFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList_2D_element::getter_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @funcFormalArgumentList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcFormalArgumentList_2D_element ("funcFormalArgumentList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element GALGAS_funcFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentList_2D_element result ;
  const GALGAS_funcFormalArgumentList_2D_element * p = (const GALGAS_funcFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element::GALGAS_funcSignature_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mArgumentType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element::~ GALGAS_funcSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element::GALGAS_funcSignature_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mArgumentType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element GALGAS_funcSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_funcSignature_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element GALGAS_funcSignature_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_funcSignature_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_funcSignature_2D_element::objectCompare (const GALGAS_funcSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArgumentType.objectCompare (inOperand.mAttribute_mArgumentType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_funcSignature_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mArgumentType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mArgumentType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @funcSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArgumentType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcSignature_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_funcSignature_2D_element::getter_mArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @funcSignature-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcSignature_2D_element ("funcSignature-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element GALGAS_funcSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_funcSignature_2D_element result ;
  const GALGAS_funcSignature_2D_element * p = (const GALGAS_funcSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFunctionModeMap (),
mAttribute_mSignature (),
mAttribute_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::~ GALGAS_functionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_modeMap & inOperand1,
                                                              const GALGAS_funcSignature & inOperand2,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mFunctionModeMap (inOperand1),
mAttribute_mSignature (inOperand2),
mAttribute_mResultType (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_modeMap::constructor_emptyMap (HERE),
                                        GALGAS_funcSignature::constructor_emptyList (HERE),
                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_modeMap & inOperand1,
                                                                              const GALGAS_funcSignature & inOperand2,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionMap_2D_element::objectCompare (const GALGAS_functionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionModeMap.objectCompare (inOperand.mAttribute_mFunctionModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFunctionModeMap.isValid () && mAttribute_mSignature.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFunctionModeMap.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @functionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_functionMap_2D_element::getter_mFunctionModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_functionMap_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @functionMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap_2D_element ("functionMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  const GALGAS_functionMap_2D_element * p = (const GALGAS_functionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element::GALGAS_funcFormalArgumentListForGeneration_2D_element (void) :
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element::~ GALGAS_funcFormalArgumentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element::GALGAS_funcFormalArgumentListForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                              const GALGAS_string & inOperand1) :
mAttribute_mFormalArgumentType (inOperand0),
mAttribute_mFormalArgumentName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element GALGAS_funcFormalArgumentListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_funcFormalArgumentListForGeneration_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element GALGAS_funcFormalArgumentListForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_funcFormalArgumentListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_funcFormalArgumentListForGeneration_2D_element::objectCompare (const GALGAS_funcFormalArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_funcFormalArgumentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @funcFormalArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_funcFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_funcFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @funcFormalArgumentListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcFormalArgumentListForGeneration_2D_element ("funcFormalArgumentListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcFormalArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcFormalArgumentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcFormalArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcFormalArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element GALGAS_funcFormalArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentListForGeneration_2D_element result ;
  const GALGAS_funcFormalArgumentListForGeneration_2D_element * p = (const GALGAS_funcFormalArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcFormalArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcFormalArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::GALGAS_procFormalArgumentList_2D_element (void) :
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mSelector (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::~ GALGAS_procFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::GALGAS_procFormalArgumentList_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3) :
mAttribute_mFormalArgumentPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mFormalArgumentTypeName (inOperand2),
mAttribute_mFormalArgumentName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element GALGAS_procFormalArgumentList_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_procFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentList_2D_element::objectCompare (const GALGAS_procFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @procFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentList_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::getter_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @procFormalArgumentList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentList_2D_element ("procFormalArgumentList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element GALGAS_procFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList_2D_element result ;
  const GALGAS_procFormalArgumentList_2D_element * p = (const GALGAS_procFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::~ GALGAS_labelMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_labelMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_labelMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_labelMap_2D_element::objectCompare (const GALGAS_labelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_labelMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @labelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_labelMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @labelMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_labelMap_2D_element ("labelMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_labelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_labelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  const GALGAS_labelMap_2D_element * p = (const GALGAS_labelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_labelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::GALGAS_procedureSignature_2D_element (void) :
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mSelector (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::~ GALGAS_procedureSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::GALGAS_procedureSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mAttribute_mFormalArgumentPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element GALGAS_procedureSignature_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procedureSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureSignature_2D_element::objectCompare (const GALGAS_procedureSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureSignature_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @procedureSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procedureSignature_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procedureSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procedureSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procedureSignature-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureSignature_2D_element ("procedureSignature-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element GALGAS_procedureSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procedureSignature_2D_element result ;
  const GALGAS_procedureSignature_2D_element * p = (const GALGAS_procedureSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element::GALGAS_procedureMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mMutating (),
mAttribute_mProcedureModeMap (),
mAttribute_mSignature (),
mAttribute_mWeakProcedure () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element::~ GALGAS_procedureMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element::GALGAS_procedureMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_bool & inOperand1,
                                                                const GALGAS_modeMap & inOperand2,
                                                                const GALGAS_procedureSignature & inOperand3,
                                                                const GALGAS_bool & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mMutating (inOperand1),
mAttribute_mProcedureModeMap (inOperand2),
mAttribute_mSignature (inOperand3),
mAttribute_mWeakProcedure (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element GALGAS_procedureMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_procedureMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_bool::constructor_default (HERE),
                                         GALGAS_modeMap::constructor_emptyMap (HERE),
                                         GALGAS_procedureSignature::constructor_emptyList (HERE),
                                         GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element GALGAS_procedureMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_bool & inOperand1,
                                                                                const GALGAS_modeMap & inOperand2,
                                                                                const GALGAS_procedureSignature & inOperand3,
                                                                                const GALGAS_bool & inOperand4 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_procedureMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureMap_2D_element::objectCompare (const GALGAS_procedureMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMutating.objectCompare (inOperand.mAttribute_mMutating) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureModeMap.objectCompare (inOperand.mAttribute_mProcedureModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWeakProcedure.objectCompare (inOperand.mAttribute_mWeakProcedure) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mMutating.isValid () && mAttribute_mProcedureModeMap.isValid () && mAttribute_mSignature.isValid () && mAttribute_mWeakProcedure.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mMutating.drop () ;
  mAttribute_mProcedureModeMap.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mWeakProcedure.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @procedureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMutating.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWeakProcedure.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMap_2D_element::getter_mMutating (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMutating ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_procedureMap_2D_element::getter_mProcedureModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureMap_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMap_2D_element::getter_mWeakProcedure (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWeakProcedure ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @procedureMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureMap_2D_element ("procedureMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element GALGAS_procedureMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_procedureMap_2D_element result ;
  const GALGAS_procedureMap_2D_element * p = (const GALGAS_procedureMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::GALGAS_procFormalArgumentListForGeneration_2D_element (void) :
mAttribute_mFormalArgumentKind (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::~ GALGAS_procFormalArgumentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::GALGAS_procFormalArgumentListForGeneration_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                              const GALGAS_string & inOperand2) :
mAttribute_mFormalArgumentKind (inOperand0),
mAttribute_mFormalArgumentType (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element GALGAS_procFormalArgumentListForGeneration_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procFormalArgumentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentListForGeneration_2D_element::objectCompare (const GALGAS_procFormalArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentKind.objectCompare (inOperand.mAttribute_mFormalArgumentKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procFormalArgumentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentKind.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalArgumentKind.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @procFormalArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @procFormalArgumentListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration_2D_element ("procFormalArgumentListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element GALGAS_procFormalArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration_2D_element result ;
  const GALGAS_procFormalArgumentListForGeneration_2D_element * p = (const GALGAS_procFormalArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (void) :
mAttribute_mMutating (),
mAttribute_mRequiredProcedureName (),
mAttribute_mProcedureModeList (),
mAttribute_mProcFormalArgumentList (),
mAttribute_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::~ GALGAS_requiredProcedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstringlist & inOperand2,
                                                                                                              const GALGAS_procFormalArgumentList & inOperand3,
                                                                                                              const GALGAS_location & inOperand4) :
mAttribute_mMutating (inOperand0),
mAttribute_mRequiredProcedureName (inOperand1),
mAttribute_mProcedureModeList (inOperand2),
mAttribute_mProcFormalArgumentList (inOperand3),
mAttribute_mEndOfProcLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredProcedureDeclarationListAST_2D_element (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_lstringlist & inOperand2,
                                                                                                                              const GALGAS_procFormalArgumentList & inOperand3,
                                                                                                                              const GALGAS_location & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_requiredProcedureDeclarationListAST_2D_element::objectCompare (const GALGAS_requiredProcedureDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMutating.objectCompare (inOperand.mAttribute_mMutating) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcedureName.objectCompare (inOperand.mAttribute_mRequiredProcedureName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureModeList.objectCompare (inOperand.mAttribute_mProcedureModeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcFormalArgumentList.objectCompare (inOperand.mAttribute_mProcFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfProcLocation.objectCompare (inOperand.mAttribute_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_requiredProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mMutating.isValid () && mAttribute_mRequiredProcedureName.isValid () && mAttribute_mProcedureModeList.isValid () && mAttribute_mProcFormalArgumentList.isValid () && mAttribute_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::drop (void) {
  mAttribute_mMutating.drop () ;
  mAttribute_mRequiredProcedureName.drop () ;
  mAttribute_mProcedureModeList.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
  mAttribute_mEndOfProcLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @requiredProcedureDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMutating.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredProcedureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureModeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mMutating (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMutating ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mRequiredProcedureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcedureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mProcedureModeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureModeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfProcLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @requiredProcedureDeclarationListAST-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ("requiredProcedureDeclarationListAST-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_requiredProcedureDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_requiredProcedureDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredProcedureDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  const GALGAS_requiredProcedureDeclarationListAST_2D_element * p = (const GALGAS_requiredProcedureDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_requiredProcedureDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredProcedureDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList_2D_element::GALGAS_registerDeclarationList_2D_element (void) :
mAttribute_mRegisterName (),
mAttribute_mAttributeList (),
mAttribute_mRegisterAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList_2D_element::~ GALGAS_registerDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList_2D_element::GALGAS_registerDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstringlist & inOperand1,
                                                                                      const GALGAS_lbigint & inOperand2) :
mAttribute_mRegisterName (inOperand0),
mAttribute_mAttributeList (inOperand1),
mAttribute_mRegisterAddress (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList_2D_element GALGAS_registerDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                                    GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList_2D_element GALGAS_registerDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstringlist & inOperand1,
                                                                                                      const GALGAS_lbigint & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerDeclarationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerDeclarationList_2D_element::objectCompare (const GALGAS_registerDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterName.objectCompare (inOperand.mAttribute_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeList.objectCompare (inOperand.mAttribute_mAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mRegisterName.isValid () && mAttribute_mAttributeList.isValid () && mAttribute_mRegisterAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList_2D_element::drop (void) {
  mAttribute_mRegisterName.drop () ;
  mAttribute_mAttributeList.drop () ;
  mAttribute_mRegisterAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @registerDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerDeclarationList_2D_element::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_registerDeclarationList_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_registerDeclarationList_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @registerDeclarationList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerDeclarationList_2D_element ("registerDeclarationList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList_2D_element GALGAS_registerDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerDeclarationList_2D_element result ;
  const GALGAS_registerDeclarationList_2D_element * p = (const GALGAS_registerDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList_2D_element::GALGAS_registerBitSliceList_2D_element (void) :
mAttribute_mRegisterBitSlice () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList_2D_element::~ GALGAS_registerBitSliceList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList_2D_element::GALGAS_registerBitSliceList_2D_element (const GALGAS_registerBitSlice & inOperand0) :
mAttribute_mRegisterBitSlice (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList_2D_element GALGAS_registerBitSliceList_2D_element::constructor_new (const GALGAS_registerBitSlice & inOperand0 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerBitSliceList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_registerBitSliceList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerBitSliceList_2D_element::objectCompare (const GALGAS_registerBitSliceList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterBitSlice.objectCompare (inOperand.mAttribute_mRegisterBitSlice) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerBitSliceList_2D_element::isValid (void) const {
  return mAttribute_mRegisterBitSlice.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList_2D_element::drop (void) {
  mAttribute_mRegisterBitSlice.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @registerBitSliceList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRegisterBitSlice.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSlice GALGAS_registerBitSliceList_2D_element::getter_mRegisterBitSlice (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterBitSlice ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @registerBitSliceList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerBitSliceList_2D_element ("registerBitSliceList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerBitSliceList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerBitSliceList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerBitSliceList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerBitSliceList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList_2D_element GALGAS_registerBitSliceList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerBitSliceList_2D_element result ;
  const GALGAS_registerBitSliceList_2D_element * p = (const GALGAS_registerBitSliceList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerBitSliceList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerBitSliceList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap_2D_element::GALGAS_registerFieldMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBitIndex (),
mAttribute_mBitCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap_2D_element::~ GALGAS_registerFieldMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap_2D_element::GALGAS_registerFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mBitIndex (inOperand1),
mAttribute_mBitCount (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap_2D_element GALGAS_registerFieldMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerFieldMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap_2D_element GALGAS_registerFieldMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_uint & inOperand1,
                                                                                        const GALGAS_uint & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerFieldMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerFieldMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerFieldMap_2D_element::objectCompare (const GALGAS_registerFieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitIndex.objectCompare (inOperand.mAttribute_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitCount.objectCompare (inOperand.mAttribute_mBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerFieldMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBitIndex.isValid () && mAttribute_mBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerFieldMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBitIndex.drop () ;
  mAttribute_mBitCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerFieldMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @registerFieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerFieldMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_registerFieldMap_2D_element::getter_mBitIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_registerFieldMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @registerFieldMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerFieldMap_2D_element ("registerFieldMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerFieldMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap_2D_element GALGAS_registerFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_registerFieldMap_2D_element result ;
  const GALGAS_registerFieldMap_2D_element * p = (const GALGAS_registerFieldMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap_2D_element::GALGAS_registerBitSliceAccessMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAccessOperator (),
mAttribute_mAccessRightOperand (),
mAttribute_mSubMap (),
mAttribute_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap_2D_element::~ GALGAS_registerBitSliceAccessMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap_2D_element::GALGAS_registerBitSliceAccessMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_llvmBinaryOperation & inOperand1,
                                                                                          const GALGAS_bigint & inOperand2,
                                                                                          const GALGAS_registerBitSliceAccessMap & inOperand3,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mAccessOperator (inOperand1),
mAttribute_mAccessRightOperand (inOperand2),
mAttribute_mSubMap (inOperand3),
mAttribute_mResultType (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap_2D_element GALGAS_registerBitSliceAccessMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_llvmBinaryOperation & inOperand1,
                                                                                                          const GALGAS_bigint & inOperand2,
                                                                                                          const GALGAS_registerBitSliceAccessMap & inOperand3,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand4 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerBitSliceAccessMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_registerBitSliceAccessMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerBitSliceAccessMap_2D_element::objectCompare (const GALGAS_registerBitSliceAccessMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAccessOperator.objectCompare (inOperand.mAttribute_mAccessOperator) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAccessRightOperand.objectCompare (inOperand.mAttribute_mAccessRightOperand) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubMap.objectCompare (inOperand.mAttribute_mSubMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerBitSliceAccessMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAccessOperator.isValid () && mAttribute_mAccessRightOperand.isValid () && mAttribute_mSubMap.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceAccessMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAccessOperator.drop () ;
  mAttribute_mAccessRightOperand.drop () ;
  mAttribute_mSubMap.drop () ;
  mAttribute_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceAccessMap_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @registerBitSliceAccessMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAccessOperator.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAccessRightOperand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerBitSliceAccessMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_registerBitSliceAccessMap_2D_element::getter_mAccessOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_registerBitSliceAccessMap_2D_element::getter_mAccessRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_registerBitSliceAccessMap_2D_element::getter_mSubMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_registerBitSliceAccessMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @registerBitSliceAccessMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerBitSliceAccessMap_2D_element ("registerBitSliceAccessMap-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerBitSliceAccessMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerBitSliceAccessMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerBitSliceAccessMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerBitSliceAccessMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap_2D_element GALGAS_registerBitSliceAccessMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_registerBitSliceAccessMap_2D_element result ;
  const GALGAS_registerBitSliceAccessMap_2D_element * p = (const GALGAS_registerBitSliceAccessMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerBitSliceAccessMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerBitSliceAccessMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element::GALGAS_registerMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mIsReadOnly (),
mAttribute_mRegisterFieldAccessMap (),
mAttribute_mRegisterFieldMap (),
mAttribute_mAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element::~ GALGAS_registerMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element::GALGAS_registerMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                              const GALGAS_bool & inOperand2,
                                                              const GALGAS_registerBitSliceAccessMap & inOperand3,
                                                              const GALGAS_registerFieldMap & inOperand4,
                                                              const GALGAS_bigint & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mIsReadOnly (inOperand2),
mAttribute_mRegisterFieldAccessMap (inOperand3),
mAttribute_mRegisterFieldMap (inOperand4),
mAttribute_mAddress (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element GALGAS_registerMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                        GALGAS_bool::constructor_default (HERE),
                                        GALGAS_registerBitSliceAccessMap::constructor_emptyMap (HERE),
                                        GALGAS_registerFieldMap::constructor_emptyMap (HERE),
                                        GALGAS_bigint::constructor_zero (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element GALGAS_registerMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_registerBitSliceAccessMap & inOperand3,
                                                                              const GALGAS_registerFieldMap & inOperand4,
                                                                              const GALGAS_bigint & inOperand5 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_registerMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerMap_2D_element::objectCompare (const GALGAS_registerMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsReadOnly.objectCompare (inOperand.mAttribute_mIsReadOnly) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterFieldAccessMap.objectCompare (inOperand.mAttribute_mRegisterFieldAccessMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterFieldMap.objectCompare (inOperand.mAttribute_mRegisterFieldMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddress.objectCompare (inOperand.mAttribute_mAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mIsReadOnly.isValid () && mAttribute_mRegisterFieldAccessMap.isValid () && mAttribute_mRegisterFieldMap.isValid () && mAttribute_mAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mIsReadOnly.drop () ;
  mAttribute_mRegisterFieldAccessMap.drop () ;
  mAttribute_mRegisterFieldMap.drop () ;
  mAttribute_mAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @registerMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterFieldAccessMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterFieldMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_registerMap_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_registerMap_2D_element::getter_mIsReadOnly (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsReadOnly ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_registerMap_2D_element::getter_mRegisterFieldAccessMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterFieldAccessMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap GALGAS_registerMap_2D_element::getter_mRegisterFieldMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_registerMap_2D_element::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @registerMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerMap_2D_element ("registerMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element GALGAS_registerMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerMap_2D_element result ;
  const GALGAS_registerMap_2D_element * p = (const GALGAS_registerMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (void) :
mAttribute_mSelector (),
mAttribute_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::~ GALGAS_functionCallEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mAttribute_mSelector (inOperand0),
mAttribute_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element GALGAS_functionCallEffectiveParameterList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_expressionAST & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionCallEffectiveParameterList_2D_element::objectCompare (const GALGAS_functionCallEffectiveParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionCallEffectiveParameterList_2D_element::isValid (void) const {
  return mAttribute_mSelector.isValid () && mAttribute_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::drop (void) {
  mAttribute_mSelector.drop () ;
  mAttribute_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @functionCallEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallEffectiveParameterList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @functionCallEffectiveParameterList-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ("functionCallEffectiveParameterList-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element GALGAS_functionCallEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList_2D_element result ;
  const GALGAS_functionCallEffectiveParameterList_2D_element * p = (const GALGAS_functionCallEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element::GALGAS_procEffectiveParameterListAST_2D_element (void) :
mAttribute_mEffectiveParameterKind (),
mAttribute_mSelector () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element::~ GALGAS_procEffectiveParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element::GALGAS_procEffectiveParameterListAST_2D_element (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1) :
mAttribute_mEffectiveParameterKind (inOperand0),
mAttribute_mSelector (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element GALGAS_procEffectiveParameterListAST_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_procEffectiveParameterListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procEffectiveParameterListAST_2D_element::objectCompare (const GALGAS_procEffectiveParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEffectiveParameterKind.objectCompare (inOperand.mAttribute_mEffectiveParameterKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procEffectiveParameterListAST_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterKind.isValid () && mAttribute_mSelector.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST_2D_element::drop (void) {
  mAttribute_mEffectiveParameterKind.drop () ;
  mAttribute_mSelector.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @procEffectiveParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEffectiveParameterKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterListAST_2D_element::getter_mEffectiveParameterKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @procEffectiveParameterListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterListAST_2D_element ("procEffectiveParameterListAST-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element GALGAS_procEffectiveParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterListAST_2D_element result ;
  const GALGAS_procEffectiveParameterListAST_2D_element * p = (const GALGAS_procEffectiveParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (void) :
mAttribute_mEffectiveParameterPassingMode (),
mAttribute_mSelector (),
mAttribute_mParameterType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::~ GALGAS_procEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mAttribute_mEffectiveParameterPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mParameterType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procEffectiveParameterList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procEffectiveParameterList_2D_element::objectCompare (const GALGAS_procEffectiveParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEffectiveParameterPassingMode.objectCompare (inOperand.mAttribute_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameterType.objectCompare (inOperand.mAttribute_mParameterType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procEffectiveParameterList_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mParameterType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::drop (void) {
  mAttribute_mEffectiveParameterPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mParameterType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @procEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameterType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterList_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procEffectiveParameterList_2D_element::getter_mParameterType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procEffectiveParameterList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ("procEffectiveParameterList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  const GALGAS_procEffectiveParameterList_2D_element * p = (const GALGAS_procEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mResultType (),
mAttribute_mOperation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                        const GALGAS_infixOperatorDescription & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mResultType (inOperand1),
mAttribute_mOperation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                        const GALGAS_infixOperatorDescription & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_infixOperatorMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_infixOperatorMap_2D_element::objectCompare (const GALGAS_infixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOperation.objectCompare (inOperand.mAttribute_mOperation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultType.isValid () && mAttribute_mOperation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mResultType.drop () ;
  mAttribute_mOperation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @infixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOperation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_infixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_infixOperatorMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap_2D_element::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ("infixOperatorMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  const GALGAS_infixOperatorMap_2D_element * p = (const GALGAS_infixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecOperatorMap_2D_element::GALGAS_incDecOperatorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOperationOvfCheck (),
mAttribute_mOperationNoOvf () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecOperatorMap_2D_element::~ GALGAS_incDecOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecOperatorMap_2D_element::GALGAS_incDecOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_llvmBinaryOperation & inOperand1,
                                                                          const GALGAS_llvmBinaryOperation & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mOperationOvfCheck (inOperand1),
mAttribute_mOperationNoOvf (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecOperatorMap_2D_element GALGAS_incDecOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_llvmBinaryOperation & inOperand1,
                                                                                          const GALGAS_llvmBinaryOperation & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_incDecOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_incDecOperatorMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_incDecOperatorMap_2D_element::objectCompare (const GALGAS_incDecOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOperationOvfCheck.objectCompare (inOperand.mAttribute_mOperationOvfCheck) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOperationNoOvf.objectCompare (inOperand.mAttribute_mOperationNoOvf) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_incDecOperatorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOperationOvfCheck.isValid () && mAttribute_mOperationNoOvf.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_incDecOperatorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOperationOvfCheck.drop () ;
  mAttribute_mOperationNoOvf.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_incDecOperatorMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @incDecOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOperationOvfCheck.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOperationNoOvf.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_incDecOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_incDecOperatorMap_2D_element::getter_mOperationOvfCheck (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperationOvfCheck ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_incDecOperatorMap_2D_element::getter_mOperationNoOvf (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperationNoOvf ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @incDecOperatorMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecOperatorMap_2D_element ("incDecOperatorMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_incDecOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_incDecOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecOperatorMap_2D_element GALGAS_incDecOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecOperatorMap_2D_element result ;
  const GALGAS_incDecOperatorMap_2D_element * p = (const GALGAS_incDecOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::~ GALGAS_prefixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mResultType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefixOperatorMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_prefixOperatorMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefixOperatorMap_2D_element::objectCompare (const GALGAS_prefixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefixOperatorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @prefixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_prefixOperatorMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @prefixOperatorMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ("prefixOperatorMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  const GALGAS_prefixOperatorMap_2D_element * p = (const GALGAS_prefixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::~ GALGAS_staticStringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticStringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticStringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticStringMap_2D_element::objectCompare (const GALGAS_staticStringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticStringMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @staticStringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticStringMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_staticStringMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @staticStringMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticStringMap_2D_element ("staticStringMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticStringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticStringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  const GALGAS_staticStringMap_2D_element * p = (const GALGAS_staticStringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticStringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mConstantType (),
mAttribute_mExpressionCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_valueIR & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mConstantType (inOperand1),
mAttribute_mExpressionCode (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_valueIR & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalConstantMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalConstantMap_2D_element::objectCompare (const GALGAS_globalConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantType.objectCompare (inOperand.mAttribute_mConstantType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpressionCode.objectCompare (inOperand.mAttribute_mExpressionCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mConstantType.isValid () && mAttribute_mExpressionCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mConstantType.drop () ;
  mAttribute_mExpressionCode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpressionCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMap_2D_element::getter_mConstantType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_globalConstantMap_2D_element::getter_mExpressionCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalConstantMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap_2D_element ("globalConstantMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  const GALGAS_globalConstantMap_2D_element * p = (const GALGAS_globalConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mVariableType (),
mAttribute_mExecutionModeSet (),
mAttribute_mAllowedProcedureMap (),
mAttribute_mAllowedFunctionMap (),
mAttribute_mInitialValue (),
mAttribute_mIsConstant () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::~ GALGAS_globalVariableMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_stringset & inOperand2,
                                                                          const GALGAS_allowedRoutineMap & inOperand3,
                                                                          const GALGAS_allowedFunctionMap & inOperand4,
                                                                          const GALGAS_valueIR & inOperand5,
                                                                          const GALGAS_bool & inOperand6) :
mAttribute_lkey (inOperand0),
mAttribute_mVariableType (inOperand1),
mAttribute_mExecutionModeSet (inOperand2),
mAttribute_mAllowedProcedureMap (inOperand3),
mAttribute_mAllowedFunctionMap (inOperand4),
mAttribute_mInitialValue (inOperand5),
mAttribute_mIsConstant (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_stringset & inOperand2,
                                                                                          const GALGAS_allowedRoutineMap & inOperand3,
                                                                                          const GALGAS_allowedFunctionMap & inOperand4,
                                                                                          const GALGAS_valueIR & inOperand5,
                                                                                          const GALGAS_bool & inOperand6 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVariableMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_globalVariableMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVariableMap_2D_element::objectCompare (const GALGAS_globalVariableMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mVariableType.objectCompare (inOperand.mAttribute_mVariableType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExecutionModeSet.objectCompare (inOperand.mAttribute_mExecutionModeSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedProcedureMap.objectCompare (inOperand.mAttribute_mAllowedProcedureMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedFunctionMap.objectCompare (inOperand.mAttribute_mAllowedFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialValue.objectCompare (inOperand.mAttribute_mInitialValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsConstant.objectCompare (inOperand.mAttribute_mIsConstant) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mVariableType.isValid () && mAttribute_mExecutionModeSet.isValid () && mAttribute_mAllowedProcedureMap.isValid () && mAttribute_mAllowedFunctionMap.isValid () && mAttribute_mInitialValue.isValid () && mAttribute_mIsConstant.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mVariableType.drop () ;
  mAttribute_mExecutionModeSet.drop () ;
  mAttribute_mAllowedProcedureMap.drop () ;
  mAttribute_mAllowedFunctionMap.drop () ;
  mAttribute_mInitialValue.drop () ;
  mAttribute_mIsConstant.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalVariableMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mVariableType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExecutionModeSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedProcedureMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMap_2D_element::getter_mVariableType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariableType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_globalVariableMap_2D_element::getter_mExecutionModeSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExecutionModeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap GALGAS_globalVariableMap_2D_element::getter_mAllowedProcedureMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedProcedureMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionMap GALGAS_globalVariableMap_2D_element::getter_mAllowedFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_globalVariableMap_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMap_2D_element::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsConstant ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalVariableMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMap_2D_element ("globalVariableMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMap_2D_element result ;
  const GALGAS_globalVariableMap_2D_element * p = (const GALGAS_globalVariableMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element::GALGAS_modeMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element::~ GALGAS_modeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element::GALGAS_modeMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element GALGAS_modeMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_modeMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element GALGAS_modeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_modeMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_modeMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_modeMap_2D_element::objectCompare (const GALGAS_modeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_modeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @modeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modeMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @modeMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_modeMap_2D_element ("modeMap-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_modeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_modeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_modeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element GALGAS_modeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_modeMap_2D_element result ;
  const GALGAS_modeMap_2D_element * p = (const GALGAS_modeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_modeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("modeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantMap_2D_element::GALGAS_typedConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantMap_2D_element::~ GALGAS_typedConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantMap_2D_element::GALGAS_typedConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_valueIR & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantMap_2D_element GALGAS_typedConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_valueIR & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_typedConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typedConstantMap_2D_element::objectCompare (const GALGAS_typedConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typedConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedConstantMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @typedConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_typedConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @typedConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedConstantMap_2D_element ("typedConstantMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typedConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typedConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantMap_2D_element GALGAS_typedConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantMap_2D_element result ;
  const GALGAS_typedConstantMap_2D_element * p = (const GALGAS_typedConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element::GALGAS_typeList_2D_element (void) :
mAttribute_mActualType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element::~ GALGAS_typeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element::GALGAS_typeList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0) :
mAttribute_mActualType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element GALGAS_typeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element GALGAS_typeList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeList_2D_element::objectCompare (const GALGAS_typeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualType.objectCompare (inOperand.mAttribute_mActualType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeList_2D_element::isValid (void) const {
  return mAttribute_mActualType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeList_2D_element::drop (void) {
  mAttribute_mActualType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @typeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typeList_2D_element::getter_mActualType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typeList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeList_2D_element ("typeList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element GALGAS_typeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeList_2D_element result ;
  const GALGAS_typeList_2D_element * p = (const GALGAS_typeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInitValues () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_operandIRList & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mInitValues (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_operandIRList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_operandIRList & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_constructorMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitValues.objectCompare (inOperand.mAttribute_mInitValues) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInitValues.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInitValues.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @constructorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitValues.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_constructorMap_2D_element::getter_mInitValues (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitValues ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @constructorMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  const GALGAS_constructorMap_2D_element * p = (const GALGAS_constructorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element::GALGAS_registerMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterTypeName (),
mAttribute_mRegisterAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element::~ GALGAS_registerMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element::GALGAS_registerMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_bigint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterTypeName (inOperand1),
mAttribute_mRegisterAddress (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element GALGAS_registerMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_bigint::constructor_zero (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element GALGAS_registerMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_bigint & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerMapIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerMapIR_2D_element::objectCompare (const GALGAS_registerMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterTypeName.objectCompare (inOperand.mAttribute_mRegisterTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterTypeName.isValid () && mAttribute_mRegisterAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterTypeName.drop () ;
  mAttribute_mRegisterAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMapIR_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @registerMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_registerMapIR_2D_element::getter_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_registerMapIR_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @registerMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerMapIR_2D_element ("registerMapIR-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element GALGAS_registerMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerMapIR_2D_element result ;
  const GALGAS_registerMapIR_2D_element * p = (const GALGAS_registerMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element::GALGAS_typeMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element::~ GALGAS_typeMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element::GALGAS_typeMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_abstractTypeIR & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element GALGAS_typeMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_abstractTypeIR & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_typeMapIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeMapIR_2D_element::objectCompare (const GALGAS_typeMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeMapIR_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @typeMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractTypeIR GALGAS_typeMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typeMapIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMapIR_2D_element ("typeMapIR-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element GALGAS_typeMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeMapIR_2D_element result ;
  const GALGAS_typeMapIR_2D_element * p = (const GALGAS_typeMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Getter '@procedureDeclarationListAST-element getMangledName'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_getMangledName (const GALGAS_procedureDeclarationListAST_2D_element & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outMangledName ; // Returned variable
  result_outMangledName = inObject.mAttribute_mProcedureName.mAttribute_string ;
  cEnumerator_procFormalArgumentList enumerator_4000 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
  while (enumerator_4000.hasCurrentObject ()) {
    result_outMangledName.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 101)) ;
    switch (enumerator_4000.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_outMangledName.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 103)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_outMangledName.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 104)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_outMangledName.plusAssign_operation(GALGAS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 105)) ;
      }
      break ;
    }
    result_outMangledName.plusAssign_operation(enumerator_4000.current_mSelector (HERE).mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 107)) ;
    enumerator_4000.gotoNextObject () ;
  }
//---
  return result_outMangledName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@globalVarDeclarationList-element enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_globalVarDeclarationList_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_variableType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_variableType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("global-variable-declaration.galgas", 137)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, inObject.mAttribute_mTypeName, var_variableType COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 139)) ;
    }
  }
  GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("global-variable-declaration.galgas", 142)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("global-variable-declaration.galgas", 143)) ;
  GALGAS_variableMap var_variableMap = function_variableMapWithConstants (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 144)) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mAttribute_mSourceExpression.ptr (), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("global-variable-declaration.galgas", 146)), var_variableType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-variable-declaration.galgas", 149)), GALGAS_bool (true), var_temporaries, ioArgument_ioGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 145)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList.getter_length (SOURCE_FILE ("global-variable-declaration.galgas", 157)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = extensionGetter_isStatic (var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 157)).operator_not (SOURCE_FILE ("global-variable-declaration.galgas", 157)) ;
  }
  const enumGalgasBool test_2 = test_1.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (inObject.mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 158)) ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, var_variableType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("global-variable-declaration.galgas", 161)))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 161)).getter_isLiteralInteger (SOURCE_FILE ("global-variable-declaration.galgas", 161)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location location_6 (inObject.mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_6, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 162)) ;
  }
  {
  routine_checkAssignmentCompatibility (var_expressionResult, var_variableType, inObject.mAttribute_mVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 164)) ;
  }
  GALGAS_stringset var_executionModes = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-variable-declaration.galgas", 169)) ;
  GALGAS_allowedFunctionMap var_allowedFunctionMap = GALGAS_allowedFunctionMap::constructor_emptyMap (SOURCE_FILE ("global-variable-declaration.galgas", 171)) ;
  cEnumerator_lstringlist enumerator_6079 (inObject.mAttribute_mAllowedFunctionList, kEnumeration_up) ;
  while (enumerator_6079.hasCurrentObject ()) {
    GALGAS_modeMap joker_6130_3 ; // Joker input parameter
    GALGAS_funcSignature joker_6130_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_6130_1 ; // Joker input parameter
    ioArgument_ioContext.mAttribute_mFunctionMap.method_searchKey (enumerator_6079.current_mValue (HERE), joker_6130_3, joker_6130_2, joker_6130_1, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 173)) ;
    {
    var_allowedFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (function_mangledNameForFunction (enumerator_6079.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 174)), enumerator_6079.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 174)) ;
    }
    enumerator_6079.gotoNextObject () ;
  }
  GALGAS_allowedRoutineMap var_allowedProcedureMap = GALGAS_allowedRoutineMap::constructor_emptyMap (SOURCE_FILE ("global-variable-declaration.galgas", 177)) ;
  cEnumerator_allowedInitList enumerator_6366 (inObject.mAttribute_mAllowedInitList, kEnumeration_up) ;
  while (enumerator_6366.hasCurrentObject ()) {
    ioArgument_ioContext.mAttribute_mInitRoutineMap.method_searchKey (GALGAS_lstring::constructor_new (enumerator_6366.current_mInitPriority (HERE).mAttribute_bigint.getter_string (SOURCE_FILE ("global-variable-declaration.galgas", 179)), enumerator_6366.current_mInitPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 179)) ;
    {
    var_allowedProcedureMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("init ").add_operation (enumerator_6366.current_mInitPriority (HERE).mAttribute_bigint.getter_string (SOURCE_FILE ("global-variable-declaration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 181)), enumerator_6366.current_mInitPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 181)), enumerator_6366.current_mHasWriteAccess (HERE), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 180)) ;
    }
    enumerator_6366.gotoNextObject () ;
  }
  cEnumerator_allowedExceptionList enumerator_6711 (inObject.mAttribute_mAllowedExceptionList, kEnumeration_up) ;
  while (enumerator_6711.hasCurrentObject ()) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_6711.current_mExceptionName (HERE).mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioContext.mAttribute_mExceptionSetupRoutinePriorityMap.method_searchSetupKey (GALGAS_lstring::constructor_new (enumerator_6711.current_mExceptionPriority (HERE).mAttribute_bigint.getter_string (SOURCE_FILE ("global-variable-declaration.galgas", 189)), enumerator_6711.current_mExceptionPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 188)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_6711.current_mExceptionName (HERE).mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        ioArgument_ioContext.mAttribute_mExceptionLoopRoutinePriorityMap.method_searchLoopKey (GALGAS_lstring::constructor_new (enumerator_6711.current_mExceptionPriority (HERE).mAttribute_bigint.getter_string (SOURCE_FILE ("global-variable-declaration.galgas", 194)), enumerator_6711.current_mExceptionPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 193)) ;
      }else if (kBoolFalse == test_8) {
        GALGAS_location location_9 (enumerator_6711.current_mExceptionName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_9, GALGAS_string ("exception routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 198)) ;
      }
    }
    {
    var_allowedProcedureMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("exception ").add_operation (enumerator_6711.current_mExceptionName (HERE).getter_string (SOURCE_FILE ("global-variable-declaration.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 201)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 201)).add_operation (enumerator_6711.current_mExceptionPriority (HERE).mAttribute_bigint.getter_string (SOURCE_FILE ("global-variable-declaration.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 201)), enumerator_6711.current_mExceptionName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 201)), enumerator_6711.current_mHasWriteAccess (HERE), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 200)) ;
    }
    enumerator_6711.gotoNextObject () ;
  }
  cEnumerator_allowedProcList enumerator_7487 (inObject.mAttribute_mAllowedProcList, kEnumeration_up) ;
  while (enumerator_7487.hasCurrentObject ()) {
    GALGAS_modeMap var_procedureModeMap ;
    GALGAS_procedureSignature var_signature ;
    GALGAS_bool joker_8027 ; // Joker input parameter
    GALGAS_bool joker_8092 ; // Joker input parameter
    ioArgument_ioContext.mAttribute_mProcedureMap.method_searchKey (enumerator_7487.current_mProcName (HERE), joker_8027, var_procedureModeMap, var_signature, joker_8092, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 217)) ;
    cEnumerator_modeMap enumerator_8130 (var_procedureModeMap, kEnumeration_up) ;
    while (enumerator_8130.hasCurrentObject ()) {
      var_executionModes.addAssign_operation (enumerator_8130.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 225)) ;
      enumerator_8130.gotoNextObject () ;
    }
    {
    var_allowedProcedureMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("proc ").add_operation (enumerator_7487.current_mProcName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 228)), enumerator_7487.current_mProcName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 228)), enumerator_7487.current_mHasWriteAccess (HERE), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 227)) ;
    }
    enumerator_7487.gotoNextObject () ;
  }
  {
  GALGAS_unifiedTypeMap_2D_proxy temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_variableType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("global-variable-declaration.galgas", 234)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = var_expressionResult.mAttribute_mType ;
  }else if (kBoolFalse == test_11) {
    temp_10 = var_variableType ;
  }
  ioArgument_ioContext.mAttribute_mGlobalVariableMap.setter_insertKey (inObject.mAttribute_mVarName, temp_10, var_executionModes, var_allowedProcedureMap, var_allowedFunctionMap, var_expressionResult.mAttribute_mValue, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 232)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mGenerateVolatile (),
mAttribute_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::~ GALGAS_globalVariableMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_valueIR & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mGenerateVolatile (inOperand2),
mAttribute_mInitialValue (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_valueIR & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_globalVariableMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVariableMapIR_2D_element::objectCompare (const GALGAS_globalVariableMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGenerateVolatile.objectCompare (inOperand.mAttribute_mGenerateVolatile) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialValue.objectCompare (inOperand.mAttribute_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mGenerateVolatile.isValid () && mAttribute_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mGenerateVolatile.drop () ;
  mAttribute_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalVariableMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGenerateVolatile.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMapIR_2D_element::getter_mGenerateVolatile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGenerateVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_globalVariableMapIR_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @globalVariableMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMapIR_2D_element ("globalVariableMapIR-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR_2D_element result ;
  const GALGAS_globalVariableMapIR_2D_element * p = (const GALGAS_globalVariableMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::~ GALGAS_globalConstantMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_valueIR & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mSourceExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_valueIR & inOperand2 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalConstantMapIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalConstantMapIR_2D_element::objectCompare (const GALGAS_globalConstantMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceExpression.objectCompare (inOperand.mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mSourceExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mSourceExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_globalConstantMapIR_2D_element::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @globalConstantMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ("globalConstantMapIR-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR_2D_element result ;
  const GALGAS_globalConstantMapIR_2D_element * p = (const GALGAS_globalConstantMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@initList-element enterInContext'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_initList_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioContext.mAttribute_mInitRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("init-declaration.galgas", 73)), inObject.mAttribute_mPriority.mAttribute_location  COMMA_SOURCE_FILE ("init-declaration.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 73)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@exceptionClauseListAST-element enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_exceptionClauseListAST_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mAttribute_mExceptionClauseName.mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioContext.mAttribute_mExceptionSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.getter_string (SOURCE_FILE ("exception.galgas", 71)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("exception.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 71)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mAttribute_mExceptionClauseName.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioContext.mAttribute_mExceptionLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.getter_string (SOURCE_FILE ("exception.galgas", 73)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("exception.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 73)) ;
      }
    }else if (kBoolFalse == test_1) {
      GALGAS_location location_2 (inObject.mAttribute_mExceptionClauseName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("exception routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("exception.galgas", 75)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@functionDeclarationListAST-element enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInPrecedenceGraph (const GALGAS_functionDeclarationListAST_2D_element inObject,
                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_funcFormalArgumentList enumerator_2940 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_2940.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_2940.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("func-declaration.galgas", 82)) ;
    }
    enumerator_2940.gotoNextObject () ;
  }
  {
  ioArgument_ioGraph.setter_noteNode (inObject.mAttribute_mResultTypeName COMMA_SOURCE_FILE ("func-declaration.galgas", 84)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@functionMapIR-element implementationCodeGeneration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_implementationCodeGeneration (const GALGAS_functionMapIR_2D_element inObject,
                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("func ").add_operation (inObject.mAttribute_lkey.getter_string (SOURCE_FILE ("func-declaration.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 236)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mAttribute_mResultType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (function_mangledNameForFunction (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 238)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 238)) ;
  cEnumerator_funcFormalArgumentListForGeneration enumerator_9004 (inObject.mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
  while (enumerator_9004.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9004.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 241)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 241)).add_operation (enumerator_9004.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 241)) ;
    if (enumerator_9004.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 243)) ;
    }
    enumerator_9004.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (") nounwind {\n"), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 245)) ;
  GALGAS_string var_resultMangledName = GALGAS_string ("%").add_operation (function_mangledNameForLocalVariable (inObject.mAttribute_mResultVarName, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_resultMangledName, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 248)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 248)).add_operation (extensionGetter_llvmTypeName (inObject.mAttribute_mResultType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 248)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 248)) ;
  cEnumerator_funcFormalArgumentListForGeneration enumerator_9446 (inObject.mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
  while (enumerator_9446.hasCurrentObject ()) {
    GALGAS_string var_llvmType = extensionGetter_llvmTypeName (enumerator_9446.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 251)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (enumerator_9446.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 252)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 252)).add_operation (extensionGetter_llvmTypeName (enumerator_9446.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 252)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 252)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 253)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 253)).add_operation (enumerator_9446.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 253)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 253)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 253)).add_operation (enumerator_9446.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 253)) ;
    enumerator_9446.gotoNextObject () ;
  }
  categoryMethod_instructionListLLVMCode (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 257)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_resultMangledName, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)).add_operation (GALGAS_string (".loaded = load "), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)).add_operation (extensionGetter_llvmTypeName (inObject.mAttribute_mResultType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)).add_operation (extensionGetter_llvmTypeName (inObject.mAttribute_mResultType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)).add_operation (var_resultMangledName, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 259)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (extensionGetter_llvmTypeName (inObject.mAttribute_mResultType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 260)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 260)).add_operation (var_resultMangledName, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 260)).add_operation (GALGAS_string (".loaded\n"), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 261)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@procedureMapIR-element llvmCodeGeneration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_llvmCodeGeneration (const GALGAS_procedureMapIR_2D_element inObject,
                                        GALGAS_string & ioArgument_ioLLVMcode,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS_generationContext constinArgument_inGenerationContext,
                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_procName = function_mangledNameForProcedure (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 444)) ;
  GALGAS_bool test_0 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = inObject.mAttribute_mNullOnNoException ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioAssemblerCode.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 447)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("  .global ").add_operation (var_procName, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 448)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 448)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_procName, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 449)).add_operation (GALGAS_string (" = 0\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 449)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("proc ").add_operation (var_procName, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 451)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_procName, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 452)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 452)) ;
    cEnumerator_procFormalArgumentListForGeneration enumerator_16619 (inObject.mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
    while (enumerator_16619.hasCurrentObject ()) {
      switch (enumerator_16619.current_mFormalArgumentKind (HERE).enumValue ()) {
      case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
        break ;
      case GALGAS_procFormalArgumentPassingMode::kEnum_input:
        {
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_16619.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 457)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 457)).add_operation (enumerator_16619.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 457)) ;
        }
        break ;
      case GALGAS_procFormalArgumentPassingMode::kEnum_output:
        {
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_16619.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 459)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 459)).add_operation (enumerator_16619.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 459)) ;
        }
        break ;
      case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
        {
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_16619.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 461)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 461)).add_operation (enumerator_16619.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 461)) ;
        }
        break ;
      }
      if (enumerator_16619.hasNextObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 464)) ;
      }
      enumerator_16619.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (") nounwind ; NULL in assembly code\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 466)) ;
  }else if (kBoolFalse == test_1) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("proc ").add_operation (var_procName, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 468)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (var_procName, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 469)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 469)) ;
    cEnumerator_procFormalArgumentListForGeneration enumerator_17271 (inObject.mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
    while (enumerator_17271.hasCurrentObject ()) {
      switch (enumerator_17271.current_mFormalArgumentKind (HERE).enumValue ()) {
      case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
        break ;
      case GALGAS_procFormalArgumentPassingMode::kEnum_input:
        {
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_17271.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 474)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 474)).add_operation (enumerator_17271.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 474)) ;
        }
        break ;
      case GALGAS_procFormalArgumentPassingMode::kEnum_output:
        {
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_17271.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 476)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 476)).add_operation (enumerator_17271.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 476)) ;
        }
        break ;
      case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
        {
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_17271.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 478)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 478)).add_operation (enumerator_17271.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 478)) ;
        }
        break ;
      }
      if (enumerator_17271.hasNextObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 481)) ;
      }
      enumerator_17271.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (") nounwind {\n"), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 483)) ;
    cEnumerator_procFormalArgumentListForGeneration enumerator_17813 (inObject.mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
    while (enumerator_17813.hasCurrentObject ()) {
      switch (enumerator_17813.current_mFormalArgumentKind (HERE).enumValue ()) {
      case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
        break ;
      case GALGAS_procFormalArgumentPassingMode::kEnum_input:
        {
          GALGAS_string var_llvmType = extensionGetter_llvmTypeName (enumerator_17813.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 488)) ;
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (enumerator_17813.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 489)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 489)).add_operation (extensionGetter_llvmTypeName (enumerator_17813.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 489)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 489)) ;
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 490)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 490)).add_operation (enumerator_17813.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 490)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 490)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 490)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 490)).add_operation (enumerator_17813.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 490)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 490)) ;
        }
        break ;
      case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
        {
        }
        break ;
      }
      enumerator_17813.gotoNextObject () ;
    }
    categoryMethod_instructionListLLVMCode (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 496)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 498)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 499)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR::GALGAS_operandIR (void) :
mAttribute_mType (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR::~ GALGAS_operandIR (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR::GALGAS_operandIR (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                    const GALGAS_valueIR & inOperand1) :
mAttribute_mType (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_operandIR::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                    const GALGAS_valueIR & inOperand1 
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_operandIR (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandIR::objectCompare (const GALGAS_operandIR & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandIR::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIR::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIR::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<struct @operandIR:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_operandIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_operandIR::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @operandIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIR ("operandIR",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_operandIR::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_operandIR result ;
  const GALGAS_operandIR * p = (const GALGAS_operandIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (void) :
mAttribute_mEffectiveParameterPassingMode (),
mAttribute_mSelector (),
mAttribute_mParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::~ GALGAS_procCallEffectiveParameterListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_operandIR & inOperand2) :
mAttribute_mEffectiveParameterPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mParameter (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                                        const GALGAS_operandIR & inOperand2 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procCallEffectiveParameterListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procCallEffectiveParameterListIR_2D_element::objectCompare (const GALGAS_procCallEffectiveParameterListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEffectiveParameterPassingMode.objectCompare (inOperand.mAttribute_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameter.objectCompare (inOperand.mAttribute_mParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procCallEffectiveParameterListIR_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::drop (void) {
  mAttribute_mEffectiveParameterPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @procCallEffectiveParameterListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mParameter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @procCallEffectiveParameterListIR-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ("procCallEffectiveParameterListIR-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  const GALGAS_procCallEffectiveParameterListIR_2D_element * p = (const GALGAS_procCallEffectiveParameterListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallEffectiveParameterListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (void) :
mAttribute_mOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::~ GALGAS_operandIRList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (const GALGAS_operandIR & inOperand0) :
mAttribute_mOperand (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::constructor_new (const GALGAS_operandIR & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandIRList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandIRList_2D_element::objectCompare (const GALGAS_operandIRList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOperand.objectCompare (inOperand.mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandIRList_2D_element::isValid (void) const {
  return mAttribute_mOperand.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::drop (void) {
  mAttribute_mOperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @operandIRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_operandIRList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @operandIRList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIRList_2D_element ("operandIRList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandIRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandIRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  const GALGAS_operandIRList_2D_element * p = (const GALGAS_operandIRList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRlist_2D_element::GALGAS_operandIRlist_2D_element (void) :
mAttribute_mOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRlist_2D_element::~ GALGAS_operandIRlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRlist_2D_element::GALGAS_operandIRlist_2D_element (const GALGAS_operandIR & inOperand0) :
mAttribute_mOperand (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRlist_2D_element GALGAS_operandIRlist_2D_element::constructor_new (const GALGAS_operandIR & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIRlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandIRlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandIRlist_2D_element::objectCompare (const GALGAS_operandIRlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOperand.objectCompare (inOperand.mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandIRlist_2D_element::isValid (void) const {
  return mAttribute_mOperand.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRlist_2D_element::drop (void) {
  mAttribute_mOperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRlist_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @operandIRlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_operandIRlist_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @operandIRlist-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIRlist_2D_element ("operandIRlist-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandIRlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandIRlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRlist_2D_element GALGAS_operandIRlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_operandIRlist_2D_element result ;
  const GALGAS_operandIRlist_2D_element * p = (const GALGAS_operandIRlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIRlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVM (const GALGAS_globalVariableMapIR_2D_element inObject,
                                  GALGAS_string & ioArgument_ioLLVMcode,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_mangledNameForGlobalVariable (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 275)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 275)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 276)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 276)) ;
  GALGAS_string var_initialString = extensionGetter_string (inObject.mAttribute_mInitialValue, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 277)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 279)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_initialString, inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 281)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 283)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@globalConstantMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVM (const GALGAS_globalConstantMapIR_2D_element inObject,
                                  GALGAS_string & ioArgument_ioLLVMcode,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_mangledNameForGlobalVariable (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 155)).add_operation (GALGAS_string (" = internal constant "), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 155)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)).add_operation (extensionGetter_string (inObject.mAttribute_mSourceExpression, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category getter '@booleanDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_booleanDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outLocation = object->mAttribute_mBooleanTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_booleanDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                extensionGetter_booleanDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclaration_location (defineCategoryGetter_booleanDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@booleanDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  {
  const GALGAS_booleanDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mBooleanTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 23)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                              categoryMethod_booleanDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterInPrecedenceGraph (defineCategoryMethod_booleanDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@booleanDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (object->mAttribute_mBooleanTypeName.getter_string (SOURCE_FILE ("bool-type.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_booleanDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                         extensionGetter_booleanDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclaration_keyRepresentation (defineCategoryGetter_booleanDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@booleanDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_2155 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2155.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2155.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("bool-type.galgas", 45)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_2155.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("bool-type.galgas", 46)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }
    enumerator_2155.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mBooleanTypeName, GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("bool-type.galgas", 54)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 55)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 56)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("bool-type.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 52)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.mAttribute_mBooleanType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("bool-type.galgas", 63)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mBooleanTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("Boolean type already defined")  COMMA_SOURCE_FILE ("bool-type.galgas", 64)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mBooleanTypeName, var_boolType COMMA_SOURCE_FILE ("bool-type.galgas", 66)) ;
  }
  ioArgument_ioContext.mAttribute_mBooleanType = var_boolType ;
  {
  routine_enterBooleanOperators (object->mAttribute_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("bool-type.galgas", 69)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                      categoryMethod_booleanDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterInContext (defineCategoryMethod_booleanDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@booleanDeclaration initAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                            GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                    categoryMethod_booleanDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_initAnalysis (defineCategoryMethod_booleanDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@booleanDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                        categoryMethod_booleanDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_semanticAnalysis (defineCategoryMethod_booleanDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category getter '@pointerSizeDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_pointerSizeDeclaration_location (const cPtr_abstractDeclaration * /* inObject */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("pointer-size.galgas", 12)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_pointerSizeDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                extensionGetter_pointerSizeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_pointerSizeDeclaration_location (defineCategoryGetter_pointerSizeDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pointerSizeDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pointerSizeDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pointerSizeDeclaration * object = (const cPtr_pointerSizeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_pointerSizeDeclaration) ;
  GALGAS_lstring var_name = GALGAS_string ("pointer size ").add_operation (object->mAttribute_mSize.mAttribute_bigint.getter_string (SOURCE_FILE ("pointer-size.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 40)).getter_nowhere (SOURCE_FILE ("pointer-size.galgas", 40)) ;
  {
  const GALGAS_pointerSizeDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_name, temp_0, inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 41)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pointerSizeDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                              categoryMethod_pointerSizeDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pointerSizeDeclaration_enterInPrecedenceGraph (defineCategoryMethod_pointerSizeDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category getter '@pointerSizeDeclaration keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_pointerSizeDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_pointerSizeDeclaration * object = (const cPtr_pointerSizeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_pointerSizeDeclaration) ;
  result_outRepresentation = GALGAS_string ("pointer size ").add_operation (object->mAttribute_mSize.mAttribute_bigint.getter_string (SOURCE_FILE ("pointer-size.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 47)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_pointerSizeDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                         extensionGetter_pointerSizeDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_pointerSizeDeclaration_keyRepresentation (defineCategoryGetter_pointerSizeDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pointerSizeDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pointerSizeDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pointerSizeDeclaration * object = (const cPtr_pointerSizeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_pointerSizeDeclaration) ;
  ioArgument_ioContext.mAttribute_mPointerSize = object->mAttribute_mSize.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 59)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pointerSizeDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                      categoryMethod_pointerSizeDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pointerSizeDeclaration_enterInContext (defineCategoryMethod_pointerSizeDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@pointerSizeDeclaration initAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pointerSizeDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pointerSizeDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                    categoryMethod_pointerSizeDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pointerSizeDeclaration_initAnalysis (defineCategoryMethod_pointerSizeDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pointerSizeDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pointerSizeDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pointerSizeDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                        categoryMethod_pointerSizeDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pointerSizeDeclaration_semanticAnalysis (defineCategoryMethod_pointerSizeDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category getter '@modeDeclaration location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_modeDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  result_outLocation = object->mAttribute_mModeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_modeDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                extensionGetter_modeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_modeDeclaration_location (defineCategoryGetter_modeDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@modeDeclaration enterInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  {
  const GALGAS_modeDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mModeName, temp_0, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 49)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modeDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                              categoryMethod_modeDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modeDeclaration_enterInPrecedenceGraph (defineCategoryMethod_modeDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category getter '@modeDeclaration keyRepresentation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_modeDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  result_outRepresentation = GALGAS_string ("mode ").add_operation (object->mAttribute_mModeName.getter_string (SOURCE_FILE ("mode-declaration.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 55)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_modeDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                         extensionGetter_modeDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_modeDeclaration_keyRepresentation (defineCategoryGetter_modeDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@modeDeclaration enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                           const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  {
  ioArgument_ioContext.mAttribute_mModeMap.setter_insertKey (object->mAttribute_mModeName, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 67)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modeDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                      categoryMethod_modeDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modeDeclaration_enterInContext (defineCategoryMethod_modeDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@modeDeclaration initAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modeDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                    categoryMethod_modeDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modeDeclaration_initAnalysis (defineCategoryMethod_modeDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@modeDeclaration semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modeDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                        categoryMethod_modeDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modeDeclaration_semanticAnalysis (defineCategoryMethod_modeDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category getter '@enumerationDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_enumerationDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outLocation = object->mAttribute_mEnumerationName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_enumerationDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                extensionGetter_enumerationDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_location (defineCategoryGetter_enumerationDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@enumerationDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  {
  const GALGAS_enumerationDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mEnumerationName, temp_0, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 61)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumerationDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                              categoryMethod_enumerationDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInPrecedenceGraph (defineCategoryMethod_enumerationDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category getter '@enumerationDeclaration keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumerationDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumerationName.getter_string (SOURCE_FILE ("enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 67)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_enumerationDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                         extensionGetter_enumerationDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_keyRepresentation (defineCategoryGetter_enumerationDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@enumerationDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  GALGAS_enumConstantMap var_enumConstantMap = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 97)) ;
  GALGAS_typedConstantMap var_constructorMap = GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 98)) ;
  cEnumerator_lstringlist enumerator_3926 (object->mAttribute_mCaseNameList, kEnumeration_up) ;
  while (enumerator_3926.hasCurrentObject ()) {
    GALGAS_uint var_idx = var_enumConstantMap.getter_count (SOURCE_FILE ("enumeration-declaration.galgas", 100)) ;
    {
    var_enumConstantMap.setter_insertKey (enumerator_3926.current_mValue (HERE), var_idx, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 101)) ;
    }
    {
    var_constructorMap.setter_insertKey (enumerator_3926.current_mValue (HERE), GALGAS_valueIR::constructor_literalInteger (var_idx.getter_bigint (SOURCE_FILE ("enumeration-declaration.galgas", 102))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)) ;
    }
    enumerator_3926.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mEnumerationName, GALGAS_typeKind::constructor_enumeration (var_enumConstantMap  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 106)), var_constructorMap, GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 108)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 104)) ;
  }
  {
  routine_enterEnumerationOperators (object->mAttribute_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 115)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumerationDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                      categoryMethod_enumerationDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInContext (defineCategoryMethod_enumerationDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@enumerationDeclaration initAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumerationDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                    categoryMethod_enumerationDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_initAnalysis (defineCategoryMethod_enumerationDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@enumerationDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumerationDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                        categoryMethod_enumerationDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_semanticAnalysis (defineCategoryMethod_enumerationDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category getter '@structureDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_structureDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outLocation = object->mAttribute_mStructureName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_structureDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                extensionGetter_structureDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_location (defineCategoryGetter_structureDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@structureDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  {
  const GALGAS_structureDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mStructureName, temp_0, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 80)) ;
  }
  cEnumerator_structureFieldListAST enumerator_3067 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_3067.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_3067.current_mFieldTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mAttribute_mStructureName, enumerator_3067.current_mFieldTypeName (HERE) COMMA_SOURCE_FILE ("structure-declaration.galgas", 83)) ;
      }
    }
    enumerator_3067.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                              categoryMethod_structureDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInPrecedenceGraph (defineCategoryMethod_structureDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category getter '@structureDeclaration keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structureDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outRepresentation = GALGAS_string ("struct ").add_operation (object->mAttribute_mStructureName.getter_string (SOURCE_FILE ("structure-declaration.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 91)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_structureDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                         extensionGetter_structureDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_keyRepresentation (defineCategoryGetter_structureDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@structureDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                GALGAS_semanticContext & ioArgument_ioContext,
                                                                GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_5209 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_5209.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_5209.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("structure-declaration.galgas", 138)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_5209.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 139)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_3 (enumerator_5209.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 143)) ;
    }
    enumerator_5209.gotoNextObject () ;
  }
  GALGAS_propertyList var_propertyList = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 147)) ;
  GALGAS_propertyMap var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 148)) ;
  cEnumerator_structureFieldListAST enumerator_5522 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_5522.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_fieldTypeNameProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_5522.current_mFieldTypeName (HERE), var_fieldTypeNameProxy COMMA_SOURCE_FILE ("structure-declaration.galgas", 150)) ;
    }
    var_propertyList.addAssign_operation (enumerator_5522.current_mFieldName (HERE).mAttribute_string, var_fieldTypeNameProxy  COMMA_SOURCE_FILE ("structure-declaration.galgas", 151)) ;
    {
    var_propertyMap.setter_insertKey (enumerator_5522.current_mFieldName (HERE), var_fieldTypeNameProxy, var_propertyMap.getter_count (SOURCE_FILE ("structure-declaration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 152)) ;
    }
    enumerator_5522.gotoNextObject () ;
  }
  GALGAS_procedureMap var_procedureMap = GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 155)) ;
  cEnumerator_procedureDeclarationListAST enumerator_5870 (object->mAttribute_mProcedureDeclarationListAST, kEnumeration_up) ;
  while (enumerator_5870.hasCurrentObject ()) {
    GALGAS_procedureSignature var_signature = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 157)) ;
    cEnumerator_procFormalArgumentList enumerator_6019 (enumerator_5870.current (HERE).mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
    while (enumerator_6019.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6019.current_mFormalArgumentTypeName (HERE), var_typeProxy COMMA_SOURCE_FILE ("structure-declaration.galgas", 159)) ;
      }
      var_signature.addAssign_operation (enumerator_6019.current_mFormalArgumentPassingMode (HERE), enumerator_6019.current_mSelector (HERE).mAttribute_string, var_typeProxy  COMMA_SOURCE_FILE ("structure-declaration.galgas", 160)) ;
      enumerator_6019.gotoNextObject () ;
    }
    GALGAS_modeMap var_procedureModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 163)) ;
    cEnumerator_lstringlist enumerator_6303 (enumerator_5870.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
    while (enumerator_6303.hasCurrentObject ()) {
      ioArgument_ioContext.mAttribute_mModeMap.method_searchKey (enumerator_6303.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 165)) ;
      {
      var_procedureModeMap.setter_insertKey (enumerator_6303.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 166)) ;
      }
      enumerator_6303.gotoNextObject () ;
    }
    {
    var_procedureMap.setter_insertKey (enumerator_5870.current (HERE).mAttribute_mProcedureName, enumerator_5870.current (HERE).mAttribute_mMutating, var_procedureModeMap, var_signature, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 168)) ;
    }
    enumerator_5870.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mStructureName, GALGAS_typeKind::constructor_structure (object->mAttribute_mStructureName.mAttribute_string, var_propertyMap, var_propertyList, var_procedureMap  COMMA_SOURCE_FILE ("structure-declaration.galgas", 179)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 180)), var_procedureMap, var_copiable, GALGAS_bool (false), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("structure-declaration.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 177)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                      categoryMethod_structureDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInContext (defineCategoryMethod_structureDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@structureDeclaration initAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_initAnalysis (const cPtr_abstractDeclaration * inObject,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_staticStringMap var_globalLiteralStringMap = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 196)) ;
  GALGAS_operandIRList var_operandIRList = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 197)) ;
  cEnumerator_structureFieldListAST enumerator_7553 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_7553.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7553.current_mFieldTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("structure-declaration.galgas", 201)) ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_7553.current_mFieldTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 202)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_fieldType = temp_0 ;
    GALGAS_instructionListIR var_initInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 205)) ;
    GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("structure-declaration.galgas", 206)) ;
    GALGAS_variableMap joker_8211 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 215)) ;
    GALGAS_operandIR var_expressionIR ;
    callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_7553.current_mInitExpression (HERE).ptr (), GALGAS_lstring::constructor_new (object->mAttribute_mStructureName.mAttribute_string.add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 208)), object->mAttribute_mStructureName.mAttribute_location  COMMA_SOURCE_FILE ("structure-declaration.galgas", 208)), var_fieldType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("structure-declaration.galgas", 211)), GALGAS_bool (false), var_temporaries, var_globalLiteralStringMap, joker_8211, var_initInstructionGenerationList, var_expressionIR, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 207)) ;
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionIR.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 219)).operator_not (SOURCE_FILE ("structure-declaration.galgas", 219)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_7553.current_mFieldName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("initialization expression cannot be computed statically")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 220)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_type ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_fieldType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("structure-declaration.galgas", 223)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_type = var_fieldType ;
    }else if (kBoolFalse == test_4) {
      var_type = var_expressionIR.mAttribute_mType ;
    }
    var_operandIRList.addAssign_operation (GALGAS_operandIR::constructor_new (var_type, var_expressionIR.mAttribute_mValue  COMMA_SOURCE_FILE ("structure-declaration.galgas", 228))  COMMA_SOURCE_FILE ("structure-declaration.galgas", 228)) ;
    enumerator_7553.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mConstructorMap.setter_insertKey (object->mAttribute_mStructureName, var_operandIRList, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 230)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                    categoryMethod_structureDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_initAnalysis (defineCategoryMethod_structureDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@structureDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_structureType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mStructureName, inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 242)) ;
  GALGAS_propertyMap var_propertyMap ;
  switch (var_structureType.getter_kind (inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 244)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const cEnumAssociatedValues_typeKind_structure * extractPtr_9516 = (const cEnumAssociatedValues_typeKind_structure *) (var_structureType.getter_kind (inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 244)).unsafePointer ()) ;
      const GALGAS_propertyMap extractedValue_propMap = extractPtr_9516->mAssociatedValue1 ;
      var_propertyMap = extractedValue_propMap ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 246)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 247)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalInteger:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 248)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 249)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 250)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 251)) ;
    }
    break ;
  }
  cEnumerator_procedureDeclarationListAST enumerator_9829 (object->mAttribute_mProcedureDeclarationListAST, kEnumeration_up) ;
  while (enumerator_9829.hasCurrentObject ()) {
    GALGAS_string var_procMangledName = GALGAS_string ("proc ").add_operation (object->mAttribute_mStructureName.getter_string (SOURCE_FILE ("structure-declaration.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 256)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 256)).add_operation (enumerator_9829.current (HERE).mAttribute_mProcedureName.getter_string (SOURCE_FILE ("structure-declaration.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 256)) ;
    GALGAS_lstring var_procNameForInvocationGraph = GALGAS_lstring::constructor_new (var_procMangledName, enumerator_9829.current (HERE).mAttribute_mProcedureName.mAttribute_location  COMMA_SOURCE_FILE ("structure-declaration.galgas", 257)) ;
    const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_procNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("structure-declaration.galgas", 258)).operator_not (SOURCE_FILE ("structure-declaration.galgas", 258)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_procNameForInvocationGraph, enumerator_9829.current (HERE).mAttribute_mProcedureName, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 259)) ;
      }
    }
    GALGAS_stringset var_procedureModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("structure-declaration.galgas", 265)) ;
    cEnumerator_lstringlist enumerator_10414 (enumerator_9829.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
    while (enumerator_10414.hasCurrentObject ()) {
      constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_10414.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 267)) ;
      var_procedureModeSet.addAssign_operation (enumerator_10414.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("structure-declaration.galgas", 268)) ;
      enumerator_10414.gotoNextObject () ;
    }
    GALGAS_variableMap var_variableMap = function_initialVariableMap (var_procMangledName, constinArgument_inContext, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 271)) ;
    const enumGalgasBool test_1 = enumerator_9829.current (HERE).mAttribute_mMutating.boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      var_variableMap.setter_insertDefinedLocalVariable (GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 279))  COMMA_SOURCE_FILE ("structure-declaration.galgas", 279)), var_structureType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_structureType, GALGAS_string ("self")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 282)), GALGAS_bool (true), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 284)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 278)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      var_variableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 290))  COMMA_SOURCE_FILE ("structure-declaration.galgas", 290)), var_structureType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_structureType, GALGAS_string ("self")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 293)), GALGAS_bool (true), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 295)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 289)) ;
      }
    }
    GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 301)) ;
    var_formalArguments.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("structure-declaration.galgas", 302)), var_structureType, function_mangledNameForLocalVariable (GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 302))  COMMA_SOURCE_FILE ("structure-declaration.galgas", 302)) ;
    {
    routine_enterFormalArguments (constinArgument_inContext, enumerator_9829.current (HERE).mAttribute_mProcFormalArgumentList, var_variableMap, var_formalArguments, inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 303)) ;
    }
    GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 310)) ;
    categoryMethod_analyzeRoutineInstructionList (enumerator_9829.current (HERE).mAttribute_mInstructionList, var_procNameForInvocationGraph, constinArgument_inContext, var_procedureModeSet, var_procedureModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 315)) COMMA_SOURCE_FILE ("structure-declaration.galgas", 315)).operator_not (SOURCE_FILE ("structure-declaration.galgas", 315)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 311)) ;
    var_variableMap.method_checkAutomatonStates (enumerator_9829.current (HERE).mAttribute_mEndOfProcLocation, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 321)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.setter_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mStructureName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 324)).add_operation (enumerator_9829.current (HERE).mAttribute_mProcedureName.getter_string (SOURCE_FILE ("structure-declaration.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 324)), enumerator_9829.current (HERE).mAttribute_mProcedureName.mAttribute_location  COMMA_SOURCE_FILE ("structure-declaration.galgas", 324)), var_formalArguments, var_instructionGenerationList, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 323)) ;
    }
    enumerator_9829.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                        categoryMethod_structureDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_semanticAnalysis (defineCategoryMethod_structureDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@globalConstantDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_globalConstantDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outLocation = object->mAttribute_mConstantName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_globalConstantDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                extensionGetter_globalConstantDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_location (defineCategoryGetter_globalConstantDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@globalConstantDeclaration enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  {
  const GALGAS_globalConstantDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 54)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mAttribute_mConstantName, object->mAttribute_mTypeName COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 56)) ;
    }
  }
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), object->mAttribute_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 58)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalConstantDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                              categoryMethod_globalConstantDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInPrecedenceGraph (defineCategoryMethod_globalConstantDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@globalConstantDeclaration keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_globalConstantDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mAttribute_mConstantName.getter_string (SOURCE_FILE ("global-constant-declaration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 64)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_globalConstantDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                         extensionGetter_globalConstantDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_keyRepresentation (defineCategoryGetter_globalConstantDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@globalConstantDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                     const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_constantType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_constantType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("global-constant-declaration.galgas", 87)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, var_constantType COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 89)) ;
    }
  }
  GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("global-constant-declaration.galgas", 92)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("global-constant-declaration.galgas", 93)) ;
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("global-constant-declaration.galgas", 94)) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("global-constant-declaration.galgas", 96)), var_constantType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-constant-declaration.galgas", 99)), GALGAS_bool (true), var_temporaries, ioArgument_ioGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 95)) ;
  {
  routine_checkAssignmentCompatibility (var_expressionResult, var_constantType, object->mAttribute_mConstantName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 108)) ;
  }
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList.getter_length (SOURCE_FILE ("global-constant-declaration.galgas", 114)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = extensionGetter_isStatic (var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 114)).operator_not (SOURCE_FILE ("global-constant-declaration.galgas", 114)) ;
  }
  const enumGalgasBool test_2 = test_1.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mConstantName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 115)) ;
  }
  {
  GALGAS_unifiedTypeMap_2D_proxy temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_constantType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("global-constant-declaration.galgas", 120)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = var_expressionResult.mAttribute_mType ;
  }else if (kBoolFalse == test_5) {
    temp_4 = var_constantType ;
  }
  ioArgument_ioContext.mAttribute_mGlobalConstantMap.setter_insertKey (object->mAttribute_mConstantName, temp_4, var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 118)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalConstantDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                      categoryMethod_globalConstantDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInContext (defineCategoryMethod_globalConstantDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@globalConstantDeclaration initAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                   GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalConstantDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                    categoryMethod_globalConstantDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_initAnalysis (defineCategoryMethod_globalConstantDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@globalConstantDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_valueIR var_expressionGeneratedCode ;
  constinArgument_inContext.mAttribute_mGlobalConstantMap.method_searchKey (object->mAttribute_mConstantName, var_type, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 138)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap.setter_insertKey (object->mAttribute_mConstantName, var_type, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 143)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalConstantDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                        categoryMethod_globalConstantDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_semanticAnalysis (defineCategoryMethod_globalConstantDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category getter '@integerDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_integerDeclaration_location (const cPtr_abstractDeclaration * /* inObject */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_integerDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                extensionGetter_integerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_location (defineCategoryGetter_integerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@integerDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName = callCategoryGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 75)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 75)) ;
  {
  const GALGAS_integerDeclaration temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 76)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 77)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 77)) COMMA_SOURCE_FILE ("type-integer.galgas", 77)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName, function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 78)) COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                              categoryMethod_integerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInPrecedenceGraph (defineCategoryMethod_integerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@integerDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (callCategoryGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_integerDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                         extensionGetter_integerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_keyRepresentation (defineCategoryGetter_integerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@integerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName = callCategoryGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 96)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 96)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  const enumGalgasBool test_1 = object->mAttribute_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_min = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 101)).left_shift_operation (object->mAttribute_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 101)) COMMA_SOURCE_FILE ("type-integer.galgas", 101)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 101)) ;
    var_max = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 102)).left_shift_operation (object->mAttribute_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 102)) COMMA_SOURCE_FILE ("type-integer.galgas", 102)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 102)) ;
  }else if (kBoolFalse == test_1) {
    var_min = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 104)) ;
    var_max = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 105)).left_shift_operation (object->mAttribute_mSize COMMA_SOURCE_FILE ("type-integer.galgas", 105)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 105)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (var_integerTypeName, GALGAS_typeKind::constructor_integer (var_min, var_max, object->mAttribute_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 110)), object->mAttribute_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 110)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 111)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 112)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-integer.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 108)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName, object->mAttribute_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 119)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName, object->mAttribute_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 125)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName, object->mAttribute_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                      categoryMethod_integerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInContext (defineCategoryMethod_integerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@integerDeclaration initAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                            GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                    categoryMethod_integerDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_initAnalysis (defineCategoryMethod_integerDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@integerDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                        categoryMethod_integerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_semanticAnalysis (defineCategoryMethod_integerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@infixObjectObjectOperatorDescription generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                           const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                           const GALGAS_location constinArgument_inOperatorLocation,
                                                                                           const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                           GALGAS_operandIR & outArgument_outResult,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  {
  routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 308)) ;
  }
  {
  categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 310)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription.mSlotID,
                                                 categoryMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (defineCategoryMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@integerObject_literal_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                GALGAS_operandIR & outArgument_outResult,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_literalValue ;
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 465)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_17588 ; // Joker input parameter
  GALGAS_uint joker_17600 ; // Joker input parameter
  constinArgument_inLeftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 466)).method_integer (var_min, var_max, joker_17588, joker_17600, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 466)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 468)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 468))  COMMA_SOURCE_FILE ("type-integer.galgas", 468)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 470)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 470))  COMMA_SOURCE_FILE ("type-integer.galgas", 470)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 472)) ;
      }
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 473)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator.mSlotID,
                                                 categoryMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (defineCategoryMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@integerObject_literal_divisionOperator generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                   const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                   const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                   GALGAS_operandIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_divisionOperator * object = (const cPtr_integerObject_5F_literal_5F_divisionOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_divisionOperator) ;
  GALGAS_bigint var_literalValue ;
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 502)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_19126 ; // Joker input parameter
  GALGAS_uint joker_19138 ; // Joker input parameter
  constinArgument_inLeftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 503)).method_integer (var_min, var_max, joker_19126, joker_19138, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 503)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 505)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 505))  COMMA_SOURCE_FILE ("type-integer.galgas", 505)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 507)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 507))  COMMA_SOURCE_FILE ("type-integer.galgas", 507)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_literalValue.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 508)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("division by zero")  COMMA_SOURCE_FILE ("type-integer.galgas", 509)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        {
        routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 511)) ;
        }
        {
        categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 512)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_divisionOperator.mSlotID,
                                                 categoryMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode (defineCategoryMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@literal_integerObject_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                GALGAS_operandIR & outArgument_outResult,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue ;
  constinArgument_inLeftOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 668)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_25350 ; // Joker input parameter
  GALGAS_uint joker_25362 ; // Joker input parameter
  constinArgument_inRightOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 669)).method_integer (var_min, var_max, joker_25350, joker_25362, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 669)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 671)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 671))  COMMA_SOURCE_FILE ("type-integer.galgas", 671)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 673)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 673))  COMMA_SOURCE_FILE ("type-integer.galgas", 673)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 675)) ;
      }
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inRightOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 676)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator.mSlotID,
                                                 categoryMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (defineCategoryMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@literalIntegerDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalIntegerDeclaration_location (const cPtr_abstractDeclaration * /* inObject */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 11)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_literalIntegerDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                extensionGetter_literalIntegerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_location (defineCategoryGetter_literalIntegerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@literalIntegerDeclaration enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclaration * object = (const cPtr_literalIntegerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclaration) ;
  GALGAS_lstring var_literalIntegerTypeName = function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 21)) ;
  {
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalIntegerTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalIntegerTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 23)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 23)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 23)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                              categoryMethod_literalIntegerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInPrecedenceGraph (defineCategoryMethod_literalIntegerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@literalIntegerDeclaration keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalIntegerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * /* inObject */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_literalIntegerDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                         extensionGetter_literalIntegerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_keyRepresentation (defineCategoryGetter_literalIntegerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@literalIntegerDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerDeclaration_enterInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                     const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName = function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 41)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 41)) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (var_integerTypeName, GALGAS_typeKind::constructor_literalInteger (SOURCE_FILE ("type-literal-integer.galgas", 45)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-literal-integer.galgas", 46)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-literal-integer.galgas", 47)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-literal-integer.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 43)) ;
  }
  {
  routine_enterLiteralIntegerOperators (var_integerTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 54)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                      categoryMethod_literalIntegerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInContext (defineCategoryMethod_literalIntegerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@literalIntegerDeclaration initAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                   GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                    categoryMethod_literalIntegerDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_initAnalysis (defineCategoryMethod_literalIntegerDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@literalIntegerDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                        categoryMethod_literalIntegerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_semanticAnalysis (defineCategoryMethod_literalIntegerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@literal_literal_integerInfixOperation generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                  GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                  GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                  const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                  const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                  const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                  GALGAS_operandIR & outArgument_outResult,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue ;
  constinArgument_inLeftOperand.mAttribute_mValue.method_literalInteger (var_leftValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 244)) ;
  GALGAS_bigint var_rightValue ;
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 245)) ;
  GALGAS_bigint var_result ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_literalIntegerInfixOperator::kNotBuilt:
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_equal:
    {
      var_result = GALGAS_bool (kIsEqual, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 248)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_nonEqual:
    {
      var_result = GALGAS_bool (kIsNotEqual, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 249)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_strictInf:
    {
      var_result = GALGAS_bool (kIsStrictInf, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 250)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_infEqual:
    {
      var_result = GALGAS_bool (kIsInfOrEqual, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 251)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_strictSup:
    {
      var_result = GALGAS_bool (kIsStrictSup, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 252)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_supEqual:
    {
      var_result = GALGAS_bool (kIsSupOrEqual, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 253)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_and:
    {
      var_result = var_leftValue.operator_and (var_rightValue COMMA_SOURCE_FILE ("type-literal-integer.galgas", 254)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_ior:
    {
      var_result = var_leftValue.operator_or (var_rightValue COMMA_SOURCE_FILE ("type-literal-integer.galgas", 255)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_xor:
    {
      var_result = var_leftValue.operator_xor (var_rightValue COMMA_SOURCE_FILE ("type-literal-integer.galgas", 256)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_add:
    {
      var_result = var_leftValue.add_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 257)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_sub:
    {
      var_result = var_leftValue.substract_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 258)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_mul:
    {
      var_result = var_leftValue.multiply_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 259)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_div:
    {
      var_result = var_leftValue.divide_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 260)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_rem:
    {
      var_result = var_leftValue.modulo_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 261)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_leftShift:
    {
      var_result = var_leftValue.left_shift_operation (var_rightValue.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 262)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 262)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_rightShift:
    {
      var_result = var_leftValue.right_shift_operation (var_rightValue.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 263)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 263)) ;
    }
    break ;
  }
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inResultType, GALGAS_valueIR::constructor_literalInteger (var_result  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 265))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 265)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                 categoryMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineCategoryMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category getter '@literalStringDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalStringDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outLocation = object->mAttribute_mLiteralStringTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_literalStringDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                extensionGetter_literalStringDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclaration_location (defineCategoryGetter_literalStringDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalStringDeclaration enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  {
  const GALGAS_literalStringDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mLiteralStringTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mAttribute_mLiteralStringTypeName, GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                              categoryMethod_literalStringDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterInPrecedenceGraph (defineCategoryMethod_literalStringDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@literalStringDeclaration keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalStringDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mAttribute_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_literalStringDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                         extensionGetter_literalStringDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclaration_keyRepresentation (defineCategoryGetter_literalStringDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@literalStringDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                    const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_uint_38_Type ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 41)), var_uint_38_Type COMMA_SOURCE_FILE ("type-static-string.galgas", 41)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mLiteralStringTypeName, GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("type-static-string.galgas", 45)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 46)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 47)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), var_uint_38_Type, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 43)) ;
  }
  {
  routine_enterStaticStringOperators (object->mAttribute_mLiteralStringTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 54)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                      categoryMethod_literalStringDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterInContext (defineCategoryMethod_literalStringDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@literalStringDeclaration initAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                  GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                    categoryMethod_literalStringDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_initAnalysis (defineCategoryMethod_literalStringDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@literalStringDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                      const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                        categoryMethod_literalStringDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_semanticAnalysis (defineCategoryMethod_literalStringDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category getter '@registerDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_registerDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  result_outLocation = object->mAttribute_mRegisterTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_registerDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                extensionGetter_registerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_registerDeclaration_location (defineCategoryGetter_registerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@registerDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  {
  const GALGAS_registerDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mRegisterDeclarationList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 107)), temp_0, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 107)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mAttribute_mRegisterDeclarationList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 108)), object->mAttribute_mRegisterTypeName COMMA_SOURCE_FILE ("register-declaration.galgas", 108)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                              categoryMethod_registerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerDeclaration_enterInPrecedenceGraph (defineCategoryMethod_registerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@registerDeclaration keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_registerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  result_outRepresentation = GALGAS_string ("register ").add_operation (object->mAttribute_mRegisterDeclarationList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 114)).getter_string (SOURCE_FILE ("register-declaration.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 114)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_registerDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                         extensionGetter_registerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_registerDeclaration_keyRepresentation (defineCategoryGetter_registerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@registerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                               const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, var_registerType COMMA_SOURCE_FILE ("register-declaration.galgas", 159)) ;
  }
  GALGAS_registerFieldMap var_registerFieldMap = GALGAS_registerFieldMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 161)) ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap = GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 162)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mRegisterBitSliceList.getter_length (SOURCE_FILE ("register-declaration.galgas", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_registerBitSliceList enumerator_6572 (object->mAttribute_mRegisterBitSliceList, kEnumeration_down) ;
    while (enumerator_6572.hasCurrentObject ()) {
      switch (enumerator_6572.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_registerBitSlice::kNotBuilt:
        break ;
      case GALGAS_registerBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_registerBitSlice_unusedBits * extractPtr_6701 = (const cEnumAssociatedValues_registerBitSlice_unusedBits *) (enumerator_6572.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_6701->mAssociatedValue0 ;
          var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 168)) ;
        }
        break ;
      case GALGAS_registerBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_registerBitSlice_namedBit * extractPtr_7548 = (const cEnumAssociatedValues_registerBitSlice_namedBit *) (enumerator_6572.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_7548->mAssociatedValue0 ;
          const GALGAS_lbigint extractedValue_count = extractPtr_7548->mAssociatedValue1 ;
          GALGAS_uint var_bitCount = extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 170)) ;
          {
          var_registerFieldMap.setter_insertKey (extractedValue_name, var_shiftCount, var_bitCount, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 171)) ;
          }
          GALGAS_registerBitSliceAccessMap var_registerSubMap = GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 176)) ;
          {
          var_registerSubMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("shift"), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("register-declaration.galgas", 178)), GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("register-declaration.galgas", 179)), var_shiftCount.getter_bigint (SOURCE_FILE ("register-declaration.galgas", 180)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 181)), var_registerType, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 177)) ;
          }
          {
          var_registerSubMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("register-declaration.galgas", 185)), GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("register-declaration.galgas", 186)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 187)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 188)), ioArgument_ioContext.mAttribute_mBooleanType, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 184)) ;
          }
          GALGAS_bigint var_mask = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 191)).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("register-declaration.galgas", 191)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 191)).left_shift_operation (var_shiftCount COMMA_SOURCE_FILE ("register-declaration.galgas", 191)) ;
          {
          var_registerBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("register-declaration.galgas", 194)), var_mask, var_registerSubMap, var_registerType, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 192)) ;
          }
          var_shiftCount = var_shiftCount.add_operation (var_bitCount, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 199)) ;
        }
        break ;
      }
      enumerator_6572.gotoNextObject () ;
    }
  }
  cEnumerator_registerDeclarationList enumerator_7616 (object->mAttribute_mRegisterDeclarationList, kEnumeration_up) ;
  while (enumerator_7616.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7704 (enumerator_7616.current_mAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_7704.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_7704.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_7704.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("only @ro attribute (read only) is accepted here")  COMMA_SOURCE_FILE ("register-declaration.galgas", 209)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = var_isReadOnly.boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_7704.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("register-declaration.galgas", 211)) ;
        }else if (kBoolFalse == test_3) {
          var_isReadOnly = GALGAS_bool (true) ;
        }
      }
      enumerator_7704.gotoNextObject () ;
    }
    {
    ioArgument_ioContext.mAttribute_mRegisterMap.setter_insertKey (enumerator_7616.current_mRegisterName (HERE), var_registerType, var_isReadOnly, var_registerBitSliceMap, var_registerFieldMap, enumerator_7616.current_mRegisterAddress (HERE).mAttribute_bigint, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 216)) ;
    }
    enumerator_7616.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                      categoryMethod_registerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerDeclaration_enterInContext (defineCategoryMethod_registerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@registerDeclaration initAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                             GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                    categoryMethod_registerDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerDeclaration_initAnalysis (defineCategoryMethod_registerDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@registerDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 241)) ;
  switch (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 242)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      GALGAS_location location_0 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 243)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      GALGAS_location location_1 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 244)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_9975 = (const cEnumAssociatedValues_typeKind_integer *) (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 242)).unsafePointer ()) ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_9975->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_size = extractPtr_9975->mAssociatedValue3 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mRegisterBitSliceList.getter_length (SOURCE_FILE ("register-declaration.galgas", 246)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = extractedValue_unsigned.operator_not (SOURCE_FILE ("register-declaration.galgas", 247)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the register type should be unsigned in order to define bit slices")  COMMA_SOURCE_FILE ("register-declaration.galgas", 248)) ;
        }
        GALGAS_uint var_shiftCount = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_registerBitSliceList enumerator_9563 (object->mAttribute_mRegisterBitSliceList, kEnumeration_down) ;
        while (enumerator_9563.hasCurrentObject ()) {
          switch (enumerator_9563.current_mRegisterBitSlice (HERE).enumValue ()) {
          case GALGAS_registerBitSlice::kNotBuilt:
            break ;
          case GALGAS_registerBitSlice::kEnum_unusedBits:
            {
              const cEnumAssociatedValues_registerBitSlice_unusedBits * extractPtr_9698 = (const cEnumAssociatedValues_registerBitSlice_unusedBits *) (enumerator_9563.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
              const GALGAS_lbigint extractedValue_count = extractPtr_9698->mAssociatedValue0 ;
              var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 254)) ;
            }
            break ;
          case GALGAS_registerBitSlice::kEnum_namedBit:
            {
              const cEnumAssociatedValues_registerBitSlice_namedBit * extractPtr_9797 = (const cEnumAssociatedValues_registerBitSlice_namedBit *) (enumerator_9563.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
              const GALGAS_lbigint extractedValue_count = extractPtr_9797->mAssociatedValue1 ;
              var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 256)) ;
            }
            break ;
          }
          enumerator_9563.gotoNextObject () ;
        }
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, extractedValue_size.objectCompare (var_shiftCount)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount.getter_string (SOURCE_FILE ("register-declaration.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 260)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 260)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("register-declaration.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 260)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 260))  COMMA_SOURCE_FILE ("register-declaration.galgas", 260)) ;
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_7 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("a literal string type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 263)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_8 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_8, GALGAS_string ("a structure type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 264)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_9 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_9, GALGAS_string ("an enumeration type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 265)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalInteger:
    {
      GALGAS_location location_10 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_10, GALGAS_string ("a literal integer type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 266)) ;
    }
    break ;
  }
  GALGAS_bigint var_maxAddress = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 269)).left_shift_operation (constinArgument_inContext.mAttribute_mPointerSize COMMA_SOURCE_FILE ("register-declaration.galgas", 269)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 269)) ;
  cEnumerator_registerDeclarationList enumerator_10513 (object->mAttribute_mRegisterDeclarationList, kEnumeration_up) ;
  while (enumerator_10513.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, enumerator_10513.current_mRegisterAddress (HERE).mAttribute_bigint.objectCompare (var_maxAddress)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_location location_12 (enumerator_10513.current_mRegisterAddress (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_12, GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxAddress.getter_hexString (SOURCE_FILE ("register-declaration.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 272))  COMMA_SOURCE_FILE ("register-declaration.galgas", 272)) ;
    }
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mRegisterMap.setter_insertKey (enumerator_10513.current_mRegisterName (HERE), object->mAttribute_mRegisterTypeName.mAttribute_string, enumerator_10513.current_mRegisterAddress (HERE).mAttribute_bigint, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 275)) ;
    }
    enumerator_10513.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                        categoryMethod_registerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerDeclaration_semanticAnalysis (defineCategoryMethod_registerDeclaration_semanticAnalysis, NULL) ;

