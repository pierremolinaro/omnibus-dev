#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


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
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_617 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_617->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_617->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_617->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 10)) ;
      }
      {
      categoryModifier_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name.mAttribute_string, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_896 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_896->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_896->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isVolatile = extractPtr_896->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 17)) ;
      }
      {
      categoryModifier_appendLoadGlobalVariable (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name, extractedValue_isVolatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 18)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_1126 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1126->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1126->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 24)) ;
      }
      {
      categoryModifier_appendLoadLocalVariable (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 25)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_1219 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIR extractedValue_value = extractPtr_1219->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1219->mAssociatedValue1 ;
      outArgument_outResultingValue = extractedValue_value ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_1723 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_1723->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_1723->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fieldType = extractPtr_1723->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_1723->mAssociatedValue3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 41)), GALGAS_string ("@objectInMemoryIR loadFromMemory:fieldAccess")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 41)) ;
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
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_2200 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2200->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_registerName = extractPtr_2200->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_2200->mAssociatedValue2 ;
      {
      categoryModifier_appendStoreVolatileRegister (ioArgument_ioInstructionGenerationList, extractedValue_registerName.mAttribute_string, extractedValue_type, extractedValue_address, inArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 53)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_2387 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2387->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_2387->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isVolatile = extractPtr_2387->mAssociatedValue2 ;
      {
      categoryModifier_appendStoreGlobalVariable (ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_type, inArgument_inValue, extractedValue_isVolatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 55)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_2531 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2531->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_2531->mAssociatedValue1 ;
      {
      categoryModifier_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_type, inArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 57)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 59)), GALGAS_string ("<<@objectInMemoryIR storeInMemory globalConstant>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 59)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_2848 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_2848->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_2848->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fielfType = extractPtr_2848->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_2848->mAssociatedValue3 ;
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
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_772 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_772->mAssociatedValue1 ;
      result_outResult = function_llvmNameForRegister (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 10)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_865 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_865->mAssociatedValue1 ;
      result_outResult = function_llvmNameForGlobalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 12)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_951 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_951->mAssociatedValue1 ;
      result_outResult = function_llvmNameForLocalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 14)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_1042 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1042->mAssociatedValue1 ;
      result_outResult = function_llvmNameForGlobalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 16)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_fieldAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_fieldAccess * extractPtr_1318 = (const cEnumAssociatedValues_objectInMemoryIR_fieldAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_objectType = extractPtr_1318->mAssociatedValue0 ;
      const GALGAS_string extractedValue_objectName = extractPtr_1318->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_fielfType = extractPtr_1318->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_fieldIndex = extractPtr_1318->mAssociatedValue3 ;
      result_outResult = GALGAS_string ("<<@objectInMemoryIR mangledName:fieldAccess>>") ;
    }
    break ;
  }
