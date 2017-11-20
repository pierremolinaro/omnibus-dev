#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInterruptionPanicCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element::~ GALGAS_availableInterruptMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_interruptionPanicCode & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_availableInterruptMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_availableInterruptMap_2D_element::objectCompare (const GALGAS_availableInterruptMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_availableInterruptMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @availableInterruptMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_availableInterruptMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_availableInterruptMap_2D_element::getter_mInterruptionPanicCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionPanicCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @availableInterruptMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ("availableInterruptMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_availableInterruptMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_availableInterruptMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  const GALGAS_availableInterruptMap_2D_element * p = (const GALGAS_availableInterruptMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_availableInterruptMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSignature (),
mProperty_mInitValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_constructorSignature & inOperand1,
                                                                    const GALGAS_constructorValue & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSignature (inOperand1),
mProperty_mInitValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_constructorSignature & inOperand1,
                                                                                    const GALGAS_constructorValue & inOperand2 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitValue.objectCompare (inOperand.mProperty_mInitValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mInitValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @constructorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorMap_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue GALGAS_constructorMap_2D_element::getter_mInitValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitValue ;
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

GALGAS_routineFormalArgumentListForGeneration_2D_element::GALGAS_routineFormalArgumentListForGeneration_2D_element (void) :
mProperty_mFormalArgumentKind (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element::~ GALGAS_routineFormalArgumentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element::GALGAS_routineFormalArgumentListForGeneration_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                    const GALGAS_PLMType & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mProperty_mFormalArgumentKind (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element GALGAS_routineFormalArgumentListForGeneration_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                                    const GALGAS_PLMType & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineFormalArgumentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineFormalArgumentListForGeneration_2D_element::objectCompare (const GALGAS_routineFormalArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentKind.objectCompare (inOperand.mProperty_mFormalArgumentKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineFormalArgumentListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentKind.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration_2D_element::drop (void) {
  mProperty_mFormalArgumentKind.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @routineFormalArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalArgumentKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_routineFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_routineFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @routineFormalArgumentListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration_2D_element ("routineFormalArgumentListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineFormalArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element GALGAS_routineFormalArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListForGeneration_2D_element result ;
  const GALGAS_routineFormalArgumentListForGeneration_2D_element * p = (const GALGAS_routineFormalArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::~ GALGAS_globalConstantMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_objectIR & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mSourceExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_objectIR & inOperand2 
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceExpression.objectCompare (inOperand.mProperty_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mSourceExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mSourceExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMapIR_2D_element::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
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

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mSelfType (),
mProperty_mGlobalVariableName (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mMode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::~ GALGAS_interruptMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_PLMType & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_allocaList & inOperand3,
                                                                    const GALGAS_instructionListIR & inOperand4,
                                                                    const GALGAS_mode & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mSelfType (inOperand1),
mProperty_mGlobalVariableName (inOperand2),
mProperty_mAllocaList (inOperand3),
mProperty_mInstructionGenerationList (inOperand4),
mProperty_mMode (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_PLMType & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_allocaList & inOperand3,
                                                                                    const GALGAS_instructionListIR & inOperand4,
                                                                                    const GALGAS_mode & inOperand5 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_interruptMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptMapIR_2D_element::objectCompare (const GALGAS_interruptMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfType.objectCompare (inOperand.mProperty_mSelfType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalVariableName.objectCompare (inOperand.mProperty_mGlobalVariableName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllocaList.objectCompare (inOperand.mProperty_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionGenerationList.objectCompare (inOperand.mProperty_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_interruptMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSelfType.isValid () && mProperty_mGlobalVariableName.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mMode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSelfType.drop () ;
  mProperty_mGlobalVariableName.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
  mProperty_mMode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @interruptMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalVariableName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_interruptMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_interruptMapIR_2D_element::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_interruptMapIR_2D_element::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_interruptMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_interruptMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_interruptMapIR_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @interruptMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptMapIR_2D_element ("interruptMapIR-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  const GALGAS_interruptMapIR_2D_element * p = (const GALGAS_interruptMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element::GALGAS_orderedTypeList_2D_element (void) :
mProperty_mType (),
mProperty_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element::~ GALGAS_orderedTypeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element::GALGAS_orderedTypeList_2D_element (const GALGAS_PLMType & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_mType (inOperand0),
mProperty_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element GALGAS_orderedTypeList_2D_element::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_orderedTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_orderedTypeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_orderedTypeList_2D_element::objectCompare (const GALGAS_orderedTypeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_orderedTypeList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_orderedTypeList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_orderedTypeList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @orderedTypeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_orderedTypeList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_orderedTypeList_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @orderedTypeList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orderedTypeList_2D_element ("orderedTypeList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_orderedTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orderedTypeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_orderedTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orderedTypeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element GALGAS_orderedTypeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_orderedTypeList_2D_element result ;
  const GALGAS_orderedTypeList_2D_element * p = (const GALGAS_orderedTypeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orderedTypeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orderedTypeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters::GALGAS_targetParameters (void) :
mProperty_mPython_5F_utilityToolList (),
mProperty_mPython_5F_build (),
mProperty_mTargetPanic_5F_LL_5F_filePath (),
mProperty_mLinkerScript (),
mProperty_mPointerSize (),
mProperty_mSystemStackSize (),
mProperty_mStackedUserRegisterOnInterruptByteSize (),
mProperty_mNopInstructionStringInLLVM (),
mProperty_mServiceHandler (),
mProperty_mServicePushedRegisterByteSize (),
mProperty_mSectionImplementation (),
mProperty_m_5F_C_5F_definitionFiles (),
mProperty_m_5F_S_5F_definitionFiles (),
mProperty_m_5F_LL_5F_definitionFiles (),
mProperty_mXtrInterruptHandler (),
mProperty_mUndefinedInterruptHandler (),
mProperty_mServiceDispatcherEntry (),
mProperty_mServiceDispatcherHeader (),
mProperty_mServiceEntry () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters::~ GALGAS_targetParameters (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters::GALGAS_targetParameters (const GALGAS__32_lstringlist & inOperand0,
                                                  const GALGAS_lstring & inOperand1,
                                                  const GALGAS_lstring & inOperand2,
                                                  const GALGAS_lstring & inOperand3,
                                                  const GALGAS_lbigint & inOperand4,
                                                  const GALGAS_lbigint & inOperand5,
                                                  const GALGAS_lbigint & inOperand6,
                                                  const GALGAS_lstring & inOperand7,
                                                  const GALGAS_lstring & inOperand8,
                                                  const GALGAS_lbigint & inOperand9,
                                                  const GALGAS_sectionImplementationScheme & inOperand10,
                                                  const GALGAS_lstringlist & inOperand11,
                                                  const GALGAS_lstringlist & inOperand12,
                                                  const GALGAS_lstringlist & inOperand13,
                                                  const GALGAS_lstring & inOperand14,
                                                  const GALGAS_lstring & inOperand15,
                                                  const GALGAS_lstring & inOperand16,
                                                  const GALGAS_lstring & inOperand17,
                                                  const GALGAS_lstring & inOperand18) :
mProperty_mPython_5F_utilityToolList (inOperand0),
mProperty_mPython_5F_build (inOperand1),
mProperty_mTargetPanic_5F_LL_5F_filePath (inOperand2),
mProperty_mLinkerScript (inOperand3),
mProperty_mPointerSize (inOperand4),
mProperty_mSystemStackSize (inOperand5),
mProperty_mStackedUserRegisterOnInterruptByteSize (inOperand6),
mProperty_mNopInstructionStringInLLVM (inOperand7),
mProperty_mServiceHandler (inOperand8),
mProperty_mServicePushedRegisterByteSize (inOperand9),
mProperty_mSectionImplementation (inOperand10),
mProperty_m_5F_C_5F_definitionFiles (inOperand11),
mProperty_m_5F_S_5F_definitionFiles (inOperand12),
mProperty_m_5F_LL_5F_definitionFiles (inOperand13),
mProperty_mXtrInterruptHandler (inOperand14),
mProperty_mUndefinedInterruptHandler (inOperand15),
mProperty_mServiceDispatcherEntry (inOperand16),
mProperty_mServiceDispatcherHeader (inOperand17),
mProperty_mServiceEntry (inOperand18) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_targetParameters::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_targetParameters (GALGAS__32_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_sectionImplementationScheme::constructor_none (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_targetParameters::constructor_new (const GALGAS__32_lstringlist & inOperand0,
                                                                  const GALGAS_lstring & inOperand1,
                                                                  const GALGAS_lstring & inOperand2,
                                                                  const GALGAS_lstring & inOperand3,
                                                                  const GALGAS_lbigint & inOperand4,
                                                                  const GALGAS_lbigint & inOperand5,
                                                                  const GALGAS_lbigint & inOperand6,
                                                                  const GALGAS_lstring & inOperand7,
                                                                  const GALGAS_lstring & inOperand8,
                                                                  const GALGAS_lbigint & inOperand9,
                                                                  const GALGAS_sectionImplementationScheme & inOperand10,
                                                                  const GALGAS_lstringlist & inOperand11,
                                                                  const GALGAS_lstringlist & inOperand12,
                                                                  const GALGAS_lstringlist & inOperand13,
                                                                  const GALGAS_lstring & inOperand14,
                                                                  const GALGAS_lstring & inOperand15,
                                                                  const GALGAS_lstring & inOperand16,
                                                                  const GALGAS_lstring & inOperand17,
                                                                  const GALGAS_lstring & inOperand18 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid ()) {
    result = GALGAS_targetParameters (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_targetParameters::objectCompare (const GALGAS_targetParameters & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_utilityToolList.objectCompare (inOperand.mProperty_mPython_5F_utilityToolList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_build.objectCompare (inOperand.mProperty_mPython_5F_build) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetPanic_5F_LL_5F_filePath.objectCompare (inOperand.mProperty_mTargetPanic_5F_LL_5F_filePath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLinkerScript.objectCompare (inOperand.mProperty_mLinkerScript) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPointerSize.objectCompare (inOperand.mProperty_mPointerSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSystemStackSize.objectCompare (inOperand.mProperty_mSystemStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStackedUserRegisterOnInterruptByteSize.objectCompare (inOperand.mProperty_mStackedUserRegisterOnInterruptByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNopInstructionStringInLLVM.objectCompare (inOperand.mProperty_mNopInstructionStringInLLVM) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceHandler.objectCompare (inOperand.mProperty_mServiceHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServicePushedRegisterByteSize.objectCompare (inOperand.mProperty_mServicePushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionImplementation.objectCompare (inOperand.mProperty_mSectionImplementation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_C_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_C_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_S_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_S_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_LL_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_LL_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXtrInterruptHandler.objectCompare (inOperand.mProperty_mXtrInterruptHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUndefinedInterruptHandler.objectCompare (inOperand.mProperty_mUndefinedInterruptHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherEntry.objectCompare (inOperand.mProperty_mServiceDispatcherEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherHeader.objectCompare (inOperand.mProperty_mServiceDispatcherHeader) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceEntry.objectCompare (inOperand.mProperty_mServiceEntry) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_targetParameters::isValid (void) const {
  return mProperty_mPython_5F_utilityToolList.isValid () && mProperty_mPython_5F_build.isValid () && mProperty_mTargetPanic_5F_LL_5F_filePath.isValid () && mProperty_mLinkerScript.isValid () && mProperty_mPointerSize.isValid () && mProperty_mSystemStackSize.isValid () && mProperty_mStackedUserRegisterOnInterruptByteSize.isValid () && mProperty_mNopInstructionStringInLLVM.isValid () && mProperty_mServiceHandler.isValid () && mProperty_mServicePushedRegisterByteSize.isValid () && mProperty_mSectionImplementation.isValid () && mProperty_m_5F_C_5F_definitionFiles.isValid () && mProperty_m_5F_S_5F_definitionFiles.isValid () && mProperty_m_5F_LL_5F_definitionFiles.isValid () && mProperty_mXtrInterruptHandler.isValid () && mProperty_mUndefinedInterruptHandler.isValid () && mProperty_mServiceDispatcherEntry.isValid () && mProperty_mServiceDispatcherHeader.isValid () && mProperty_mServiceEntry.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetParameters::drop (void) {
  mProperty_mPython_5F_utilityToolList.drop () ;
  mProperty_mPython_5F_build.drop () ;
  mProperty_mTargetPanic_5F_LL_5F_filePath.drop () ;
  mProperty_mLinkerScript.drop () ;
  mProperty_mPointerSize.drop () ;
  mProperty_mSystemStackSize.drop () ;
  mProperty_mStackedUserRegisterOnInterruptByteSize.drop () ;
  mProperty_mNopInstructionStringInLLVM.drop () ;
  mProperty_mServiceHandler.drop () ;
  mProperty_mServicePushedRegisterByteSize.drop () ;
  mProperty_mSectionImplementation.drop () ;
  mProperty_m_5F_C_5F_definitionFiles.drop () ;
  mProperty_m_5F_S_5F_definitionFiles.drop () ;
  mProperty_m_5F_LL_5F_definitionFiles.drop () ;
  mProperty_mXtrInterruptHandler.drop () ;
  mProperty_mUndefinedInterruptHandler.drop () ;
  mProperty_mServiceDispatcherEntry.drop () ;
  mProperty_mServiceDispatcherHeader.drop () ;
  mProperty_mServiceEntry.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetParameters::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @targetParameters:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPython_5F_utilityToolList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPython_5F_build.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetPanic_5F_LL_5F_filePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLinkerScript.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPointerSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSystemStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStackedUserRegisterOnInterruptByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNopInstructionStringInLLVM.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServicePushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionImplementation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_C_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_S_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_LL_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXtrInterruptHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUndefinedInterruptHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceEntry.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS_targetParameters::getter_mPython_5F_utilityToolList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPython_5F_utilityToolList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mPython_5F_build (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPython_5F_build ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mTargetPanic_5F_LL_5F_filePath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetPanic_5F_LL_5F_filePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mLinkerScript (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLinkerScript ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPointerSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mSystemStackSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mStackedUserRegisterOnInterruptByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStackedUserRegisterOnInterruptByteSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mNopInstructionStringInLLVM (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNopInstructionStringInLLVM ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceHandler ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mServicePushedRegisterByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServicePushedRegisterByteSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme GALGAS_targetParameters::getter_mSectionImplementation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionImplementation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_C_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_C_5F_definitionFiles ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_S_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_S_5F_definitionFiles ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_LL_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_LL_5F_definitionFiles ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mXtrInterruptHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXtrInterruptHandler ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mUndefinedInterruptHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUndefinedInterruptHandler ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceDispatcherEntry (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceDispatcherEntry ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceDispatcherHeader (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceDispatcherHeader ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceEntry (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceEntry ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @targetParameters type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetParameters (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_targetParameters::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  const GALGAS_targetParameters * p = (const GALGAS_targetParameters *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_targetParameters *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetParameters", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_configurationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mPanicCodeTypeName.objectCompare (p->mProperty_mPanicCodeTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicLineTypeName.objectCompare (p->mProperty_mPanicLineTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetParameters.objectCompare (p->mProperty_mTargetParameters) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInterruptionConfigurationList.objectCompare (p->mProperty_mInterruptionConfigurationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_configurationDeclarationAST::objectCompare (const GALGAS_configurationDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_configurationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_targetParameters::constructor_default (HERE),
                                                              GALGAS_interruptionConfigurationList::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mPanicCodeTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mPanicLineTypeName,
                                                                                        const GALGAS_targetParameters & inAttribute_mTargetParameters,
                                                                                        const GALGAS_interruptionConfigurationList & inAttribute_mInterruptionConfigurationList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  if (inAttribute_mPanicCodeTypeName.isValid () && inAttribute_mPanicLineTypeName.isValid () && inAttribute_mTargetParameters.isValid () && inAttribute_mInterruptionConfigurationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_configurationDeclarationAST (inAttribute_mPanicCodeTypeName, inAttribute_mPanicLineTypeName, inAttribute_mTargetParameters, inAttribute_mInterruptionConfigurationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicCodeTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicLineTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  GALGAS_targetParameters result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mTargetParameters ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters cPtr_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mInterruptionConfigurationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList cPtr_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionConfigurationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @configurationDeclarationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (const GALGAS_lstring & in_mPanicCodeTypeName,
                                                                    const GALGAS_lstring & in_mPanicLineTypeName,
                                                                    const GALGAS_targetParameters & in_mTargetParameters,
                                                                    const GALGAS_interruptionConfigurationList & in_mInterruptionConfigurationList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mPanicCodeTypeName (in_mPanicCodeTypeName),
mProperty_mPanicLineTypeName (in_mPanicLineTypeName),
mProperty_mTargetParameters (in_mTargetParameters),
mProperty_mInterruptionConfigurationList (in_mInterruptionConfigurationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_configurationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

void cPtr_configurationDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@configurationDeclarationAST:" ;
  mProperty_mPanicCodeTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicLineTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInterruptionConfigurationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_configurationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @configurationDeclarationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  const GALGAS_configurationDeclarationAST * p = (const GALGAS_configurationDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configurationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@structurePropertyListAST-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_structurePropertyListAST_2D_element inObject,
                                     const GALGAS_lstring constinArgument_inStructureName,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     GALGAS_propertyList & ioArgument_propertyList,
                                     GALGAS_propertyMap & ioArgument_propertyMap,
                                     GALGAS_sortedOperandIRList & ioArgument_sortedOperandIRList,
                                     GALGAS_constructorSignature & ioArgument_constructorSignature,
                                     GALGAS_string & ioArgument_ioConstructorKey,
                                     GALGAS_bool & ioArgument_canBeCopied,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mPropertyTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 420)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)) ;
  }
  GALGAS_PLMType var_optionalPropertyType_15851 = temp_0 ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_16144 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_16144, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)) ;
  }
  switch (inObject.mProperty_mInitialisation.enumValue ()) {
  case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
    break ;
  case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
    {
      const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_17817 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (inObject.mProperty_mInitialisation.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_initExpression = extractPtr_17817->mAssociatedValue0 ;
      GALGAS_semanticTemporariesStruct joker_16531 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 438)) ;
      GALGAS_allocaList joker_16630 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 441)) ;
      GALGAS_instructionListIR joker_16658 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 442)) ;
      GALGAS_objectIR var_expressionIR_16700 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 432)), GALGAS_bool (false), GALGAS_lstring::constructor_new (constinArgument_inStructureName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)), constinArgument_inStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)), var_optionalPropertyType_15851, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-structure-declaration.galgas", 437)), joker_16531, ioArgument_ioGlobalLiteralStringMap, var_universalMap_16144, joker_16630, joker_16658, var_expressionIR_16700, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)) ;
      const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionIR_16700, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 445)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 446)), GALGAS_string ("initialization expression cannot be computed statically"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)) ;
      }
      GALGAS_PLMType var_actualPropertyType_16872 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_15851.getter_mKind (SOURCE_FILE ("type-structure-declaration.galgas", 449)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 449)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_actualPropertyType_16872 = var_optionalPropertyType_15851 ;
      }else if (kBoolFalse == test_4) {
        var_actualPropertyType_16872 = extensionGetter_type (var_expressionIR_16700, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)) ;
      }
      const enumGalgasBool test_5 = extensionGetter_instanciable (var_actualPropertyType_16872, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 454)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 454)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 455)), GALGAS_string ("$").add_operation (extensionGetter_plmTypeName (var_actualPropertyType_16872, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455)), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455)) ;
      }
      const enumGalgasBool test_7 = extensionGetter_copyable (var_actualPropertyType_16872, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 457)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 457)).boolEnum () ;
      if (kBoolTrue == test_7) {
        ioArgument_canBeCopied = GALGAS_bool (false) ;
      }
      const enumGalgasBool test_8 = inObject.mProperty_mIsConstant.boolEnum () ;
      if (kBoolTrue == test_8) {
        {
        ioArgument_propertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_constantProperty (extensionGetter_withType (var_expressionIR_16700, var_actualPropertyType_16872, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 461)) ;
        }
      }else if (kBoolFalse == test_8) {
        GALGAS_uint var_propertyIndex_17486 = ioArgument_propertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 467)) ;
        ioArgument_propertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_actualPropertyType_16872  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 468)) ;
        {
        ioArgument_propertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_indexed (var_actualPropertyType_16872, var_propertyIndex_17486  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 469)) ;
        }
        ioArgument_sortedOperandIRList.addAssign_operation (extensionGetter_withType (var_expressionIR_16700, var_actualPropertyType_16872, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 474)), var_propertyIndex_17486  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 474)) ;
      }
    }
    break ;
  case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
    {
      const enumGalgasBool test_9 = extensionGetter_instanciable (var_optionalPropertyType_15851, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 477)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 477)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 478)), GALGAS_string ("$").add_operation (extensionGetter_plmTypeName (var_optionalPropertyType_15851, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)) ;
      }
      GALGAS_uint var_propertyIndex_18020 = ioArgument_propertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 480)) ;
      ioArgument_propertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15851  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 481)) ;
      {
      ioArgument_propertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_indexed (var_optionalPropertyType_15851, var_propertyIndex_18020  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 482)) ;
      }
      ioArgument_constructorSignature.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15851, var_propertyIndex_18020  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 487)) ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 488)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_infixObjectObjectOperatorDescription::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_infixObjectObjectOperatorDescription * p = (const cPtr_infixObjectObjectOperatorDescription *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_infixObjectObjectOperatorDescription) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_infixObjectObjectOperatorDescription::objectCompare (const GALGAS_infixObjectObjectOperatorDescription & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription::GALGAS_infixObjectObjectOperatorDescription (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription::GALGAS_infixObjectObjectOperatorDescription (const cPtr_infixObjectObjectOperatorDescription * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixObjectObjectOperatorDescription) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription GALGAS_infixObjectObjectOperatorDescription::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_infixObjectObjectOperatorDescription result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_infixObjectObjectOperatorDescription (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @infixObjectObjectOperatorDescription class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixObjectObjectOperatorDescription::cPtr_infixObjectObjectOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_infixObjectObjectOperatorDescription::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;
}

void cPtr_infixObjectObjectOperatorDescription::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@infixObjectObjectOperatorDescription:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_infixObjectObjectOperatorDescription::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_infixObjectObjectOperatorDescription (mProperty_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @infixObjectObjectOperatorDescription type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ("infixObjectObjectOperatorDescription",
                                                             & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixObjectObjectOperatorDescription::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixObjectObjectOperatorDescription::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixObjectObjectOperatorDescription (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription GALGAS_infixObjectObjectOperatorDescription::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_infixObjectObjectOperatorDescription result ;
  const GALGAS_infixObjectObjectOperatorDescription * p = (const GALGAS_infixObjectObjectOperatorDescription *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixObjectObjectOperatorDescription *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixObjectObjectOperatorDescription", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@globalVarDeclarationList-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_globalVarDeclarationList_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_variableAnnotationType_7070 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_variableAnnotationType_7070 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 217)) ;
  }else if (kBoolFalse == test_0) {
    var_variableAnnotationType_7070 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 219)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 219)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_7330 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-variable.galgas", 222)) ;
  GALGAS_instructionListIR var_instructionGenerationList_7388 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 223)) ;
  GALGAS_allocaList var_allocaList_7418 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 224)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_7537 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_7537, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 225)) ;
  }
  GALGAS_objectIR var_expressionResult_7998 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mProperty_mSourceExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 231)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-variable.galgas", 233)), var_variableAnnotationType_7070, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-variable.galgas", 236)), var_temporaries_7330, ioArgument_ioGlobalLiteralStringMap, var_universalMap_7537, var_allocaList_7418, var_instructionGenerationList_7388, var_expressionResult_7998, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 230)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_7388.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 244)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_7418.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 244)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_expressionResult_7998, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 244)).operator_not (SOURCE_FILE ("declaration-global-variable.galgas", 244)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 245)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 245)) ;
  }
  GALGAS_bool test_5 = GALGAS_bool (kIsEqual, var_variableAnnotationType_7070.getter_mKind (SOURCE_FILE ("declaration-global-variable.galgas", 248)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-global-variable.galgas", 248)))) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = extensionGetter_type (var_expressionResult_7998, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 248)).getter_mKind (SOURCE_FILE ("declaration-global-variable.galgas", 248)).getter_isStaticInteger (SOURCE_FILE ("declaration-global-variable.galgas", 248)) ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 249)), GALGAS_string ("cannot infer type"), fixItArray7  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 249)) ;
  }
  GALGAS_objectIR var_result_8402 = function_checkAssignmentCompatibility (var_expressionResult_7998, var_variableAnnotationType_7070, inObject.mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 251)) ;
  GALGAS_stringset var_executionModes_8611 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-variable.galgas", 257)) ;
  GALGAS_allowedGuardMap var_allowedGuardMap_10768 = GALGAS_allowedGuardMap::constructor_emptyMap (SOURCE_FILE ("declaration-global-variable.galgas", 310)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalVariableMap.setter_insertKey (inObject.mProperty_mVarName, extensionGetter_type (var_result_8402, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 349)), var_executionModes_8611, var_allowedGuardMap_10768, var_result_8402, GALGAS_bool (false), inObject.mProperty_mAllowedAccessToAll, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 347)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const GALGAS_globalVariableMapIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 395)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mProperty_mType, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 396)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 396)) ;
  GALGAS_string var_initialString_14439 = extensionGetter_llvmName (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 397)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString_14439.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 399)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_initialString_14439, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 401)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 403)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@moduleListIR-element generateLLVM'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const GALGAS_moduleListIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (inObject.mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 326)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 326)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mProperty_mType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 327)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 327)) ;
  cEnumerator_operandIRList enumerator_13919 (inObject.mProperty_mInitialValueList, kENUMERATION_UP) ;
  while (enumerator_13919.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_13919.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 329)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 329)).add_operation (extensionGetter_llvmName (enumerator_13919.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 329)) ;
    if (enumerator_13919.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 330)) ;
    }
    enumerator_13919.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 332)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@taskList-element semanticAnalysis'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const GALGAS_taskList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_stackSize_8691 = inObject.mProperty_mStackSize.getter_bigint (HERE) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsStrictInf, var_stackSize_8691.objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 234)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsNotEqual, var_stackSize_8691.modulo_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 234)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 234)))) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (inObject.mProperty_mStackSize.getter_location (SOURCE_FILE ("declaration-task.galgas", 235)), GALGAS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray2  COMMA_SOURCE_FILE ("declaration-task.galgas", 235)) ;
  }
  GALGAS_PLMType var_taskType_8932 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mTaskName, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 238)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 238)) ;
  cEnumerator_functionDeclarationListAST enumerator_9039 (inObject.mProperty_mTaskProcList, kENUMERATION_UP) ;
  while (enumerator_9039.hasCurrentObject ()) {
    {
    routine_routineSemanticAnalysis (var_taskType_8932, GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 242))  COMMA_SOURCE_FILE ("declaration-task.galgas", 242)), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 243)), enumerator_9039.current (HERE).getter_mFunctionName (HERE), enumerator_9039.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_9039.current (HERE).getter_mFunctionReturnTypeName (HERE), enumerator_9039.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_9039.current (HERE).getter_mEndOfFunctionDeclaration (HERE), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 240)) ;
    }
    enumerator_9039.gotoNextObject () ;
  }
  GALGAS_taskSetupSortedListAST var_taskInitSortedListAST_9749 = GALGAS_taskSetupSortedListAST::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 259)) ;
  cEnumerator_taskSetupListAST enumerator_9825 (inObject.mProperty_mTaskSetupListAST, kENUMERATION_UP) ;
  while (enumerator_9825.hasCurrentObject ()) {
    var_taskInitSortedListAST_9749.addAssign_operation (enumerator_9825.current_mTaskSetupPriority (HERE), enumerator_9825.current_mTaskSetupInstructionList (HERE), enumerator_9825.current_mEndOfTaskSetupDeclaration (HERE), enumerator_9825.current_mTaskSetupPriority (HERE).getter_bigint (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 261)) ;
    enumerator_9825.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_setupInstructionListIR_9969 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 263)) ;
  GALGAS_allocaList var_setupAllocaList_10004 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 264)) ;
  cEnumerator_taskSetupSortedListAST enumerator_10110 (var_taskInitSortedListAST_9749, kENUMERATION_UP) ;
  while (enumerator_10110.hasCurrentObject ()) {
    GALGAS_allocaList var_partialAllocaList_10452 ;
    GALGAS_instructionListIR var_partialInstructionGenerationList_10515 ;
    {
    routine_initSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_taskType_8932, enumerator_10110.current_mTaskSetupPriority (HERE), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 272)), enumerator_10110.current_mTaskSetupInstructionList (HERE), enumerator_10110.current_mEndOfTaskSetupDeclaration (HERE), var_partialAllocaList_10452, var_partialInstructionGenerationList_10515, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 266)) ;
    }
    var_setupInstructionListIR_9969.plusAssign_operation(var_partialInstructionGenerationList_10515, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 278)) ;
    var_setupAllocaList_10004.plusAssign_operation(var_partialAllocaList_10452, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 279)) ;
    enumerator_10110.gotoNextObject () ;
  }
  GALGAS_instructionListAST var_taskListInstructionList_10816 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 283)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, inObject.mProperty_mGuardedCommandList.getter_length (SOURCE_FILE ("declaration-task.galgas", 284)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_syncInstructionAST var_syncInstruction_10888 = GALGAS_syncInstructionAST::constructor_new (inObject.mProperty_mTaskName.getter_location (HERE), inObject.mProperty_mGuardedCommandList, inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 285)) ;
    var_taskListInstructionList_10816.addAssign_operation (var_syncInstruction_10888  COMMA_SOURCE_FILE ("declaration-task.galgas", 286)) ;
  }
  {
  routine_routineSemanticAnalysis (var_taskType_8932, GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 290))  COMMA_SOURCE_FILE ("declaration-task.galgas", 290)), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 291)), GALGAS_lstring::constructor_new (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 292)), inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 292)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 293)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-task.galgas", 294)), var_taskListInstructionList_10816, inObject.mProperty_mTaskName.getter_location (HERE), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 288)) ;
  }
  GALGAS_uint var_taskNameStringIndex_11730 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, inObject.mProperty_mTaskName.getter_string (HERE), var_taskNameStringIndex_11730, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 306)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (inObject.mProperty_mTaskName, var_taskType_8932, inObject.mProperty_mPriority.getter_bigint (HERE), inObject.mProperty_mStackSize.getter_bigint (HERE), var_setupAllocaList_10004, var_setupInstructionListIR_9969, var_taskNameStringIndex_11730, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 308)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@panicClauseListAST-element enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_panicClauseListAST_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = inObject.mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 76)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 76)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 78)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 78)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@initList-element enterInContext'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_initList_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioContext.mProperty_mInitRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-init.galgas", 74)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-init.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 74)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@externProcedureDeclarationListAST-element enterExternProcInContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterExternProcInContext (const GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_3510 ;
  {
  routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mProcFormalArgumentList, var_signature_3510, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 77)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_3635 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mReturnTypeName, var_returnTypeProxy_3635 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 79)) ;
  }
  {
  extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, inObject.mProperty_mExternProcedureName, extensionGetter_routineSignature (inObject.mProperty_mProcFormalArgumentList, inObject.mProperty_mExternProcedureName.getter_location (SOURCE_FILE ("declaration-extern-proc.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 82)), inObject.mProperty_mRoutineNameForGeneration, GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (inObject.mProperty_mMode  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 87)), var_signature_3510, var_returnTypeProxy_3635, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 80)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR_2D_element inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_procName_7501 = function_llvmNameForFunction (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 185)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("extern procedure ").add_operation (inObject.mProperty_lkey.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 188)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_procName_7501, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
  cEnumerator_routineFormalArgumentListForGeneration enumerator_7841 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7841.hasCurrentObject ()) {
    switch (enumerator_7841.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7841.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)).add_operation (enumerator_7841.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7841.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)).add_operation (function_llvmNameForLocalVariable (enumerator_7841.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7841.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)).add_operation (function_llvmNameForLocalVariable (enumerator_7841.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)) ;
      }
      break ;
    }
    if (enumerator_7841.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 205)) ;
    }
    enumerator_7841.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)).add_operation (GALGAS_string ("; defined in C\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension method '@callInstructionAST baseGuardAnalyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_callInstructionAST_baseGuardAnalyze> gExtensionMethodTable_callInstructionAST_baseGuardAnalyze ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_baseGuardAnalyze (const int32_t inClassIndex,
                                            extensionMethodSignature_callInstructionAST_baseGuardAnalyze inMethod) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_callInstructionAST_baseGuardAnalyze (void) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_callInstructionAST_baseGuardAnalyze (NULL,
                                                                freeExtensionMethod_callInstructionAST_baseGuardAnalyze) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                           const GALGAS_PLMType constin_inSelfType,
                                           const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_mode constin_inCurrentMode,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                           GALGAS_universalValuedObjectMapForContext & io_ioUniversalMap,
                                           GALGAS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outConvenienceGuardGenerationIR.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_callInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_callInstructionAST_baseGuardAnalyze f = NULL ;
    if (classIndex < gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.count ()) {
      f = gExtensionMethodTable_callInstructionAST_baseGuardAnalyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.count ()) {
          f = gExtensionMethodTable_callInstructionAST_baseGuardAnalyze (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inCallerNameForInvocationGraph, constin_inContext, constin_inCurrentMode, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioUniversalMap, out_outConvenienceGuardGenerationIR, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@guardMapIR-element llvmCodeGeneration'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const GALGAS_guardMapIR_2D_element inObject,
                                         GALGAS_string & ioArgument_ioLLVMcode,
                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_guardRoutineName_20740 ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      var_guardRoutineName_20740 = function_llvmNameForGuardCall (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 519)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      var_guardRoutineName_20740 = function_llvmNameForGuardImplementation (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 521)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardRoutineName_20740, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 523)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_20740, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 524)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 524)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverType.getter_mKind (SOURCE_FILE ("declaration-guard.galgas", 525)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 525)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (extensionGetter_plmTypeName (inObject.mProperty_mReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 525)) ;
  }
  GALGAS_string var_receiverTypeName_21093 = temp_0 ;
  GALGAS_bool var_first_21192 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_21093.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_receiverTypeName_21093.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)) ;
    var_first_21192 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_21381 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21381.hasCurrentObject ()) {
    const enumGalgasBool test_3 = var_first_21192.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_first_21192 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 535)) ;
    }
    switch (enumerator_21381.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21381.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 539)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 539)).add_operation (enumerator_21381.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 539)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21381.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 541)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 541)).add_operation (function_llvmNameForLocalVariable (enumerator_21381.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 541)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21381.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 543)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 543)).add_operation (function_llvmNameForLocalVariable (enumerator_21381.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 543)) ;
      }
      break ;
    }
    enumerator_21381.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)) ;
  cEnumerator_allocaList enumerator_22010 (inObject.mProperty_mAllocaList, kENUMERATION_UP) ;
  while (enumerator_22010.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_22010.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 549)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 549)).add_operation (enumerator_22010.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 549)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 549)) ;
    enumerator_22010.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_22172 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22172.hasCurrentObject ()) {
    switch (enumerator_22172.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_22242 = extensionGetter_llvmTypeName (enumerator_22172.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (enumerator_22172.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 556)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 556)).add_operation (var_llvmType_22242, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 556)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 556)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 556)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22172.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_22477 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22477.hasCurrentObject ()) {
    switch (enumerator_22477.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_22547 = extensionGetter_llvmTypeName (enumerator_22477.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_22547, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (enumerator_22477.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (var_llvmType_22547, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (function_llvmNameForLocalVariable (enumerator_22477.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22477.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_22851 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_22937 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 571)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 571)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_true_23033 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 572)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 572)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_false_23101 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 573)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 573)) ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i1 false, i1* ").add_operation (var_accepted_5F_llvmName_22851, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 577)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 577)) ;
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 578)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_22937, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (var_accepted_5F_llvmName_22851, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_22937, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)).add_operation (var_accepted_5F_llvmName_5F_true_23033, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)).add_operation (var_accepted_5F_llvmName_5F_false_23101, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_llvmName_5F_true_23033.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 581)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 582)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 583)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_llvmName_5F_false_23101.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 584)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 586)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_25284 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_baseGuardAllocaList = extractPtr_25284->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_25284->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_25284->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_baseGuardEffectiveParameterList = extractPtr_25284->mAssociatedValue3 ;
      cEnumerator_allocaList enumerator_24106 (extractedValue_baseGuardAllocaList, kENUMERATION_UP) ;
      while (enumerator_24106.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_24106.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)).add_operation (enumerator_24106.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)) ;
        enumerator_24106.gotoNextObject () ;
      }
      extensionMethod_instructionListLLVMCode (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %baseGuard.result = call i1 @").add_operation (function_llvmNameForGuardCall (extractedValue_baseGuardMangledName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 592)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_24476 (extractedValue_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_24476.hasCurrentObject ()) {
        switch (enumerator_24476.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24476.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)).add_operation (extensionGetter_llvmName (enumerator_24476.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24476.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)).add_operation (extensionGetter_llvmName (enumerator_24476.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24476.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)).add_operation (extensionGetter_llvmName (enumerator_24476.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)) ;
          }
          break ;
        }
        if (enumerator_24476.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)) ;
        }
        enumerator_24476.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %baseGuard.result, label %baseGuard.true, label %baseGuard.exit\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("baseGuard.true:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 610)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("baseGuard.exit:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 613)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare void @noteGuardHasBeenAccepted ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 615)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_addressofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_addressofExpressionAST::objectCompare (const GALGAS_addressofExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_addressofExpressionAST::constructor_new (GALGAS_LValueAST::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (const cPtr_addressofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST GALGAS_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST cPtr_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @addressofExpressionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_addressofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

void cPtr_addressofExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_addressofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @addressofExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofExpressionAST ("addressofExpressionAST",
                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_addressofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_addressofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST result ;
  const GALGAS_addressofExpressionAST * p = (const GALGAS_addressofExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mTargetParameters (),
mProperty_mPointerSize (),
mProperty_mPanicCodeType (),
mProperty_mPanicLineType (),
mProperty_mTypeMap (),
mProperty_mRoutineMapForContext (),
mProperty_mGuardMapForContext (),
mProperty_mInitRoutineMap (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mControlRegisterMap (),
mProperty_mGlobalConstantMap (),
mProperty_mGlobalVariableMap (),
mProperty_mModuleMap (),
mProperty_mStaticListMap (),
mProperty_mDefinedInterruptSet (),
mProperty_mAvailableInterruptMap (),
mProperty_mEqualOperatorMap (),
mProperty_mNonEqualOperatorMap (),
mProperty_mStrictInfOperatorMap (),
mProperty_mInfEqualOperatorMap (),
mProperty_mStrictSupOperatorMap (),
mProperty_mSupEqualOperatorMap (),
mProperty_mAndOperatorMap (),
mProperty_mOrOperatorMap (),
mProperty_mXorOperatorMap (),
mProperty_mBooleanXorOperatorMap (),
mProperty_mAddOperatorMap (),
mProperty_mAddNoOvfOperatorMap (),
mProperty_mSubOperatorMap (),
mProperty_mSubNoOvfOperatorMap (),
mProperty_mMulOperatorMap (),
mProperty_mMulNoOvfOperatorMap (),
mProperty_mDivOperatorMap (),
mProperty_mDivNoOvfOperatorMap (),
mProperty_mModOperatorMap (),
mProperty_mModNoOvfOperatorMap (),
mProperty_mLeftShiftOperatorMap (),
mProperty_mRightShiftOperatorMap (),
mProperty_mUnaryMinusOperatorMap (),
mProperty_mNotOperatorMap (),
mProperty_mUnsignedComplementOperatorMap (),
mProperty_mTaskMap (),
mProperty_mGlobalTaskVariableList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_targetParameters & inOperand0,
                                                const GALGAS_uint & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                const GALGAS_unifiedTypeMap & inOperand4,
                                                const GALGAS_routineMapForContext & inOperand5,
                                                const GALGAS_guardMapForContext & inOperand6,
                                                const GALGAS_initRoutineMap & inOperand7,
                                                const GALGAS_panicRoutinePriorityMap & inOperand8,
                                                const GALGAS_panicRoutinePriorityMap & inOperand9,
                                                const GALGAS_controlRegisterMap & inOperand10,
                                                const GALGAS_globalConstantMap & inOperand11,
                                                const GALGAS_globalVariableMap & inOperand12,
                                                const GALGAS_moduleMap & inOperand13,
                                                const GALGAS_staticlistMap & inOperand14,
                                                const GALGAS_stringset & inOperand15,
                                                const GALGAS_availableInterruptMap & inOperand16,
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
                                                const GALGAS_infixOperatorMap & inOperand38,
                                                const GALGAS_prefixOperatorMap & inOperand39,
                                                const GALGAS_prefixOperatorMap & inOperand40,
                                                const GALGAS_prefixOperatorMap & inOperand41,
                                                const GALGAS_taskMap & inOperand42,
                                                const GALGAS_globalTaskVariableList & inOperand43) :
mProperty_mTargetParameters (inOperand0),
mProperty_mPointerSize (inOperand1),
mProperty_mPanicCodeType (inOperand2),
mProperty_mPanicLineType (inOperand3),
mProperty_mTypeMap (inOperand4),
mProperty_mRoutineMapForContext (inOperand5),
mProperty_mGuardMapForContext (inOperand6),
mProperty_mInitRoutineMap (inOperand7),
mProperty_mPanicSetupRoutinePriorityMap (inOperand8),
mProperty_mPanicLoopRoutinePriorityMap (inOperand9),
mProperty_mControlRegisterMap (inOperand10),
mProperty_mGlobalConstantMap (inOperand11),
mProperty_mGlobalVariableMap (inOperand12),
mProperty_mModuleMap (inOperand13),
mProperty_mStaticListMap (inOperand14),
mProperty_mDefinedInterruptSet (inOperand15),
mProperty_mAvailableInterruptMap (inOperand16),
mProperty_mEqualOperatorMap (inOperand17),
mProperty_mNonEqualOperatorMap (inOperand18),
mProperty_mStrictInfOperatorMap (inOperand19),
mProperty_mInfEqualOperatorMap (inOperand20),
mProperty_mStrictSupOperatorMap (inOperand21),
mProperty_mSupEqualOperatorMap (inOperand22),
mProperty_mAndOperatorMap (inOperand23),
mProperty_mOrOperatorMap (inOperand24),
mProperty_mXorOperatorMap (inOperand25),
mProperty_mBooleanXorOperatorMap (inOperand26),
mProperty_mAddOperatorMap (inOperand27),
mProperty_mAddNoOvfOperatorMap (inOperand28),
mProperty_mSubOperatorMap (inOperand29),
mProperty_mSubNoOvfOperatorMap (inOperand30),
mProperty_mMulOperatorMap (inOperand31),
mProperty_mMulNoOvfOperatorMap (inOperand32),
mProperty_mDivOperatorMap (inOperand33),
mProperty_mDivNoOvfOperatorMap (inOperand34),
mProperty_mModOperatorMap (inOperand35),
mProperty_mModNoOvfOperatorMap (inOperand36),
mProperty_mLeftShiftOperatorMap (inOperand37),
mProperty_mRightShiftOperatorMap (inOperand38),
mProperty_mUnaryMinusOperatorMap (inOperand39),
mProperty_mNotOperatorMap (inOperand40),
mProperty_mUnsignedComplementOperatorMap (inOperand41),
mProperty_mTaskMap (inOperand42),
mProperty_mGlobalTaskVariableList (inOperand43) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_targetParameters::constructor_default (HERE),
                                 GALGAS_uint::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMapForContext::constructor_default (HERE),
                                 GALGAS_guardMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_initRoutineMap::constructor_emptyMap (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_controlRegisterMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalVariableMap::constructor_emptyMap (HERE),
                                 GALGAS_moduleMap::constructor_emptyMap (HERE),
                                 GALGAS_staticlistMap::constructor_emptyMap (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_availableInterruptMap::constructor_emptyMap (HERE),
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
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_taskMap::constructor_emptyMap (HERE),
                                 GALGAS_globalTaskVariableList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_targetParameters & inOperand0,
                                                                const GALGAS_uint & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                const GALGAS_unifiedTypeMap & inOperand4,
                                                                const GALGAS_routineMapForContext & inOperand5,
                                                                const GALGAS_guardMapForContext & inOperand6,
                                                                const GALGAS_initRoutineMap & inOperand7,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand8,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand9,
                                                                const GALGAS_controlRegisterMap & inOperand10,
                                                                const GALGAS_globalConstantMap & inOperand11,
                                                                const GALGAS_globalVariableMap & inOperand12,
                                                                const GALGAS_moduleMap & inOperand13,
                                                                const GALGAS_staticlistMap & inOperand14,
                                                                const GALGAS_stringset & inOperand15,
                                                                const GALGAS_availableInterruptMap & inOperand16,
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
                                                                const GALGAS_infixOperatorMap & inOperand38,
                                                                const GALGAS_prefixOperatorMap & inOperand39,
                                                                const GALGAS_prefixOperatorMap & inOperand40,
                                                                const GALGAS_prefixOperatorMap & inOperand41,
                                                                const GALGAS_taskMap & inOperand42,
                                                                const GALGAS_globalTaskVariableList & inOperand43 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid () && inOperand31.isValid () && inOperand32.isValid () && inOperand33.isValid () && inOperand34.isValid () && inOperand35.isValid () && inOperand36.isValid () && inOperand37.isValid () && inOperand38.isValid () && inOperand39.isValid () && inOperand40.isValid () && inOperand41.isValid () && inOperand42.isValid () && inOperand43.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30, inOperand31, inOperand32, inOperand33, inOperand34, inOperand35, inOperand36, inOperand37, inOperand38, inOperand39, inOperand40, inOperand41, inOperand42, inOperand43) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetParameters.objectCompare (inOperand.mProperty_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPointerSize.objectCompare (inOperand.mProperty_mPointerSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicCodeType.objectCompare (inOperand.mProperty_mPanicCodeType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLineType.objectCompare (inOperand.mProperty_mPanicLineType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeMap.objectCompare (inOperand.mProperty_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMapForContext.objectCompare (inOperand.mProperty_mRoutineMapForContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardMapForContext.objectCompare (inOperand.mProperty_mGuardMapForContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitRoutineMap.objectCompare (inOperand.mProperty_mInitRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterMap.objectCompare (inOperand.mProperty_mControlRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalConstantMap.objectCompare (inOperand.mProperty_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalVariableMap.objectCompare (inOperand.mProperty_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModuleMap.objectCompare (inOperand.mProperty_mModuleMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticListMap.objectCompare (inOperand.mProperty_mStaticListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefinedInterruptSet.objectCompare (inOperand.mProperty_mDefinedInterruptSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAvailableInterruptMap.objectCompare (inOperand.mProperty_mAvailableInterruptMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEqualOperatorMap.objectCompare (inOperand.mProperty_mEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonEqualOperatorMap.objectCompare (inOperand.mProperty_mNonEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStrictInfOperatorMap.objectCompare (inOperand.mProperty_mStrictInfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfEqualOperatorMap.objectCompare (inOperand.mProperty_mInfEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStrictSupOperatorMap.objectCompare (inOperand.mProperty_mStrictSupOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSupEqualOperatorMap.objectCompare (inOperand.mProperty_mSupEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAndOperatorMap.objectCompare (inOperand.mProperty_mAndOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOrOperatorMap.objectCompare (inOperand.mProperty_mOrOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXorOperatorMap.objectCompare (inOperand.mProperty_mXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBooleanXorOperatorMap.objectCompare (inOperand.mProperty_mBooleanXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddOperatorMap.objectCompare (inOperand.mProperty_mAddOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddNoOvfOperatorMap.objectCompare (inOperand.mProperty_mAddNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubOperatorMap.objectCompare (inOperand.mProperty_mSubOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubNoOvfOperatorMap.objectCompare (inOperand.mProperty_mSubNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMulOperatorMap.objectCompare (inOperand.mProperty_mMulOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMulNoOvfOperatorMap.objectCompare (inOperand.mProperty_mMulNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDivOperatorMap.objectCompare (inOperand.mProperty_mDivOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDivNoOvfOperatorMap.objectCompare (inOperand.mProperty_mDivNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModOperatorMap.objectCompare (inOperand.mProperty_mModOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModNoOvfOperatorMap.objectCompare (inOperand.mProperty_mModNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLeftShiftOperatorMap.objectCompare (inOperand.mProperty_mLeftShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRightShiftOperatorMap.objectCompare (inOperand.mProperty_mRightShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnaryMinusOperatorMap.objectCompare (inOperand.mProperty_mUnaryMinusOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNotOperatorMap.objectCompare (inOperand.mProperty_mNotOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnsignedComplementOperatorMap.objectCompare (inOperand.mProperty_mUnsignedComplementOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskMap.objectCompare (inOperand.mProperty_mTaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPointerSize.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mTypeMap.isValid () && mProperty_mRoutineMapForContext.isValid () && mProperty_mGuardMapForContext.isValid () && mProperty_mInitRoutineMap.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mControlRegisterMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalVariableMap.isValid () && mProperty_mModuleMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mDefinedInterruptSet.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mEqualOperatorMap.isValid () && mProperty_mNonEqualOperatorMap.isValid () && mProperty_mStrictInfOperatorMap.isValid () && mProperty_mInfEqualOperatorMap.isValid () && mProperty_mStrictSupOperatorMap.isValid () && mProperty_mSupEqualOperatorMap.isValid () && mProperty_mAndOperatorMap.isValid () && mProperty_mOrOperatorMap.isValid () && mProperty_mXorOperatorMap.isValid () && mProperty_mBooleanXorOperatorMap.isValid () && mProperty_mAddOperatorMap.isValid () && mProperty_mAddNoOvfOperatorMap.isValid () && mProperty_mSubOperatorMap.isValid () && mProperty_mSubNoOvfOperatorMap.isValid () && mProperty_mMulOperatorMap.isValid () && mProperty_mMulNoOvfOperatorMap.isValid () && mProperty_mDivOperatorMap.isValid () && mProperty_mDivNoOvfOperatorMap.isValid () && mProperty_mModOperatorMap.isValid () && mProperty_mModNoOvfOperatorMap.isValid () && mProperty_mLeftShiftOperatorMap.isValid () && mProperty_mRightShiftOperatorMap.isValid () && mProperty_mUnaryMinusOperatorMap.isValid () && mProperty_mNotOperatorMap.isValid () && mProperty_mUnsignedComplementOperatorMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mProperty_mTargetParameters.drop () ;
  mProperty_mPointerSize.drop () ;
  mProperty_mPanicCodeType.drop () ;
  mProperty_mPanicLineType.drop () ;
  mProperty_mTypeMap.drop () ;
  mProperty_mRoutineMapForContext.drop () ;
  mProperty_mGuardMapForContext.drop () ;
  mProperty_mInitRoutineMap.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mControlRegisterMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mGlobalVariableMap.drop () ;
  mProperty_mModuleMap.drop () ;
  mProperty_mStaticListMap.drop () ;
  mProperty_mDefinedInterruptSet.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
  mProperty_mEqualOperatorMap.drop () ;
  mProperty_mNonEqualOperatorMap.drop () ;
  mProperty_mStrictInfOperatorMap.drop () ;
  mProperty_mInfEqualOperatorMap.drop () ;
  mProperty_mStrictSupOperatorMap.drop () ;
  mProperty_mSupEqualOperatorMap.drop () ;
  mProperty_mAndOperatorMap.drop () ;
  mProperty_mOrOperatorMap.drop () ;
  mProperty_mXorOperatorMap.drop () ;
  mProperty_mBooleanXorOperatorMap.drop () ;
  mProperty_mAddOperatorMap.drop () ;
  mProperty_mAddNoOvfOperatorMap.drop () ;
  mProperty_mSubOperatorMap.drop () ;
  mProperty_mSubNoOvfOperatorMap.drop () ;
  mProperty_mMulOperatorMap.drop () ;
  mProperty_mMulNoOvfOperatorMap.drop () ;
  mProperty_mDivOperatorMap.drop () ;
  mProperty_mDivNoOvfOperatorMap.drop () ;
  mProperty_mModOperatorMap.drop () ;
  mProperty_mModNoOvfOperatorMap.drop () ;
  mProperty_mLeftShiftOperatorMap.drop () ;
  mProperty_mRightShiftOperatorMap.drop () ;
  mProperty_mUnaryMinusOperatorMap.drop () ;
  mProperty_mNotOperatorMap.drop () ;
  mProperty_mUnsignedComplementOperatorMap.drop () ;
  mProperty_mTaskMap.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPointerSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicCodeType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLineType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMapForContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardMapForContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModuleMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefinedInterruptSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStrictInfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStrictSupOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSupEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAndOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOrOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBooleanXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMulOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMulNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDivOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDivNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLeftShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRightShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnaryMinusOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNotOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnsignedComplementOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_semanticContext::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticContext::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPointerSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mPanicCodeType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mPanicLineType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_semanticContext::getter_mRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext GALGAS_semanticContext::getter_mGuardMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_semanticContext::getter_mInitRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap GALGAS_semanticContext::getter_mControlRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_semanticContext::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_semanticContext::getter_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap GALGAS_semanticContext::getter_mModuleMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap GALGAS_semanticContext::getter_mStaticListMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_semanticContext::getter_mDefinedInterruptSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefinedInterruptSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap GALGAS_semanticContext::getter_mAvailableInterruptMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAvailableInterruptMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mNonEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStrictInfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictSupOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStrictSupOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSupEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSupEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAndOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOrOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mBooleanXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBooleanXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnaryMinusOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnaryMinusOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mNotOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNotOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnsignedComplementOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnsignedComplementOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_semanticContext::getter_mTaskMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_semanticContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
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
//                             Extension method '@routineMapIR-element llvmCodeGeneration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const GALGAS_routineMapIR_2D_element inObject,
                                         GALGAS_string & ioArgument_ioLLVMcode,
                                         GALGAS_string & /* ioArgument_ioAssemblerCode */,
                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_routineName_6281 ;
  switch (inObject.mProperty_mKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_routineName_6281 = function_llvmNameForFunction (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 162)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineName_6281 = function_llvmNameForSectionImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 163)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      var_routineName_6281 = function_llvmNameForSafeImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 164)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineName_6281 = function_llvmNameForServiceImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 165)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_routineName_6281 = function_llvmNameForPrimitiveImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 166)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineName_6281, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 168)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 169)) ;
  const enumGalgasBool test_0 = inObject.mProperty_mGlobal.operator_not (SOURCE_FILE ("semantic-routines.galgas", 170)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 171)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_routineName_6281, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverType.getter_mKind (SOURCE_FILE ("semantic-routines.galgas", 175)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 175)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("$").add_operation (extensionGetter_plmTypeName (inObject.mProperty_mReceiverType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 175)) ;
  }
  GALGAS_string var_receiverTypeName_7037 = temp_1 ;
  GALGAS_bool var_first_7136 = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_7037.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_receiverTypeName_7037.getter_assemblerRepresentation (SOURCE_FILE ("semantic-routines.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 178)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 178)) ;
    var_first_7136 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_7325 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7325.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_first_7136.boolEnum () ;
    if (kBoolTrue == test_4) {
      var_first_7136 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 185)) ;
    }
    switch (enumerator_7325.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7325.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 189)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 189)).add_operation (enumerator_7325.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 189)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7325.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 191)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 191)).add_operation (function_llvmNameForLocalVariable (enumerator_7325.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 191)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7325.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 193)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_7325.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 193)) ;
      }
      break ;
    }
    enumerator_7325.gotoNextObject () ;
  }
  GALGAS_bool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("semantic-routines.galgas", 196)) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = inObject.mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = var_first_7136.operator_not (SOURCE_FILE ("semantic-routines.galgas", 197)).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 198)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 200)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 202)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 202)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, inObject.mProperty_mReturnType.getter_mKind (SOURCE_FILE ("semantic-routines.galgas", 204)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 204)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)).add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 206)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)) ;
  }
  cEnumerator_allocaList enumerator_8390 (inObject.mProperty_mAllocaList, kENUMERATION_UP) ;
  while (enumerator_8390.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_8390.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)).add_operation (enumerator_8390.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)) ;
    enumerator_8390.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_8552 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8552.hasCurrentObject ()) {
    switch (enumerator_8552.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_8622 = extensionGetter_llvmTypeName (enumerator_8552.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 215)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (enumerator_8552.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 216)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 216)).add_operation (var_llvmType_8622, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 216)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_8552.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_8857 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8857.hasCurrentObject ()) {
    switch (enumerator_8857.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_8927 = extensionGetter_llvmTypeName (enumerator_8857.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 223)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_8927, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)).add_operation (enumerator_8857.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)).add_operation (var_llvmType_8927, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)).add_operation (function_llvmNameForLocalVariable (enumerator_8857.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_8857.gotoNextObject () ;
  }
  extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 230)) ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.getter_mKind (SOURCE_FILE ("semantic-routines.galgas", 232)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 232)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 233)) ;
  }else if (kBoolFalse == test_9) {
    GALGAS_string var_resultVarLLVMName_9430 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)).add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)).add_operation (var_resultVarLLVMName_9430, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 237)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 237)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mProperty_mStaticStringMap (),
mProperty_mGlobalVariableMap (),
mProperty_mGlobalConstantMap (),
mProperty_mRoutineMapIR (),
mProperty_mGuardMapIR (),
mProperty_mInterruptMapIR (),
mProperty_mExternProcedureMapIR (),
mProperty_mRequiredProcedureSet (),
mProperty_mBootList (),
mProperty_mInitList (),
mProperty_mPanicSetupInstructionListIR (),
mProperty_mPanicLoopInstructionListIR (),
mProperty_mTaskMapIR (),
mProperty_mGlobalTaskVariableList (),
mProperty_mMaxBranchOfOnInstructions (),
mProperty_mTargetParameters (),
mProperty_mModuleList (),
mProperty_mStaticArrayMapForIntermediate (),
mProperty_mGenerationListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_staticStringMap & inOperand0,
                                                              const GALGAS_globalVariableMapIR & inOperand1,
                                                              const GALGAS_globalConstantMapIR & inOperand2,
                                                              const GALGAS_routineMapIR & inOperand3,
                                                              const GALGAS_guardMapIR & inOperand4,
                                                              const GALGAS_interruptMapIR & inOperand5,
                                                              const GALGAS_externProcedureMapIR & inOperand6,
                                                              const GALGAS_stringset & inOperand7,
                                                              const GALGAS_bootListIR & inOperand8,
                                                              const GALGAS_initListIR & inOperand9,
                                                              const GALGAS_instructionListIR & inOperand10,
                                                              const GALGAS_instructionListIR & inOperand11,
                                                              const GALGAS_taskMapIR & inOperand12,
                                                              const GALGAS_globalTaskVariableList & inOperand13,
                                                              const GALGAS_uint & inOperand14,
                                                              const GALGAS_targetParameters & inOperand15,
                                                              const GALGAS_moduleListIR & inOperand16,
                                                              const GALGAS_staticListInvokedFunctionSetMap & inOperand17,
                                                              const GALGAS_generationListIR & inOperand18) :
mProperty_mStaticStringMap (inOperand0),
mProperty_mGlobalVariableMap (inOperand1),
mProperty_mGlobalConstantMap (inOperand2),
mProperty_mRoutineMapIR (inOperand3),
mProperty_mGuardMapIR (inOperand4),
mProperty_mInterruptMapIR (inOperand5),
mProperty_mExternProcedureMapIR (inOperand6),
mProperty_mRequiredProcedureSet (inOperand7),
mProperty_mBootList (inOperand8),
mProperty_mInitList (inOperand9),
mProperty_mPanicSetupInstructionListIR (inOperand10),
mProperty_mPanicLoopInstructionListIR (inOperand11),
mProperty_mTaskMapIR (inOperand12),
mProperty_mGlobalTaskVariableList (inOperand13),
mProperty_mMaxBranchOfOnInstructions (inOperand14),
mProperty_mTargetParameters (inOperand15),
mProperty_mModuleList (inOperand16),
mProperty_mStaticArrayMapForIntermediate (inOperand17),
mProperty_mGenerationListIR (inOperand18) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_staticStringMap::constructor_emptyMap (HERE),
                                        GALGAS_globalVariableMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalConstantMapIR::constructor_emptyMap (HERE),
                                        GALGAS_routineMapIR::constructor_emptyMap (HERE),
                                        GALGAS_guardMapIR::constructor_emptyMap (HERE),
                                        GALGAS_interruptMapIR::constructor_emptyMap (HERE),
                                        GALGAS_externProcedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_bootListIR::constructor_emptyList (HERE),
                                        GALGAS_initListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE),
                                        GALGAS_taskMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                        GALGAS_uint::constructor_default (HERE),
                                        GALGAS_targetParameters::constructor_default (HERE),
                                        GALGAS_moduleListIR::constructor_emptyList (HERE),
                                        GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (HERE),
                                        GALGAS_generationListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_staticStringMap & inOperand0,
                                                                              const GALGAS_globalVariableMapIR & inOperand1,
                                                                              const GALGAS_globalConstantMapIR & inOperand2,
                                                                              const GALGAS_routineMapIR & inOperand3,
                                                                              const GALGAS_guardMapIR & inOperand4,
                                                                              const GALGAS_interruptMapIR & inOperand5,
                                                                              const GALGAS_externProcedureMapIR & inOperand6,
                                                                              const GALGAS_stringset & inOperand7,
                                                                              const GALGAS_bootListIR & inOperand8,
                                                                              const GALGAS_initListIR & inOperand9,
                                                                              const GALGAS_instructionListIR & inOperand10,
                                                                              const GALGAS_instructionListIR & inOperand11,
                                                                              const GALGAS_taskMapIR & inOperand12,
                                                                              const GALGAS_globalTaskVariableList & inOperand13,
                                                                              const GALGAS_uint & inOperand14,
                                                                              const GALGAS_targetParameters & inOperand15,
                                                                              const GALGAS_moduleListIR & inOperand16,
                                                                              const GALGAS_staticListInvokedFunctionSetMap & inOperand17,
                                                                              const GALGAS_generationListIR & inOperand18 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStaticStringMap.objectCompare (inOperand.mProperty_mStaticStringMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalVariableMap.objectCompare (inOperand.mProperty_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalConstantMap.objectCompare (inOperand.mProperty_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMapIR.objectCompare (inOperand.mProperty_mRoutineMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardMapIR.objectCompare (inOperand.mProperty_mGuardMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptMapIR.objectCompare (inOperand.mProperty_mInterruptMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternProcedureMapIR.objectCompare (inOperand.mProperty_mExternProcedureMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredProcedureSet.objectCompare (inOperand.mProperty_mRequiredProcedureSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBootList.objectCompare (inOperand.mProperty_mBootList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitList.objectCompare (inOperand.mProperty_mInitList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupInstructionListIR.objectCompare (inOperand.mProperty_mPanicSetupInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopInstructionListIR.objectCompare (inOperand.mProperty_mPanicLoopInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskMapIR.objectCompare (inOperand.mProperty_mTaskMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMaxBranchOfOnInstructions.objectCompare (inOperand.mProperty_mMaxBranchOfOnInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetParameters.objectCompare (inOperand.mProperty_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModuleList.objectCompare (inOperand.mProperty_mModuleList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticArrayMapForIntermediate.objectCompare (inOperand.mProperty_mStaticArrayMapForIntermediate) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerationListIR.objectCompare (inOperand.mProperty_mGenerationListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mProperty_mStaticStringMap.isValid () && mProperty_mGlobalVariableMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mRoutineMapIR.isValid () && mProperty_mGuardMapIR.isValid () && mProperty_mInterruptMapIR.isValid () && mProperty_mExternProcedureMapIR.isValid () && mProperty_mRequiredProcedureSet.isValid () && mProperty_mBootList.isValid () && mProperty_mInitList.isValid () && mProperty_mPanicSetupInstructionListIR.isValid () && mProperty_mPanicLoopInstructionListIR.isValid () && mProperty_mTaskMapIR.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mMaxBranchOfOnInstructions.isValid () && mProperty_mTargetParameters.isValid () && mProperty_mModuleList.isValid () && mProperty_mStaticArrayMapForIntermediate.isValid () && mProperty_mGenerationListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::drop (void) {
  mProperty_mStaticStringMap.drop () ;
  mProperty_mGlobalVariableMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mRoutineMapIR.drop () ;
  mProperty_mGuardMapIR.drop () ;
  mProperty_mInterruptMapIR.drop () ;
  mProperty_mExternProcedureMapIR.drop () ;
  mProperty_mRequiredProcedureSet.drop () ;
  mProperty_mBootList.drop () ;
  mProperty_mInitList.drop () ;
  mProperty_mPanicSetupInstructionListIR.drop () ;
  mProperty_mPanicLoopInstructionListIR.drop () ;
  mProperty_mTaskMapIR.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mMaxBranchOfOnInstructions.drop () ;
  mProperty_mTargetParameters.drop () ;
  mProperty_mModuleList.drop () ;
  mProperty_mStaticArrayMapForIntermediate.drop () ;
  mProperty_mGenerationListIR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStaticStringMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredProcedureSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBootList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMaxBranchOfOnInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModuleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticArrayMapForIntermediate.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerationListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap GALGAS_intermediateCodeStruct::getter_mStaticStringMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticStringMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_intermediateCodeStruct::getter_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_intermediateCodeStruct::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_intermediateCodeStruct::getter_mRoutineMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_intermediateCodeStruct::getter_mGuardMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_intermediateCodeStruct::getter_mInterruptMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_intermediateCodeStruct::getter_mExternProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcedureMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_intermediateCodeStruct::getter_mRequiredProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRequiredProcedureSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_intermediateCodeStruct::getter_mBootList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_intermediateCodeStruct::getter_mInitList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::getter_mPanicSetupInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::getter_mPanicLoopInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_intermediateCodeStruct::getter_mTaskMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_intermediateCodeStruct::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_intermediateCodeStruct::getter_mMaxBranchOfOnInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMaxBranchOfOnInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_intermediateCodeStruct::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_intermediateCodeStruct::getter_mModuleList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap GALGAS_intermediateCodeStruct::getter_mStaticArrayMapForIntermediate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticArrayMapForIntermediate ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationListIR GALGAS_intermediateCodeStruct::getter_mGenerationListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerationListIR ;
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
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_plm_5F_options_doNotDetectRecursiveCalls ("plm_options",
                                         "doNotDetectRecursiveCalls",
                                         114,
                                         "do-not-detect-recursive-calls",
                                         "Do not detect recursive calls") ;

C_BoolCommandLineOption gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile ("plm_options",
                                         "emitGlobalConstantHTMLDumpFile",
                                         0,
                                         "emit-global-constant-map",
                                         "Emit global constant map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_emitTypeMap ("plm_options",
                                         "emitTypeMap",
                                         116,
                                         "emit-type-map",
                                         "Emit type map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_listEmbeddedSampleFiles ("plm_options",
                                         "listEmbeddedSampleFiles",
                                         108,
                                         "list-embedded-samples",
                                         "List embedded sample files") ;

C_BoolCommandLineOption gOption_plm_5F_options_listTargets ("plm_options",
                                         "listTargets",
                                         76,
                                         "list-targets",
                                         "List targets") ;

C_BoolCommandLineOption gOption_plm_5F_options_noPanicGeneration ("plm_options",
                                         "noPanicGeneration",
                                         0,
                                         "no-panic-generation",
                                         "Do not generate panic code") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimization_31_ ("plm_options",
                                         "optimization1",
                                         0,
                                         "O1",
                                         "Optimization level 1") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimization_32_ ("plm_options",
                                         "optimization2",
                                         0,
                                         "O2",
                                         "Optimization level 2") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimizationS ("plm_options",
                                         "optimizationS",
                                         0,
                                         "Os",
                                         "Like previous option with extra optimizations for size") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ ("plm_options",
                                         "optimizationZ",
                                         0,
                                         "Oz",
                                         "Like previous option but reduces code size further") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ_33_ ("plm_options",
                                         "optimizationZ3",
                                         0,
                                         "O3",
                                         "Optimization level 3") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimization_5F_displayDeadCodeElimination ("plm_options",
                                         "optimization_displayDeadCodeElimination",
                                         122,
                                         "display-deadcode-elimination",
                                         "Display dead code elimination") ;

C_BoolCommandLineOption gOption_plm_5F_options_performFlashing ("plm_options",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeControlRegisterHTMLDumpFile ("plm_options",
                                         "writeControlRegisterHTMLDumpFile",
                                         0,
                                         "emit-control-register-map",
                                         "Emit control register map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeDeclarationDependencyGraphFile ("plm_options",
                                         "writeDeclarationDependencyGraphFile",
                                         100,
                                         "emit-declaration-dependency-graph",
                                         "Emit declaration dependency graph file") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeRoutineInvocationGraphFile ("plm_options",
                                         "writeRoutineInvocationGraphFile",
                                         105,
                                         "emit-routine-invocation-graph",
                                         "Emit routine invocation graph file") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedSampleFile ("plm_options",
                                         "extractEmbeddedSampleFile",
                                         120,
                                         "extract-embedded-sample-code",
                                         "Extract an embedded sample file",
                                         "") ;

C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedTargets ("plm_options",
                                         "extractEmbeddedTargets",
                                         88,
                                         "extract-embedded-targets",
                                         "Extract embedded targets",
                                         "") ;

C_StringCommandLineOption gOption_plm_5F_options_useDirAsTargetDir ("plm_options",
                                         "useDirAsTargetDir",
                                         84,
                                         "use-target-dir",
                                         "Use directory as target definition directory, instead of using embedded targets",
                                         "") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringListCommandLineOption gOption_plm_5F_options_pathList ("plm_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@configurationDeclarationAST addExtension'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                      GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                      GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                     extensionMethod_configurationDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_addExtension (defineExtensionMethod_configurationDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Once function 'configurationNodeNameForPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_configurationNodeNameForPrecedenceGraph (C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("config") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = false ;
static GALGAS_string gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_configurationNodeNameForPrecedenceGraph (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph) {
    gOnceFunctionResult_configurationNodeNameForPrecedenceGraph = onceFunction_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = true ;
  }
  return gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph (void) {
  gOnceFunctionResult_configurationNodeNameForPrecedenceGraph.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_configurationNodeNameForPrecedenceGraph (NULL,
                                                                                     releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_configurationNodeNameForPrecedenceGraph [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_configurationNodeNameForPrecedenceGraph (C_Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GALGAS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_configurationNodeNameForPrecedenceGraph ("configurationNodeNameForPrecedenceGraph",
                                                                                         functionWithGenericHeader_configurationNodeNameForPrecedenceGraph,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         0,
                                                                                         functionArgs_configurationNodeNameForPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'isrSlotTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_isrSlotTypeName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("isrSlot") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GALGAS_string gOnceFunctionResult_isrSlotTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_isrSlotTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (NULL,
                                                             releaseOnceFunctionResult_isrSlotTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_isrSlotTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_isrSlotTypeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_lstring var_rootNode_10470 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 315)), object->mProperty_mPanicCodeTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  {
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_10470, temp_0, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 316)) ;
  }
  GALGAS_lstring var_panicCodeTypeName_10623 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mPanicCodeTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 317)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_10470, var_panicCodeTypeName_10623 COMMA_SOURCE_FILE ("configuration.galgas", 318)) ;
  }
  GALGAS_lstring var_panicLineTypeName_10757 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mPanicLineTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 319)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_10470, var_panicLineTypeName_10757 COMMA_SOURCE_FILE ("configuration.galgas", 320)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                               extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@configurationDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_configurationDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  result_outLocation = object->mProperty_mPanicCodeTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_configurationDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                 extensionGetter_configurationDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_configurationDeclarationAST_location (defineExtensionGetter_configurationDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 332)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                           extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@configurationDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mPointerSize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 348)), GALGAS_string ("duplicate configuration"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 348)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 349)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 350)), GALGAS_string ("zero size pointer not allowed"), fixItArray3  COMMA_SOURCE_FILE ("configuration.galgas", 350)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioContext.mProperty_mPointerSize = object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 352)) ;
    }
  }
  ioArgument_ioContext.mProperty_mTargetParameters = object->mProperty_mTargetParameters ;
  ioArgument_ioContext.mProperty_mPanicCodeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicCodeTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 356)) ;
  const enumGalgasBool test_4 = ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 357)).getter_mKind (SOURCE_FILE ("configuration.galgas", 357)).getter_isInteger (SOURCE_FILE ("configuration.galgas", 357)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_unsigned_12896 ;
    GALGAS_bigint joker_12871_2 ; // Joker input parameter
    GALGAS_bigint joker_12871_1 ; // Joker input parameter
    GALGAS_uint joker_12898_2 ; // Joker input parameter
    GALGAS_string joker_12898_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 358)).getter_mKind (SOURCE_FILE ("configuration.galgas", 358)).method_integer (joker_12871_2, joker_12871_1, var_unsigned_12896, joker_12898_2, joker_12898_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 358)) ;
    const enumGalgasBool test_5 = var_unsigned_12896.operator_not (SOURCE_FILE ("configuration.galgas", 359)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 360)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("configuration.galgas", 360)) ;
    }
  }else if (kBoolFalse == test_4) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 363)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray7  COMMA_SOURCE_FILE ("configuration.galgas", 363)) ;
  }
  ioArgument_ioContext.mProperty_mPanicLineType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicLineTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 366)) ;
  const enumGalgasBool test_8 = ioArgument_ioContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 367)).getter_mKind (SOURCE_FILE ("configuration.galgas", 367)).getter_isInteger (SOURCE_FILE ("configuration.galgas", 367)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_bool var_unsigned_13371 ;
    GALGAS_bigint joker_13346_2 ; // Joker input parameter
    GALGAS_bigint joker_13346_1 ; // Joker input parameter
    GALGAS_uint joker_13373_2 ; // Joker input parameter
    GALGAS_string joker_13373_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 368)).getter_mKind (SOURCE_FILE ("configuration.galgas", 368)).method_integer (joker_13346_2, joker_13346_1, var_unsigned_13371, joker_13373_2, joker_13373_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 368)) ;
    const enumGalgasBool test_9 = var_unsigned_13371.operator_not (SOURCE_FILE ("configuration.galgas", 369)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 370)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray10  COMMA_SOURCE_FILE ("configuration.galgas", 370)) ;
    }
  }else if (kBoolFalse == test_8) {
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 373)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray11  COMMA_SOURCE_FILE ("configuration.galgas", 373)) ;
  }
  GALGAS_stringset var_panicCodeSet_13663 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 376)) ;
  cEnumerator_interruptionConfigurationList enumerator_13725 (object->mProperty_mInterruptionConfigurationList, kENUMERATION_UP) ;
  while (enumerator_13725.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_13725.current_mInterruptName (HERE), enumerator_13725.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 378)) ;
    }
    switch (enumerator_13725.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_code:
      {
        const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_14018 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_13725.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_value = extractPtr_14018->mAssociatedValue0 ;
        GALGAS_string var_s_13871 = extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("configuration.galgas", 382)) ;
        const enumGalgasBool test_12 = var_panicCodeSet_13663.getter_hasKey (var_s_13871 COMMA_SOURCE_FILE ("configuration.galgas", 383)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_value.getter_location (SOURCE_FILE ("configuration.galgas", 384)), GALGAS_string ("duplicate interrupt code"), fixItArray13  COMMA_SOURCE_FILE ("configuration.galgas", 384)) ;
        }
        var_panicCodeSet_13663.addAssign_operation (var_s_13871  COMMA_SOURCE_FILE ("configuration.galgas", 386)) ;
      }
      break ;
    }
    enumerator_13725.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                       extensionMethod_configurationDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInContext (defineExtensionMethod_configurationDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@configurationDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                          const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                         extensionMethod_configurationDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_semanticAnalysis (defineExtensionMethod_configurationDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@typeArrayDeclarationAST location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeArrayDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                 extensionGetter_typeArrayDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclarationAST_location (defineExtensionGetter_typeArrayDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typeArrayDeclarationAST addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                  GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                  GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  const GALGAS_typeArrayDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                     extensionMethod_typeArrayDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_addExtension (defineExtensionMethod_typeArrayDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@typeArrayDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  GALGAS_lstring var_newTypeName_2951 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 61)) ;
  GALGAS_lstring var_elementTypeName_3028 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
  {
  const GALGAS_typeArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2951, temp_0, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 63)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2951, var_elementTypeName_3028 COMMA_SOURCE_FILE ("type-array.galgas", 64)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_newTypeName_2951, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 65)) ;
  GALGAS_lstring var_rootNode_3273 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 66)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 66)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2951, var_rootNode_3273 COMMA_SOURCE_FILE ("type-array.galgas", 67)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                               extensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@typeArrayDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("arraytype $").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 73)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                                           extensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typeArrayDeclarationAST enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  GALGAS_PLMType var_kind_4553 ;
  GALGAS_uint joker_4559_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_kind_4553, joker_4559_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 88)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_kind_4553, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 93)).operator_not (SOURCE_FILE ("type-array.galgas", 93)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 94)), GALGAS_string ("an array element should be copyable"), fixItArray1  COMMA_SOURCE_FILE ("type-array.galgas", 94)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_instanciable (var_kind_4553, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 96)).operator_not (SOURCE_FILE ("type-array.galgas", 96)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 97)), GALGAS_string ("an array element should be instanciable"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 97)) ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_4854 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 100)) ;
  GALGAS_allocaList var_allocaList_4884 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 101)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_4930 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-array.galgas", 102)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_5047 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_5047, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 103)) ;
  }
  GALGAS_staticStringMap joker_5359 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 115)) ;
  GALGAS_objectIR var_sizeExpressionIR_5512 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 108)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mArrayTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 110)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 110)), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 111)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-array.galgas", 113)), var_temporaries_4930, joker_5359, var_universalMap_5047, var_allocaList_4884, var_initInstructionGenerationList_4854, var_sizeExpressionIR_5512, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 107)) ;
  const enumGalgasBool test_4 = var_sizeExpressionIR_5512.getter_isLiteralInteger (SOURCE_FILE ("type-array.galgas", 121)).operator_not (SOURCE_FILE ("type-array.galgas", 121)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray5  COMMA_SOURCE_FILE ("type-array.galgas", 122)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_arraySize_5709 ;
    GALGAS_PLMType joker_5686_1 ; // Joker input parameter
    var_sizeExpressionIR_5512.method_literalInteger (joker_5686_1, var_arraySize_5709, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 124)) ;
    GALGAS_PLMType var_elementType_5730 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 125)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 125)) ;
    GALGAS_constantMap var_classConstantMap_5936 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 127)) ;
    {
    var_classConstantMap_5936.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 128))  COMMA_SOURCE_FILE ("type-array.galgas", 128)), var_arraySize_5709, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 128)).getter_nowhere (SOURCE_FILE ("type-array.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 128)) ;
    }
    GALGAS_propertyMap var_arrayTypePropertyMap_6164 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 130)) ;
    {
    var_arrayTypePropertyMap_6164.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 132)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 134)), var_arraySize_5709  COMMA_SOURCE_FILE ("type-array.galgas", 134))  COMMA_SOURCE_FILE ("type-array.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 131)) ;
    }
    GALGAS_constructorMap var_constructorMap_6496 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 137)) ;
    {
    var_constructorMap_6496.setter_insertKey (GALGAS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-array.galgas", 138)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 138)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_5730, var_arraySize_5709.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 138))  COMMA_SOURCE_FILE ("type-array.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 138)) ;
    }
    GALGAS_PLMTypeAttributes var_typeAttributes_6721 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-array.galgas", 140)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-array.galgas", 140)) COMMA_SOURCE_FILE ("type-array.galgas", 140)) ;
    const enumGalgasBool test_6 = extensionGetter_copyable (var_elementType_5730, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 141)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_typeAttributes_6721 = var_typeAttributes_6721.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-array.galgas", 142)) COMMA_SOURCE_FILE ("type-array.galgas", 142)) ;
    }
    GALGAS_PLMType var_arrayType_6943 = GALGAS_PLMType::constructor_new (var_arrayTypePropertyMap_6164, var_classConstantMap_5936, var_constructorMap_6496, var_typeAttributes_6721, GALGAS_typeKind::constructor_arrayType (object->mProperty_mArrayTypeName, var_elementType_5730, var_arraySize_5709, object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 154))  COMMA_SOURCE_FILE ("type-array.galgas", 150))  COMMA_SOURCE_FILE ("type-array.galgas", 145)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mArrayTypeName, var_arrayType_6943, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-array.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 157)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                       extensionMethod_typeArrayDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_enterInContext (defineExtensionMethod_typeArrayDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@typeArrayDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                      const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                         extensionMethod_typeArrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_semanticAnalysis (defineExtensionMethod_typeArrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@booleanDeclarationAST location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_booleanDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  result_outLocation = object->mProperty_mBooleanTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                 extensionGetter_booleanDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclarationAST_location (defineExtensionGetter_booleanDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@booleanDeclarationAST addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  const GALGAS_booleanDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                     extensionMethod_booleanDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_addExtension (defineExtensionMethod_booleanDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@booleanDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  GALGAS_lstring var_boolTypeName_1821 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 34)) ;
  {
  const GALGAS_booleanDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_boolTypeName_1821, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 35)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                               extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@booleanDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (function_llvmRegularTypeMangledNameFromName (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 41)).getter_string (SOURCE_FILE ("type-bool.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 41)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                                           extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@booleanDeclarationAST enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mBooleanTypeName, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 56)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-bool.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 56)) ;
  }
  {
  routine_enterBooleanOperators (object->mProperty_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 58)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                       extensionMethod_booleanDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInContext (defineExtensionMethod_booleanDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBooleanOperators (GALGAS_lstring inArgument_inBooleanTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_3512 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inArgument_inBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 70)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 70)) ;
  GALGAS_lstring var_boolBoolOp_3611 = function_combineTypeNamesForInfixOperator (inArgument_inBooleanTypeName.getter_string (HERE), inArgument_inBooleanTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_3611, var_selfType_3512, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 75))  COMMA_SOURCE_FILE ("type-bool.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 72)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_boolBoolOp_3611, var_selfType_3512, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-bool.galgas", 80))  COMMA_SOURCE_FILE ("type-bool.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 77)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_3611, var_selfType_3512, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 85))  COMMA_SOURCE_FILE ("type-bool.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 82)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_3611, var_selfType_3512, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 90))  COMMA_SOURCE_FILE ("type-bool.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 87)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_boolBoolOp_3611, var_selfType_3512, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-bool.galgas", 95))  COMMA_SOURCE_FILE ("type-bool.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 92)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_boolBoolOp_3611, var_selfType_3512, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-bool.galgas", 100))  COMMA_SOURCE_FILE ("type-bool.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 97)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_3611, var_selfType_3512, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 105))  COMMA_SOURCE_FILE ("type-bool.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 102)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_boolBoolOp_3611, var_selfType_3512, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-bool.galgas", 110))  COMMA_SOURCE_FILE ("type-bool.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 107)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_boolBoolOp_3611, var_selfType_3512, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-bool.galgas", 115))  COMMA_SOURCE_FILE ("type-bool.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 112)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (inArgument_inBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 117)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@booleanDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                         extensionMethod_booleanDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_semanticAnalysis (defineExtensionMethod_booleanDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@enumerationDeclaration addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                 GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                 GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                 GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  const GALGAS_enumerationDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                     extensionMethod_enumerationDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_addExtension (defineExtensionMethod_enumerationDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@enumerationDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_lstring var_typeName_2859 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)) ;
  {
  const GALGAS_enumerationDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_2859, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2859, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) ;
  }
  GALGAS_bigint var_maxValue_3127 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 69)) ;
  cEnumerator_enumerationConstantList enumerator_3165 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_3165.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_maxValue_3127.objectCompare (enumerator_3165.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_maxValue_3127 = enumerator_3165.current_mConstantValue (HERE) ;
    }
    enumerator_3165.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_3265 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)).isValid ()) {
    uint32_t variant_3276 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)).uintValue () ;
    bool loop_3276 = true ;
    while (loop_3276) {
      loop_3276 = GALGAS_bool (kIsStrictSup, var_maxValue_3127.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 76)))).isValid () ;
      if (loop_3276) {
        loop_3276 = GALGAS_bool (kIsStrictSup, var_maxValue_3127.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 76)))).boolValue () ;
      }
      if (loop_3276 && (0 == variant_3276)) {
        loop_3276 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)) ;
      }
      if (loop_3276) {
        variant_3276 -- ;
        var_representationBitCount_3265.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 77)) ;
        var_maxValue_3127 = var_maxValue_3127.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
      }
    }
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2859, function_llvmRegularTypeMangledNameFromName (GALGAS_string ("uint").add_operation (var_representationBitCount_3265.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                               extensionMethod_enumerationDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@enumerationDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_enumerationDeclaration_location (const cPtr_abstractDeclarationAST * inObject,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                 extensionGetter_enumerationDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_location (defineExtensionGetter_enumerationDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@enumerationDeclaration keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outRepresentation = GALGAS_string ("enum $").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 92)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                                           extensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@enumerationDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                   const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                   GALGAS_semanticContext & ioArgument_ioContext,
                                                                   GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                   GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_constantMap var_enumConstantMap_5155 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 116)) ;
  GALGAS_bigint var_maxValue_5179 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)) ;
  cEnumerator_enumerationConstantList enumerator_5220 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_5220.hasCurrentObject ()) {
    {
    var_enumConstantMap_5155.setter_insertKey (enumerator_5220.current_mConstantName (HERE), enumerator_5220.current_mConstantValue (HERE), object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 119)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_5179.objectCompare (enumerator_5220.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_maxValue_5179 = enumerator_5220.current_mConstantValue (HERE) ;
    }
    enumerator_5220.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_5423 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 126)).isValid ()) {
    uint32_t variant_5434 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 126)).uintValue () ;
    bool loop_5434 = true ;
    while (loop_5434) {
      loop_5434 = GALGAS_bool (kIsStrictSup, var_maxValue_5179.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)))).isValid () ;
      if (loop_5434) {
        loop_5434 = GALGAS_bool (kIsStrictSup, var_maxValue_5179.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)))).boolValue () ;
      }
      if (loop_5434 && (0 == variant_5434)) {
        loop_5434 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 126)) ;
      }
      if (loop_5434) {
        variant_5434 -- ;
        var_representationBitCount_5423.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)) ;
        var_maxValue_5179 = var_maxValue_5179.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 128)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_integerTypeProxy_5583 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_5423.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 133)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 133))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 131)) ;
  GALGAS_propertyMap var_propertyMap_5737 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)) ;
  GALGAS_lstring var_accessorMangledName_5768 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 136))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)), GALGAS_effectiveArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) ;
  GALGAS_routineDescriptor var_routineDescriptor_5865 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 140)), GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 141)), var_integerTypeProxy_5583, GALGAS_bool (true), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 137)) ;
  {
  var_propertyMap_5737.setter_insertKey (var_accessorMangledName_5768, GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_routineDescriptor_5865  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 146)) ;
  }
  GALGAS_PLMType var_enumerationType_6466 = GALGAS_PLMType::constructor_new (var_propertyMap_5737, var_enumConstantMap_5155, GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 155)), GALGAS_PLMTypeAttributes::constructor_all (SOURCE_FILE ("type-enumeration-declaration.galgas", 156)), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_5423, object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 157))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 157))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 152)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, var_enumerationType_6466, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-enumeration-declaration.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 159)) ;
  }
  {
  routine_enterEnumerationComparisonOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                       extensionMethod_enumerationDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInContext (defineExtensionMethod_enumerationDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterEnumerationComparisonOperators'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationComparisonOperators (GALGAS_lstring inArgument_inTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_7112 = function_combineTypeNamesForInfixOperator (inArgument_inTypeName.getter_string (HERE), inArgument_inTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 174)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_7112, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 177)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 178))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 175)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_key_7112, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 182)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-enumeration-declaration.galgas", 183))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 180)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_7112, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 187)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 188))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 185)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_7112, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 192)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 193))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 190)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_key_7112, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 197)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-enumeration-declaration.galgas", 198))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 195)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_key_7112, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 202)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-enumeration-declaration.galgas", 203))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 200)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                     const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_bigint var_maxValue_8638 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 216)) ;
  cEnumerator_enumerationConstantList enumerator_8676 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_8676.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_8638.objectCompare (enumerator_8676.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_maxValue_8638 = enumerator_8676.current_mConstantValue (HERE) ;
    }
    enumerator_8676.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_8814 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 224)).isValid ()) {
    uint32_t variant_8825 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 224)).uintValue () ;
    bool loop_8825 = true ;
    while (loop_8825) {
      loop_8825 = GALGAS_bool (kIsStrictSup, var_maxValue_8638.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 224)))).isValid () ;
      if (loop_8825) {
        loop_8825 = GALGAS_bool (kIsStrictSup, var_maxValue_8638.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 224)))).boolValue () ;
      }
      if (loop_8825 && (0 == variant_8825)) {
        loop_8825 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 224)) ;
      }
      if (loop_8825) {
        variant_8825 -- ;
        var_representationBitCount_8814.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 225)) ;
        var_maxValue_8638 = var_maxValue_8638.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 226)) ;
      }
    }
  }
  GALGAS_lstring var_routineMangledName_8978 = function_routineMangledNameFromAST (GALGAS_string ("$").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 231))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 231)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 229)) ;
  const enumGalgasBool test_1 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_8978.getter_string (HERE) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 235)).operator_not (SOURCE_FILE ("type-enumeration-declaration.galgas", 235)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_8978, var_routineMangledName_8978, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 236)) ;
    }
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_enumerationIR::constructor_new (object->mProperty_mEnumerationName, var_representationBitCount_8814  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 241))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 241)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                         extensionMethod_enumerationDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_semanticAnalysis (defineExtensionMethod_enumerationDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@enumerationIR generateLLVMcode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationIR_generateLLVMcode (const cPtr_abstractGenerationIR * inObject,
                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationIR * object = (const cPtr_enumerationIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationIR) ;
  GALGAS_lstring var_routineMangledName_10178 = function_routineMangledNameFromAST (GALGAS_string ("$").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 257)), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 258))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 258)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)) ;
  GALGAS_string var_routineLLVMName_10308 = function_llvmNameForFunction (var_routineMangledName_10178.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 261)) ;
  GALGAS_string var_type_10370 = GALGAS_string ("i").add_operation (object->mProperty_mBitCount.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineMangledName_10178.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (var_type_10370, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 264)).add_operation (GALGAS_string ("  @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 264)).add_operation (var_routineLLVMName_10308, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 264)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 264)).add_operation (var_type_10370, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 264)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (var_type_10370, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 265)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 265)).add_operation (var_type_10370, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 265)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (var_type_10370, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 266)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 267)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationIR_generateLLVMcode (void) {
  enterExtensionMethod_generateLLVMcode (kTypeDescriptor_GALGAS_enumerationIR.mSlotID,
                                         extensionMethod_enumerationIR_generateLLVMcode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationIR_generateLLVMcode (defineExtensionMethod_enumerationIR_generateLLVMcode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@structureDeclarationAST location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_structureDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outLocation = object->mProperty_mStructureName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                 extensionGetter_structureDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclarationAST_location (defineExtensionGetter_structureDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@structureDeclarationAST addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_extensionDeclarationListAST & ioArgument_ioExtensionDeclarationListAST,
                                                                  GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                  GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  const GALGAS_structureDeclarationAST temp_0 = object ;
  GALGAS_structureDeclarationAST var_newDeclaration_5314 = temp_0 ;
  GALGAS_extensionDeclarationListAST var_currentExtensionDeclarationListAST_5362 = ioArgument_ioExtensionDeclarationListAST ;
  ioArgument_ioExtensionDeclarationListAST = GALGAS_extensionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 144)) ;
  cEnumerator_extensionDeclarationListAST enumerator_5519 (var_currentExtensionDeclarationListAST_5362, kENUMERATION_UP) ;
  while (enumerator_5519.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mStructureName.getter_string (HERE).objectCompare (enumerator_5519.current_mTypeName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_newDeclaration_5314 = GALGAS_structureDeclarationAST::constructor_new (var_newDeclaration_5314.getter_mStructureName (SOURCE_FILE ("type-structure-declaration.galgas", 148)), var_newDeclaration_5314.getter_mAttributeListAST (SOURCE_FILE ("type-structure-declaration.galgas", 149)), var_newDeclaration_5314.getter_mStructurePropertyListAST (SOURCE_FILE ("type-structure-declaration.galgas", 150)).add_operation (enumerator_5519.current_mPropertyList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 150)), var_newDeclaration_5314.getter_mFunctionDeclarationListAST (SOURCE_FILE ("type-structure-declaration.galgas", 151)).add_operation (enumerator_5519.current_mProcedureDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 151)), var_newDeclaration_5314.getter_mSystemRoutineListAST (SOURCE_FILE ("type-structure-declaration.galgas", 152)).add_operation (enumerator_5519.current_mSVCListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 152)), var_newDeclaration_5314.getter_mGuardListAST (SOURCE_FILE ("type-structure-declaration.galgas", 153)).add_operation (enumerator_5519.current_mGuardListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 153))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioExtensionDeclarationListAST.addAssign_operation (enumerator_5519.current_mTypeName (HERE), enumerator_5519.current_mProcedureDeclarationListAST (HERE), enumerator_5519.current_mPropertyList (HERE), enumerator_5519.current_mSVCListAST (HERE), enumerator_5519.current_mGuardListAST (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 156)) ;
    }
    enumerator_5519.gotoNextObject () ;
  }
  outArgument_outNewDeclaration = var_newDeclaration_5314 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                     extensionMethod_structureDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_addExtension (defineExtensionMethod_structureDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_lstring var_structureTypeName_6582 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 167)) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_structureTypeName_6582, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 169)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_6817 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_6817.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6817.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_6878 = function_llvmRegularTypeMangledNameFromName (enumerator_6817.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_structureTypeName_6582, var_typeName_6878 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      }
    }
    switch (enumerator_6817.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_7173 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_6817.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_7173->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), var_structureTypeName_6582, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
      }
      break ;
    }
    enumerator_6817.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_7256 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_7256.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_7329 (enumerator_7256.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_7329.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_7351 = function_llvmRegularTypeMangledNameFromName (enumerator_7329.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 185)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_7351 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 186)) ;
      }
      enumerator_7329.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_7256.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_typeName_7527 = function_llvmRegularTypeMangledNameFromName (enumerator_7256.current_mFunctionReturnTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 189)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_7527 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 190)) ;
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_7256.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 192)) ;
    enumerator_7256.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 195)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 196)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                               extensionMethod_structureDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("struct $").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 202)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                           extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclarationAST enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_propertyList var_propertyList_10252 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 258)) ;
  GALGAS_propertyMap var_propertyMap_10284 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 259)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_10332 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 260)) ;
  GALGAS_constructorSignature var_constructorSignature_10382 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 261)) ;
  GALGAS_string var_constructorKey_10412 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_10436 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_10487 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_10487.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_10487.current (HERE), object->mProperty_mStructureName, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_propertyList_10252, var_propertyMap_10284, var_sortedOperandIRList_10332, var_constructorSignature_10382, var_constructorKey_10412, var_canBeCopied_10436, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 265)) ;
    enumerator_10487.gotoNextObject () ;
  }
  var_constructorKey_10412.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
  GALGAS_constructorMap var_constructorMap_10884 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 279)) ;
  {
  var_constructorMap_10884.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_10412, object->mProperty_mStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 281)), var_constructorSignature_10382, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_10332  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 280)) ;
  }
  GALGAS_PLMTypeAttributes var_flags_11134 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
  cEnumerator_lstringlist enumerator_11199 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_11199.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_11199.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_flags_11134.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 289)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_11199.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 290)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 290)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = var_canBeCopied_10436.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 291)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mStructureName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 292)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 292)) ;
        }else if (kBoolFalse == test_3) {
          var_flags_11134 = var_flags_11134.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 294)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 294)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_11199.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 297)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 297)) ;
    }
    enumerator_11199.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_11691 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_11691.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_11740 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 303)) ;
    cEnumerator_lstringlist enumerator_11798 (enumerator_11691.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_11798.hasCurrentObject ()) {
      var_attributeSet_11740.addAssign_operation (enumerator_11798.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 305)) ;
      enumerator_11798.gotoNextObject () ;
    }
    GALGAS_bool var_exportedFunction_11881 = var_attributeSet_11740.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 307)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 307)) ;
    GALGAS_bool var_canMutateProperties_11955 = var_attributeSet_11740.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 308)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 308)) ;
    GALGAS_bool var_canAccessProperties_12029 = GALGAS_bool (kIsNotEqual, enumerator_11691.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("type-structure-declaration.galgas", 309)))) ;
    GALGAS_routineTypedSignature var_signature_12172 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_11691.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_signature_12172, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 311)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_12313 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_11691.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnTypeProxy_12313 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 313)) ;
    }
    GALGAS_lstring var_routineMangledName_12369 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_11691.current (HERE).getter_mFunctionName (HERE), enumerator_11691.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 315)) ;
    GALGAS_routineDescriptor var_descriptor_12552 = GALGAS_routineDescriptor::constructor_new (enumerator_11691.current (HERE).getter_mPublicFunction (HERE), var_exportedFunction_11881, GALGAS_routineKind::constructor_function (enumerator_11691.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 324)), var_signature_12172, var_returnTypeProxy_12313, var_canMutateProperties_11955, var_canAccessProperties_12029  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 321)) ;
    {
    var_propertyMap_10284.setter_insertKey (var_routineMangledName_12369, enumerator_11691.current (HERE).getter_mPublicFunction (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_12552  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 331)) ;
    }
    enumerator_11691.gotoNextObject () ;
  }
  cEnumerator_systemRoutineDeclarationListAST enumerator_13058 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_13058.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_13107 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 336)) ;
    cEnumerator_lstringlist enumerator_13155 (enumerator_13058.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13155.hasCurrentObject ()) {
      var_attributeSet_13107.addAssign_operation (enumerator_13155.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 338)) ;
      enumerator_13155.gotoNextObject () ;
    }
    GALGAS_bool var_exportedRoutine_13237 = var_attributeSet_13107.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)) ;
    GALGAS_bool var_canMutateProperties_13311 = var_attributeSet_13107.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 341)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 341)) ;
    GALGAS_lstring var_routineMangledName_13412 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_13058.current (HERE).getter_mName (HERE), enumerator_13058.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 343)) ;
    GALGAS_routineTypedSignature var_signature_13633 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_13058.current (HERE).getter_mFormalArgumentList (HERE), var_signature_13633, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_13764 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_13058.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_13764 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 351)) ;
    }
    GALGAS_bool var_mutating_13800 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13853 (enumerator_13058.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13853.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_13853.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 355)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        var_mutating_13800 = GALGAS_bool (true) ;
      }
      enumerator_13853.gotoNextObject () ;
    }
    GALGAS_routineDescriptor var_descriptor_14002 = GALGAS_routineDescriptor::constructor_new (enumerator_13058.current (HERE).getter_mPublic (HERE), var_exportedRoutine_13237, enumerator_13058.current (HERE).getter_mRoutineKind (HERE), var_signature_13633, var_returnTypeProxy_13764, var_canMutateProperties_13311, GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 360)) ;
    {
    var_propertyMap_10284.setter_insertKey (var_routineMangledName_13412, enumerator_13058.current (HERE).getter_mPublic (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_14002  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 370)) ;
    }
    enumerator_13058.gotoNextObject () ;
  }
  GALGAS_guardMapForContext var_guardMap_14453 = GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 373)) ;
  cEnumerator_guardDeclarationListAST enumerator_14487 (object->mProperty_mGuardListAST, kENUMERATION_UP) ;
  while (enumerator_14487.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_14541 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_14487.current (HERE).getter_mGuardName (HERE), enumerator_14487.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 376)) ;
    GALGAS_routineTypedSignature var_signature_14757 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_14487.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_14757, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 382)) ;
    }
    {
    var_guardMap_14453.setter_insertKey (var_guardMangledName_14541, enumerator_14487.current (HERE).getter_mIsPublic (HERE), var_signature_14757, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 384)) ;
    }
    enumerator_14487.gotoNextObject () ;
  }
  GALGAS_PLMType var_structureType_14964 = GALGAS_PLMType::constructor_new (var_propertyMap_10284, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 393)), var_constructorMap_10884, var_flags_11134, GALGAS_typeKind::constructor_structure (object->mProperty_mStructureName, var_propertyList_10252, var_guardMap_14453  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 396))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 391)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mStructureName, var_structureType_14964, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 398)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                       extensionMethod_structureDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInContext (defineExtensionMethod_structureDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@structureDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_PLMType var_structureType_18998 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mStructureName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 501)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 501)) ;
  const GALGAS_structureDeclarationAST temp_0 = object ;
  callExtensionMethod_functionSemanticAnalysis ((const cPtr_structureDeclarationAST *) temp_0.ptr (), var_structureType_18998, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)) ;
  extensionMethod_systemRoutineSemanticAnalysis (object->mProperty_mSystemRoutineListAST, var_structureType_18998, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 510)) ;
  extensionMethod_guardSemanticAnalysis (object->mProperty_mGuardListAST, var_structureType_18998, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 517)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                         extensionMethod_structureDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_semanticAnalysis (defineExtensionMethod_structureDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@typeAliasDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeAliasDeclaration_location (const cPtr_abstractDeclarationAST * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outLocation = object->mProperty_mNewTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeAliasDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                 extensionGetter_typeAliasDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeAliasDeclaration_location (defineExtensionGetter_typeAliasDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@typeAliasDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                               GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                     extensionMethod_typeAliasDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_addExtension (defineExtensionMethod_typeAliasDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeAliasDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_lstring var_newTypeName_2712 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 55)) ;
  GALGAS_lstring var_aliasedTypeName_2787 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
  {
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2712, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 57)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2712, var_aliasedTypeName_2787 COMMA_SOURCE_FILE ("type-alias.galgas", 58)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                               extensionMethod_typeAliasDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterInPrecedenceGraph (defineExtensionMethod_typeAliasDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@typeAliasDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outRepresentation = GALGAS_string ("typealias $").add_operation (object->mProperty_mNewTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 64)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                                           extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typeAliasDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_PLMType var_kind_4071 ;
  GALGAS_uint joker_4073_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAliasedTypeName, var_kind_4071, joker_4073_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 79)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mNewTypeName, var_kind_4071, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-alias.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 81)) ;
  }
  GALGAS_lstring var_newNewInfixKey_4248 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 84)) ;
  GALGAS_lstring var_aliasAliasInfixKey_4352 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 85)) ;
  GALGAS_lstring var_newLiteralIntegerInfixKey_4471 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 86)) ;
  GALGAS_lstring var_aliasLiteralIntegerInfixKey_4589 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 87)) ;
  GALGAS_lstring var_literalIntegerNewInfixKey_4709 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 88)), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 88)) ;
  GALGAS_lstring var_literalIntegerAliasInfixKey_4826 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 89)), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 89)) ;
  GALGAS_PLMType var_newType_4927 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mNewTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 90)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 90)) ;
  GALGAS_PLMType var_oldType_5018 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 91)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 91)) ;
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mEqualOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 92)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mNonEqualOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 103)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictInfOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 114)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mInfEqualOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 125)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictSupOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 136)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSupEqualOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 147)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAndOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 158)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mOrOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 169)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mXorOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 180)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mBooleanXorOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 191)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 202)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 213)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 224)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 235)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 246)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 257)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 268)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 279)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 290)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModNoOvfOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 301)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mLeftShiftOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 312)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mRightShiftOperatorMap, var_newNewInfixKey_4248, var_aliasAliasInfixKey_4352, var_newLiteralIntegerInfixKey_4471, var_aliasLiteralIntegerInfixKey_4589, var_literalIntegerNewInfixKey_4709, var_literalIntegerAliasInfixKey_4826, var_newType_4927, var_oldType_5018, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 323)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 334)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mNotOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 335)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 336)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                       extensionMethod_typeAliasDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterInContext (defineExtensionMethod_typeAliasDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterAliasPrefixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasPrefixOperator (GALGAS_prefixOperatorMap & ioArgument_ioInfixOperatorMap,
                                       const GALGAS_lstring constinArgument_inNewTypeName,
                                       const GALGAS_lstring constinArgument_inAliasedTypeName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedTypeName.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 346)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 347)) ;
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 351)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'enterAliasInfixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasInfixOperator (GALGAS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                      const GALGAS_lstring constinArgument_inNewNewInfixKey,
                                      const GALGAS_lstring constinArgument_inAliasedAliasedInfixKey,
                                      const GALGAS_lstring constinArgument_inNewLiteralIntegerInfixKey,
                                      const GALGAS_lstring constinArgument_inAliasedLiteralIntegerInfixKey,
                                      const GALGAS_lstring constinArgument_inLiteralIntegerNewInfixKey,
                                      const GALGAS_lstring constinArgument_inLiteralIntegerAliasInfixKey,
                                      const GALGAS_PLMType constinArgument_inNewType,
                                      const GALGAS_PLMType constinArgument_inOldType,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedAliasedInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 371)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_resultType_12431 ;
    GALGAS_infixOperatorDescription var_operation_12478 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedAliasedInfixKey, var_resultType_12431, var_operation_12478, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 372)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_12431.objectCompare (constinArgument_inOldType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_resultType_12431 = constinArgument_inNewType ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewNewInfixKey, var_resultType_12431, var_operation_12478, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 380)) ;
    }
  }
  const enumGalgasBool test_2 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedLiteralIntegerInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 386)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_PLMType var_resultType_12842 ;
    GALGAS_infixOperatorDescription var_operation_12889 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedLiteralIntegerInfixKey, var_resultType_12842, var_operation_12889, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 387)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_resultType_12842.objectCompare (constinArgument_inOldType)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_resultType_12842 = constinArgument_inNewType ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewLiteralIntegerInfixKey, var_resultType_12842, var_operation_12889, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 395)) ;
    }
  }
  const enumGalgasBool test_4 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inLiteralIntegerAliasInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 401)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_PLMType var_resultType_13260 ;
    GALGAS_infixOperatorDescription var_operation_13307 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inLiteralIntegerAliasInfixKey, var_resultType_13260, var_operation_13307, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 402)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_resultType_13260.objectCompare (constinArgument_inOldType)).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_resultType_13260 = constinArgument_inNewType ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inLiteralIntegerNewInfixKey, var_resultType_13260, var_operation_13307, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 410)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typeAliasDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                   const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                         extensionMethod_typeAliasDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_semanticAnalysis (defineExtensionMethod_typeAliasDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@integerDeclarationAST location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_integerDeclarationAST_location (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                 extensionGetter_integerDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclarationAST_location (defineExtensionGetter_integerDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@integerDeclarationAST addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                     extensionMethod_integerDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_addExtension (defineExtensionMethod_integerDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_2056 = function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_2056, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_2056, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 43)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 43)) COMMA_SOURCE_FILE ("type-integer.galgas", 43)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                               extensionMethod_integerDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)).getter_string (SOURCE_FILE ("type-integer.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                           extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@integerDeclarationAST enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_3385 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 63)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 63)) ;
  GALGAS_bigint var_min_3484 ;
  GALGAS_bigint var_max_3498 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_min_3484 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 68)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 68)) COMMA_SOURCE_FILE ("type-integer.galgas", 68)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 68)) ;
    var_max_3498 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 69)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 69)) COMMA_SOURCE_FILE ("type-integer.galgas", 69)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 69)) ;
  }else if (kBoolFalse == test_1) {
    var_min_3484 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 71)) ;
    var_max_3498 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 72)).left_shift_operation (object->mProperty_mSize COMMA_SOURCE_FILE ("type-integer.galgas", 72)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 72)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_3797 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3385, var_selfTypeProxy_3797 COMMA_SOURCE_FILE ("type-integer.galgas", 75)) ;
  }
  GALGAS_propertyMap var_propertyMap_3825 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 76)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 77)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_routineDescriptor var_descriptor_3937 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-integer.galgas", 81))  COMMA_SOURCE_FILE ("type-integer.galgas", 81)), GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 82)), var_selfTypeProxy_3797, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
    {
    var_propertyMap_3825.setter_insertKey (GALGAS_string ("byteSwapped()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 88)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_3937  COMMA_SOURCE_FILE ("type-integer.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 87)) ;
    }
    GALGAS_lstring var_routineNameForInvocationGraph_4609 = function_routineMangledNameFromAST (GALGAS_string ("$").add_operation (var_integerTypeName_3385.getter_string (SOURCE_FILE ("type-integer.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 94)), GALGAS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 95)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 93)) ;
    {
    ioArgument_ioSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_4609, var_routineNameForInvocationGraph_4609, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 98)) ;
    }
  }
  GALGAS_PLMType var_integerType_4921 = GALGAS_PLMType::constructor_new (var_propertyMap_3825, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 106)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 107)), GALGAS_PLMTypeAttributes::constructor_all (SOURCE_FILE ("type-integer.galgas", 108)), GALGAS_typeKind::constructor_integer (var_min_3484, var_max_3498, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 109)), object->mProperty_mSize, var_integerTypeName_3385.getter_string (SOURCE_FILE ("type-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-integer.galgas", 104)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3385, var_integerType_4921, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 111)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_3385, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 117)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_3385, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 123)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_3385, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 129)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                       extensionMethod_integerDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInContext (defineExtensionMethod_integerDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@integerDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_integerIR::constructor_new (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 145)), object->mProperty_mSize, object->mProperty_mIsSigned  COMMA_SOURCE_FILE ("type-integer.galgas", 145))  COMMA_SOURCE_FILE ("type-integer.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                         extensionMethod_integerDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_semanticAnalysis (defineExtensionMethod_integerDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@integerIR generateLLVMcode'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerIR_generateLLVMcode (const cPtr_abstractGenerationIR * inObject,
                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerIR * object = (const cPtr_integerIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerIR) ;
  GALGAS_string var_llvmTypeName_7266 = GALGAS_string ("i").add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 161)) ;
  GALGAS_lstring var_routineMangledName_7305 = function_routineMangledNameFromAST (GALGAS_string ("$").add_operation (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 163)), GALGAS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 164)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 162)) ;
  GALGAS_string var_functionName_7416 = function_llvmNameForFunction (var_routineMangledName_7305.getter_string (SOURCE_FILE ("type-integer.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 167)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("INTEGER TYPE $").add_operation (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 168)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 169)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 170)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 170)).add_operation (var_functionName_7416, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 170)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 170)).add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 170)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 170)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 171)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 171)).add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 171)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 171)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 172)).add_operation (GALGAS_string (" @llvm.bswap."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 172)).add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 172)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 172)).add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 172)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 172)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 173)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 173)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 174)) ;
    ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare ").add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 175)).add_operation (GALGAS_string (" @llvm.bswap."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 175)).add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 175)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 175)).add_operation (var_llvmTypeName_7266, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 175)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 175))  COMMA_SOURCE_FILE ("type-integer.galgas", 175)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerIR_generateLLVMcode (void) {
  enterExtensionMethod_generateLLVMcode (kTypeDescriptor_GALGAS_integerIR.mSlotID,
                                         extensionMethod_integerIR_generateLLVMcode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerIR_generateLLVMcode (defineExtensionMethod_integerIR_generateLLVMcode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_8637 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 188)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 188)) ;
  GALGAS_lstring var_intIntOp_8765 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 190)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_8765, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 193)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 194))  COMMA_SOURCE_FILE ("type-integer.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_8765, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 198)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 199))  COMMA_SOURCE_FILE ("type-integer.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 196)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 204)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 204)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_8765, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 203)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 201)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 209)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 209)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_8765, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 208)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 206)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 214)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 214)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_8765, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 213)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 211)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 219)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 219)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_8765, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 218)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 216)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 222)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 226))  COMMA_SOURCE_FILE ("type-integer.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 223)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 231))  COMMA_SOURCE_FILE ("type-integer.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 228)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 236))  COMMA_SOURCE_FILE ("type-integer.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 233)) ;
    }
    {
    ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 238)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 244)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 252)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 252)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 249)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 257))  COMMA_SOURCE_FILE ("type-integer.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 254)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 262)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 262)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 259)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 267))  COMMA_SOURCE_FILE ("type-integer.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 264)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 272)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 272)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 277))  COMMA_SOURCE_FILE ("type-integer.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 282)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 282)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 279)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 287)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 287)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 284)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 292)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 292)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 289)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 297)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 297)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 294)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 303))  COMMA_SOURCE_FILE ("type-integer.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 300)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 308)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 308)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_8765, var_selfType_8637, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 305)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@infixObjectObjectOperatorDescription generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                            const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                            const GALGAS_location constinArgument_inOperatorLocation,
                                                                                            const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                            const GALGAS_PLMType constinArgument_inResultType,
                                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  GALGAS_bool test_0 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 329)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 329)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left_13391 ;
    GALGAS_PLMType joker_13365_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_13365_1, var_left_13391, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 330)) ;
    GALGAS_bigint var_right_13456 ;
    GALGAS_PLMType joker_13429_1 ; // Joker input parameter
    constinArgument_inRightOperand.method_literalInteger (joker_13429_1, var_right_13456, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 331)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue_13546 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_13391, var_right_13456, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_13546  COMMA_SOURCE_FILE ("type-integer.galgas", 334)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 337)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription.mSlotID,
                                                  extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_literal_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_14525 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 360)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 360)) ;
  GALGAS_lstring var_intLiteralOp_14657 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 362)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_14657, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 366))  COMMA_SOURCE_FILE ("type-integer.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_14657, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 371))  COMMA_SOURCE_FILE ("type-integer.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 368)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 376)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 376)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_14657, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 375)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 381)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 381)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_14657, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 386)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 386)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_14657, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 385)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 383)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 391)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 391)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_14657, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 390)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 388)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 394)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 398))  COMMA_SOURCE_FILE ("type-integer.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 395)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 403))  COMMA_SOURCE_FILE ("type-integer.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 400)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 408))  COMMA_SOURCE_FILE ("type-integer.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 415)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 415)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 412)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 420))  COMMA_SOURCE_FILE ("type-integer.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 417)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 425)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 425)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 422)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 430))  COMMA_SOURCE_FILE ("type-integer.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 427)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 435)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 435)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 432)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 440))  COMMA_SOURCE_FILE ("type-integer.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 437)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 445)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 445)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 442)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 450)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 450)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 447)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 455)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 455)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 452)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 460)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 460)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 457)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 466))  COMMA_SOURCE_FILE ("type-integer.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 463)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 471)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 471)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_14657, var_selfType_14525, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 468)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@integerObject_literal_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_PLMType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_19126 ;
  GALGAS_PLMType joker_19092_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_19092_1, var_literalValue_19126, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 493)) ;
  GALGAS_bigint var_min_19188 ;
  GALGAS_bigint var_max_19209 ;
  GALGAS_bool joker_19211_3 ; // Joker input parameter
  GALGAS_uint joker_19211_2 ; // Joker input parameter
  GALGAS_string joker_19211_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 494)).getter_mKind (SOURCE_FILE ("type-integer.galgas", 494)).method_integer (var_min_19188, var_max_19209, joker_19211_3, joker_19211_2, joker_19211_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 494)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_19126.objectCompare (var_min_19188)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_19188.getter_string (SOURCE_FILE ("type-integer.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 496)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 496)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 496)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_19126.objectCompare (var_max_19209)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_19209.getter_string (SOURCE_FILE ("type-integer.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 498)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 498)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 498)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 500)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 503)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 501)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator.mSlotID,
                                                  extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_literal_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_20311 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 522)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 522)) ;
  GALGAS_lstring var_intLiteralOp_20443 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 524)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 524)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_20443, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 527)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 528))  COMMA_SOURCE_FILE ("type-integer.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 525)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_20443, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 532)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 533))  COMMA_SOURCE_FILE ("type-integer.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 530)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 538)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 538)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_20443, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 537)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 535)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 543)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 543)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_20443, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 542)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 540)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 548)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 548)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_20443, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 547)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 545)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 553)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 553)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_20443, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 552)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 550)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 556)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 560))  COMMA_SOURCE_FILE ("type-integer.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 557)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 565))  COMMA_SOURCE_FILE ("type-integer.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 562)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 570))  COMMA_SOURCE_FILE ("type-integer.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 567)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 577)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 577)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 574)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 582))  COMMA_SOURCE_FILE ("type-integer.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 579)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 587)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 587)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 584)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 592))  COMMA_SOURCE_FILE ("type-integer.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 589)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 597)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 597)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 594)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 602))  COMMA_SOURCE_FILE ("type-integer.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 599)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 607)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 607)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 604)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 612)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 612)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 609)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 617)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 617)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 617)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 614)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 622)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 622)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 619)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 628))  COMMA_SOURCE_FILE ("type-integer.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 625)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 633)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 633)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_20443, var_selfType_20311, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 630)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@literal_integerObject_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_PLMType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_24886 ;
  GALGAS_PLMType joker_24852_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_24852_1, var_literalValue_24886, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 655)) ;
  GALGAS_bigint var_min_24949 ;
  GALGAS_bigint var_max_24970 ;
  GALGAS_bool joker_24972_3 ; // Joker input parameter
  GALGAS_uint joker_24972_2 ; // Joker input parameter
  GALGAS_string joker_24972_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 656)).getter_mKind (SOURCE_FILE ("type-integer.galgas", 656)).method_integer (var_min_24949, var_max_24970, joker_24972_3, joker_24972_2, joker_24972_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 656)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_24886.objectCompare (var_min_24949)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_24949.getter_string (SOURCE_FILE ("type-integer.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 658)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 658)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 658)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_24886.objectCompare (var_max_24970)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_24970.getter_string (SOURCE_FILE ("type-integer.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 660)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 660)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 660)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 662)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 665)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 663)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator.mSlotID,
                                                  extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@literalIntegerDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalIntegerDeclarationAST_location (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 11)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalIntegerDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                 extensionGetter_literalIntegerDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclarationAST_location (defineExtensionGetter_literalIntegerDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@literalIntegerDeclarationAST addExtension'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                       GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                       GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclarationAST * object = (const cPtr_literalIntegerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclarationAST) ;
  const GALGAS_literalIntegerDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                     extensionMethod_literalIntegerDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_addExtension (defineExtensionMethod_literalIntegerDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@literalIntegerDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclarationAST * object = (const cPtr_literalIntegerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclarationAST) ;
  GALGAS_lstring var_staticIntegerTypeName_1813 = function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)) ;
  {
  const GALGAS_literalIntegerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName_1813, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName_1813, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                               extensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@literalIntegerDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 41)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                                           extensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@literalIntegerDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_3124 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 55)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 55)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3124, function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 59)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-literal-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 57)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 63)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                       extensionMethod_literalIntegerDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_enterInContext (defineExtensionMethod_literalIntegerDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterLiteralIntegerOperators (GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_literalIntegerTypeName_3628 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 73)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 73)) ;
  GALGAS_lstring var_intIntOp_3701 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_3628.getter_string (HERE), var_literalIntegerTypeName_3628.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 75)) ;
  GALGAS_PLMType var_selfType_3815 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_3628, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 76)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 76)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3701, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 81)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 82))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 79)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3701, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 86)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 87))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 84)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3701, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 91)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 92))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 89)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3701, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 96)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 97))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 94)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3701, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 102))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 99)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3701, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 107))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 113))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 110)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 118))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 115)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 123))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 120)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (var_literalIntegerTypeName_3628, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 125)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (var_literalIntegerTypeName_3628, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 129)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 136))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 133)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 141))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 138)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 146))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 143)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 151))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 148)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 156))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 153)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 161))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 158)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 166))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 163)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 171))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 168)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 176))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 173)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 181))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 178)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 187))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 184)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3701, var_selfType_3815, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 192))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 189)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@literalIntegerDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                           const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                           GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                         extensionMethod_literalIntegerDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_semanticAnalysis (defineExtensionMethod_literalIntegerDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@literal_literal_integerInfixOperation generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                   const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                   const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_PLMType constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_9282 ;
  GALGAS_PLMType joker_9251_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_9251_1, var_leftValue_9282, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 232)) ;
  GALGAS_bigint var_rightValue_9350 ;
  GALGAS_PLMType joker_9318_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_9318_1, var_rightValue_9350, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 233)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_9364 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_9282, var_rightValue_9350, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 234)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_9364  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                  extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@literalStringDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalStringDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  result_outLocation = object->mProperty_mLiteralStringTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalStringDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                 extensionGetter_literalStringDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_location (defineExtensionGetter_literalStringDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@literalStringDeclarationAST addExtension'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                      GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                      GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                     extensionMethod_literalStringDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_addExtension (defineExtensionMethod_literalStringDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  GALGAS_lstring var_literalStringTypeName_1866 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mLiteralStringTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 34)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1866, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1866, function_llvmRegularTypeMangledNameFromName (GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 36)) COMMA_SOURCE_FILE ("type-static-string.galgas", 36)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                               extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mProperty_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 42)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                           extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@literalStringDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mLiteralStringTypeName, function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 59)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-static-string.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 57)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                       extensionMethod_literalStringDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInContext (defineExtensionMethod_literalStringDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@literalStringDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                          const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                         extensionMethod_literalStringDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_semanticAnalysis (defineExtensionMethod_literalStringDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@opaqueTypeDeclarationAST location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_opaqueTypeDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  result_outLocation = object->mProperty_mOpaqueTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_opaqueTypeDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                 extensionGetter_opaqueTypeDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_opaqueTypeDeclarationAST_location (defineExtensionGetter_opaqueTypeDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@opaqueTypeDeclarationAST addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                   GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                   GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                   GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  const GALGAS_opaqueTypeDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                     extensionMethod_opaqueTypeDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclarationAST_addExtension (defineExtensionMethod_opaqueTypeDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@opaqueTypeDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  GALGAS_lstring var_typeName_3042 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOpaqueTypeName, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 65)) ;
  {
  const GALGAS_opaqueTypeDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_3042, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_3042, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_typeName_3042, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                               extensionMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@opaqueTypeDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("opaqueType $").add_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 74)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                                           extensionGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@opaqueTypeDeclarationAST enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                     const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  GALGAS_PLMTypeAttributes var_flags_4404 = GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 89)) ;
  cEnumerator_lstringlist enumerator_4448 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4448.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4448.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("instantiable"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_flags_4404.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 92)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4448.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 93)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)) ;
      }else if (kBoolFalse == test_1) {
        var_flags_4404 = var_flags_4404.operator_or (GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 95)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 95)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4448.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_flags_4404.getter_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 98)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_4448.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 99)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 99)) ;
        }else if (kBoolFalse == test_4) {
          var_flags_4404 = var_flags_4404.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 101)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 101)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4448.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 104)), GALGAS_string ("only @copyable and @instantiable attributes are allowed here"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 104)) ;
      }
    }
    enumerator_4448.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_5007 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 108)) ;
  GALGAS_allocaList var_allocaList_5037 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 109)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5083 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-opaque-declaration.galgas", 110)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_5200 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_5200, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 111)) ;
  }
  GALGAS_staticStringMap joker_5514 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
  GALGAS_objectIR var_sizeExpressionIR_5667 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 116)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mOpaqueTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 118)), object->mProperty_mOpaqueTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 118)), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 119)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-opaque-declaration.galgas", 121)), var_temporaries_5083, joker_5514, var_universalMap_5200, var_allocaList_5037, var_initInstructionGenerationList_5007, var_sizeExpressionIR_5667, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 115)) ;
  GALGAS_bool test_7 = GALGAS_bool (kIsStrictSup, var_allocaList_5037.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 129)).add_operation (var_initInstructionGenerationList_5007.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_7.boolEnum ()) {
    test_7 = var_sizeExpressionIR_5667.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 129)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 129)) ;
  }
  const enumGalgasBool test_8 = test_7.boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 130)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_constructorMap var_constructorMap_5909 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 132)) ;
    {
    var_constructorMap_5909.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 133)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 133)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)) ;
    }
    GALGAS_bigint var_bitSize_6048 ;
    GALGAS_PLMType joker_6027_1 ; // Joker input parameter
    var_sizeExpressionIR_5667.method_literalInteger (joker_6027_1, var_bitSize_6048, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 134)) ;
    GALGAS_PLMType var_opaqueType_6068 = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 136)), GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 137)), var_constructorMap_5909, var_flags_4404, GALGAS_typeKind::constructor_opaque (var_bitSize_6048, object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 135)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, var_opaqueType_6068, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-opaque-declaration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 142)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                       extensionMethod_opaqueTypeDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclarationAST_enterInContext (defineExtensionMethod_opaqueTypeDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@opaqueTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                         extensionMethod_opaqueTypeDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_opaqueTypeDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@controlRegisterDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  GALGAS_lstring var_nodeName_7465 = object->mProperty_mRegisterArrayList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 201)) ;
  {
  const GALGAS_controlRegisterDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_7465, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 203)) ;
  }
  GALGAS_lstring var_typeName_7614 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mRegisterTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 205)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_7465, var_typeName_7614 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
  }
  GALGAS_lstring var_rootNode_7766 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)), var_nodeName_7465.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_7465, var_rootNode_7766 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 209)) ;
  }
  cEnumerator_controlRegisterList enumerator_7969 (object->mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_7969.hasCurrentObject ()) {
    switch (enumerator_7969.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_8276 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_7969.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySize = extractPtr_8276->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_8276->mAssociatedValue2 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_7465, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 215)) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_7465, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
      }
      break ;
    }
    enumerator_7969.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                               extensionMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@controlRegisterDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  GALGAS_lstring var_nodeName_8543 = object->mProperty_mRegisterArrayList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 224)) ;
  result_outRepresentation = GALGAS_string ("control register ").add_operation (var_nodeName_8543.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 225)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                                           extensionGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@controlRegisterDeclarationAST location'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_controlRegisterDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  result_result = object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 234)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_controlRegisterDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                 extensionGetter_controlRegisterDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_controlRegisterDeclarationAST_location (defineExtensionGetter_controlRegisterDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@controlRegisterDeclarationAST addExtension'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                        GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                        GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  const GALGAS_controlRegisterDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                     extensionMethod_controlRegisterDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_addExtension (defineExtensionMethod_controlRegisterDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@controlRegisterDeclarationAST enterInContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                          const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                          GALGAS_semanticContext & ioArgument_ioContext,
                                                                          GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  GALGAS_PLMType var_registerType_14360 ;
  GALGAS_uint var_registerBitCount_14391 ;
  const GALGAS_controlRegisterDeclarationAST temp_0 = object ;
  callExtensionMethod_controlRegisterType ((const cPtr_controlRegisterDeclarationAST *) temp_0.ptr (), ioArgument_ioContext, var_registerType_14360, var_registerBitCount_14391, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 368)) ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_14559 ;
  GALGAS_sliceMap var_registerBitSliceMap_14588 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_14622 ;
  const GALGAS_controlRegisterDeclarationAST temp_1 = object ;
  callExtensionMethod_buildControlRegisterSliceMap ((const cPtr_controlRegisterDeclarationAST *) temp_1.ptr (), ioArgument_ioContext, var_registerType_14360, var_registerBitCount_14391, var_registerFieldMap_14559, var_registerBitSliceMap_14588, var_controlRegisterFieldList_14622, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 370)) ;
  GALGAS_bigint var_maxRegisterAddress_14688 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 379)).left_shift_operation (ioArgument_ioContext.getter_mPointerSize (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 379)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 379)) ;
  cEnumerator_controlRegisterList enumerator_14763 (object->mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_14763.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly_14811 = GALGAS_bool (false) ;
    GALGAS_bool var_isAccessibleInUserMode_14850 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_14899 (enumerator_14763.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14899.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_14899.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_isReadOnly_14811.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_14899.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 387)), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 387)) ;
        }else if (kBoolFalse == test_3) {
          var_isReadOnly_14811 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_14899.current_mValue (HERE).getter_string (HERE).objectCompare (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 391)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const enumGalgasBool test_6 = var_isAccessibleInUserMode_14850.boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_14899.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 393)), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 393)) ;
          }else if (kBoolFalse == test_6) {
            var_isAccessibleInUserMode_14850 = GALGAS_bool (true) ;
          }
        }else if (kBoolFalse == test_5) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_14899.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 398)), GALGAS_string ("only @ro (read only) and @user (accessible in `user mode) attributes are accepted here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 398)) ;
        }
      }
      enumerator_14899.gotoNextObject () ;
    }
    GALGAS_objectIR var_addressExpressionResult_15673 ;
    callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) enumerator_14763.current (HERE).getter_mRegisterAddress (HERE).ptr (), enumerator_14763.current (HERE).getter_mRegisterAddressLocation (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_addressExpressionResult_15673, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
    GALGAS_bigint var_registerAddress_15707 ;
    const enumGalgasBool test_9 = var_addressExpressionResult_15673.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 409)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 409)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (enumerator_14763.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("control register address is not a static integer expression"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 410)) ;
      var_registerAddress_15707.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_9) {
      GALGAS_PLMType joker_15967_1 ; // Joker input parameter
      var_addressExpressionResult_15673.method_literalInteger (joker_15967_1, var_registerAddress_15707, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 414)) ;
      const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_registerAddress_15707.objectCompare (var_maxRegisterAddress_14688)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_14763.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxRegisterAddress_14688.getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 418)), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
      }
    }
    GALGAS_bigint var_arraySize_16252 ;
    GALGAS_uint var_elementArraySize_16279 ;
    switch (enumerator_14763.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_16252 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 425)) ;
        var_elementArraySize_16279 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_19281 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_14763.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_19281->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_19281->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_19281->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_19281->mAssociatedValue3 ;
        GALGAS_universalValuedObjectMapForContext var_universalMap_16894 ;
        {
        routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-control-register.galgas", 432)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 434)), var_universalMap_16894, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 430)) ;
        }
        GALGAS_semanticTemporariesStruct var_temporaries_17182 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-control-register.galgas", 443)) ;
        GALGAS_instructionListIR var_instructionGenerationList_17244 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 444)) ;
        GALGAS_allocaList var_allocaList_17278 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 445)) ;
        GALGAS_objectIR var_sizeExpressionResult_17775 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_arraySizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 447)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 449)), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-control-register.galgas", 452)), var_temporaries_17182, ioArgument_ioGlobalLiteralStringMap, var_universalMap_16894, var_allocaList_17278, var_instructionGenerationList_17244, var_sizeExpressionResult_17775, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 446)) ;
        const enumGalgasBool test_13 = var_sizeExpressionResult_17775.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 460)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 460)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression"), fixItArray14  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
          var_arraySize_16252.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          GALGAS_PLMType joker_18007_1 ; // Joker input parameter
          var_sizeExpressionResult_17775.method_literalInteger (joker_18007_1, var_arraySize_16252, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 463)) ;
          const enumGalgasBool test_15 = GALGAS_bool (kIsStrictInf, var_arraySize_16252.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 464)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray16  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 465)) ;
            var_arraySize_16252.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_15) {
            GALGAS_uint var_powerOfTwoForArraySize_18276 = var_arraySize_16252.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 469)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("declaration-control-register.galgas", 469)) ;
            const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_arraySize_16252.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 470)).left_shift_operation (var_powerOfTwoForArraySize_18276 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 470)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray18  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 471)) ;
              var_arraySize_16252.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_18895 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSizeExpression.ptr (), extractedValue_arrayElementSizeLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_elementArraySizeExpressionResult_18895, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 478)) ;
        const enumGalgasBool test_19 = var_elementArraySizeExpressionResult_18895.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 484)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 484)).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression"), fixItArray20  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 485)) ;
          var_elementArraySize_16279.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_19) {
          GALGAS_bigint var_elementArraySizeAsBigInt_19211 ;
          GALGAS_PLMType joker_19173_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_18895.method_literalInteger (joker_19173_1, var_elementArraySizeAsBigInt_19211, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 489)) ;
          var_elementArraySize_16279 = var_elementArraySizeAsBigInt_19211.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 490)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioContext.mProperty_mControlRegisterMap.setter_insertKey (enumerator_14763.current (HERE).getter_mRegisterName (HERE), var_registerType_14360, var_isReadOnly_14811, var_isAccessibleInUserMode_14850, var_registerBitSliceMap_14588, var_registerFieldMap_14559, var_registerAddress_15707, var_controlRegisterFieldList_14622, var_registerBitCount_14391, var_arraySize_16252.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 503)), var_elementArraySize_16279, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 493)) ;
    }
    enumerator_14763.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                       extensionMethod_controlRegisterDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_enterInContext (defineExtensionMethod_controlRegisterDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@controlRegisterDeclarationAST semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                            GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                         extensionMethod_controlRegisterDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_semanticAnalysis (defineExtensionMethod_controlRegisterDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_21328 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 536)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_21478 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 538)) ;
    cEnumerator_controlRegisterMap enumerator_21518 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_21518.hasCurrentObject ()) {
      var_firstLetterSet_21478.addAssign_operation (enumerator_21518.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 540)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 540))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 540)) ;
      enumerator_21518.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_21626 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_21660 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_controlRegisterMap enumerator_21707 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_21707.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_21660.objectCompare (enumerator_21707.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_21660 = enumerator_21707.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 546)) ;
        var_tableOfTypeString_21626.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_21660.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 547)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 547)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 547)).add_operation (var_currentFirstLetter_21660.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 547)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 547)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_21707.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_tableOfTypeString_21626.plusAssign_operation(function_linkForControlRegister (enumerator_21707.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 550)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 550)) ;
      }else if (kBoolFalse == test_2) {
        cEnumerator_range enumerator_22152 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_21707.current_mArraySize (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 552))), kENUMERATION_UP) ;
        while (enumerator_22152.hasCurrentObject ()) {
          var_tableOfTypeString_21626.plusAssign_operation(function_linkForControlRegister (enumerator_21707.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 553)).add_operation (enumerator_22152.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 553)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 553)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 553)) ;
          enumerator_22152.gotoNextObject () ;
        }
      }
      enumerator_21707.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_22317 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 558)), constinArgument_inControlRegisterMap, var_firstLetterSet_21478, var_tableOfTypeString_21626 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 557))) ;
    GALGAS_bool joker_22569 ; // Joker input parameter
    var_typeDumpString_22317.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_21328, joker_22569, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 563)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_21328, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 565)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'controlRegisterDumpGenerationTemplate dump'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_PROJECT_5F_NAME,
                                                                              const GALGAS_controlRegisterMap & in_CONTROL_5F_REGISTER_5F_MAP,
                                                                              const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                              const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
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
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_MAP.getter_count (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1211_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1211 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1211.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1211.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_uint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).stringValue () ;
      result << "\">" ;
      result << enumerator_1211.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1211.hasNextObject ()) {
        result << " - " ;
      }
      index_1211_.increment () ;
      enumerator_1211.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">Address</td><td class=\"result_ti"
    "tle\">Value</td></tr>\n" ;
  GALGAS_uint index_1588_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_MAP.isValid ()) {
    cEnumerator_controlRegisterMap enumerator_1588 (in_CONTROL_5F_REGISTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1588.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td>" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1588.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "<a name=\"" ;
        result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "\">" ;
        result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "</a>" ;
      }else if (kBoolFalse == test_0) {
        GALGAS_uint index_1759_ (0) ;
        if (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)).isValid ()) {
          cEnumerator_uintlist enumerator_1759 (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)), kENUMERATION_UP) ;
          while (enumerator_1759.hasCurrentObject ()) {
            result << "<a name=\"" ;
            result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " [" ;
            result << enumerator_1759.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 86)).stringValue () ;
            result << "]\">" ;
            result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " [" ;
            result << enumerator_1759.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 86)).stringValue () ;
            result << "]</a><br/>" ;
            index_1759_.increment () ;
            enumerator_1759.gotoNextObject () ;
          }
        }
      }
      result << "</td><td class=\"address\">$" ;
      result << extensionGetter_plmTypeName (enumerator_1588.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 89)).stringValue () ;
      result << "</td><td class=\"address\">" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1588.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << enumerator_1588.current_mAddress (HERE).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 91)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        GALGAS_uint index_2061_ (0) ;
        if (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 93)).isValid ()) {
          cEnumerator_uintlist enumerator_2061 (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 93)), kENUMERATION_UP) ;
          while (enumerator_2061.hasCurrentObject ()) {
            result << enumerator_1588.current_mAddress (HERE).add_operation (enumerator_2061.current_mValue (HERE).multiply_operation (enumerator_1588.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).getter_bigint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).stringValue () ;
            index_2061_.increment () ;
            enumerator_2061.gotoNextObject () ;
          }
        }
      }
      result << "</td><td>" ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_1588.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 98)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "<table class=\"fields\"><tr>" ;
        result << function_fieldIndexColumns (enumerator_1588.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 100)).stringValue () ;
        result << "</tr><tr>" ;
        GALGAS_uint index_2354_ (0) ;
        if (enumerator_1588.current_mControlRegisterFieldList (HERE).isValid ()) {
          cEnumerator_controlRegisterFieldList enumerator_2354 (enumerator_1588.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
          while (enumerator_2354.hasCurrentObject ()) {
            result << "<td class=\"fields\" colspan=\"" ;
            result << enumerator_2354.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 103)).stringValue () ;
            result << "\">" ;
            result << enumerator_2354.current_mFieldName (HERE).stringValue () ;
            result << "</td>" ;
            index_2354_.increment () ;
            enumerator_2354.gotoNextObject () ;
          }
        }
        result << "</tr></table>" ;
      }else if (kBoolFalse == test_2) {
      }
      result << "</td></tr>\n" ;
      index_1588_.increment () ;
      enumerator_1588.gotoNextObject () ;
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
//                                          Function 'linkForControlRegister'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForControlRegister (const GALGAS_string & constinArgument_inControlRegisterName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 584)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 584)).add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 584)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 584)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForControlRegister [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_linkForControlRegister (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForControlRegister (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForControlRegister ("linkForControlRegister",
                                                                        functionWithGenericHeader_linkForControlRegister,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_linkForControlRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_23595 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 591))), kENUMERATION_DOWN) ;
  while (enumerator_23595.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_23595.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 592)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 592)) ;
    enumerator_23595.gotoNextObject () ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'arrayIndexListFor'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist function_arrayIndexListFor (const GALGAS_uint & constinArgument_inSize,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist result_result ; // Returned variable
  result_result = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 599)) ;
  cEnumerator_range enumerator_23880 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 600))), kENUMERATION_UP) ;
  while (enumerator_23880.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_23880.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)) ;
    enumerator_23880.gotoNextObject () ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@globalConstantDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_globalConstantDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  result_outLocation = object->mProperty_mConstantName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_globalConstantDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                 extensionGetter_globalConstantDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_location (defineExtensionGetter_globalConstantDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@globalConstantDeclarationAST addExtension'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                       GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                       GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                     extensionMethod_globalConstantDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_addExtension (defineExtensionMethod_globalConstantDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@globalConstantDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  {
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 71)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_typeName_3344 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mConstantTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, var_typeName_3344 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 75)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                               extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@globalConstantDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 84)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                           extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@globalConstantDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_4886 ;
  {
  routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 100)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 102)), var_universalMap_4886, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 98)) ;
  }
  GALGAS_PLMType var_annotationType_4942 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType_4942 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }else if (kBoolFalse == test_0) {
    var_annotationType_4942 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 110)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 110)) ;
  }
  GALGAS_semanticTemporariesStruct joker_5396 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-constant.galgas", 120)) ;
  GALGAS_allocaList joker_5489 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 123)) ;
  GALGAS_instructionListIR joker_5515 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 124)) ;
  GALGAS_objectIR var_expressionResult_5555 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 114)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 116)), var_annotationType_4942, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 119)), joker_5396, ioArgument_ioGlobalLiteralStringMap, var_universalMap_4886, joker_5489, joker_5515, var_expressionResult_5555, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 113)) ;
  GALGAS_objectIR var_result_5608 = function_checkAssignmentCompatibility (var_expressionResult_5555, var_annotationType_4942, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 128)) ;
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_result_5608, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 135)).operator_not (SOURCE_FILE ("declaration-global-constant.galgas", 135)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 136)), GALGAS_string ("source expression cannot be statically computed"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 136)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_result_5608, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 139)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                       extensionMethod_globalConstantDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInContext (defineExtensionMethod_globalConstantDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_7115 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 158)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_7262 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 160)) ;
    cEnumerator_globalConstantMap enumerator_7301 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7301.hasCurrentObject ()) {
      var_firstLetterSet_7262.addAssign_operation (enumerator_7301.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 162)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 162))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 162)) ;
      enumerator_7301.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_7409 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_7443 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_7489 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7489.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_7443.objectCompare (enumerator_7489.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 167)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_7443 = enumerator_7489.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168)) ;
        var_tableOfTypeString_7409.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_7443.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 169)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 169)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 169)).add_operation (var_currentFirstLetter_7443.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 169)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 169)) ;
      }
      var_tableOfTypeString_7409.plusAssign_operation(function_linkForGlobalConstant (enumerator_7489.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 171)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 171)) ;
      enumerator_7489.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_7885 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 174)), inArgument_inGlobalConstantMap, var_firstLetterSet_7262, var_tableOfTypeString_7409 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173))) ;
    GALGAS_bool joker_8129 ; // Joker input parameter
    var_typeDumpString_7885.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_7115, joker_8129, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_7115, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 181)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uint index_1005_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1005 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1005.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1005.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_1005.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1005.hasNextObject ()) {
        result << " - " ;
      }
      index_1005_.increment () ;
      enumerator_1005.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_title\">V"
    "alue</td></tr>\n" ;
  GALGAS_uint index_1375_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1375 (in_GLOBAL_5F_CONSTANT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1375.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1375.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1375.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td><td>$" ;
      result << extensionGetter_plmTypeName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1375_.increment () ;
      enumerator_1375.gotoNextObject () ;
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
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 200)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 200)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 200)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 200)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@globalConstantDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                           const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                           GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                         extensionMethod_globalConstantDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_semanticAnalysis (defineExtensionMethod_globalConstantDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@requiredModuleAST enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_requiredModuleAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  {
  const GALGAS_requiredModuleAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mModuleName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 148)) ;
  }
  GALGAS_lstring var_moduleTypeName_5314 = function_llvmRegularTypeMangledNameFromName (function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 149)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mModuleName, var_moduleTypeName_5314 COMMA_SOURCE_FILE ("declaration-module.galgas", 150)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_requiredModuleAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                               extensionMethod_requiredModuleAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_requiredModuleAST_enterInPrecedenceGraph (defineExtensionMethod_requiredModuleAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@requiredModuleAST keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_requiredModuleAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  result_outRepresentation = GALGAS_string ("module ").add_operation (object->mProperty_mModuleName.getter_string (SOURCE_FILE ("declaration-module.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 156)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_requiredModuleAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                                           extensionGetter_requiredModuleAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_requiredModuleAST_keyRepresentationForErrorSignaling (defineExtensionGetter_requiredModuleAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension getter '@requiredModuleAST location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_requiredModuleAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  result_outLocation = object->mProperty_mModuleName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_requiredModuleAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                 extensionGetter_requiredModuleAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_requiredModuleAST_location (defineExtensionGetter_requiredModuleAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@requiredModuleAST addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_requiredModuleAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                            GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                            GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                            GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  const GALGAS_requiredModuleAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_requiredModuleAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                     extensionMethod_requiredModuleAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_requiredModuleAST_addExtension (defineExtensionMethod_requiredModuleAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'retainRequiredModules'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_retainRequiredModules (GALGAS_ast & ioArgument_ioAST,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciedModuleMap var_instanciedModuleMap_7739 = GALGAS_instanciedModuleMap::constructor_emptyMap (SOURCE_FILE ("declaration-module.galgas", 198)) ;
  GALGAS_stringset var_validModuleNames_7774 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-module.galgas", 199)) ;
  cEnumerator_moduleInstanciationListAST enumerator_7890 (ioArgument_ioAST.getter_mRequiredModuleListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7890.hasCurrentObject ()) {
    GALGAS_moduleInstanciationArgumentMap var_moduleInstanciationArgumentMap_7961 = GALGAS_moduleInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-module.galgas", 201)) ;
    cEnumerator_moduleInstanciationArgumentListAST enumerator_8005 (enumerator_7890.current_mModuleInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_8005.hasCurrentObject ()) {
      {
      var_moduleInstanciationArgumentMap_7961.setter_insertKey (enumerator_8005.current_mSelector (HERE), enumerator_8005.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 203)) ;
      }
      enumerator_8005.gotoNextObject () ;
    }
    {
    var_instanciedModuleMap_7739.setter_insertKey (enumerator_7890.current_mModuleName (HERE), var_moduleInstanciationArgumentMap_7961, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 205)) ;
    }
    enumerator_7890.gotoNextObject () ;
  }
  cEnumerator_moduleDeclarationListAST enumerator_8307 (ioArgument_ioAST.getter_mModuleDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8307.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_instanciedModuleMap_7739.getter_hasKey (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-module.galgas", 209)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_validModuleNames_7774.addAssign_operation (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 210)) ;
      GALGAS_moduleInstanciationArgumentMap var_moduleInstanciationArgumentMap_8539 ;
      var_instanciedModuleMap_7739.method_searchKey (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE), var_moduleInstanciationArgumentMap_8539, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 211)) ;
      GALGAS_stringset var_validArgumentSet_8634 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-module.galgas", 213)) ;
      GALGAS_structurePropertyListAST var_modulePropertyListAST_8693 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 214)) ;
      cEnumerator_modulePropertyListAST enumerator_8812 (enumerator_8307.current_mModule (HERE).getter_mPropertyListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_8812.hasCurrentObject ()) {
        GALGAS_expressionAST var_initExpression_8853 ;
        switch (enumerator_8812.current_mOptionalExpression (HERE).enumValue ()) {
        case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
          {
            var_moduleInstanciationArgumentMap_8539.method_searchKey (enumerator_8812.current_mPropertyName (HERE), var_initExpression_8853, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 219)) ;
            var_validArgumentSet_8634.addAssign_operation (enumerator_8812.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 220)) ;
          }
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_9131 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_8812.current_mOptionalExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_expression = extractPtr_9131->mAssociatedValue0 ;
            var_initExpression_8853 = extractedValue_expression ;
          }
          break ;
        }
        var_modulePropertyListAST_8693.addAssign_operation (enumerator_8812.current_mPropertyName (HERE), enumerator_8812.current_mIsConstant (HERE), GALGAS_bool (false), enumerator_8812.current_mTypeName (HERE), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_8853  COMMA_SOURCE_FILE ("declaration-module.galgas", 229))  COMMA_SOURCE_FILE ("declaration-module.galgas", 224)) ;
        enumerator_8812.gotoNextObject () ;
      }
      cEnumerator_stringset enumerator_9491 (var_moduleInstanciationArgumentMap_8539.getter_keySet (SOURCE_FILE ("declaration-module.galgas", 232)).substract_operation (var_validArgumentSet_8634, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 232)), kENUMERATION_UP) ;
      while (enumerator_9491.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_moduleInstanciationArgumentMap_8539.getter_locationForKey (enumerator_9491.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 233)), GALGAS_string ("invalid selector"), fixItArray1  COMMA_SOURCE_FILE ("declaration-module.galgas", 233)) ;
        enumerator_9491.gotoNextObject () ;
      }
      GALGAS_lstring var_moduleTypeName_9637 = function_moduleMangledNameFromModuleName (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 236)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_requiredModuleAST::constructor_new (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 237))  COMMA_SOURCE_FILE ("declaration-module.galgas", 237)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (var_moduleTypeName_9637, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 240)), var_modulePropertyListAST_8693, enumerator_8307.current_mModule (HERE).getter_mFunctionDeclarationListAST (HERE), enumerator_8307.current_mModule (HERE).getter_mSystemRoutineListAST (HERE), enumerator_8307.current_mModule (HERE).getter_mGuardListAST (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 238))  COMMA_SOURCE_FILE ("declaration-module.galgas", 238)) ;
      cEnumerator_initList enumerator_10102 (enumerator_8307.current_mModule (HERE).getter_mModuleInitListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_10102.hasCurrentObject ()) {
        ioArgument_ioAST.mProperty_mInitListAST.addAssign_operation (enumerator_10102.current (HERE).getter_mInitLocation (HERE), var_moduleTypeName_9637, enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE).getter_string (SOURCE_FILE ("declaration-module.galgas", 250)), enumerator_10102.current (HERE).getter_mInstructionList (HERE), enumerator_10102.current (HERE).getter_mEndOfInitLocation (HERE), enumerator_10102.current (HERE).getter_mPriority (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 247)) ;
        enumerator_10102.gotoNextObject () ;
      }
    }
    enumerator_8307.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mModuleDeclarationListAST = GALGAS_moduleDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 257)) ;
  cEnumerator_stringset enumerator_10532 (var_instanciedModuleMap_7739.getter_keySet (SOURCE_FILE ("declaration-module.galgas", 259)).substract_operation (var_validModuleNames_7774, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 259)), kENUMERATION_UP) ;
  while (enumerator_10532.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (var_instanciedModuleMap_7739.getter_locationForKey (enumerator_10532.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 260)), GALGAS_string ("undefined module"), fixItArray2  COMMA_SOURCE_FILE ("declaration-module.galgas", 260)) ;
    enumerator_10532.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@requiredModuleAST enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_requiredModuleAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                              const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  {
  ioArgument_ioContext.mProperty_mModuleMap.setter_insertKey (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 281)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_requiredModuleAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                       extensionMethod_requiredModuleAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_requiredModuleAST_enterInContext (defineExtensionMethod_requiredModuleAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@requiredModuleAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_requiredModuleAST_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  GALGAS_lstring var_moduleTypeName_12502 = function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 301)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_moduleTypeProxy_12573 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_12502, inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 302)) ;
  GALGAS_constructorMap var_constructorMap_12666 = var_moduleTypeProxy_12573.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 303)).getter_mConstructorMap (HERE) ;
  GALGAS_constructorValue var_constructorValue_12800 ;
  GALGAS_constructorSignature joker_12777 ; // Joker input parameter
  var_constructorMap_12666.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), var_moduleTypeName_12502.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 304)), joker_12777, var_constructorValue_12800, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 304)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_12872 ;
  var_constructorValue_12800.method_structure (var_sortedOperandList_12872, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 305)) ;
  GALGAS_operandIRList var_initialValueList_12907 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 306)) ;
  cEnumerator_sortedOperandIRList enumerator_12956 (var_sortedOperandList_12872, kENUMERATION_UP) ;
  while (enumerator_12956.hasCurrentObject ()) {
    var_initialValueList_12907.addAssign_operation (enumerator_12956.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 308)) ;
    enumerator_12956.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mModuleList.addAssign_operation (object->mProperty_mModuleName.getter_string (HERE), var_moduleTypeProxy_12573, var_initialValueList_12907  COMMA_SOURCE_FILE ("declaration-module.galgas", 310)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_requiredModuleAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                         extensionMethod_requiredModuleAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_requiredModuleAST_semanticAnalysis (defineExtensionMethod_requiredModuleAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@staticListAST addExtension'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticListAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                        GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                        GALGAS_extendStaticArrayDeclarationAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                        GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_staticListValueListAST var_newValueList_5470 = object->mProperty_mValueList ;
  GALGAS_extendStaticArrayDeclarationAST var_extendStaticArrayDeclarationAST_5550 = GALGAS_extendStaticArrayDeclarationAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 149)) ;
  cEnumerator_extendStaticArrayDeclarationAST enumerator_5628 (ioArgument_ioExtendStaticArrayDeclarationAST, kENUMERATION_UP) ;
  while (enumerator_5628.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mStaticListName.getter_string (HERE).objectCompare (enumerator_5628.current_mStaticListName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_newValueList_5470.addAssign_operation (enumerator_5628.current_mExpressions (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 152)) ;
    }else if (kBoolFalse == test_0) {
      var_extendStaticArrayDeclarationAST_5550.addAssign_operation (enumerator_5628.current_mStaticListName (HERE), enumerator_5628.current_mExpressions (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 154)) ;
    }
    enumerator_5628.gotoNextObject () ;
  }
  ioArgument_ioExtendStaticArrayDeclarationAST = var_extendStaticArrayDeclarationAST_5550 ;
  outArgument_outNewDeclaration = GALGAS_staticListAST::constructor_new (object->mProperty_mStaticListName, object->mProperty_mPropertyList, var_newValueList_5470  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 158)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticListAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                     extensionMethod_staticListAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticListAST_addExtension (defineExtensionMethod_staticListAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@staticListAST enterInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticListAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  {
  const GALGAS_staticListAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 167)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_6581 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_6581.hasCurrentObject ()) {
    switch (enumerator_6581.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_6778 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_6581.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_6778->mAssociatedValue0 ;
        GALGAS_lstring var_typeName_6668 = function_llvmRegularTypeMangledNameFromName (extractedValue_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 172)) ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_typeName_6668 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 173)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7240 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_6581.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_7240->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_7240->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentListAST enumerator_6918 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_6918.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_6942 = function_llvmRegularTypeMangledNameFromName (enumerator_6918.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 176)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_6942 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 177)) ;
          }
          enumerator_6918.gotoNextObject () ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_lstring var_returnTypeName_7118 = function_llvmRegularTypeMangledNameFromName (extractedValue_returnType, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 180)) ;
          {
          ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_returnTypeName_7118 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 181)) ;
          }
        }
      }
      break ;
    }
    enumerator_6581.gotoNextObject () ;
  }
  cEnumerator_staticListValueListAST enumerator_7343 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_7343.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementListAST enumerator_7375 (enumerator_7343.current_mExpressions (HERE), kENUMERATION_UP) ;
    while (enumerator_7375.hasCurrentObject ()) {
      switch (enumerator_7375.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_7522 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7375.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7522->mAssociatedValue0 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), object->mProperty_mStaticListName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 190)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_7788 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7375.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_7788->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_7646 (extractedValue_formalArgs, kENUMERATION_UP) ;
          while (enumerator_7646.hasCurrentObject ()) {
            GALGAS_lstring var_typeName_7672 = function_llvmRegularTypeMangledNameFromName (enumerator_7646.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 193)) ;
            {
            ioArgument_ioGraph.setter_noteNode (var_typeName_7672 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 194)) ;
            }
            enumerator_7646.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7375.gotoNextObject () ;
    }
    enumerator_7343.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticListAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                               extensionMethod_staticListAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticListAST_enterInPrecedenceGraph (defineExtensionMethod_staticListAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@staticListAST location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_staticListAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  result_result = object->mProperty_mStaticListName.getter_location (HERE) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticListAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                 extensionGetter_staticListAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticListAST_location (defineExtensionGetter_staticListAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@staticListAST keyRepresentationForErrorSignaling'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_staticListAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 210)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                           extensionGetter_staticListAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticListAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@staticListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticListAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                          const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                          GALGAS_semanticContext & ioArgument_ioContext,
                                                          GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                          GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_propertyList var_propertyList_9568 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 240)) ;
  GALGAS_propertyMap var_propertyMap_9600 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 241)) ;
  GALGAS_stringset var_propertyNameSet_9634 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 242)) ;
  GALGAS_lstring var_plmElementTypeName_9664 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 243)) ;
  cEnumerator_staticListPropertyListAST enumerator_9855 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  GALGAS_uint index_9818 ((uint32_t) 0) ;
  while (enumerator_9855.hasCurrentObject ()) {
    switch (enumerator_9855.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_10419 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_9855.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_10419->mAssociatedValue0 ;
        GALGAS_PLMType var_propertyType_9962 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 248)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 248)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_9634.getter_hasKey (enumerator_9855.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 249)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 249)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_9855.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 250)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 250)) ;
        }else if (kBoolFalse == test_0) {
          var_propertyNameSet_9634.addAssign_operation (enumerator_9855.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 252))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 252)) ;
          var_propertyList_9568.addAssign_operation (enumerator_9855.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 253)), var_propertyType_9962  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 253)) ;
          {
          var_propertyMap_9600.setter_insertKey (enumerator_9855.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_indexed (var_propertyType_9962, index_9818  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 254)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_11997 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_9855.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_11997->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_11997->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_11997->mAssociatedValue2 ;
        GALGAS_lstring var_routineMangledName_10576 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_9855.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 262)) ;
        GALGAS_routineTypedSignature var_signature_10760 ;
        {
        routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_10760, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 268)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 270)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 272)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_10809 = temp_2 ;
        GALGAS_routineDescriptor var_descriptor_10981 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (extractedValue_mode  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 277)), var_signature_10760, var_returnTypeProxy_10809, GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 274)) ;
        GALGAS_PLMType var_type_11421 = function_functionType (var_descriptor_10981, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 283)) ;
        const enumGalgasBool test_4 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_routineMangledName_10576.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 284)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 284)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 284)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_routineMangledName_10576, var_type_11421, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-array.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 285)) ;
          }
        }
        GALGAS_PLMType var_propertyType_11700 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_routineMangledName_10576, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 291)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 291)) ;
        var_propertyList_9568.addAssign_operation (enumerator_9855.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 292)), var_propertyType_11700  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 292)) ;
        {
        var_propertyMap_9600.setter_insertKey (var_routineMangledName_10576, GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_indexed (var_propertyType_11700, index_9818  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 293)) ;
        }
      }
      break ;
    }
    enumerator_9855.gotoNextObject () ;
    index_9818.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 245)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_9568, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 300)) ;
  }
  GALGAS_PLMType var_type_12195 = GALGAS_PLMType::constructor_new (var_propertyMap_9600, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 304)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 305)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-array.galgas", 306)), GALGAS_typeKind::constructor_structure (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 307)), var_propertyList_9568, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 307))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 307))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 302)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmElementTypeName_9664, var_type_12195, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-array.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 309)) ;
  }
  GALGAS_stringlist var_stringValueList_12665 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 315)) ;
  cEnumerator_staticListValueListAST enumerator_12696 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_12696.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_propertyList_9568.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 317)).objectCompare (enumerator_12696.current (HERE).getter_mExpressions (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 317)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mStaticListName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 318)), var_propertyList_9568.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 319)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 319)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 319)).add_operation (enumerator_12696.current (HERE).getter_mExpressions (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 320)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 319)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 320)), fixItArray6  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 318)) ;
    }else if (kBoolFalse == test_5) {
      GALGAS_string var_staticValue_12949 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementListAST enumerator_13006 (enumerator_12696.current (HERE).getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_13032 (var_propertyList_9568, kENUMERATION_UP) ;
      while (enumerator_13006.hasCurrentObject () && enumerator_13032.hasCurrentObject ()) {
        switch (enumerator_13006.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_14891 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_13006.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_exp = extractPtr_14891->mAssociatedValue0 ;
            const enumGalgasBool test_7 = enumerator_13032.current_mType (HERE).getter_mKind (SOURCE_FILE ("declaration-static-array.galgas", 326)).getter_isFunction (SOURCE_FILE ("declaration-static-array.galgas", 326)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_13006.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 327)) ;
            }else if (kBoolFalse == test_7) {
              GALGAS_universalValuedObjectMapForContext var_universalMap_13533 ;
              {
              routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-static-array.galgas", 331)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-array.galgas", 333)), var_universalMap_13533, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 329)) ;
              }
              GALGAS_semanticTemporariesStruct var_temporaries_13598 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-static-array.galgas", 336)) ;
              GALGAS_instructionListIR var_instructionGenerationList_13666 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 337)) ;
              GALGAS_allocaList var_allocaList_13706 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 338)) ;
              GALGAS_objectIR var_expressionResult_14258 ;
              callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 340)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-static-array.galgas", 342)), enumerator_13032.current_mType (HERE), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-static-array.galgas", 345)), var_temporaries_13598, ioArgument_ioGlobalLiteralStringMap, var_universalMap_13533, var_allocaList_13706, var_instructionGenerationList_13666, var_expressionResult_14258, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 339)) ;
              GALGAS_objectIR var_result_14341 = function_checkAssignmentCompatibility (var_expressionResult_14258, enumerator_13032.current_mType (HERE), enumerator_13006.current_mEndOfExpression (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 354)) ;
              GALGAS_bool test_9 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_13666.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 360)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
              if (kBoolTrue != test_9.boolEnum ()) {
                test_9 = GALGAS_bool (kIsStrictSup, var_allocaList_13706.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 360)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
              }
              GALGAS_bool test_10 = test_9 ;
              if (kBoolTrue != test_10.boolEnum ()) {
                test_10 = extensionGetter_isStatic (var_result_14341, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 360)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 360)) ;
              }
              const enumGalgasBool test_11 = test_10.boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_13006.current_mEndOfExpression (HERE), GALGAS_string ("source expression cannot be statically computed"), fixItArray12  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 361)) ;
              }
              var_staticValue_12949.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_13032.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)).add_operation (extensionGetter_llvmName (var_expressionResult_14258, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_17785 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_13006.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_functionName = extractPtr_17785->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_17785->mAssociatedValue1 ;
            const enumGalgasBool test_13 = enumerator_13032.current_mType (HERE).getter_mKind (SOURCE_FILE ("declaration-static-array.galgas", 367)).getter_isFunction (SOURCE_FILE ("declaration-static-array.galgas", 367)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 367)).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (enumerator_13006.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray14  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 368)) ;
            }else if (kBoolFalse == test_13) {
              GALGAS_routineDescriptor var_descriptor_15179 ;
              enumerator_13032.current_mType (HERE).getter_mKind (SOURCE_FILE ("declaration-static-array.galgas", 370)).method_function (var_descriptor_15179, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 370)) ;
              GALGAS_lstring var_argumentSignature_15214 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 371)) ;
              GALGAS_lstring var_candidateRoutineLLVMName_15429 ;
              GALGAS_routineDescriptor var_routineDescriptor_15485 ;
              GALGAS_location var_functionDefinitionLocation_15531 ;
              extensionMethod_searchKey (ioArgument_ioContext.getter_mRoutineMapForContext (HERE), extractedValue_functionName, var_argumentSignature_15214, var_candidateRoutineLLVMName_15429, var_routineDescriptor_15485, var_functionDefinitionLocation_15531, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 372)) ;
              GALGAS_bool var_candidateIsPublic_15579 = var_routineDescriptor_15485.getter_mIsPublic (HERE) ;
              GALGAS_routineKind var_candidateRoutineKind_15646 = var_routineDescriptor_15485.getter_mRoutineKind (HERE) ;
              GALGAS_mode var_candidateMode_15709 = extensionGetter_executionMode (var_routineDescriptor_15485.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 381)) ;
              GALGAS_routineTypedSignature var_candidateSignature_15793 = var_routineDescriptor_15485.getter_mSignature (HERE) ;
              GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnTypeProxy_15865 = var_routineDescriptor_15485.getter_mReturnTypeProxy (HERE) ;
              const enumGalgasBool test_15 = var_candidateIsPublic_15579.operator_not (SOURCE_FILE ("declaration-static-array.galgas", 385)).boolEnum () ;
              if (kBoolTrue == test_15) {
                GALGAS_string var_declarationFile_16013 = var_functionDefinitionLocation_15531.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 386)) ;
                GALGAS_string var_invocationFile_16082 = extractedValue_functionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 387)) ;
                const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_invocationFile_16082.objectCompare (var_declarationFile_16013)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <C_FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 389)), GALGAS_string ("this function is not public"), fixItArray17  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 389)) ;
                }
              }
              const enumGalgasBool test_18 = var_candidateRoutineKind_15646.getter_isFunction (SOURCE_FILE ("declaration-static-array.galgas", 392)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 392)).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <C_FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 393)), GALGAS_string ("this routine is not a function"), fixItArray19  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 393)) ;
              }
              GALGAS_mode var_currentMode_16440 = extensionGetter_executionMode (var_descriptor_15179.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 395)) ;
              const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, var_currentMode_16440.objectCompare (var_candidateMode_15709)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <C_FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 397)), GALGAS_string ("this function runs in ").add_operation (extensionGetter_string (var_candidateMode_15709, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)).add_operation (GALGAS_string (" mode, but "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)).add_operation (extensionGetter_string (var_currentMode_16440, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)).add_operation (GALGAS_string (" is required"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)), fixItArray21  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)) ;
              }
              GALGAS_bool test_22 = GALGAS_bool (kIsEqual, var_descriptor_15179.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 399)))) ;
              if (kBoolTrue == test_22.boolEnum ()) {
                test_22 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_15865.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 399)))) ;
              }
              const enumGalgasBool test_23 = test_22.boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <C_FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 400)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnTypeProxy_15865.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 400)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 400)), fixItArray24  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 400)) ;
              }else if (kBoolFalse == test_23) {
                GALGAS_bool test_25 = GALGAS_bool (kIsNotEqual, var_descriptor_15179.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 401)))) ;
                if (kBoolTrue == test_25.boolEnum ()) {
                  test_25 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_15865.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 401)))) ;
                }
                const enumGalgasBool test_26 = test_25.boolEnum () ;
                if (kBoolTrue == test_26) {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 402)), GALGAS_string ("this function should return no object"), fixItArray27  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 402)) ;
                }
              }
              const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, var_descriptor_15179.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 404)).objectCompare (var_candidateSignature_15793.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 404)))).boolEnum () ;
              if (kBoolTrue == test_28) {
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 405)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_15793.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 406)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 406)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 406)).add_operation (var_descriptor_15179.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 407)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 406)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 407)), fixItArray29  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 405)) ;
              }else if (kBoolFalse == test_28) {
                cEnumerator_routineTypedSignature enumerator_17407 (var_descriptor_15179.getter_mSignature (HERE), kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_17440 (var_candidateSignature_15793, kENUMERATION_UP) ;
                while (enumerator_17407.hasCurrentObject () && enumerator_17440.hasCurrentObject ()) {
                  const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_17407.current (HERE).getter_mTypeProxy (HERE).objectCompare (enumerator_17440.current (HERE).getter_mTypeProxy (HERE))).boolEnum () ;
                  if (kBoolTrue == test_30) {
                    TC_Array <C_FixItDescription> fixItArray31 ;
                    inCompiler->emitSemanticError (enumerator_17440.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 411)), GALGAS_string ("argument type should be $").add_operation (enumerator_17407.current (HERE).getter_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 411)), fixItArray31  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 411)) ;
                  }
                  enumerator_17407.gotoNextObject () ;
                  enumerator_17440.gotoNextObject () ;
                }
              }
              var_staticValue_12949.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_13032.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)).add_operation (function_llvmNameForFunction (var_candidateRoutineLLVMName_15429.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)) ;
            }
          }
          break ;
        }
        if (enumerator_13006.hasNextObject () && enumerator_13032.hasNextObject ()) {
          var_staticValue_12949.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 419)) ;
        }
        enumerator_13006.gotoNextObject () ;
        enumerator_13032.gotoNextObject () ;
      }
      var_staticValue_12949.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 421)) ;
      var_stringValueList_12665.addAssign_operation (var_staticValue_12949  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 422)) ;
    }
    enumerator_12696.gotoNextObject () ;
  }
  {
  ioArgument_ioStaticListValueMap.setter_insertKey (object->mProperty_mStaticListName, var_stringValueList_12665, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 425)) ;
  }
  GALGAS_propertyMap var_listTypePropertyMap_18125 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 427)) ;
  {
  var_listTypePropertyMap_18125.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 429)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 431)), object->mProperty_mValueList.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 431)).getter_bigint (SOURCE_FILE ("declaration-static-array.galgas", 431))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 431))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 428)) ;
  }
  GALGAS_PLMType var_elementType_18474 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_plmElementTypeName_9664, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 434)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 434)) ;
  GALGAS_PLMType var_arrayType_18573 = GALGAS_PLMType::constructor_new (var_listTypePropertyMap_18125, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 437)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 438)), GALGAS_PLMTypeAttributes::constructor_all (SOURCE_FILE ("declaration-static-array.galgas", 439)), GALGAS_typeKind::constructor_arrayType (GALGAS_lstring::constructor_new (function_llvmNameForStaticListType (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 441)), object->mProperty_mStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 441)), var_elementType_18474, var_stringValueList_12665.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 443)).getter_bigint (SOURCE_FILE ("declaration-static-array.galgas", 443)), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 444)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 444))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 440))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 435)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 448)), var_arrayType_18573, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-array.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 447)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_staticListType_19203 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 453)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19203.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 456)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 456))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 454)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticListAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticListAST_enterInContext (defineExtensionMethod_staticListAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@staticListAST semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticListAST_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_stringset var_invokedFunctionSet_20398 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 478)) ;
  cEnumerator_staticListValueListAST enumerator_20429 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_20429.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementListAST enumerator_20481 (enumerator_20429.current (HERE).getter_mExpressions (HERE), kENUMERATION_UP) ;
    while (enumerator_20481.hasCurrentObject ()) {
      switch (enumerator_20481.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_20557 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_20481.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_20557->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_20858 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_20481.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_20858->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_20858->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_20707 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 485)) ;
          var_invokedFunctionSet_20398.addAssign_operation (var_routineMangledName_20707.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 490))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 490)) ;
        }
        break ;
      }
      enumerator_20481.gotoNextObject () ;
    }
    enumerator_20429.gotoNextObject () ;
  }
  {
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_20398, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 494)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_20398, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 495)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticListAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                         extensionMethod_staticListAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticListAST_semanticAnalysis (defineExtensionMethod_staticListAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_calleeKindIR function_checkMode (const GALGAS_mode & constinArgument_inCallerMode,
                                        const GALGAS_mode & constinArgument_inCalleeMode,
                                        const GALGAS_routineKind & constinArgument_inRoutineKind,
                                        const GALGAS_location & constinArgument_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result_outResult ; // Returned variable
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 63)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_safeFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 64)) ;
      }else if (kBoolFalse == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_safeFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 66)) ;
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 69)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 70)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_bool test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 71)))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 71)))) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 72)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)), fixItArray4  COMMA_SOURCE_FILE ("logical-modes.galgas", 74)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 77)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outResult = GALGAS_calleeKindIR::constructor_primitiveFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 78)) ;
      }else if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a primitive cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)), fixItArray6  COMMA_SOURCE_FILE ("logical-modes.galgas", 80)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 83)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 84)) ;
      }else if (kBoolFalse == test_7) {
        GALGAS_bool test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 85)))) ;
        if (kBoolTrue != test_8.boolEnum ()) {
          test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_guardMode (SOURCE_FILE ("logical-modes.galgas", 85)))) ;
        }
        const enumGalgasBool test_9 = test_8.boolEnum () ;
        if (kBoolTrue == test_9) {
          result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 86)) ;
        }else if (kBoolFalse == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)), fixItArray10  COMMA_SOURCE_FILE ("logical-modes.galgas", 88)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      GALGAS_bool var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (constinArgument_inCalleeMode)) ;
      const enumGalgasBool test_11 = var_ok_3103.operator_not (SOURCE_FILE ("logical-modes.galgas", 92)).boolEnum () ;
      if (kBoolTrue == test_11) {
        switch (constinArgument_inCallerMode.enumValue ()) {
        case GALGAS_mode::kNotBuilt:
          break ;
        case GALGAS_mode::kEnum_userMode:
          {
            var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 95)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_sectionMode:
          {
            GALGAS_bool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 97)))) ;
            if (kBoolTrue != test_12.boolEnum ()) {
              test_12 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 97)))) ;
            }
            var_ok_3103 = test_12 ;
          }
          break ;
        case GALGAS_mode::kEnum_serviceMode:
          {
            GALGAS_bool test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            if (kBoolTrue != test_13.boolEnum ()) {
              test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            }
            GALGAS_bool test_14 = test_13 ;
            if (kBoolTrue != test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            }
            var_ok_3103 = test_14 ;
          }
          break ;
        case GALGAS_mode::kEnum_primitiveMode:
          {
            GALGAS_bool test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            if (kBoolTrue != test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            GALGAS_bool test_16 = test_15 ;
            if (kBoolTrue != test_16.boolEnum ()) {
              test_16 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            GALGAS_bool test_17 = test_16 ;
            if (kBoolTrue != test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            var_ok_3103 = test_17 ;
          }
          break ;
        case GALGAS_mode::kEnum_guardMode:
          {
            GALGAS_bool test_18 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            if (kBoolTrue != test_18.boolEnum ()) {
              test_18 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            GALGAS_bool test_19 = test_18 ;
            if (kBoolTrue != test_19.boolEnum ()) {
              test_19 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            GALGAS_bool test_20 = test_19 ;
            if (kBoolTrue != test_20.boolEnum ()) {
              test_20 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            var_ok_3103 = test_20 ;
          }
          break ;
        case GALGAS_mode::kEnum_panicMode:
        case GALGAS_mode::kEnum_initMode:
          {
            GALGAS_bool test_21 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 105)))) ;
            if (kBoolTrue != test_21.boolEnum ()) {
              test_21 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 105)))) ;
            }
            var_ok_3103 = test_21 ;
          }
          break ;
        case GALGAS_mode::kEnum_bootMode:
          {
          }
          break ;
        case GALGAS_mode::kEnum_safeMode:
          {
            var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 108)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_anyMode:
          {
          }
          break ;
        }
      }
      const enumGalgasBool test_22 = var_ok_3103.operator_not (SOURCE_FILE ("logical-modes.galgas", 112)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a func ").add_operation (extensionGetter_string (constinArgument_inCalleeMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (GALGAS_string (" cannot be called from "), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), fixItArray23  COMMA_SOURCE_FILE ("logical-modes.galgas", 113)) ;
      }
      result_outResult = GALGAS_calleeKindIR::constructor_function (SOURCE_FILE ("logical-modes.galgas", 116)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkMode [5] = {
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkMode (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_mode operand0 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_mode operand1 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_routineKind operand2 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_checkMode (operand0,
                             operand1,
                             operand2,
                             operand3,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkMode ("checkMode",
                                                           functionWithGenericHeader_checkMode,
                                                           & kTypeDescriptor_GALGAS_calleeKindIR,
                                                           4,
                                                           functionArgs_checkMode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'panicModeName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_panicModeName (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("panic") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GALGAS_string gOnceFunctionResult_panicModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_panicModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicModeName (NULL,
                                                           releaseOnceFunctionResult_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicModeName (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'panicCodeForAssertViolation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForAssertViolation (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 3)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForAssertViolation = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForAssertViolation ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForAssertViolation (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForAssertViolation) {
    gOnceFunctionResult_panicCodeForAssertViolation = onceFunction_panicCodeForAssertViolation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForAssertViolation = true ;
  }
  return gOnceFunctionResult_panicCodeForAssertViolation ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForAssertViolation (void) {
  gOnceFunctionResult_panicCodeForAssertViolation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForAssertViolation (NULL,
                                                                         releaseOnceFunctionResult_panicCodeForAssertViolation) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForAssertViolation [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForAssertViolation (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForAssertViolation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForAssertViolation ("panicCodeForAssertViolation",
                                                                             functionWithGenericHeader_panicCodeForAssertViolation,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForAssertViolation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Once function 'panicCodeForUnsignedAdditionOverflow'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 5)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (NULL,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