//---
  return result_outResult ;
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

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_operandIR & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_operandIR & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalConstantMap_2D_element (inOperand0, inOperand1) ;
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
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValue.drop () ;
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
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_globalConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
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
//                                                                                                                     *
//                             Category method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVM (const GALGAS_globalVariableMapIR_2D_element inObject,
                                  GALGAS_string & ioArgument_ioLLVMcode,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_llvmNameForGlobalVariable (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 308)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(inObject.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 309)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 309)) ;
  GALGAS_string var_initialString = extensionGetter_llvmName (inObject.mAttribute_mInitialValue, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 310)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 312)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_initialString, inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 314)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 316)) ;
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
//                            Overriding category method '@booleanDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                            GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                            GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  const GALGAS_booleanDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                    categoryMethod_booleanDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_addExtension (defineCategoryMethod_booleanDeclaration_addExtension, NULL) ;

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
  GALGAS_lstring var_boolTypeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mBooleanTypeName.getter_string (SOURCE_FILE ("bool-type.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 34)), object->mAttribute_mBooleanTypeName.mAttribute_location  COMMA_SOURCE_FILE ("bool-type.galgas", 34)) ;
  {
  const GALGAS_booleanDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_boolTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 35)) ;
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
//                 Overriding category getter '@booleanDeclaration keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outRepresentation = GALGAS_string ("bool $").add_operation (object->mAttribute_mBooleanTypeName.getter_string (SOURCE_FILE ("bool-type.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 41)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_booleanDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                                          extensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_booleanDeclaration_keyRepresentationForErrorSignaling, NULL) ;

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
  cEnumerator_lstringlist enumerator_2813 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2813.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2813.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("bool-type.galgas", 57)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_2813.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("bool-type.galgas", 58)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }
    enumerator_2813.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mBooleanTypeName, GALGAS_string ("i1"), GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("bool-type.galgas", 67)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 68)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 69)), GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 70)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("bool-type.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 64)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.mAttribute_mBooleanType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("bool-type.galgas", 77)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mBooleanTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("Boolean type already defined")  COMMA_SOURCE_FILE ("bool-type.galgas", 78)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("bool-type.galgas", 80)) ;
  ioArgument_ioContext.mAttribute_mBooleanType = var_boolType ;
  {
  routine_enterBooleanOperators (object->mAttribute_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("bool-type.galgas", 83)) ;
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
//                          Overriding category method '@pointerSizeDeclaration addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pointerSizeDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pointerSizeDeclaration * object = (const cPtr_pointerSizeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_pointerSizeDeclaration) ;
  const GALGAS_pointerSizeDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pointerSizeDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                    categoryMethod_pointerSizeDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pointerSizeDeclaration_addExtension (defineCategoryMethod_pointerSizeDeclaration_addExtension, NULL) ;

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
  GALGAS_lstring var_name = GALGAS_string ("pointer size ").add_operation (object->mAttribute_mSize.mAttribute_bigint.getter_string (SOURCE_FILE ("pointer-size.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 51)).getter_nowhere (SOURCE_FILE ("pointer-size.galgas", 51)) ;
  {
  const GALGAS_pointerSizeDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_name, temp_0, inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 52)) ;
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
//               Overriding category getter '@pointerSizeDeclaration keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_pointerSizeDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_pointerSizeDeclaration * object = (const cPtr_pointerSizeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_pointerSizeDeclaration) ;
  result_outRepresentation = GALGAS_string ("pointer size ").add_operation (object->mAttribute_mSize.mAttribute_bigint.getter_string (SOURCE_FILE ("pointer-size.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 58)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_pointerSizeDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                                          extensionGetter_pointerSizeDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_pointerSizeDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_pointerSizeDeclaration_keyRepresentationForErrorSignaling, NULL) ;

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
  ioArgument_ioContext.mAttribute_mPointerSize = object->mAttribute_mSize.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 70)) ;
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
//                             Overriding category method '@modeDeclaration addExtension'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                         GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                         GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  const GALGAS_modeDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modeDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                    categoryMethod_modeDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modeDeclaration_addExtension (defineCategoryMethod_modeDeclaration_addExtension, NULL) ;

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
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mModeName, temp_0, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 59)) ;
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
//                  Overriding category getter '@modeDeclaration keyRepresentationForErrorSignaling'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_modeDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  result_outRepresentation = GALGAS_string ("mode ").add_operation (object->mAttribute_mModeName.getter_string (SOURCE_FILE ("mode-declaration.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 65)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_modeDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                                          extensionGetter_modeDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_modeDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_modeDeclaration_keyRepresentationForErrorSignaling, NULL) ;

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
  ioArgument_ioContext.mAttribute_mModeMap.setter_insertKey (object->mAttribute_mModeName, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 77)) ;
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
//                          Overriding category method '@enumerationDeclaration addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  const GALGAS_enumerationDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumerationDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                    categoryMethod_enumerationDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_addExtension (defineCategoryMethod_enumerationDeclaration_addExtension, NULL) ;

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
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 72)), object->mAttribute_mEnumerationName.mAttribute_location  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 72)) ;
  {
  const GALGAS_enumerationDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 73)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName, GALGAS_string ("$").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 74)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 74)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 74)) ;
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
//               Overriding category getter '@enumerationDeclaration keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outRepresentation = GALGAS_string ("enum $").add_operation (object->mAttribute_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                                          extensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_enumerationDeclaration_keyRepresentationForErrorSignaling, NULL) ;

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
  GALGAS_enumConstantMap var_enumConstantMap = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
  GALGAS_typedConstantMap var_constructorMap = GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 111)) ;
  cEnumerator_lstringlist enumerator_4645 (object->mAttribute_mCaseNameList, kEnumeration_up) ;
  while (enumerator_4645.hasCurrentObject ()) {
    GALGAS_uint var_idx = var_enumConstantMap.getter_count (SOURCE_FILE ("type-enumeration-declaration.galgas", 113)) ;
    {
    var_enumConstantMap.setter_insertKey (enumerator_4645.current_mValue (HERE), var_idx, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 114)) ;
    }
    {
    var_constructorMap.setter_insertKey (enumerator_4645.current_mValue (HERE), GALGAS_valueIR::constructor_literalInteger (var_idx.getter_bigint (SOURCE_FILE ("type-enumeration-declaration.galgas", 115))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
    }
    enumerator_4645.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mEnumerationName, GALGAS_string ("i").add_operation (var_enumConstantMap.getter_count (SOURCE_FILE ("type-enumeration-declaration.galgas", 119)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 119)).getter_significantBitCount (SOURCE_FILE ("type-enumeration-declaration.galgas", 119)).getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 119)), GALGAS_typeKind::constructor_enumeration (var_enumConstantMap  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 120)), var_constructorMap, GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 122)), GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enumeration-declaration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)) ;
  }
  {
  routine_enterEnumerationOperators (object->mAttribute_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)) ;
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
//                           Overriding category method '@structureDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                              GALGAS_extensionDeclarationListAST & ioArgument_ioExtensionDeclarationListAST,
                                                              GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  const GALGAS_structureDeclaration temp_0 = object ;
  GALGAS_structureDeclaration var_newDeclaration = temp_0 ;
  GALGAS_extensionDeclarationListAST var_currentExtensionDeclarationListAST = ioArgument_ioExtensionDeclarationListAST ;
  ioArgument_ioExtensionDeclarationListAST = GALGAS_extensionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 88)) ;
  cEnumerator_extensionDeclarationListAST enumerator_3496 (var_currentExtensionDeclarationListAST, kEnumeration_up) ;
  while (enumerator_3496.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mStructureName.mAttribute_string.objectCompare (enumerator_3496.current_mTypeName (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_newDeclaration = GALGAS_structureDeclaration::constructor_new (var_newDeclaration.getter_mStructureName (SOURCE_FILE ("type-structure-declaration.galgas", 92)), var_newDeclaration.getter_mAttributeList (SOURCE_FILE ("type-structure-declaration.galgas", 93)), var_newDeclaration.getter_mStructureFieldListAST (SOURCE_FILE ("type-structure-declaration.galgas", 94)).add_operation (enumerator_3496.current_mFieldList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 94)), var_newDeclaration.getter_mProcedureDeclarationListAST (SOURCE_FILE ("type-structure-declaration.galgas", 95)).add_operation (enumerator_3496.current_mProcedureDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 95)), var_newDeclaration.getter_mFunctionDeclarationListAST (SOURCE_FILE ("type-structure-declaration.galgas", 96)).add_operation (enumerator_3496.current_mFunctionDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 96))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 91)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioExtensionDeclarationListAST.addAssign_operation (enumerator_3496.current_mTypeName (HERE), enumerator_3496.current_mProcedureDeclarationListAST (HERE), enumerator_3496.current_mFieldList (HERE), enumerator_3496.current_mFunctionDeclarationListAST (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 99)) ;
    }
    enumerator_3496.gotoNextObject () ;
  }
  outArgument_outNewDeclaration = var_newDeclaration ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                    categoryMethod_structureDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_addExtension (defineCategoryMethod_structureDeclaration_addExtension, NULL) ;

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
  GALGAS_lstring var_structureTypeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 112)), object->mAttribute_mStructureName.mAttribute_location  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 112)) ;
  {
  const GALGAS_structureDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_structureTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 113)) ;
  }
  cEnumerator_structureFieldListAST enumerator_4681 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_4681.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_4681.current_mFieldTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_4681.current_mFieldTypeName (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)), enumerator_4681.current_mFieldTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_structureTypeName, var_typeName COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 117)) ;
      }
      callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_4681.current_mInitExpression (HERE).ptr (), var_structureTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 118)) ;
    }
    enumerator_4681.gotoNextObject () ;
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
//                Overriding category getter '@structureDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structureDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outRepresentation = GALGAS_string ("struct $").add_operation (object->mAttribute_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 126)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_structureDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                                          extensionGetter_structureDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_structureDeclaration_keyRepresentationForErrorSignaling, NULL) ;

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
  cEnumerator_lstringlist enumerator_6461 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_6461.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_6461.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 158)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_6461.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 159)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_3 (enumerator_6461.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 163)) ;
    }
    enumerator_6461.gotoNextObject () ;
  }
  GALGAS_propertyList var_propertyList = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 167)) ;
  GALGAS_propertyMap var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  cEnumerator_structureFieldListAST enumerator_6774 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_6774.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_fieldTypeNameProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6774.current_mFieldTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 170)) ;
    var_propertyList.addAssign_operation (enumerator_6774.current_mFieldName (HERE).mAttribute_string, var_fieldTypeNameProxy  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 171)) ;
    {
    var_propertyMap.setter_insertKey (enumerator_6774.current_mFieldName (HERE), var_fieldTypeNameProxy, var_propertyMap.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 172)) ;
    }
    enumerator_6774.gotoNextObject () ;
  }
  GALGAS_procedureMap var_procedureMap = GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 175)) ;
  cEnumerator_procedureDeclarationListAST enumerator_7122 (object->mAttribute_mProcedureDeclarationListAST, kEnumeration_up) ;
  while (enumerator_7122.hasCurrentObject ()) {
    GALGAS_procedureSignature var_signature = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
    cEnumerator_procFormalArgumentList enumerator_7271 (enumerator_7122.current (HERE).mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
    while (enumerator_7271.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_7271.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
      var_signature.addAssign_operation (enumerator_7271.current_mFormalArgumentPassingMode (HERE), enumerator_7271.current_mSelector (HERE).mAttribute_string, var_typeProxy  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 180)) ;
      enumerator_7271.gotoNextObject () ;
    }
    GALGAS_modeMap var_procedureModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 183)) ;
    cEnumerator_lstringlist enumerator_7555 (enumerator_7122.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
    while (enumerator_7555.hasCurrentObject ()) {
      ioArgument_ioContext.mAttribute_mModeMap.method_searchKey (enumerator_7555.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 185)) ;
      {
      var_procedureModeMap.setter_insertKey (enumerator_7555.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 186)) ;
      }
      enumerator_7555.gotoNextObject () ;
    }
    {
    var_procedureMap.setter_insertKey (enumerator_7122.current (HERE).mAttribute_mProcedureName, enumerator_7122.current (HERE).mAttribute_mMutating, var_procedureModeMap, var_signature, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 188)) ;
    }
    enumerator_7122.gotoNextObject () ;
  }
  GALGAS_functionMap var_functionMap = GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 197)) ;
  cEnumerator_functionDeclarationListAST enumerator_7925 (object->mAttribute_mFunctionDeclarationListAST, kEnumeration_up) ;
  while (enumerator_7925.hasCurrentObject ()) {
    GALGAS_funcSignature var_signature = GALGAS_funcSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 199)) ;
    cEnumerator_funcFormalArgumentList enumerator_8042 (enumerator_7925.current (HERE).mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
    while (enumerator_8042.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_8042.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 201)) ;
      var_signature.addAssign_operation (enumerator_8042.current_mSelector (HERE), var_typeProxy  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 202)) ;
      enumerator_8042.gotoNextObject () ;
    }
    GALGAS_modeMap var_functionModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 205)) ;
    cEnumerator_lstringlist enumerator_8284 (enumerator_7925.current (HERE).mAttribute_mFunctionModeList, kEnumeration_up) ;
    while (enumerator_8284.hasCurrentObject ()) {
      {
      var_functionModeMap.setter_insertKey (enumerator_8284.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 207)) ;
      }
      enumerator_8284.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_7925.current (HERE).mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 210)) ;
    {
    var_functionMap.setter_insertKey (enumerator_7925.current (HERE).mAttribute_mFunctionName, var_functionModeMap, var_signature, var_resultType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 212)) ;
    }
    enumerator_7925.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mStructureName, GALGAS_string ("%struct.").add_operation (object->mAttribute_mStructureName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 222)), GALGAS_typeKind::constructor_structure (var_propertyMap, var_propertyList  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 223)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 224)), var_procedureMap, var_functionMap, var_copiable, GALGAS_bool (false), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 220)) ;
  }
  GALGAS_staticStringMap var_globalLiteralStringMap = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 233)) ;
  GALGAS_operandIRList var_operandIRList = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 234)) ;
  cEnumerator_structureFieldListAST enumerator_9188 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_9188.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy temp_4 ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_9188.current_mFieldTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 238)) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_9188.current_mFieldTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 239)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_fieldType = temp_4 ;
    GALGAS_instructionListIR var_initInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 242)) ;
    GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
    GALGAS_variableMap joker_9846 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 252)) ;
    GALGAS_operandIR var_expressionIR ;
    callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_9188.current_mInitExpression (HERE).ptr (), GALGAS_lstring::constructor_new (object->mAttribute_mStructureName.mAttribute_string.add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 245)), object->mAttribute_mStructureName.mAttribute_location  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 245)), var_fieldType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 248)), GALGAS_bool (false), var_temporaries, var_globalLiteralStringMap, joker_9846, var_initInstructionGenerationList, var_expressionIR, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 244)) ;
    const enumGalgasBool test_6 = extensionGetter_isStatic (var_expressionIR.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 256)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 256)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (enumerator_9188.current_mFieldName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("initialization expression cannot be computed statically")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 257)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_type ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_fieldType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 260)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_type = var_fieldType ;
    }else if (kBoolFalse == test_8) {
      var_type = var_expressionIR.mAttribute_mType ;
    }
    var_operandIRList.addAssign_operation (GALGAS_operandIR::constructor_new (var_type, var_expressionIR.mAttribute_mValue  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 265))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 265)) ;
    enumerator_9188.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mConstructorMap.setter_insertKey (object->mAttribute_mStructureName, var_operandIRList, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 267)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_structureType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mStructureName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 279)) ;
  GALGAS_propertyMap var_propertyMap ;
  switch (var_structureType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 281)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const cEnumAssociatedValues_typeKind_structure * extractPtr_11147 = (const cEnumAssociatedValues_typeKind_structure *) (var_structureType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 281)).unsafePointer ()) ;
      const GALGAS_propertyMap extractedValue_propMap = extractPtr_11147->mAssociatedValue0 ;
      var_propertyMap = extractedValue_propMap ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 283)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 285)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 287)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
    }
    break ;
  }
  cEnumerator_procedureDeclarationListAST enumerator_11459 (object->mAttribute_mProcedureDeclarationListAST, kEnumeration_up) ;
  while (enumerator_11459.hasCurrentObject ()) {
    GALGAS_lstring var_procNameForInvocationGraph = function_procNameForInvocationGraph (var_structureType, enumerator_11459.current (HERE).mAttribute_mProcedureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 293)) ;
    const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_procNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 294)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 294)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_procNameForInvocationGraph, enumerator_11459.current (HERE).mAttribute_mProcedureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 295)) ;
      }
    }
    GALGAS_stringset var_procedureModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 301)) ;
    cEnumerator_lstringlist enumerator_11963 (enumerator_11459.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
    while (enumerator_11963.hasCurrentObject ()) {
      constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_11963.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 303)) ;
      var_procedureModeSet.addAssign_operation (enumerator_11963.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 304)) ;
      enumerator_11963.gotoNextObject () ;
    }
    GALGAS_variableMap var_variableMap = function_initialVariableMap (function_procNameForInvocationGraph (var_structureType, enumerator_11459.current (HERE).mAttribute_mProcedureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 308)).mAttribute_string, constinArgument_inContext, var_procedureModeSet.getter_hasKey (GALGAS_string ("user") COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 310)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 307)) ;
    const enumGalgasBool test_1 = enumerator_11459.current (HERE).mAttribute_mMutating.boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      var_variableMap.setter_insertDefinedLocalVariable (GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 316))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 316)), var_structureType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_structureType, GALGAS_string ("self")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 319)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 321)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 315)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      var_variableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 327))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 327)), var_structureType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_structureType, GALGAS_string ("self")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 330)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 332)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 326)) ;
      }
    }
    GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 338)) ;
    var_formalArguments.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("type-structure-declaration.galgas", 339)), var_structureType, function_llvmNameForLocalVariable (GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339)) ;
    {
    routine_enterFormalArguments (constinArgument_inContext, enumerator_11459.current (HERE).mAttribute_mProcFormalArgumentList, var_variableMap, var_formalArguments, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)) ;
    }
    GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 347)) ;
    categoryMethod_analyzeRoutineInstructionList (enumerator_11459.current (HERE).mAttribute_mInstructionList, var_procNameForInvocationGraph, constinArgument_inContext, var_procedureModeSet, var_procedureModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 352)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 352)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 352)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)) ;
    var_variableMap.method_checkAutomatonStates (enumerator_11459.current (HERE).mAttribute_mEndOfProcLocation, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 358)) ;
    GALGAS_bool var_warnIfUnused = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_14112 (enumerator_11459.current (HERE).mAttribute_mProcedureAttributeList, kEnumeration_up) ;
    while (enumerator_14112.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_14112.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 362)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_warnIfUnused.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 363)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_14112.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 364)) ;
        }
        var_warnIfUnused = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_2) {
        GALGAS_location location_5 (enumerator_14112.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 368)) ;
      }
      enumerator_14112.gotoNextObject () ;
    }
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.setter_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mStructureName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 373)).add_operation (enumerator_11459.current (HERE).mAttribute_mProcedureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 373)), enumerator_11459.current (HERE).mAttribute_mProcedureName.mAttribute_location  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 373)), var_formalArguments, var_instructionGenerationList, GALGAS_bool (false), var_warnIfUnused, GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 372)) ;
    }
    enumerator_11459.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_14841 (object->mAttribute_mFunctionDeclarationListAST, kEnumeration_up) ;
  while (enumerator_14841.hasCurrentObject ()) {
    GALGAS_stringset var_functionModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 385)) ;
    cEnumerator_lstringlist enumerator_14942 (enumerator_14841.current (HERE).mAttribute_mFunctionModeList, kEnumeration_up) ;
    while (enumerator_14942.hasCurrentObject ()) {
      constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_14942.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 387)) ;
      var_functionModeSet.addAssign_operation (enumerator_14942.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388)) ;
      enumerator_14942.gotoNextObject () ;
    }
    GALGAS_bool var_warnIfUnused = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_15157 (enumerator_14841.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    while (enumerator_15157.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_15157.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 393)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const enumGalgasBool test_7 = var_warnIfUnused.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 394)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_location location_8 (enumerator_15157.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 395)) ;
        }
        var_warnIfUnused = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_6) {
        GALGAS_location location_9 (enumerator_15157.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_9, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 399)) ;
      }
      enumerator_15157.gotoNextObject () ;
    }
    GALGAS_variableMap var_variableMap = function_initialVariableMap (function_funcNameForInvocationGraph (var_structureType, enumerator_14841.current (HERE).mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 404)).mAttribute_string, constinArgument_inContext, var_functionModeSet.getter_hasKey (GALGAS_string ("user") COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 406)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 403)) ;
    {
    var_variableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)), var_structureType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_structureType, GALGAS_string ("self")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 414)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 416)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 410)) ;
    }
    GALGAS_lstring var_resultVarName = GALGAS_lstring::constructor_new (GALGAS_string ("result"), enumerator_14841.current (HERE).mAttribute_mResultTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_14841.current (HERE).mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)) ;
    {
    var_variableMap.setter_insertOutputFormalArgument (var_resultVarName, var_resultType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_resultType, var_resultVarName.mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 427)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 429)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)) ;
    }
    GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 434)) ;
    var_formalArguments.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("type-structure-declaration.galgas", 435)), var_structureType, function_llvmNameForLocalVariable (GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
    cEnumerator_funcFormalArgumentList enumerator_16774 (enumerator_14841.current (HERE).mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
    while (enumerator_16774.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_16774.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 437)) ;
      {
      var_variableMap.setter_insertConstantInputFormalArgument (enumerator_16774.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_16774.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 442)), var_typeProxy.getter_copiable (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 444)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 438)) ;
      }
      var_formalArguments.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-structure-declaration.galgas", 448)), var_typeProxy, function_llvmNameForLocalVariable (enumerator_16774.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 448))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 448)) ;
      enumerator_16774.gotoNextObject () ;
    }
    GALGAS_lstring var_routineNameForInvocationGraph = function_funcNameForInvocationGraph (var_structureType, enumerator_14841.current (HERE).mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 451)) ;
    const enumGalgasBool test_10 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 452)).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)) ;
      }
    }
    GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 459)) ;
    categoryMethod_analyzeRoutineInstructionList (enumerator_14841.current (HERE).mAttribute_mInstructionList, var_routineNameForInvocationGraph, constinArgument_inContext, var_functionModeSet, var_functionModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 464)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 460)) ;
    var_variableMap.method_checkAutomatonStates (enumerator_14841.current (HERE).mAttribute_mEndOfFuncLocation, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 471)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.setter_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mStructureName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 474)).add_operation (enumerator_14841.current (HERE).mAttribute_mFunctionName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 474)), enumerator_14841.current (HERE).mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 474)), var_formalArguments, var_instructionGenerationList, var_resultType, var_resultVarName.mAttribute_string, var_warnIfUnused, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 473)) ;
    }
    enumerator_14841.gotoNextObject () ;
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
//                             Overriding category getter '@typeAliasDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeAliasDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outLocation = object->mAttribute_mNewTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_typeAliasDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                extensionGetter_typeAliasDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeAliasDeclaration_location (defineCategoryGetter_typeAliasDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@typeAliasDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typeAliasDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                              GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                              GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typeAliasDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                    categoryMethod_typeAliasDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_addExtension (defineCategoryMethod_typeAliasDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@typeAliasDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typeAliasDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_lstring var_newTypeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mNewTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 57)), object->mAttribute_mNewTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-alias.galgas", 57)) ;
  GALGAS_lstring var_aliasedTypeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mAliasedTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 58)), object->mAttribute_mAliasedTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-alias.galgas", 58)) ;
  {
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 59)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName, var_aliasedTypeName COMMA_SOURCE_FILE ("type-alias.galgas", 60)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typeAliasDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                              categoryMethod_typeAliasDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterInPrecedenceGraph (defineCategoryMethod_typeAliasDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@typeAliasDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outRepresentation = GALGAS_string ("typealias $").add_operation (object->mAttribute_mNewTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 66)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                                          extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@typeAliasDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typeAliasDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                GALGAS_semanticContext & ioArgument_ioContext,
                                                                GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_string var_llvmTypeMane ;
  GALGAS_typeKind var_kind ;
  GALGAS_typedConstantMap var_typedConstantMap ;
  GALGAS_procedureMap var_procedureMap ;
  GALGAS_functionMap var_functionMap ;
  GALGAS_bool var_copiable ;
  GALGAS_bool var_equatable ;
  GALGAS_bool var_comparable ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumerationType ;
  ioArgument_ioContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAliasedTypeName, var_llvmTypeMane, var_kind, var_typedConstantMap, var_procedureMap, var_functionMap, var_copiable, var_equatable, var_comparable, var_enumerationType, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 79)) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mNewTypeName, var_llvmTypeMane, var_kind, var_typedConstantMap, var_procedureMap, var_functionMap, var_copiable, var_equatable, var_comparable, var_enumerationType, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 92)) ;
  }
  GALGAS_lstring var_newNewInfixKey = function_combineTypeNamesForInfixOperator (object->mAttribute_mNewTypeName.mAttribute_string, object->mAttribute_mNewTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 105)) ;
  GALGAS_lstring var_aliasAliasInfixKey = function_combineTypeNamesForInfixOperator (object->mAttribute_mAliasedTypeName.mAttribute_string, object->mAttribute_mAliasedTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 106)) ;
  GALGAS_lstring var_newLiteralIntegerInfixKey = function_combineTypeNamesForInfixOperator (object->mAttribute_mNewTypeName.mAttribute_string, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 107)) ;
  GALGAS_lstring var_aliasLiteralIntegerInfixKey = function_combineTypeNamesForInfixOperator (object->mAttribute_mAliasedTypeName.mAttribute_string, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 108)) ;
  GALGAS_lstring var_literalIntegerNewInfixKey = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 109)), object->mAttribute_mNewTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 109)) ;
  GALGAS_lstring var_literalIntegerAliasInfixKey = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 110)), object->mAttribute_mAliasedTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 110)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_newTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mNewTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 111)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_oldTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 112)) ;
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mEqualOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 113)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mNonEqualOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 124)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mStrictInfOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 135)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mInfEqualOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 146)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mStrictSupOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 157)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mSupEqualOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 168)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mAndOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 179)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mOrOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 190)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mXorOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 201)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mBooleanXorOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 212)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mAddOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 223)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 234)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mSubOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 245)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 256)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mMulOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 267)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 278)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mDivOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 289)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 300)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mModOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 311)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 322)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 333)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mAttribute_mRightShiftOperatorMap, var_newNewInfixKey, var_aliasAliasInfixKey, var_newLiteralIntegerInfixKey, var_aliasLiteralIntegerInfixKey, var_literalIntegerNewInfixKey, var_literalIntegerAliasInfixKey, var_newTypeProxy, var_oldTypeProxy, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 344)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mAttribute_mUnaryMinusOperatorMap, object->mAttribute_mNewTypeName, object->mAttribute_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 355)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mAttribute_mNotOperatorMap, object->mAttribute_mNewTypeName, object->mAttribute_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 356)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mAttribute_mUnsignedComplementOperatorMap, object->mAttribute_mNewTypeName, object->mAttribute_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 357)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typeAliasDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                      categoryMethod_typeAliasDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterInContext (defineCategoryMethod_typeAliasDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@typeAliasDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typeAliasDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                  GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                  GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typeAliasDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                        categoryMethod_typeAliasDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_semanticAnalysis (defineCategoryMethod_typeAliasDeclaration_semanticAnalysis, NULL) ;

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
//                        Overriding category method '@globalConstantDeclaration addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                   GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                   GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  const GALGAS_globalConstantDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalConstantDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                    categoryMethod_globalConstantDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_addExtension (defineCategoryMethod_globalConstantDeclaration_addExtension, NULL) ;

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
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 72)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mConstantTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mConstantTypeName.getter_string (SOURCE_FILE ("global-constant-declaration.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 75)), object->mAttribute_mConstantTypeName.mAttribute_location  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 75)) ;
    {
    ioArgument_ioGraph.setter_addEdge (object->mAttribute_mConstantName, var_typeName COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 76)) ;
    }
  }
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), object->mAttribute_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 79)) ;
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
//             Overriding category getter '@globalConstantDeclaration keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mAttribute_mConstantName.getter_string (SOURCE_FILE ("global-constant-declaration.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 85)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                                          extensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling, NULL) ;

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
  GALGAS_variableMap var_variableMap = function_initialVariableMap (GALGAS_string ("compiler"), ioArgument_ioContext, GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 97)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_annotationType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mConstantTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("global-constant-declaration.galgas", 106)) ;
  }else if (kBoolFalse == test_0) {
    var_annotationType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 108)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("global-constant-declaration.galgas", 111)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("global-constant-declaration.galgas", 112)) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("global-constant-declaration.galgas", 114)), var_annotationType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-constant-declaration.galgas", 117)), GALGAS_bool (true), var_temporaries, ioArgument_ioGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 113)) ;
  GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_expressionResult, var_annotationType, object->mAttribute_mConstantName.mAttribute_location, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 126)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList.getter_length (SOURCE_FILE ("global-constant-declaration.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = extensionGetter_isStatic (var_result.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 133)).operator_not (SOURCE_FILE ("global-constant-declaration.galgas", 133)) ;
  }
  const enumGalgasBool test_2 = test_1.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mConstantName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 134)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mGlobalConstantMap.setter_insertKey (object->mAttribute_mConstantName, var_result, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 137)) ;
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
//                      Overriding category method '@globalConstantDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
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
//                            Overriding category method '@integerDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                            GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                            GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                    categoryMethod_integerDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_addExtension (defineCategoryMethod_integerDeclaration_addExtension, NULL) ;

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
  GALGAS_lstring var_integerTypeName = GALGAS_string ("$").add_operation (callCategoryGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 40)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 40)) ;
  {
  const GALGAS_integerDeclaration temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName, GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 42)) COMMA_SOURCE_FILE ("type-integer.galgas", 42)) ;
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
//                 Overriding category getter '@integerDeclaration keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer $").add_operation (callCategoryGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_integerDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                                          extensionGetter_integerDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_integerDeclaration_keyRepresentationForErrorSignaling, NULL) ;

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
  GALGAS_lstring var_integerTypeName = callCategoryGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 62)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 62)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  const enumGalgasBool test_1 = object->mAttribute_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_min = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 67)).left_shift_operation (object->mAttribute_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) COMMA_SOURCE_FILE ("type-integer.galgas", 67)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) ;
    var_max = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 68)).left_shift_operation (object->mAttribute_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 68)) COMMA_SOURCE_FILE ("type-integer.galgas", 68)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 68)) ;
  }else if (kBoolFalse == test_1) {
    var_min = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)) ;
    var_max = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 71)).left_shift_operation (object->mAttribute_mSize COMMA_SOURCE_FILE ("type-integer.galgas", 71)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 71)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (var_integerTypeName, GALGAS_string ("i").add_operation (object->mAttribute_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 76)), GALGAS_typeKind::constructor_integer (var_min, var_max, object->mAttribute_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 77)), object->mAttribute_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 77)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 78)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 79)), GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 80)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 74)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName, object->mAttribute_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 87)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName, object->mAttribute_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 93)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName, object->mAttribute_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 99)) ;
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
  GALGAS_bool test_0 = constinArgument_inLeftOperand.mAttribute_mValue.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 270)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.mAttribute_mValue.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 270)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left ;
    constinArgument_inLeftOperand.mAttribute_mValue.method_literalInteger (var_left, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 271)) ;
    GALGAS_bigint var_right ;
    constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_right, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue = callCategoryGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left, var_right, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)) ;
    outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inResultType, GALGAS_valueIR::constructor_literalInteger (var_resultValue  COMMA_SOURCE_FILE ("type-integer.galgas", 274))  COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
    }
    {
    categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
    }
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
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_16525 ; // Joker input parameter
  GALGAS_uint joker_16537 ; // Joker input parameter
  constinArgument_inLeftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)).method_integer (var_min, var_max, joker_16525, joker_16537, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 436)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 436))  COMMA_SOURCE_FILE ("type-integer.galgas", 436)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438))  COMMA_SOURCE_FILE ("type-integer.galgas", 438)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 440)) ;
      }
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 441)) ;
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
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 469)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_18030 ; // Joker input parameter
  GALGAS_uint joker_18042 ; // Joker input parameter
  constinArgument_inLeftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 470)).method_integer (var_min, var_max, joker_18030, joker_18042, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 470)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 472)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 472))  COMMA_SOURCE_FILE ("type-integer.galgas", 472)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 474)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 474))  COMMA_SOURCE_FILE ("type-integer.galgas", 474)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_literalValue.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 475)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("division by zero")  COMMA_SOURCE_FILE ("type-integer.galgas", 476)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        {
        routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 478)) ;
        }
        {
        categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 479)) ;
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
  constinArgument_inLeftOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 635)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_24254 ; // Joker input parameter
  GALGAS_uint joker_24266 ; // Joker input parameter
  constinArgument_inRightOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 636)).method_integer (var_min, var_max, joker_24254, joker_24266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 636)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 638)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 638))  COMMA_SOURCE_FILE ("type-integer.galgas", 638)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 640)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 640))  COMMA_SOURCE_FILE ("type-integer.galgas", 640)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 642)) ;
      }
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inRightOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 643)) ;
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
//                        Overriding category method '@literalIntegerDeclaration addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                   GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                   GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclaration * object = (const cPtr_literalIntegerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclaration) ;
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                    categoryMethod_literalIntegerDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_addExtension (defineCategoryMethod_literalIntegerDeclaration_addExtension, NULL) ;

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
  GALGAS_lstring var_staticIntegerTypeName = GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 32)) ;
  {
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName, GALGAS_string ("$").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) ;
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
//             Overriding category getter '@literalIntegerDeclaration keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * /* inObject */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 40)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                                          extensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling, NULL) ;

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
  GALGAS_lstring var_integerTypeName = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 52)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 52)) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (var_integerTypeName, GALGAS_string ("<<literal integer>>"), GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("type-literal-integer.galgas", 57)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-literal-integer.galgas", 58)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-literal-integer.galgas", 59)), GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("type-literal-integer.galgas", 60)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-literal-integer.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 54)) ;
  }
  {
  routine_enterLiteralIntegerOperators (var_integerTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 67)) ;
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
  constinArgument_inLeftOperand.mAttribute_mValue.method_literalInteger (var_leftValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 253)) ;
  GALGAS_bigint var_rightValue ;
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 254)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result = callCategoryGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue, var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 255)) ;
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inResultType, GALGAS_valueIR::constructor_literalInteger (var_result  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 274))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 274)) ;
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
//                         Overriding category method '@literalStringDeclaration addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                  GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                  GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  const GALGAS_literalStringDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringDeclaration_addExtension (void) {
  enterCategoryMethod_addExtension (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                    categoryMethod_literalStringDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_addExtension (defineCategoryMethod_literalStringDeclaration_addExtension, NULL) ;

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
  GALGAS_lstring var_literalStringTypeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 33)), object->mAttribute_mLiteralStringTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-static-string.galgas", 33)) ;
  {
  const GALGAS_literalStringDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 34)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName, GALGAS_string ("$uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 35)) COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) ;
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
//              Overriding category getter '@literalStringDeclaration keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mAttribute_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 41)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_literalStringDeclaration_keyRepresentationForErrorSignaling (void) {
  enterCategoryGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                                          extensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclaration_keyRepresentationForErrorSignaling (defineCategoryGetter_literalStringDeclaration_keyRepresentationForErrorSignaling, NULL) ;

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
  GALGAS_unifiedTypeMap_2D_proxy var_uint_38_Type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 53)) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mLiteralStringTypeName, GALGAS_string ("i8*"), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("type-static-string.galgas", 58)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 59)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 60)), GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 61)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), var_uint_38_Type, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 55)) ;
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
//               Overriding category method '@convertExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 44)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-convert.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 45)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-convert.galgas", 46)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                            categoryMethod_convertExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_convertExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 54)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-convert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 55)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-convert.galgas", 56)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                            categoryMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@convertExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_convertExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                   const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_stringset constinArgument_inModeSet,
                                                                   const GALGAS_bool constinArgument_inAllowExceptions,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_operandIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 78)) ;
  const enumGalgasBool test_0 = constinArgument_inAllowExceptions.operator_not (SOURCE_FILE ("expression-convert.galgas", 91)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 92)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 92))  COMMA_SOURCE_FILE ("expression-convert.galgas", 92)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 95)) ;
  const enumGalgasBool test_2 = var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 97)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 97)).operator_not (SOURCE_FILE ("expression-convert.galgas", 97)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-convert.galgas", 98)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 99)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 99)).operator_not (SOURCE_FILE ("expression-convert.galgas", 99)).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-convert.galgas", 100)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource ;
      GALGAS_bigint var_maxSource ;
      GALGAS_bool joker_4968 ; // Joker input parameter
      GALGAS_uint joker_4980 ; // Joker input parameter
      var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 102)).method_integer (var_minSource, var_maxSource, joker_4968, joker_4980, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 102)) ;
      GALGAS_bigint var_minTarget ;
      GALGAS_bigint var_maxTarget ;
      GALGAS_bool joker_5062 ; // Joker input parameter
      GALGAS_uint joker_5074 ; // Joker input parameter
      var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 103)).method_integer (var_minTarget, var_maxTarget, joker_5062, joker_5074, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 103)) ;
      GALGAS_bool test_5 = GALGAS_bool (kIsInfOrEqual, var_minTarget.objectCompare (var_minSource)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = GALGAS_bool (kIsSupOrEqual, var_maxTarget.objectCompare (var_maxSource)) ;
      }
      GALGAS_bool var_alwaysPossible = test_5 ;
      const enumGalgasBool test_6 = var_alwaysPossible.boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("useless explicit conversion")  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
      }
      {
      routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 108)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult  COMMA_SOURCE_FILE ("expression-convert.galgas", 110))  COMMA_SOURCE_FILE ("expression-convert.galgas", 110)) ;
      }else if (kBoolFalse == test_8) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 115))  COMMA_SOURCE_FILE ("expression-convert.galgas", 115)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_convertExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                         categoryMethod_convertExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_analyzeExpression (defineCategoryMethod_convertExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@convertInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_convertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_convertInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                               categoryMethod_convertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_enterAccessibleEntities (defineCategoryMethod_convertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@convertInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_convertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  GALGAS_uint var_convertOverflowCode = GALGAS_uint ((uint32_t) 9U) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 150)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 150)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 150)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 149)) ;
  }
  GALGAS_string var_lbl = object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 153)).getter_string (SOURCE_FILE ("expression-convert.galgas", 153)) ;
  GALGAS_string var_convertMinOkLabel = GALGAS_string ("min.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 154)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 154)) ;
  GALGAS_string var_convertMaxOkLabel = GALGAS_string ("max.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 155)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 155)) ;
  GALGAS_string var_convertFailLabel = GALGAS_string ("fail.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 156)) ;
  GALGAS_string var_compareMinVar = GALGAS_string ("cmp.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 157)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 157)) ;
  GALGAS_string var_compareMaxVar = GALGAS_string ("cmp.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 158)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 158)) ;
  GALGAS_bigint var_minTarget ;
  GALGAS_bigint var_maxTarget ;
  GALGAS_bool joker_7369 ; // Joker input parameter
  GALGAS_uint joker_7381 ; // Joker input parameter
  object->mAttribute_mTarget.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 159)).method_integer (var_minTarget, var_maxTarget, joker_7369, joker_7381, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 159)) ;
  GALGAS_bigint var_minSource ;
  GALGAS_bool var_operandIsUnsigned ;
  GALGAS_bigint joker_7441 ; // Joker input parameter
  GALGAS_uint joker_7485 ; // Joker input parameter
  object->mAttribute_mOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 160)).method_integer (var_minSource, joker_7441, var_operandIsUnsigned, joker_7485, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 160)) ;
  GALGAS_string var_operandType = object->mAttribute_mOperand.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 161)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget.objectCompare (var_minSource)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 163)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 163)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 164)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).add_operation (var_minTarget.getter_string (SOURCE_FILE ("expression-convert.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 165)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).add_operation (var_convertMinOkLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).add_operation (var_convertFailLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 166)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 167)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (var_maxTarget.getter_string (SOURCE_FILE ("expression-convert.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)).add_operation (var_convertMaxOkLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)).add_operation (var_convertFailLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_exception.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("expression-convert.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).getter_string (SOURCE_FILE ("expression-convert.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).add_operation (var_convertOverflowCode.getter_string (SOURCE_FILE ("expression-convert.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).add_operation (object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 178)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (object->mAttribute_mTarget.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_convertInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                           categoryMethod_convertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_llvmInstructionCode (defineCategoryMethod_convertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@extendExpressionAST addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inConstantName,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 44)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-extend.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 45)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-extend.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-extend.galgas", 46)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                            categoryMethod_extendExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_extendExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 54)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-extend.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 55)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-extend.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-extend.galgas", 56)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                            categoryMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@extendExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extendExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                  const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  const GALGAS_stringset constinArgument_inModeSet,
                                                                  const GALGAS_bool constinArgument_inAllowExceptions,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  GALGAS_operandIR & outArgument_outResult,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 78)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 91)) ;
  const enumGalgasBool test_0 = var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 93)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 93)).operator_not (SOURCE_FILE ("expression-extend.galgas", 93)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-extend.galgas", 94)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 95)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 95)).operator_not (SOURCE_FILE ("expression-extend.galgas", 95)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-extend.galgas", 96)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned ;
      GALGAS_uint var_sourceSize ;
      GALGAS_bigint joker_4760 ; // Joker input parameter
      GALGAS_bigint joker_4767 ; // Joker input parameter
      var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)).method_integer (joker_4760, joker_4767, var_sourceIsUnsigned, var_sourceSize, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
      GALGAS_bool var_targetIsUnsigned ;
      GALGAS_uint var_targetSize ;
      GALGAS_bigint joker_4862 ; // Joker input parameter
      GALGAS_bigint joker_4869 ; // Joker input parameter
      var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 99)).method_integer (joker_4862, joker_4869, var_targetIsUnsigned, var_targetSize, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 99)) ;
      GALGAS_bool test_3 = var_sourceIsUnsigned ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = var_targetIsUnsigned ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 102)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_location location_8 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_8, GALGAS_string ("same size: useless extend operation")  COMMA_SOURCE_FILE ("expression-extend.galgas", 104)) ;
          }
        }
      }else if (kBoolFalse == test_4) {
        GALGAS_bool test_9 = var_sourceIsUnsigned ;
        if (kBoolTrue == test_9.boolEnum ()) {
          test_9 = var_targetIsUnsigned.operator_not (SOURCE_FILE ("expression-extend.galgas", 106)) ;
        }
        const enumGalgasBool test_10 = test_9.boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = GALGAS_bool (kIsSupOrEqual, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
          if (kBoolTrue == test_11) {
            GALGAS_location location_12 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_12, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 108)) ;
          }
        }else if (kBoolFalse == test_10) {
          GALGAS_bool test_13 = var_sourceIsUnsigned.operator_not (SOURCE_FILE ("expression-extend.galgas", 110)) ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = var_targetIsUnsigned ;
          }
          const enumGalgasBool test_14 = test_13.boolEnum () ;
          if (kBoolTrue == test_14) {
            GALGAS_location location_15 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_15, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 111)) ;
          }else if (kBoolFalse == test_14) {
            const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
            if (kBoolTrue == test_16) {
              GALGAS_location location_17 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_17, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
            }else if (kBoolFalse == test_16) {
              const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
              if (kBoolTrue == test_18) {
                GALGAS_location location_19 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
                inCompiler->emitSemanticError (location_19, GALGAS_string ("same size: useless extend operation")  COMMA_SOURCE_FILE ("expression-extend.galgas", 116)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 119)) ;
      }
      {
      categoryModifier_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 120)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extendExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                         categoryMethod_extendExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_analyzeExpression (defineCategoryMethod_extendExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@truncateExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 44)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-truncate.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 45)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-truncate.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-truncate.galgas", 46)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                            categoryMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 54)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-truncate.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 55)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-truncate.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-truncate.galgas", 56)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                            categoryMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@truncateExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_truncateExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModeSet,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_operandIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 78)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 91)) ;
  const enumGalgasBool test_0 = var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 93)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 93)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 93)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-truncate.galgas", 94)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 95)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 95)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 95)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-truncate.galgas", 96)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource ;
      GALGAS_bigint var_maxSource ;
      GALGAS_uint var_expSize ;
      GALGAS_bool joker_4817 ; // Joker input parameter
      var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 98)).method_integer (var_minSource, var_maxSource, joker_4817, var_expSize, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 98)) ;
      GALGAS_bigint var_minTarget ;
      GALGAS_bigint var_maxTarget ;
      GALGAS_uint var_resultSize ;
      GALGAS_bool joker_4921 ; // Joker input parameter
      var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 99)).method_integer (var_minTarget, var_maxTarget, joker_4921, var_resultSize, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 99)) ;
      GALGAS_bool test_3 = GALGAS_bool (kIsInfOrEqual, var_minTarget.objectCompare (var_minSource)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = GALGAS_bool (kIsSupOrEqual, var_maxTarget.objectCompare (var_maxSource)) ;
      }
      GALGAS_bool var_alwaysPossible = test_3 ;
      const enumGalgasBool test_4 = var_alwaysPossible.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("useless explicit conversion")  COMMA_SOURCE_FILE ("expression-truncate.galgas", 102)) ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_resultSize.objectCompare (var_expSize)).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 105)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult  COMMA_SOURCE_FILE ("expression-truncate.galgas", 106))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 106)) ;
      }else if (kBoolFalse == test_6) {
        outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, var_expressionResult.mAttribute_mValue  COMMA_SOURCE_FILE ("expression-truncate.galgas", 111)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_truncateExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                         categoryMethod_truncateExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_analyzeExpression (defineCategoryMethod_truncateExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@truncateInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_truncateInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_truncateInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                               categoryMethod_truncateInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_enterAccessibleEntities (defineCategoryMethod_truncateInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@truncateInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_truncateInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateInstructionIR * object = (const cPtr_truncateInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncateInstructionIR) ;
  GALGAS_string var_operandType = object->mAttribute_mOperand.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 139)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 140)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 140)).add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 140)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 140)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 140)).add_operation (object->mAttribute_mTarget.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 140)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_truncateInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                           categoryMethod_truncateInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_llvmInstructionCode (defineCategoryMethod_truncateInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@constructorCall addDependenceEdgeForStaticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inConstantName,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 39)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 39)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 40)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorCall_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                            categoryMethod_constructorCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_addDependenceEdgeForStaticExpression (defineCategoryMethod_constructorCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@constructorCall noteExpressionTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 48)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 48)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                            categoryMethod_constructorCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_constructorCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@constructorCall analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                              const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_stringset /* constinArgument_inModeSet */,
                                                              const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                              GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                              GALGAS_operandIR & outArgument_outResult,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 73)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 75)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mErrorLocation, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 76)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_operandIRList var_initValue ;
    constinArgument_inContext.mAttribute_mConstructorMap.method_searchKey (var_resultType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 78)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 78)), var_initValue, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 78)) ;
    outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, GALGAS_valueIR::constructor_llvmStructureConstant (var_initValue  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 79))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 79)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorCall_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                         categoryMethod_constructorCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_analyzeExpression (defineCategoryMethod_constructorCall_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@typedConstantCall addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typedConstantCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inConstantName,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mAttribute_mOptionalTypeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 39)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typedConstantCall_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                            categoryMethod_typedConstantCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_addDependenceEdgeForStaticExpression (defineCategoryMethod_typedConstantCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@typedConstantCall noteExpressionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (object->mAttribute_mOptionalTypeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 49)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                            categoryMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@typedConstantCall analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typedConstantCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GALGAS_operandIR & outArgument_outResult,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 74)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-typed-constant.galgas", 76)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mConstructorName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 77)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_typedConstantMap var_constructorMap = var_resultType.getter_typedConstantMap (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 79)) ;
    GALGAS_valueIR var_resultValue ;
    var_constructorMap.method_searchKey (object->mAttribute_mConstructorName, var_resultValue, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 80)) ;
    outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, var_resultValue  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 81)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typedConstantCall_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                         categoryMethod_typedConstantCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_analyzeExpression (defineCategoryMethod_typedConstantCall_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@infixOperatorExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                            const GALGAS_lstring constinArgument_inConstantName,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 55)) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 56)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                            categoryMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding category method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 65)) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 66)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                            categoryMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@infixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 74)) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 75)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                            categoryMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding category method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 81)) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                            categoryMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@infixOperatorExpressionAST analyzeExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                         const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                                         const GALGAS_bool constinArgument_inAllowExceptions,
                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         GALGAS_operandIR & outArgument_outResult,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_operandIR var_leftOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_leftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 127)) ;
  GALGAS_operandIR var_rightOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, var_leftOperand.mAttribute_mType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_rightOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 140)) ;
  GALGAS_infixOperatorMap var_operatorMap = function_getInfixOperatorMap (object->mAttribute_mOp, constinArgument_inContext, constinArgument_inModeSet, object->mAttribute_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 153)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  GALGAS_infixOperatorDescription var_binaryOperator ;
  categoryMethod_checkBinaryOperationWith (var_operatorMap, var_leftOperand.mAttribute_mType, var_rightOperand.mAttribute_mType, object->mAttribute_mOperatorLocation, var_resultType, var_binaryOperator, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 155)) ;
  callCategoryMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand, object->mAttribute_mOperatorLocation, var_rightOperand, var_resultType, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 163)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_infixOperatorExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                         categoryMethod_infixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_analyzeExpression (defineCategoryMethod_infixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GALGAS_operandIR & outArgument_outResult,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 282)) ;
  GALGAS_operandIR var_leftOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_leftInstructionGenerationList, var_leftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 283)) ;
  GALGAS_instructionListIR var_rightInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 296)) ;
  GALGAS_operandIR var_rightOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, var_leftOperand.mAttribute_mType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_rightInstructionGenerationList, var_rightOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 297)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 310)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 310)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand should be boolean")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 311)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 314)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 314)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand should be boolean")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 315)) ;
  }
  {
  routine_getNewTempVariable (constinArgument_inContext.mAttribute_mBooleanType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 318)) ;
  }
  {
  categoryModifier_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand, var_leftInstructionGenerationList, var_rightOperand, var_rightInstructionGenerationList, object->mAttribute_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 320)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                         categoryMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                            categoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                            categoryMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@prefixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_operandIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 56)) ;
  GALGAS_prefixOperatorMap var_prefixOperatorMap ;
  GALGAS_llvmBinaryOperation var_binaryOperator ;
  GALGAS_operandIR var_leftOperand ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap = constinArgument_inContext.mAttribute_mUnsignedComplementOperatorMap ;
      var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 75)) ;
      switch (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 76)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 77)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 77)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolset:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 78)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 78)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 79)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 79)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 80)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 80)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 81)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 81)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 82)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 82)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_4205 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 76)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_4205->mAssociatedValue3 ;
          var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap = constinArgument_inContext.mAttribute_mNotOperatorMap ;
      var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 88)) ;
      var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 89))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 89))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 89)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 92)) ;
      var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 93))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 93))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 93)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96)) COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 98)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 98))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97)) ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 101)) ;
        var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 102))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 102))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 102)) ;
      }else if (kBoolFalse == test_1) {
        var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 104)) ;
        var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap.method_searchKey (GALGAS_lstring::constructor_new (var_expressionResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)), object->mAttribute_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = var_expressionResult.mAttribute_mType ;
  const enumGalgasBool test_2 = var_expressionResult.mAttribute_mValue.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 112)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value ;
    var_expressionResult.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113)) ;
    GALGAS_bigint var_result ;
    switch (object->mAttribute_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result = var_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 116)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)) ;
        var_result.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result = var_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 119)).operator_xor (var_value COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 119)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, GALGAS_valueIR::constructor_literalInteger (var_result  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 124)) ;
    }
    {
    categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, outArgument_outResult.mAttribute_mType, object->mAttribute_mOperatorLocation, var_leftOperand.mAttribute_mValue, var_binaryOperator, var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                         categoryMethod_prefixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpression (defineCategoryMethod_prefixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inConstantName,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 30)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 30)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 30)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                            categoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 38)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 38)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 38)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                            categoryMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                            const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                            GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_operandIR & outArgument_outResult,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (object->mAttribute_mLiteralInteger.mAttribute_bigint  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                         categoryMethod_literalIntegerInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeExpression (defineCategoryMethod_literalIntegerInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 30)), constinArgument_inConstantName.mAttribute_location  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 30)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 30)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                            categoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 38)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 38)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 38)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                            categoryMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalStringInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                           const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                           GALGAS_operandIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 57)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 57)) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mAttribute_mLiteralString.mAttribute_string, var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)) ;
  }
  outArgument_outResult = GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_literalString (object->mAttribute_mLiteralString.mAttribute_string.getter_length (SOURCE_FILE ("expression-literal-string.galgas", 59)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59)), var_staticStringIndex  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59))  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                         categoryMethod_literalStringInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpression (defineCategoryMethod_literalStringInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inConstantName,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_string ("$").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 35)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 35)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 35)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                            categoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 43)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 43)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 43)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                            categoryMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalBooleanInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBooleanInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                            const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_operandIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mValue.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 62)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 62)) ;
  }
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mBooleanType, GALGAS_valueIR::constructor_literalInteger (temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 62))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 62)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBooleanInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                         categoryMethod_literalBooleanInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_analyzeExpression (defineCategoryMethod_literalBooleanInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@varInExpressionAST addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mAttribute_mSourceVarName COMMA_SOURCE_FILE ("expression-var.galgas", 57)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                            categoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@varInExpressionAST noteExpressionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                    GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                            categoryMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@varInExpressionAST analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                 const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 GALGAS_operandIR & outArgument_outResult,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_variableType ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_objectInMemoryIR var_variableKind ;
  GALGAS_controlRegisterBitSliceAccessMap var_registerBitSliceMap ;
  {
  GALGAS_bool joker_4137 ; // Joker input parameter
  GALGAS_bool joker_4203_2 ; // Joker input parameter
  GALGAS_bool joker_4203_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mAttribute_mSourceVarName, var_variableType, var_accessIsAllowed, var_variableKind, joker_4137, var_registerBitSliceMap, joker_4203_2, joker_4203_1, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 84)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("expression-var.galgas", 93)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on this variable")  COMMA_SOURCE_FILE ("expression-var.galgas", 94)) ;
  }
  categoryMethod_loadFromMemory (var_variableKind, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 97)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_variableType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 103)) ;
  cEnumerator_lstringlist enumerator_4711 (object->mAttribute_mFieldNameList, kEnumeration_up) ;
  while (enumerator_4711.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_registerBitSliceMap.getter_count (SOURCE_FILE ("expression-var.galgas", 110)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_llvmBinaryOperation var_accessOperator ;
      GALGAS_bigint var_accessRightOperand ;
      GALGAS_controlRegisterBitSliceAccessMap var_submap ;
      GALGAS_unifiedTypeMap_2D_proxy var_newResultType ;
      var_registerBitSliceMap.method_searchKey (enumerator_4711.current_mValue (HERE), var_accessOperator, var_accessRightOperand, var_submap, var_newResultType, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 111)) ;
      GALGAS_operandIR var_newResultingVariable ;
      {
      routine_getNewTempVariable (var_newResultType, ioArgument_ioTemporaries, var_newResultingVariable, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 119)) ;
      }
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResultingVariable.mAttribute_mValue, outArgument_outResult.mAttribute_mType, object->mAttribute_mSourceVarName.mAttribute_location, outArgument_outResult.mAttribute_mValue, var_accessOperator, GALGAS_valueIR::constructor_literalInteger (var_accessRightOperand  COMMA_SOURCE_FILE ("expression-var.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 120)) ;
      }
      outArgument_outResult = var_newResultingVariable ;
      var_registerBitSliceMap = var_submap ;
    }else if (kBoolFalse == test_2) {
      switch (outArgument_outResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 131)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          GALGAS_location location_3 (enumerator_4711.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("a boolean does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 133)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          GALGAS_location location_4 (enumerator_4711.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 135)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolset:
        {
          GALGAS_location location_5 (enumerator_4711.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("a boolset does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 137)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          GALGAS_location location_6 (enumerator_4711.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("a literal string does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 139)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          GALGAS_location location_7 (enumerator_4711.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_7, GALGAS_string ("an enumeration does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 141)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          const cEnumAssociatedValues_typeKind_structure * extractPtr_6316 = (const cEnumAssociatedValues_typeKind_structure *) (outArgument_outResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 131)).unsafePointer ()) ;
          const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_6316->mAssociatedValue0 ;
          GALGAS_unifiedTypeMap_2D_proxy var_type ;
          GALGAS_uint var_idx ;
          extractedValue_propertyMap.method_searchKey (enumerator_4711.current_mValue (HERE), var_type, var_idx, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 143)) ;
          GALGAS_operandIR var_newResultingVariable ;
          {
          routine_getNewTempVariable (var_type, ioArgument_ioTemporaries, var_newResultingVariable, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 144)) ;
          }
          {
          categoryModifier_appendExtractValue (ioArgument_ioInstructionGenerationList, var_newResultingVariable, outArgument_outResult, var_idx, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 145)) ;
          }
          outArgument_outResult = var_newResultingVariable ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          GALGAS_location location_8 (enumerator_4711.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 152)) ;
        }
        break ;
      }
    }
    enumerator_4711.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                         categoryMethod_varInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeExpression (defineCategoryMethod_varInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@functionCallInExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallInExpressionAST * object = (const cPtr_functionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallInExpressionAST) ;
  cEnumerator_functionCallEffectiveParameterList enumerator_2416 (object->mAttribute_mParameterList, kEnumeration_up) ;
  while (enumerator_2416.hasCurrentObject ()) {
    callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2416.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 66)) ;
    enumerator_2416.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                                            categoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@functionCallInExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallInExpressionAST * object = (const cPtr_functionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallInExpressionAST) ;
  cEnumerator_functionCallEffectiveParameterList enumerator_3023 (object->mAttribute_mParameterList, kEnumeration_up) ;
  while (enumerator_3023.hasCurrentObject ()) {
    callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3023.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 76)) ;
    enumerator_3023.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                                            categoryMethod_functionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_functionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@functionCallInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_operandIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallInExpressionAST * object = (const cPtr_functionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallInExpressionAST) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-func-call.galgas", 97)) ;
  GALGAS_modeMap var_functionModeMap ;
  GALGAS_funcSignature var_functionSignature ;
  GALGAS_unifiedTypeMap_2D_proxy var_functionResultType ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectInMemoryIR var_variableKind ;
    {
    GALGAS_bool joker_4429 ; // Joker input parameter
    GALGAS_bool joker_4476_4 ; // Joker input parameter
    GALGAS_controlRegisterBitSliceAccessMap joker_4476_3 ; // Joker input parameter
    GALGAS_bool joker_4476_2 ; // Joker input parameter
    GALGAS_bool joker_4476_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadAccess (object->mAttribute_mReceiverName, var_receiverType, joker_4429, var_variableKind, joker_4476_4, joker_4476_3, joker_4476_2, joker_4476_1, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 103)) ;
    }
    var_effectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-func-call.galgas", 111)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("expression-func-call.galgas", 111)), extensionGetter_address (var_variableKind, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 111))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 111)) ;
    var_receiverType.getter_functionMap (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 112)).method_searchKey (object->mAttribute_mFunctionName, var_functionModeMap, var_functionSignature, var_functionResultType, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 112)) ;
  }else if (kBoolFalse == test_0) {
    constinArgument_inContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionName, var_functionModeMap, var_functionSignature, var_functionResultType, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 119)) ;
    var_receiverType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-func-call.galgas", 125)) ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inRoutineNameForInvocationGraph, function_funcNameForInvocationGraph (var_receiverType, object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 130)) COMMA_SOURCE_FILE ("expression-func-call.galgas", 128)) ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_functionModeMap.getter_keySet (SOURCE_FILE ("expression-func-call.galgas", 135)), object->mAttribute_mFunctionName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 133)) ;
  }
  GALGAS_string var_s = function_llvmNameForFunction (object->mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 139)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 139)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_functionSignature.getter_length (SOURCE_FILE ("expression-func-call.galgas", 140)).objectCompare (object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression-func-call.galgas", 140)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("this function declares ").add_operation (var_functionSignature.getter_length (SOURCE_FILE ("expression-func-call.galgas", 141)).getter_string (SOURCE_FILE ("expression-func-call.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 141)).add_operation (GALGAS_string (" formal parameters, the call names "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 141)).add_operation (object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression-func-call.galgas", 142)).getter_string (SOURCE_FILE ("expression-func-call.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 142)).add_operation (GALGAS_string (" effective arguments"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 142))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 141)) ;
  }else if (kBoolFalse == test_1) {
    cEnumerator_funcSignature enumerator_5597 (var_functionSignature, kEnumeration_up) ;
    cEnumerator_functionCallEffectiveParameterList enumerator_5623 (object->mAttribute_mParameterList, kEnumeration_up) ;
    while (enumerator_5597.hasCurrentObject () && enumerator_5623.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_5623.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (enumerator_5597.current (HERE).mAttribute_mFormalSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s = GALGAS_string ("!") ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_5597.current (HERE).mAttribute_mFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_s.plusAssign_operation(enumerator_5597.current (HERE).mAttribute_mFormalSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 149)) ;
        }
        GALGAS_location location_5 (enumerator_5623.current (HERE).mAttribute_mSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("required selector: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 151))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 151)) ;
      }
      GALGAS_operandIR var_argumentIR ;
      callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5623.current (HERE).mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, enumerator_5597.current (HERE).mAttribute_mArgumentType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_argumentIR, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 153)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_argumentIR.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 165)).objectCompare (enumerator_5597.current (HERE).mAttribute_mArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 165)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        var_effectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-func-call.galgas", 167)), enumerator_5597.current (HERE).mAttribute_mFormalSelector, var_argumentIR  COMMA_SOURCE_FILE ("expression-func-call.galgas", 166)) ;
      }else if (kBoolFalse == test_6) {
        GALGAS_bool test_7 = var_argumentIR.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 170)).getter_isStaticInteger (SOURCE_FILE ("expression-func-call.galgas", 170)) ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = enumerator_5597.current (HERE).mAttribute_mArgumentType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 170)).getter_isInteger (SOURCE_FILE ("expression-func-call.galgas", 170)) ;
        }
        const enumGalgasBool test_8 = test_7.boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_bigint var_value ;
          var_argumentIR.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 171)) ;
          GALGAS_bigint var_min ;
          GALGAS_bigint var_max ;
          GALGAS_bool joker_6832 ; // Joker input parameter
          GALGAS_uint joker_6844 ; // Joker input parameter
          enumerator_5597.current (HERE).mAttribute_mArgumentType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 172)).method_integer (var_min, var_max, joker_6832, joker_6844, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 172)) ;
          GALGAS_bool test_9 = GALGAS_bool (kIsInfOrEqual, var_min.objectCompare (var_value)) ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = GALGAS_bool (kIsInfOrEqual, var_value.objectCompare (var_max)) ;
          }
          const enumGalgasBool test_10 = test_9.boolEnum () ;
          if (kBoolTrue == test_10) {
            var_effectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-func-call.galgas", 174)), enumerator_5597.current (HERE).mAttribute_mFormalSelector, GALGAS_operandIR::constructor_new (enumerator_5597.current (HERE).mAttribute_mArgumentType, var_argumentIR.mAttribute_mValue  COMMA_SOURCE_FILE ("expression-func-call.galgas", 174))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 174)) ;
          }else if (kBoolFalse == test_10) {
            GALGAS_location location_11 (enumerator_5623.current (HERE).mAttribute_mSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_11, GALGAS_string ("the literal integer cannot fit in an $").add_operation (enumerator_5597.current (HERE).mAttribute_mArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 176))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 176)) ;
          }
        }else if (kBoolFalse == test_8) {
          GALGAS_location location_12 (enumerator_5623.current (HERE).mAttribute_mSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_12, GALGAS_string ("the actual parameter has the $").add_operation (var_argumentIR.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 179)).add_operation (GALGAS_string (", but the formal argument has the $"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 179)).add_operation (enumerator_5597.current (HERE).mAttribute_mArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 180)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 180))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 179)) ;
        }
      }
      if (enumerator_5597.hasNextObject () && enumerator_5623.hasNextObject ()) {
        var_s.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 183)) ;
      }
      enumerator_5597.gotoNextObject () ;
      enumerator_5623.gotoNextObject () ;
    }
  }
  var_s.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 186)) ;
  {
  routine_getNewTempVariable (var_functionResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 188)) ;
  }
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_receiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-func-call.galgas", 192)))).boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_14) {
    temp_13 = var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 192)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 192)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (outArgument_outResult, temp_13.add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("expression-func-call.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 192)), var_effectiveParameterListIR  COMMA_SOURCE_FILE ("expression-func-call.galgas", 190))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 190)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                         categoryMethod_functionCallInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_analyzeExpression (defineCategoryMethod_functionCallInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@functionCallIR llvmInstructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 212)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 212)).add_operation (object->mAttribute_mResult.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (function_llvmNameForFunction (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 213)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 213)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_8487 (object->mAttribute_mArgumentList, kEnumeration_up) ;
  while (enumerator_8487.hasCurrentObject ()) {
    switch (enumerator_8487.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8487.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 217)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 217)).add_operation (extensionGetter_llvmName (enumerator_8487.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 217)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8487.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 219)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 219)).add_operation (extensionGetter_llvmName (enumerator_8487.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 219)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8487.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 221)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 221)).add_operation (extensionGetter_llvmName (enumerator_8487.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 221)) ;
      }
      break ;
    }
    if (enumerator_8487.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 224)) ;
    }
    enumerator_8487.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 226)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                           categoryMethod_functionCallIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallIR_llvmInstructionCode (defineCategoryMethod_functionCallIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@functionCallIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mFunctionSet.addAssign_operation (object->mAttribute_mFunctionName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 232)) ;
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
//         Overriding category method '@registerConstantInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                 const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                                            categoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@registerIntegerExpInExpressionAST addDependenceEdgeForStaticExpression'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                   const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                                            categoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@registerConstantInExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                                            categoryMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@registerIntegerExpInExpressionAST noteExpressionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                                            categoryMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineCategoryMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@registerConstantInExpressionAST analyzeExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerConstantInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                              const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                              const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                              GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                              GALGAS_operandIR & outArgument_outResult,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantInExpressionAST * object = (const cPtr_registerConstantInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_controlRegisterBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap ;
  GALGAS_bigint var_registerAddress ;
  GALGAS_bool joker_4549_2 ; // Joker input parameter
  GALGAS_bool joker_4549_1 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4718_2 ; // Joker input parameter
  GALGAS_uint joker_4718_1 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mControlRegisterMap.method_searchKey (object->mAttribute_mRegisterName, var_type, joker_4549_2, joker_4549_1, var_registerBitSliceMap, var_registerFieldMap, var_registerAddress, joker_4718_2, joker_4718_1, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 94)) ;
  GALGAS_uint var_bitIndex ;
  GALGAS_uint var_bitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_bitIndex, var_bitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 104)) ;
  outArgument_outResult = GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 110)).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 110)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 110)).left_shift_operation (var_bitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 110))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 110))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 110)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerConstantInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                         categoryMethod_registerConstantInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_analyzeExpression (defineCategoryMethod_registerConstantInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@registerIntegerExpInExpressionAST analyzeExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerExpInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                                const GALGAS_stringset constinArgument_inModeSet,
                                                                                const GALGAS_bool constinArgument_inAllowExceptions,
                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                GALGAS_operandIR & outArgument_outResult,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerExpInExpressionAST * object = (const cPtr_registerIntegerExpInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerExpInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_controlRegisterBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap ;
  GALGAS_bigint var_registerAddress ;
  GALGAS_bool joker_5769 ; // Joker input parameter
  GALGAS_bool joker_5776 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_5944_2 ; // Joker input parameter
  GALGAS_uint joker_5944_1 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mControlRegisterMap.method_searchKey (object->mAttribute_mRegisterName, var_type, joker_5769, joker_5776, var_registerBitSliceMap, var_registerFieldMap, var_registerAddress, joker_5944_2, joker_5944_1, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 128)) ;
  GALGAS_uint var_fieldBitIndex ;
  GALGAS_uint var_fieldBitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_fieldBitIndex, var_fieldBitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 139)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_fieldBitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFieldName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this field is not an integer field")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 146)) ;
  }
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)) ;
  switch (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 162)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_boolean:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 168)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      GALGAS_bigint var_value ;
      var_expressionResult.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 172)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("this integer expression should be positive")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 174)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outResult = GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_literalInteger (var_value.left_shift_operation (var_fieldBitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 176))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 176))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 176)) ;
        }else if (kBoolFalse == test_3) {
          inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8466 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 162)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8466->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8466->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8466->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_expressionBitCount = extractPtr_8466->mAssociatedValue3 ;
      const enumGalgasBool test_4 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 181)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 182)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        GALGAS_bool var_assertGenerated = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount)) ;
        GALGAS_bool test_5 = var_assertGenerated ;
        if (kBoolTrue == test_5.boolEnum ()) {
          test_5 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 185)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 185)) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 187)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 187))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)) ;
        }
        {
        routine_getNewTempVariable (var_type, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 189)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_registerIntegerConstantInExpressionIR::constructor_new (object->mAttribute_mExpressionLocation, var_expressionResult, GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 193)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 193)), var_fieldBitIndex, outArgument_outResult, var_assertGenerated.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 196))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 190))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 190)) ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerExpInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                         categoryMethod_registerIntegerExpInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_analyzeExpression (defineCategoryMethod_registerIntegerExpInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@registerIntegerConstantInExpressionIR llvmInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerConstantInExpressionIR * object = (const cPtr_registerIntegerConstantInExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerConstantInExpressionIR) ;
  const enumGalgasBool test_0 = object->mAttribute_mNoCheck.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (extensionGetter_llvmName (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (GALGAS_string (" = (("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (function_mangledNameForType (object->mAttribute_mResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 225)).add_operation (object->mAttribute_mBitShift.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 225)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (extensionGetter_llvmName (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 228)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 228)).add_operation (object->mAttribute_mMaxBound.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 228)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 228)).add_operation (object->mAttribute_mBitShift.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 228)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_uint var_errorCode = GALGAS_uint ((uint32_t) 8U) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (").add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 231)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 231)).add_operation (object->mAttribute_mMaxBound.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 231)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 231)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (var_errorCode.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 232)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 232)).add_operation (object->mAttribute_mInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 233)).getter_lastPathComponent (SOURCE_FILE ("expression-cst-registre.galgas", 233)).getter_utf_38_Representation (SOURCE_FILE ("expression-cst-registre.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 232)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 233)).add_operation (object->mAttribute_mInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 234)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 234)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 232)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 235)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)).add_operation (extensionGetter_llvmName (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)).add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)).add_operation (object->mAttribute_mBitShift.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                           categoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (defineCategoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@registerIntegerConstantInExpressionIR enterAccessibleEntities'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                               categoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (defineCategoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 37)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                             categoryMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@checkInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_checkInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 55)) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 58)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 56)) ;
  const enumGalgasBool test_0 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 69)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 69)).operator_not (SOURCE_FILE ("directive-check.galgas", 69)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("directive-check.galgas", 70)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 73)).operator_not (SOURCE_FILE ("directive-check.galgas", 73)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction")  COMMA_SOURCE_FILE ("directive-check.galgas", 74)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_bigint var_value ;
    var_expressionResult.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 76)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_value.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 77)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("check expression value is false")  COMMA_SOURCE_FILE ("directive-check.galgas", 78)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_checkInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                               categoryMethod_checkInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_analyze (defineCategoryMethod_checkInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("instruction-var.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 66)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
    }
  }
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                             categoryMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@varInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-var.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 75)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-var.galgas", 75)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                                                             categoryMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModes,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 94)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 95)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModes, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 98)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 111)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType = var_expressionResult.mAttribute_mType ;
  }
  GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_expressionResult, var_targetType, object->mAttribute_mVarName.mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 114)) ;
  GALGAS_objectInMemoryIR var_targetVar = GALGAS_objectInMemoryIR::constructor_localValue (var_result.mAttribute_mType, object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 122)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mVarName, var_result.mAttribute_mType, GALGAS_bool (true), var_targetVar, var_result.mAttribute_mType.getter_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 129)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 123)) ;
  }
  {
  categoryModifier_appendAlloca (ioArgument_ioInstructionGenerationList, object->mAttribute_mVarName.mAttribute_string, var_result.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 134)) ;
  }
  {
  categoryModifier_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, object->mAttribute_mVarName.mAttribute_string, var_result.mAttribute_mType, var_result, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionWithAssignmentAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                               categoryMethod_varInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_analyze (defineCategoryMethod_varInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@varInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset /* constinArgument_inModes */,
                                                      const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                      GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 157)) ;
  GALGAS_objectInMemoryIR var_targetVar = GALGAS_objectInMemoryIR::constructor_localValue (var_targetType, object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 159)) ;
  {
  ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), var_targetVar, var_targetType.getter_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 165)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 166)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 160)) ;
  }
  {
  categoryModifier_appendAlloca (ioArgument_ioInstructionGenerationList, object->mAttribute_mVarName.mAttribute_string, var_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                               categoryMethod_varInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_analyze (defineCategoryMethod_varInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@letInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("instruction-let.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 47)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-let.galgas", 47)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
    }
  }
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                                             categoryMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@letInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModeSet,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 68)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 69)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 72)) ;
  GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_expressionResult, var_targetType, object->mAttribute_mVarName.mAttribute_location, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 85)) ;
  GALGAS_objectInMemoryIR var_localConstant = GALGAS_objectInMemoryIR::constructor_localValue (var_result.mAttribute_mType, object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-let.galgas", 92)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mVarName, var_result.mAttribute_mType, GALGAS_bool (true), var_localConstant, var_result.mAttribute_mType.getter_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 98)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-let.galgas", 99)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 93)) ;
  }
  {
  categoryModifier_appendAlloca (ioArgument_ioInstructionGenerationList, object->mAttribute_mVarName.mAttribute_string, var_result.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  }
  categoryMethod_storeInMemory (var_localConstant, var_expressionResult, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_letInstructionWithAssignmentAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                               categoryMethod_letInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_analyze (defineCategoryMethod_letInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 67)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                             categoryMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@assignmentInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                             const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_stringset constinArgument_inModeSet,
                                                             const GALGAS_bool constinArgument_inAllowExceptions,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_objectInMemoryIR var_target ;
  {
  GALGAS_bool joker_3687 ; // Joker input parameter
  GALGAS_bool joker_3724_4 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_3724_3 ; // Joker input parameter
  GALGAS_bool joker_3724_2 ; // Joker input parameter
  GALGAS_bool joker_3724_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_3687, var_target, joker_3724_4, joker_3724_3, joker_3724_2, joker_3724_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 85)) ;
  }
  cEnumerator_lstringlist enumerator_3786 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_3786.hasCurrentObject ()) {
    switch (var_targetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_0 (enumerator_3786.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 96)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_1 (enumerator_3786.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 98)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_2 (enumerator_3786.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a static string does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 100)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_3 (enumerator_3786.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("an enumeration does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        const cEnumAssociatedValues_typeKind_structure * extractPtr_4464 = (const cEnumAssociatedValues_typeKind_structure *) (var_targetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)).unsafePointer ()) ;
        const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_4464->mAssociatedValue0 ;
        GALGAS_uint var_idx ;
        extractedValue_propertyMap.method_searchKey (enumerator_3786.current_mValue (HERE), var_targetType, var_idx, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 104)) ;
        GALGAS_objectInMemoryIR var_result ;
        {
        routine_getNewTempObjectInMemory (var_targetType, ioArgument_ioTemporaries, var_result, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)) ;
        }
        {
        categoryModifier_appendGetElementPtr (ioArgument_ioInstructionGenerationList, var_result, var_target, var_idx, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 106)) ;
        }
        var_target = var_result ;
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        GALGAS_location location_4 (enumerator_3786.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an integer does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 113)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_location location_5 (enumerator_3786.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("an integer does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
      }
      break ;
    }
    enumerator_3786.gotoNextObject () ;
  }
  GALGAS_operandIR var_sourceOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_sourceOperand, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 119)) ;
  GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_sourceOperand, var_targetType, object->mAttribute_mTargetVarName.mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 131)) ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_bool var_isCopiable ;
  GALGAS_bool var_isConstant ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_5385 ; // Joker input parameter
  GALGAS_objectInMemoryIR joker_5417 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_5444_2 ; // Joker input parameter
  GALGAS_bool joker_5444_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mTargetVarName, joker_5385, var_accessIsAllowed, joker_5417, var_isCopiable, joker_5444_2, joker_5444_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 138)) ;
  }
  const enumGalgasBool test_6 = var_isConstant.boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 148)) ;
  }
  const enumGalgasBool test_8 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 150)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 151)) ;
  }
  const enumGalgasBool test_10 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.getter_string (SOURCE_FILE ("instruction-assignment.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 154)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 154))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 154)) ;
  }
  categoryMethod_storeInMemory (var_target, var_result, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 156)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                               categoryMethod_assignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyze (defineCategoryMethod_assignmentInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 37)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                                             categoryMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@assertInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool constinArgument_inAllowExceptions,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 54)) COMMA_SOURCE_FILE ("instruction-assert.galgas", 54)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 58)) ;
  GALGAS_operandIR var_expressionValue ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 61)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  const enumGalgasBool test_1 = var_expressionValue.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 72)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 72)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 72)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 73)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 76)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 80)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mAttribute_mAssertInstructionLocation, var_instructionGenerationList, var_expressionValue  COMMA_SOURCE_FILE ("instruction-assert.galgas", 81))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 81)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                               categoryMethod_assertInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_analyze (defineCategoryMethod_assertInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@assertInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  GALGAS_uint var_assertErrorCode = GALGAS_uint ((uint32_t) 7U) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 107)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (var_assertErrorCode.getter_string (SOURCE_FILE ("instruction-assert.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)).add_operation (object->mAttribute_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 110)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)).add_operation (object->mAttribute_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                           categoryMethod_assertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_llvmInstructionCode (defineCategoryMethod_assertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@assertInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                               categoryMethod_assertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_enterAccessibleEntities (defineCategoryMethod_assertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@throwInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionAST * object = (const cPtr_throwInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 34)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_throwInstructionAST.mSlotID,
                                                             categoryMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@throwInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionAST * object = (const cPtr_throwInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 52)) COMMA_SOURCE_FILE ("instruction-panic.galgas", 52)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 56)) ;
  GALGAS_operandIR var_result ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inContext.mAttribute_mExceptionCodeType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_unusedInstructionListIR, var_result, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR.getter_length (SOURCE_FILE ("instruction-panic.galgas", 71)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = var_result.mAttribute_mValue.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 72)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 72)) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = GALGAS_bool (kIsNotEqual, var_result.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 73)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 73)))) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression should be a literal integer")  COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bigint var_min ;
    GALGAS_bigint var_max ;
    GALGAS_bool joker_3846 ; // Joker input parameter
    GALGAS_uint joker_3858 ; // Joker input parameter
    constinArgument_inContext.mAttribute_mExceptionCodeType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 76)).method_integer (var_min, var_max, joker_3846, joker_3858, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 76)) ;
    GALGAS_bigint var_throwValue ;
    var_result.mAttribute_mValue.method_literalInteger (var_throwValue, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
    GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_throwValue.objectCompare (var_min)) ;
    if (kBoolTrue != test_4.boolEnum ()) {
      test_4 = GALGAS_bool (kIsStrictSup, var_throwValue.objectCompare (var_max)) ;
    }
    const enumGalgasBool test_5 = test_4.boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.mAttribute_mExceptionCodeType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 79))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 80)).boolEnum () ;
      if (kBoolTrue == test_6) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_throwInstructionIR::constructor_new (object->mAttribute_mThrowLocation, var_throwValue  COMMA_SOURCE_FILE ("instruction-panic.galgas", 81))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_throwInstructionAST.mSlotID,
                               categoryMethod_throwInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionAST_analyze (defineCategoryMethod_throwInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@throwInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionIR * object = (const cPtr_throwInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionIR) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 106)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 106)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 106)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 105)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_exception.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)).add_operation (object->mAttribute_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 111)).add_operation (object->mAttribute_mCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 111)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 111)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                           categoryMethod_throwInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_llvmInstructionCode (defineCategoryMethod_throwInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@throwInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                       GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                               categoryMethod_throwInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_enterAccessibleEntities (defineCategoryMethod_throwInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@operatorAssignInstructionAST noteInstructionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionAST * object = (const cPtr_operatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 85)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_operatorAssignInstructionAST.mSlotID,
                                                             categoryMethod_operatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_operatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@operatorAssignInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_stringset constinArgument_inModeSet,
                                                                 const GALGAS_bool constinArgument_inAllowExceptions,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionAST * object = (const cPtr_operatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_bool var_isConstant ;
  {
  GALGAS_bool joker_3947_5 ; // Joker input parameter
  GALGAS_objectInMemoryIR joker_3947_4 ; // Joker input parameter
  GALGAS_bool joker_3947_3 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_3947_2 ; // Joker input parameter
  GALGAS_bool joker_3947_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_3947_5, joker_3947_4, joker_3947_3, joker_3947_2, joker_3947_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 103)) ;
  }
  const enumGalgasBool test_0 = var_isConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 110)) ;
  }
  GALGAS_operandIR var_sourceValue ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_sourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 113)) ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_objectInMemoryIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_4609 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_4689_3 ; // Joker input parameter
  GALGAS_bool joker_4689_2 ; // Joker input parameter
  GALGAS_bool joker_4689_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mTargetVarName, joker_4609, var_accessIsAllowed, var_targetVariableKind, var_isCopiable, joker_4689_3, joker_4689_2, joker_4689_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 126)) ;
  }
  const enumGalgasBool test_2 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 134)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 135)) ;
  }
  GALGAS_bool var_noPanicGeneration = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 139)) COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 139)) ;
  GALGAS_infixOperatorMap var_operatorMap ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_addAssign:
    {
      const enumGalgasBool test_4 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 150)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 150))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 150)) ;
      }
      GALGAS_infixOperatorMap temp_6 ;
      const enumGalgasBool test_7 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_7) {
        temp_6 = constinArgument_inContext.mAttribute_mAddOperatorMap ;
      }
      var_operatorMap = temp_6 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_addModuloAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_subAssign:
    {
      const enumGalgasBool test_8 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_location location_9 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_9, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 157)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 157))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 157)) ;
      }
      GALGAS_infixOperatorMap temp_10 ;
      const enumGalgasBool test_11 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_11) {
        temp_10 = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_11) {
        temp_10 = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      }
      var_operatorMap = temp_10 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_subModuloAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_12 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_13, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 164)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 164))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 164)) ;
      }
      GALGAS_infixOperatorMap temp_14 ;
      const enumGalgasBool test_15 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_15) {
        temp_14 = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_15) {
        temp_14 = constinArgument_inContext.mAttribute_mMulOperatorMap ;
      }
      var_operatorMap = temp_14 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_mulModuloAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_divAssign:
    {
      const enumGalgasBool test_16 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_location location_17 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_17, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171)) ;
      }
      GALGAS_infixOperatorMap temp_18 ;
      const enumGalgasBool test_19 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_19) {
        temp_18 = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_19) {
        temp_18 = constinArgument_inContext.mAttribute_mDivOperatorMap ;
      }
      var_operatorMap = temp_18 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_divZeroAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_modAssign:
    {
      const enumGalgasBool test_20 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_20) {
        GALGAS_location location_21 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_21, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 178)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 178))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 178)) ;
      }
      GALGAS_infixOperatorMap temp_22 ;
      const enumGalgasBool test_23 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_23) {
        temp_22 = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_23) {
        temp_22 = constinArgument_inContext.mAttribute_mModOperatorMap ;
      }
      var_operatorMap = temp_22 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_modZeroAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator ;
  GALGAS_unifiedTypeMap_2D_proxy joker_7169 ; // Joker input parameter
  categoryMethod_checkBinaryOperationWith (var_operatorMap, var_targetType, var_sourceValue.mAttribute_mType, object->mAttribute_mTargetVarName.mAttribute_location, joker_7169, var_binaryOperator, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 184)) ;
  const enumGalgasBool test_24 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 191)).boolEnum () ;
  if (kBoolTrue == test_24) {
    GALGAS_location location_25 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_25, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.getter_string (SOURCE_FILE ("instruction-operator-assign.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 192)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 192))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 192)) ;
  }
  GALGAS_operandIR var_variableValue ;
  categoryMethod_loadFromMemory (var_targetVariableKind, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 195)) ;
  GALGAS_operandIR var_newResultingValue ;
  callCategoryMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue, object->mAttribute_mTargetVarName.mAttribute_location, var_sourceValue, var_targetType, var_newResultingValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 200)) ;
  categoryMethod_storeInMemory (var_targetVariableKind, var_newResultingValue, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 209)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorAssignInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_operatorAssignInstructionAST.mSlotID,
                               categoryMethod_operatorAssignInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorAssignInstructionAST_analyze (defineCategoryMethod_operatorAssignInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  categoryMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mThenInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 107)) ;
  categoryMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mElseInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 109)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                             categoryMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@ifInstructionAST analyze'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                     const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     const GALGAS_stringset constinArgument_inModeSet,
                                                     const GALGAS_bool constinArgument_inAllowExceptions,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_operandIR var_testResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 129)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 127)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 140)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141))  COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_testResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 143)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-if.galgas", 144)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 146)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 148)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_thenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 161)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_elseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 173)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult, object->mAttribute_mTestExpressionEndLocation, var_thenInstructionGenerationList, var_elseInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-if.galgas", 175))  COMMA_SOURCE_FILE ("instruction-if.galgas", 175)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                               categoryMethod_ifInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_analyze (defineCategoryMethod_ifInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@ifInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  GALGAS_string var_labelTrue = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201)).getter_string (SOURCE_FILE ("instruction-if.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201)) ;
  GALGAS_string var_labelFalse = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)).getter_string (SOURCE_FILE ("instruction-if.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)).getter_string (SOURCE_FILE ("instruction-if.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTestVariable.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).add_operation (var_labelTrue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).add_operation (var_labelFalse, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 204)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 210)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 214)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                           categoryMethod_ifInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_llvmInstructionCode (defineCategoryMethod_ifInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@ifInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 220)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 221)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                               categoryMethod_ifInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_enterAccessibleEntities (defineCategoryMethod_ifInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@methodCallInstructionAST noteInstructionTypesInPrecedenceGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_methodCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 55)) ;
  cEnumerator_procEffectiveParameterListAST enumerator_2675 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_2675.hasCurrentObject ()) {
    switch (enumerator_2675.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_2832 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_2675.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_2832->mAssociatedValue0 ;
        callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 60)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    }
    enumerator_2675.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_methodCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                             categoryMethod_methodCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_methodCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@methodCallInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_methodCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                             const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_stringset /* constinArgument_inModeSet */,
                                                             const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_operandIR var_receiverExpression ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mReceiverExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 83)), constinArgument_inContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-method-call.galgas", 85)), GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 81)) ;
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 94)) ;
  GALGAS_string var_procMangledName = object->mAttribute_mMethodName.mAttribute_string ;
  cEnumerator_procEffectiveParameterListAST enumerator_4344 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4344.hasCurrentObject ()) {
    var_procMangledName.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
    switch (enumerator_4344.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_5257 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_4344.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5257->mAssociatedValue0 ;
        var_procMangledName.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 100)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_readAccessAllowed ;
        GALGAS_objectInMemoryIR var_variableKind ;
        GALGAS_bool var_isCopiable ;
        GALGAS_controlRegisterBitSliceAccessMap var_fieldMap ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        GALGAS_bool var_isConstant ;
        {
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type, var_readAccessAllowed, var_variableKind, var_isCopiable, var_fieldMap, var_canBeUsedAsInputParameter, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)) ;
        }
        const enumGalgasBool test_0 = var_isConstant.boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_1, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 113)) ;
        }
        const enumGalgasBool test_2 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-method-call.galgas", 115)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used as input effective parameter")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)) ;
        }
        const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-method-call.galgas", 118)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (extractedValue_name.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 119)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 119))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 119)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4344.current_mEffectiveParameterKind (HERE), enumerator_4344.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 121)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_5889 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_4344.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_5889->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_5889->mAssociatedValue1 ;
        var_procMangledName.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 123)) ;
        GALGAS_operandIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), constinArgument_inRoutineNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 126)), constinArgument_inContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-method-call.galgas", 128)), GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 124)) ;
        var_parameterList.addAssign_operation (enumerator_4344.current_mEffectiveParameterKind (HERE), enumerator_4344.current_mSelector (HERE), var_expressionResult.getter_mType (SOURCE_FILE ("instruction-method-call.galgas", 136))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 136)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_6520 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_4344.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6520->mAssociatedValue0 ;
        var_procMangledName.plusAssign_operation(GALGAS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 138)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_readAccessAllowed ;
        GALGAS_objectInMemoryIR var_variableKind ;
        GALGAS_bool var_isCopiable ;
        GALGAS_controlRegisterBitSliceAccessMap var_fieldMap ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        GALGAS_bool var_isConstant ;
        {
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type, var_readAccessAllowed, var_variableKind, var_isCopiable, var_fieldMap, var_canBeUsedAsInputParameter, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 139)) ;
        }
        const enumGalgasBool test_6 = var_isConstant.boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_7, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 151)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4344.current_mEffectiveParameterKind (HERE), enumerator_4344.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 153)) ;
      }
      break ;
    }
    var_procMangledName.plusAssign_operation(enumerator_4344.current_mSelector (HERE).mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 155)) ;
    enumerator_4344.gotoNextObject () ;
  }
  GALGAS_procedureMap var_receiverTypeProcedureMap = var_receiverExpression.getter_mType (SOURCE_FILE ("instruction-method-call.galgas", 158)).getter_procedureMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)) ;
  GALGAS_bool var_calledProcIsMutating ;
  GALGAS_modeMap var_procedureModeMap ;
  GALGAS_procedureSignature var_calledProcSignature ;
  GALGAS_bool joker_6892 ; // Joker input parameter
  var_receiverTypeProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mMethodName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)), var_calledProcIsMutating, var_procedureModeMap, var_calledProcSignature, joker_6892, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_calledProcSignature.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 186)).objectCompare (var_parameterList.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 186)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this proc requires ").add_operation (var_calledProcSignature.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 187)).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (var_parameterList.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 188)).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 188))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)) ;
  }else if (kBoolFalse == test_8) {
    cEnumerator_procedureSignature enumerator_7925 (var_calledProcSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_7954 (var_parameterList, kEnumeration_up) ;
    while (enumerator_7925.hasCurrentObject () && enumerator_7954.hasCurrentObject ()) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_7925.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 191)).objectCompare (enumerator_7954.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 191)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_location location_11 (enumerator_7954.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_11, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_7954.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 192)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 192)).add_operation (enumerator_7925.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 193)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 193))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 192)) ;
      }
      GALGAS_string var_requiredPassingMode = extensionGetter_requiredActualPassingModeForSelector (enumerator_7925.current_mFormalArgumentPassingMode (HERE), enumerator_7925.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 195)) ;
      GALGAS_string var_testedPassingMode = extensionGetter_passingModeForActualSelector (enumerator_7954.current_mEffectiveParameterPassingMode (HERE), enumerator_7954.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)) ;
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_7954.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 198)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 198))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 198)) ;
      }
      enumerator_7925.gotoNextObject () ;
      enumerator_7954.gotoNextObject () ;
    }
  }
  GALGAS_location location_14 (object->mAttribute_mMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
  inCompiler->emitSemanticError (location_14, GALGAS_string ("Internal error : no code generation")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 202)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_methodCallInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                               categoryMethod_methodCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_analyze (defineCategoryMethod_methodCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@procCallInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  cEnumerator_procEffectiveParameterListAST enumerator_3967 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_3967.hasCurrentObject ()) {
    switch (enumerator_3967.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_4124 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_3967.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4124->mAssociatedValue0 ;
        callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 108)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    }
    enumerator_3967.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                             categoryMethod_procCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_procCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@procCallInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                           const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                           const GALGAS_stringset constinArgument_inModeSet,
                                                           const GALGAS_bool constinArgument_inAllowExceptions,
                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_procCallEffectiveParameterListIR var_procCallEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 137)) ;
  GALGAS_procedureSignature var_procSignature ;
  GALGAS_modeMap var_procedureModeMap ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType ;
  GALGAS_lstring var_routineNameForInvocationGraph ;
  GALGAS_bool var_isSection ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectInMemoryIR var_variableKind ;
    {
    GALGAS_bool joker_5693 ; // Joker input parameter
    GALGAS_bool joker_5740_4 ; // Joker input parameter
    GALGAS_controlRegisterBitSliceAccessMap joker_5740_3 ; // Joker input parameter
    GALGAS_bool joker_5740_2 ; // Joker input parameter
    GALGAS_bool joker_5740_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadAccess (object->mAttribute_mReceiverName, var_receiverType, joker_5693, var_variableKind, joker_5740_4, joker_5740_3, joker_5740_2, joker_5740_1, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144)) ;
    }
    var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 152)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-proc-call.galgas", 152)), extensionGetter_address (var_variableKind, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)) ;
    GALGAS_bool joker_5930 ; // Joker input parameter
    GALGAS_bool joker_5984 ; // Joker input parameter
    var_receiverType.getter_procedureMap (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)).method_searchKey (object->mAttribute_mProcName, joker_5930, var_procedureModeMap, var_procSignature, joker_5984, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)) ;
    var_routineNameForInvocationGraph = function_procNameForInvocationGraph (var_receiverType, object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 160)) ;
    var_isSection = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = constinArgument_inContext.mAttribute_mProcedureMap.getter_hasKey (object->mAttribute_mProcName.mAttribute_string COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool joker_6231 ; // Joker input parameter
      GALGAS_bool joker_6285 ; // Joker input parameter
      constinArgument_inContext.mAttribute_mProcedureMap.method_searchKey (object->mAttribute_mProcName, joker_6231, var_procedureModeMap, var_procSignature, joker_6285, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)) ;
      var_receiverType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 170)) ;
      var_routineNameForInvocationGraph = function_procNameForInvocationGraph (var_receiverType, object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 171)) ;
      var_isSection = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = constinArgument_inContext.mAttribute_mSectionMap.getter_hasKey (object->mAttribute_mProcName.mAttribute_string COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 173)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bool joker_6553 ; // Joker input parameter
        constinArgument_inContext.mAttribute_mSectionMap.method_searchKey (object->mAttribute_mProcName, joker_6553, var_procSignature, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 174)) ;
        GALGAS_modeMap temp_3 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("instruction-proc-call.galgas", 179)) ;
        temp_3.addAssign_operation (GALGAS_string ("user").getter_nowhere (SOURCE_FILE ("instruction-proc-call.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 179)) ;
        var_procedureModeMap = temp_3 ;
        var_receiverType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 180)) ;
        var_routineNameForInvocationGraph = function_sectionNameForInvocationGraph (var_receiverType, object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 181)) ;
        var_isSection = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_2) {
        GALGAS_location location_4 (object->mAttribute_mProcName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("undefined proc or section")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 184)) ;
        var_isSection.drop () ; // Release error dropped variable
        var_receiverType.drop () ; // Release error dropped variable
        var_procedureModeMap.drop () ; // Release error dropped variable
        var_procSignature.drop () ; // Release error dropped variable
        var_routineNameForInvocationGraph.drop () ; // Release error dropped variable
      }
    }
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inRoutineNameForInvocationGraph, var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 189)) ;
  }
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 194)) ;
  cEnumerator_procedureSignature enumerator_7193 (var_procSignature, kEnumeration_up) ;
  cEnumerator_procEffectiveParameterListAST enumerator_7224 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_7193.hasCurrentObject () && enumerator_7224.hasCurrentObject ()) {
    switch (enumerator_7224.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_8106 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_7224.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_8106->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_objectInMemoryIR var_parameterAccess ;
        GALGAS_bool var_isCopiable ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_controlRegisterBitSliceAccessMap joker_7471 ; // Joker input parameter
        GALGAS_bool joker_7521 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_parameterAccess, var_isCopiable, joker_7471, var_canBeUsedAsInputParameter, joker_7521, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 198)) ;
        }
        const enumGalgasBool test_5 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 208)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 209)) ;
        }
        const enumGalgasBool test_7 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 211)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_location location_8 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("this variable cannot be used as input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 212)) ;
        }
        const enumGalgasBool test_9 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 214)).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (extractedValue_name.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 215)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 215))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 215)) ;
        }
        var_parameterList.addAssign_operation (enumerator_7224.current_mEffectiveParameterKind (HERE), enumerator_7224.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 217)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 219)), enumerator_7224.current_mSelector (HERE), GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_llvmLocalObject (function_llvmNameForLocalVariable (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 221))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 221))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 221))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 218)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_9013 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_7224.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_9013->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_9013->mAssociatedValue1 ;
        GALGAS_operandIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inRoutineNameForInvocationGraph, enumerator_7193.current_mType (HERE), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 223)) ;
        GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_expressionResult, enumerator_7193.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 235)) ;
        var_parameterList.addAssign_operation (enumerator_7224.current_mEffectiveParameterKind (HERE), enumerator_7224.current_mSelector (HERE), enumerator_7193.current_mType (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 241)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 243)), enumerator_7224.current_mSelector (HERE), var_result  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 242)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_9751 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_7224.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_9751->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_objectInMemoryIR var_parameterAccess ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_bool joker_9207_2 ; // Joker input parameter
        GALGAS_controlRegisterBitSliceAccessMap joker_9207_1 ; // Joker input parameter
        GALGAS_bool joker_9258 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_parameterAccess, joker_9207_2, joker_9207_1, var_canBeUsedAsInputParameter, joker_9258, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)) ;
        }
        const enumGalgasBool test_11 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 256)).boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_location location_12 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_12, GALGAS_string ("this variable cannot be used as output/input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 257)) ;
        }
        const enumGalgasBool test_13 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 259)).boolEnum () ;
        if (kBoolTrue == test_13) {
          GALGAS_location location_14 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_14, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 260)) ;
        }
        var_parameterList.addAssign_operation (enumerator_7224.current_mEffectiveParameterKind (HERE), enumerator_7224.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 262)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 264)), enumerator_7224.current_mSelector (HERE), GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_llvmLocalObject (function_llvmNameForLocalVariable (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 266))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 266))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 266))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 263)) ;
      }
      break ;
    }
    enumerator_7193.gotoNextObject () ;
    enumerator_7224.gotoNextObject () ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_procedureModeMap.getter_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 272)), object->mAttribute_mProcName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 270)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_procSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 275)).objectCompare (var_parameterList.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 275)))).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_location location_16 (object->mAttribute_mProcName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_16, GALGAS_string ("this proc requires ").add_operation (var_procSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 276)).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 276)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 276)).add_operation (var_procSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 277)).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 276)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 277))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 276)) ;
  }else if (kBoolFalse == test_15) {
    cEnumerator_procedureSignature enumerator_10156 (var_procSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_10185 (var_parameterList, kEnumeration_up) ;
    while (enumerator_10156.hasCurrentObject () && enumerator_10185.hasCurrentObject ()) {
      const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_10156.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 280)).objectCompare (enumerator_10185.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 280)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_location location_18 (enumerator_10185.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_18, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_10185.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 281)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 281)).add_operation (enumerator_10156.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 282)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 282))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 281)) ;
      }
      GALGAS_string var_requiredPassingMode = extensionGetter_requiredActualPassingModeForSelector (enumerator_10156.current_mFormalArgumentPassingMode (HERE), enumerator_10156.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 284)) ;
      GALGAS_string var_testedPassingMode = extensionGetter_passingModeForActualSelector (enumerator_10185.current_mEffectiveParameterPassingMode (HERE), enumerator_10185.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 285)) ;
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_location location_20 (enumerator_10185.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_20, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 287)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 287))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 287)) ;
      }
      enumerator_10156.gotoNextObject () ;
      enumerator_10185.gotoNextObject () ;
    }
  }
  GALGAS_string temp_21 ;
  const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, var_receiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 293)))).boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_22) {
    temp_21 = var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 293)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 293)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (temp_21.add_operation (object->mAttribute_mProcName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 293)), var_isSection, var_procCallEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 292))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 292)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                               categoryMethod_procCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionAST_analyze (defineCategoryMethod_procCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@procCallInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 332)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsSection.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_llvmNameForSectionImplementation (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 333)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = function_llvmNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 333)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 334)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_12621 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_12621.hasCurrentObject ()) {
    switch (enumerator_12621.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_12621.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 338)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 338)).add_operation (extensionGetter_llvmName (enumerator_12621.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 338)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_12621.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 340)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 340)).add_operation (extensionGetter_llvmName (enumerator_12621.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 340)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_12621.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 342)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 342)).add_operation (extensionGetter_llvmName (enumerator_12621.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 342)) ;
      }
      break ;
    }
    if (enumerator_12621.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 345)) ;
    }
    enumerator_12621.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 347)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                           categoryMethod_procCallInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_llvmInstructionCode (defineCategoryMethod_procCallInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@procCallInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mProcedureSet.addAssign_operation (object->mAttribute_mProcName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 353)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                               categoryMethod_procCallInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_enterAccessibleEntities (defineCategoryMethod_procCallInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  categoryMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 62)) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 63)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                             categoryMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@whileInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 81)) ;
  GALGAS_operandIR var_testValue ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 84)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_testInstructionGenerationList, var_testValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 82)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testValue.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testValue.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 96)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 96))  COMMA_SOURCE_FILE ("instruction-while.galgas", 96)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_testValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 98)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-while.galgas", 99)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 102)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 103)) ;
  }
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 104)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 115)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 118)), var_testInstructionGenerationList, var_testValue, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-while.galgas", 117))  COMMA_SOURCE_FILE ("instruction-while.galgas", 117)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                               categoryMethod_whileInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_analyze (defineCategoryMethod_whileInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@whileInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  GALGAS_string var_labelTest = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)) ;
  GALGAS_string var_labelLoop = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTestExpression.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)).add_operation (var_labelLoop, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)).add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 149)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                           categoryMethod_whileInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineCategoryMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@whileInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 161)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                               categoryMethod_whileInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_enterAccessibleEntities (defineCategoryMethod_whileInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  categoryMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 49)) ;
  callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                             categoryMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (defineCategoryMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@forInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset constinArgument_inModeSet,
                                                      const GALGAS_bool constinArgument_inAllowExceptions,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_operandIR var_iteratedExpressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 70)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_iteratedExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 68)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_iteratedElementType = var_iteratedExpressionResult.mAttribute_mType.getter_enumerationType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 81)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedElementType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 82)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, GALGAS_string ("this object is not enumerable")  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 83)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 86)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedLocalConstant (object->mAttribute_mVarName, var_iteratedElementType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_iteratedElementType, object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 91)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-for-in-do.galgas", 93)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 87)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 97)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 98)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 109)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionIR::constructor_new (object->mAttribute_mVarName.mAttribute_string, var_iteratedElementType, object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, var_iteratedExpressionResult, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                               categoryMethod_forInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_analyze (defineCategoryMethod_forInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@forInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  GALGAS_string var_startLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
  GALGAS_string var_testLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 140)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 140)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 140)) ;
  GALGAS_string var_loopLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 141)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 141)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 141)) ;
  GALGAS_string var_endLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 142)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 142)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 142)) ;
  GALGAS_string var_ptrVar = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 143)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 143)).add_operation (GALGAS_string (".ptr"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 143)) ;
  GALGAS_string var_currentVar = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 144)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 144)).add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 144)) ;
  GALGAS_string var_elementTypeName = object->mAttribute_mElementType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 145)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 148)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 148)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 149)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)).add_operation (var_elementTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).add_operation (GALGAS_string (" = phi i8* ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)).add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)).add_operation (var_loopLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)).add_operation (var_endLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)).add_operation (var_loopLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)).add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeName.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).add_operation (var_elementTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeName.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)).add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                           categoryMethod_forInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_llvmInstructionCode (defineCategoryMethod_forInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@forInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                               categoryMethod_forInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_enterAccessibleEntities (defineCategoryMethod_forInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@allocaConstantIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_allocaConstantIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                 GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_allocaConstantIR * object = (const cPtr_allocaConstantIR *) inObject ;
  macroValidSharedObject (object, cPtr_allocaConstantIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mVariableType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mLocalVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_allocaConstantIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_allocaConstantIR.mSlotID,
                                           categoryMethod_allocaConstantIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_allocaConstantIR_llvmInstructionCode (defineCategoryMethod_allocaConstantIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@allocaConstantIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_allocaConstantIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                     GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_allocaConstantIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_allocaConstantIR.mSlotID,
                                               categoryMethod_allocaConstantIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_allocaConstantIR_enterAccessibleEntities (defineCategoryMethod_allocaConstantIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@extractValueIR llvmInstructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extractValueIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extractValueIR * object = (const cPtr_extractValueIR *) inObject ;
  macroValidSharedObject (object, cPtr_extractValueIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mSource.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (GALGAS_string (" = extractvalue "), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (extensionGetter_llvmName (object->mAttribute_mSource.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (object->mAttribute_mIndex.getter_string (SOURCE_FILE ("intermediate-extract-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extractValueIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_extractValueIR.mSlotID,
                                           categoryMethod_extractValueIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extractValueIR_llvmInstructionCode (defineCategoryMethod_extractValueIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@extractValueIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extractValueIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                   GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extractValueIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_extractValueIR.mSlotID,
                                               categoryMethod_extractValueIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extractValueIR_enterAccessibleEntities (defineCategoryMethod_extractValueIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@extendIR llvmInstructionCode'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extendIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendIR * object = (const cPtr_extendIR *) inObject ;
  macroValidSharedObject (object, cPtr_extendIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)) ;
  GALGAS_bool var_sourceIsUnsigned ;
  GALGAS_bigint joker_739 ; // Joker input parameter
  GALGAS_bigint joker_746 ; // Joker input parameter
  GALGAS_uint joker_789 ; // Joker input parameter
  object->mAttribute_mSource.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).method_integer (joker_739, joker_746, var_sourceIsUnsigned, joker_789, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = var_sourceIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("zext") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("sext") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (object->mAttribute_mSource.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (extensionGetter_llvmName (object->mAttribute_mSource.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (object->mAttribute_mResult.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extendIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                           categoryMethod_extendIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendIR_llvmInstructionCode (defineCategoryMethod_extendIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@extendIR enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extendIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                             GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extendIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                               categoryMethod_extendIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendIR_enterAccessibleEntities (defineCategoryMethod_extendIR_enterAccessibleEntities, NULL) ;

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
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = (const cPtr_binaryOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mOperandType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 133)) ;
  switch (object->mAttribute_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      const GALGAS_binaryOperationIR temp_0 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_0.ptr (), GALGAS_string ("uadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 150)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      const GALGAS_binaryOperationIR temp_1 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_1.ptr (), GALGAS_string ("sadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 158)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      const GALGAS_binaryOperationIR temp_2 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_2.ptr (), GALGAS_string ("usub"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 166)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      const GALGAS_binaryOperationIR temp_3 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_3.ptr (), GALGAS_string ("ssub"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 174)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      const GALGAS_binaryOperationIR temp_4 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_4.ptr (), GALGAS_string ("umul"), GALGAS_uint ((uint32_t) 33U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 182)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      const GALGAS_binaryOperationIR temp_5 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_5.ptr (), GALGAS_string ("smul"), GALGAS_uint ((uint32_t) 33U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 190)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      const GALGAS_binaryOperationIR temp_6 = object ;
      callCategoryMethod_enterCodeForDivisionWithZeroDivisorException ((const cPtr_binaryOperationIR *) temp_6.ptr (), GALGAS_string ("udiv"), GALGAS_uint ((uint32_t) 39U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 198)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      const GALGAS_binaryOperationIR temp_7 = object ;
      callCategoryMethod_enterCodeForDivisionWithZeroDivisorException ((const cPtr_binaryOperationIR *) temp_7.ptr (), GALGAS_string ("sdiv"), GALGAS_uint ((uint32_t) 39U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      const GALGAS_binaryOperationIR temp_8 = object ;
      callCategoryMethod_enterCodeForDivisionWithZeroDivisorException ((const cPtr_binaryOperationIR *) temp_8.ptr (), GALGAS_string ("urem"), GALGAS_uint ((uint32_t) 44U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      const GALGAS_binaryOperationIR temp_9 = object ;
      callCategoryMethod_enterCodeForDivisionWithZeroDivisorException ((const cPtr_binaryOperationIR *) temp_9.ptr (), GALGAS_string ("srem"), GALGAS_uint ((uint32_t) 44U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)) ;
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
                                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  GALGAS_string var_startLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)) ;
  GALGAS_string var_trueLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)) ;
  GALGAS_string var_falseLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mLeftInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mLeftOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (var_trueLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (var_falseLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_trueLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mRightInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_falseLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_falseLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)).add_operation (GALGAS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)).add_operation (extensionGetter_llvmName (object->mAttribute_mRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)).add_operation (var_trueLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)).add_operation (GALGAS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)).add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
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
                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (object->mAttribute_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (object->mAttribute_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)) ;
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
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 33)) ;
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
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (function_llvmNameForGlobalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)) ;
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
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mVariableName  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 36)) ;
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
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadLocalVariableIR * object = (const cPtr_loadLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadLocalVariableIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)) ;
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
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store volatile ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (object->mAttribute_mAddress.getter_string (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (object->mAttribute_mAddress.getter_hexString (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)) ;
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
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 30)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (function_llvmNameForGlobalVariable (object->mAttribute_mGlobalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)) ;
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
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeLocalVariableIR * object = (const cPtr_storeLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeLocalVariableIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mLocalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeLocalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                           categoryMethod_storeLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_llvmInstructionCode (defineCategoryMethod_storeLocalVariableIR_llvmInstructionCode, NULL) ;

