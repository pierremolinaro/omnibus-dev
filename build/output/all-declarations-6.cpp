#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (void) :
mProperty_mSelector (),
mProperty_mType (),
mProperty_mFieldIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::~ GALGAS_constructorSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                const GALGAS_uint & inOperand2) :
mProperty_mSelector (inOperand0),
mProperty_mType (inOperand1),
mProperty_mFieldIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorSignature_2D_element (GALGAS_string::constructor_default (HERE),
                                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                const GALGAS_uint & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorSignature_2D_element::objectCompare (const GALGAS_constructorSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFieldIndex.objectCompare (inOperand.mProperty_mFieldIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorSignature_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mType.isValid () && mProperty_mFieldIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
  mProperty_mFieldIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @constructorSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFieldIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_constructorSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_constructorSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constructorSignature_2D_element::getter_mFieldIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @constructorSignature-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorSignature_2D_element ("constructorSignature-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  const GALGAS_constructorSignature_2D_element * p = (const GALGAS_constructorSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element::GALGAS_sortedOperandIRList_2D_element (void) :
mProperty_mOperand (),
mProperty_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element::~ GALGAS_sortedOperandIRList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element::GALGAS_sortedOperandIRList_2D_element (const GALGAS_objectIR & inOperand0,
                                                                              const GALGAS_uint & inOperand1) :
mProperty_mOperand (inOperand0),
mProperty_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element GALGAS_sortedOperandIRList_2D_element::constructor_new (const GALGAS_objectIR & inOperand0,
                                                                                              const GALGAS_uint & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortedOperandIRList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sortedOperandIRList_2D_element::objectCompare (const GALGAS_sortedOperandIRList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sortedOperandIRList_2D_element::isValid (void) const {
  return mProperty_mOperand.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList_2D_element::drop (void) {
  mProperty_mOperand.drop () ;
  mProperty_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @sortedOperandIRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_sortedOperandIRList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_sortedOperandIRList_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sortedOperandIRList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedOperandIRList_2D_element ("sortedOperandIRList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortedOperandIRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedOperandIRList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortedOperandIRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedOperandIRList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element GALGAS_sortedOperandIRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList_2D_element result ;
  const GALGAS_sortedOperandIRList_2D_element * p = (const GALGAS_sortedOperandIRList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedOperandIRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedOperandIRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::GALGAS_extensionDeclarationListAST_2D_element (void) :
mProperty_mTypeName (),
mProperty_mProcedureDeclarationListAST (),
mProperty_mPropertyList (),
mProperty_mSVCListAST (),
mProperty_mGuardListAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::~ GALGAS_extensionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::GALGAS_extensionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_functionDeclarationListAST & inOperand1,
                                                                                              const GALGAS_structurePropertyListAST & inOperand2,
                                                                                              const GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                                                              const GALGAS_guardDeclarationListAST & inOperand4) :
mProperty_mTypeName (inOperand0),
mProperty_mProcedureDeclarationListAST (inOperand1),
mProperty_mPropertyList (inOperand2),
mProperty_mSVCListAST (inOperand3),
mProperty_mGuardListAST (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                                        GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_guardDeclarationListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_functionDeclarationListAST & inOperand1,
                                                                                                              const GALGAS_structurePropertyListAST & inOperand2,
                                                                                                              const GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                                                                              const GALGAS_guardDeclarationListAST & inOperand4 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_extensionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionDeclarationListAST_2D_element::objectCompare (const GALGAS_extensionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProcedureDeclarationListAST.objectCompare (inOperand.mProperty_mProcedureDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyList.objectCompare (inOperand.mProperty_mPropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSVCListAST.objectCompare (inOperand.mProperty_mSVCListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardListAST.objectCompare (inOperand.mProperty_mGuardListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mProcedureDeclarationListAST.isValid () && mProperty_mPropertyList.isValid () && mProperty_mSVCListAST.isValid () && mProperty_mGuardListAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mProcedureDeclarationListAST.drop () ;
  mProperty_mPropertyList.drop () ;
  mProperty_mSVCListAST.drop () ;
  mProperty_mGuardListAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @extensionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProcedureDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSVCListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionDeclarationListAST_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mProcedureDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mSVCListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSVCListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @extensionDeclarationListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionDeclarationListAST_2D_element ("extensionDeclarationListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extensionDeclarationListAST_2D_element result ;
  const GALGAS_extensionDeclarationListAST_2D_element * p = (const GALGAS_extensionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::GALGAS_controlRegisterNameList_2D_element (void) :
mProperty_mRegisterName (),
mProperty_mControlRegisterKind (),
mProperty_mAttributeList (),
mProperty_mRegisterAddress (),
mProperty_mRegisterAddressLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::~ GALGAS_controlRegisterNameList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::GALGAS_controlRegisterNameList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_controlRegisterKind & inOperand1,
                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                      const GALGAS_expressionAST & inOperand3,
                                                                                      const GALGAS_location & inOperand4) :
mProperty_mRegisterName (inOperand0),
mProperty_mControlRegisterKind (inOperand1),
mProperty_mAttributeList (inOperand2),
mProperty_mRegisterAddress (inOperand3),
mProperty_mRegisterAddressLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element GALGAS_controlRegisterNameList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_controlRegisterKind & inOperand1,
                                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                                      const GALGAS_expressionAST & inOperand3,
                                                                                                      const GALGAS_location & inOperand4 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterNameList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_controlRegisterNameList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterNameList_2D_element::objectCompare (const GALGAS_controlRegisterNameList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterKind.objectCompare (inOperand.mProperty_mControlRegisterKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeList.objectCompare (inOperand.mProperty_mAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddressLocation.objectCompare (inOperand.mProperty_mRegisterAddressLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterNameList_2D_element::isValid (void) const {
  return mProperty_mRegisterName.isValid () && mProperty_mControlRegisterKind.isValid () && mProperty_mAttributeList.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterAddressLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList_2D_element::drop (void) {
  mProperty_mRegisterName.drop () ;
  mProperty_mControlRegisterKind.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterAddressLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterNameList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddressLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterNameList_2D_element::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind GALGAS_controlRegisterNameList_2D_element::getter_mControlRegisterKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_controlRegisterNameList_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_controlRegisterNameList_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterNameList_2D_element::getter_mRegisterAddressLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterAddressLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @controlRegisterNameList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterNameList_2D_element ("controlRegisterNameList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterNameList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterNameList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterNameList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element GALGAS_controlRegisterNameList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameList_2D_element result ;
  const GALGAS_controlRegisterNameList_2D_element * p = (const GALGAS_controlRegisterNameList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterNameList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::GALGAS_controlRegisterBitSliceList_2D_element (void) :
mProperty_mRegisterBitSlice () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::~ GALGAS_controlRegisterBitSliceList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::GALGAS_controlRegisterBitSliceList_2D_element (const GALGAS_controlRegisterBitSlice & inOperand0) :
mProperty_mRegisterBitSlice (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element GALGAS_controlRegisterBitSliceList_2D_element::constructor_new (const GALGAS_controlRegisterBitSlice & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_controlRegisterBitSliceList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterBitSliceList_2D_element::objectCompare (const GALGAS_controlRegisterBitSliceList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterBitSlice.objectCompare (inOperand.mProperty_mRegisterBitSlice) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterBitSliceList_2D_element::isValid (void) const {
  return mProperty_mRegisterBitSlice.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList_2D_element::drop (void) {
  mProperty_mRegisterBitSlice.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterBitSliceList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterBitSlice.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSliceList_2D_element::getter_mRegisterBitSlice (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSlice ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @controlRegisterBitSliceList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ("controlRegisterBitSliceList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSliceList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterBitSliceList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSliceList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element GALGAS_controlRegisterBitSliceList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList_2D_element result ;
  const GALGAS_controlRegisterBitSliceList_2D_element * p = (const GALGAS_controlRegisterBitSliceList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterBitSliceList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (void) :
mProperty_lkey (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::~ GALGAS_controlRegisterFieldMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterFieldMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                      const GALGAS_uint & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_controlRegisterFieldMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterFieldMap_2D_element::objectCompare (const GALGAS_controlRegisterFieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitIndex.objectCompare (inOperand.mProperty_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterFieldMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterFieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterFieldMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @controlRegisterFieldMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ("controlRegisterFieldMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  const GALGAS_controlRegisterFieldMap_2D_element * p = (const GALGAS_controlRegisterFieldMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAccessOperator (),
mProperty_mAccessRightOperand (),
mProperty_mSubMap (),
mProperty_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element::~ GALGAS_sliceMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                        const GALGAS_bigint & inOperand2,
                                                        const GALGAS_sliceMap & inOperand3,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mAccessOperator (inOperand1),
mProperty_mAccessRightOperand (inOperand2),
mProperty_mSubMap (inOperand3),
mProperty_mResultType (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                                        const GALGAS_bigint & inOperand2,
                                                                        const GALGAS_sliceMap & inOperand3,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand4 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_sliceMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sliceMap_2D_element::objectCompare (const GALGAS_sliceMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessOperator.objectCompare (inOperand.mProperty_mAccessOperator) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessRightOperand.objectCompare (inOperand.mProperty_mAccessRightOperand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubMap.objectCompare (inOperand.mProperty_mSubMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sliceMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mSubMap.isValid () && mProperty_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessOperator.drop () ;
  mProperty_mAccessRightOperand.drop () ;
  mProperty_mSubMap.drop () ;
  mProperty_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @sliceMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessOperator.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessRightOperand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sliceMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_sliceMap_2D_element::getter_mAccessOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_sliceMap_2D_element::getter_mAccessRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_sliceMap_2D_element::getter_mSubMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_sliceMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @sliceMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceMap_2D_element ("sliceMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sliceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sliceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  const GALGAS_sliceMap_2D_element * p = (const GALGAS_sliceMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mIsReadOnly (),
mProperty_mIsAccessibleInUserMode (),
mProperty_mRegisterFieldAccessMap (),
mProperty_mRegisterFieldMap (),
mProperty_mAddress (),
mProperty_mControlRegisterFieldList (),
mProperty_mRegisterBitCount (),
mProperty_mArraySize (),
mProperty_mElementArraySize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::~ GALGAS_controlRegisterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_sliceMap & inOperand4,
                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                            const GALGAS_bigint & inOperand6,
                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                            const GALGAS_uint & inOperand8,
                                                                            const GALGAS_uint & inOperand9,
                                                                            const GALGAS_uint & inOperand10) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mIsAccessibleInUserMode (inOperand3),
mProperty_mRegisterFieldAccessMap (inOperand4),
mProperty_mRegisterFieldMap (inOperand5),
mProperty_mAddress (inOperand6),
mProperty_mControlRegisterFieldList (inOperand7),
mProperty_mRegisterBitCount (inOperand8),
mProperty_mArraySize (inOperand9),
mProperty_mElementArraySize (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_sliceMap::constructor_emptyMap (HERE),
                                               GALGAS_controlRegisterFieldMap::constructor_emptyMap (HERE),
                                               GALGAS_bigint::constructor_zero (HERE),
                                               GALGAS_controlRegisterFieldList::constructor_emptyList (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_sliceMap & inOperand4,
                                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                                            const GALGAS_bigint & inOperand6,
                                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                                            const GALGAS_uint & inOperand8,
                                                                                            const GALGAS_uint & inOperand9,
                                                                                            const GALGAS_uint & inOperand10 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_controlRegisterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterMap_2D_element::objectCompare (const GALGAS_controlRegisterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsReadOnly.objectCompare (inOperand.mProperty_mIsReadOnly) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsAccessibleInUserMode.objectCompare (inOperand.mProperty_mIsAccessibleInUserMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterFieldAccessMap.objectCompare (inOperand.mProperty_mRegisterFieldAccessMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterFieldMap.objectCompare (inOperand.mProperty_mRegisterFieldMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddress.objectCompare (inOperand.mProperty_mAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterFieldList.objectCompare (inOperand.mProperty_mControlRegisterFieldList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterBitCount.objectCompare (inOperand.mProperty_mRegisterBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArraySize.objectCompare (inOperand.mProperty_mArraySize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mElementArraySize.objectCompare (inOperand.mProperty_mElementArraySize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mIsAccessibleInUserMode.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddress.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mIsAccessibleInUserMode.drop () ;
  mProperty_mRegisterFieldAccessMap.drop () ;
  mProperty_mRegisterFieldMap.drop () ;
  mProperty_mAddress.drop () ;
  mProperty_mControlRegisterFieldList.drop () ;
  mProperty_mRegisterBitCount.drop () ;
  mProperty_mArraySize.drop () ;
  mProperty_mElementArraySize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsAccessibleInUserMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterFieldMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterFieldList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArraySize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mElementArraySize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_controlRegisterMap_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mIsReadOnly (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsReadOnly ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mIsAccessibleInUserMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsAccessibleInUserMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldAccessMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterFieldAccessMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_controlRegisterMap_2D_element::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterMap_2D_element::getter_mControlRegisterFieldList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mRegisterBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementArraySize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controlRegisterMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ("controlRegisterMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  const GALGAS_controlRegisterMap_2D_element * p = (const GALGAS_controlRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element::GALGAS_modulePropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mTypeName (),
mProperty_mOptionalExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element::~ GALGAS_modulePropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element::GALGAS_modulePropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand2) :
mProperty_mPropertyName (inOperand0),
mProperty_mTypeName (inOperand1),
mProperty_mOptionalExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element GALGAS_modulePropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_modulePropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_modulePropertyListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_modulePropertyListAST_2D_element::objectCompare (const GALGAS_modulePropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionalExpression.objectCompare (inOperand.mProperty_mOptionalExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_modulePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mTypeName.isValid () && mProperty_mOptionalExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mTypeName.drop () ;
  mProperty_mOptionalExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @modulePropertyListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionalExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modulePropertyListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modulePropertyListAST_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_modulePropertyListAST_2D_element::getter_mOptionalExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @modulePropertyListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_modulePropertyListAST_2D_element ("modulePropertyListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_modulePropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modulePropertyListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_modulePropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_modulePropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element GALGAS_modulePropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_modulePropertyListAST_2D_element result ;
  const GALGAS_modulePropertyListAST_2D_element * p = (const GALGAS_modulePropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_modulePropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("modulePropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element::GALGAS_moduleDeclarationListAST_2D_element (void) :
mProperty_mModule () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element::~ GALGAS_moduleDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element::GALGAS_moduleDeclarationListAST_2D_element (const GALGAS_moduleDeclarationAST & inOperand0) :
mProperty_mModule (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element GALGAS_moduleDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleDeclarationListAST_2D_element (GALGAS_moduleDeclarationAST::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element GALGAS_moduleDeclarationListAST_2D_element::constructor_new (const GALGAS_moduleDeclarationAST & inOperand0 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleDeclarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_moduleDeclarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleDeclarationListAST_2D_element::objectCompare (const GALGAS_moduleDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModule.objectCompare (inOperand.mProperty_mModule) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mModule.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST_2D_element::drop (void) {
  mProperty_mModule.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @moduleDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModule.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST GALGAS_moduleDeclarationListAST_2D_element::getter_mModule (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModule ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @moduleDeclarationListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleDeclarationListAST_2D_element ("moduleDeclarationListAST-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element GALGAS_moduleDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_moduleDeclarationListAST_2D_element result ;
  const GALGAS_moduleDeclarationListAST_2D_element * p = (const GALGAS_moduleDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element::GALGAS_moduleInstanciationArgumentListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element::~ GALGAS_moduleInstanciationArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element::GALGAS_moduleInstanciationArgumentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element GALGAS_moduleInstanciationArgumentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_expressionAST & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_moduleInstanciationArgumentListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleInstanciationArgumentListAST_2D_element::objectCompare (const GALGAS_moduleInstanciationArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleInstanciationArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @moduleInstanciationArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleInstanciationArgumentListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_moduleInstanciationArgumentListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @moduleInstanciationArgumentListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleInstanciationArgumentListAST_2D_element ("moduleInstanciationArgumentListAST-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleInstanciationArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleInstanciationArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleInstanciationArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleInstanciationArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element GALGAS_moduleInstanciationArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentListAST_2D_element result ;
  const GALGAS_moduleInstanciationArgumentListAST_2D_element * p = (const GALGAS_moduleInstanciationArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleInstanciationArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleInstanciationArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element::GALGAS_moduleInstanciationListAST_2D_element (void) :
mProperty_mModuleName (),
mProperty_mModuleInstanciationArgumentList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element::~ GALGAS_moduleInstanciationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element::GALGAS_moduleInstanciationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_moduleInstanciationArgumentListAST & inOperand1) :
mProperty_mModuleName (inOperand0),
mProperty_mModuleInstanciationArgumentList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element GALGAS_moduleInstanciationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleInstanciationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_moduleInstanciationArgumentListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element GALGAS_moduleInstanciationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_moduleInstanciationArgumentListAST & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleInstanciationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_moduleInstanciationListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleInstanciationListAST_2D_element::objectCompare (const GALGAS_moduleInstanciationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModuleName.objectCompare (inOperand.mProperty_mModuleName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModuleInstanciationArgumentList.objectCompare (inOperand.mProperty_mModuleInstanciationArgumentList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleInstanciationListAST_2D_element::isValid (void) const {
  return mProperty_mModuleName.isValid () && mProperty_mModuleInstanciationArgumentList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST_2D_element::drop (void) {
  mProperty_mModuleName.drop () ;
  mProperty_mModuleInstanciationArgumentList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @moduleInstanciationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModuleName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModuleInstanciationArgumentList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleInstanciationListAST_2D_element::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationListAST_2D_element::getter_mModuleInstanciationArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleInstanciationArgumentList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @moduleInstanciationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleInstanciationListAST_2D_element ("moduleInstanciationListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleInstanciationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleInstanciationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleInstanciationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleInstanciationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element GALGAS_moduleInstanciationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationListAST_2D_element result ;
  const GALGAS_moduleInstanciationListAST_2D_element * p = (const GALGAS_moduleInstanciationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleInstanciationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleInstanciationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element::GALGAS_moduleInstanciationArgumentMap_2D_element (void) :
mProperty_lkey (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element::~ GALGAS_moduleInstanciationArgumentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element::GALGAS_moduleInstanciationArgumentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_expressionAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element GALGAS_moduleInstanciationArgumentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_expressionAST & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_moduleInstanciationArgumentMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleInstanciationArgumentMap_2D_element::objectCompare (const GALGAS_moduleInstanciationArgumentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleInstanciationArgumentMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @moduleInstanciationArgumentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleInstanciationArgumentMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_moduleInstanciationArgumentMap_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @moduleInstanciationArgumentMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleInstanciationArgumentMap_2D_element ("moduleInstanciationArgumentMap-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleInstanciationArgumentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleInstanciationArgumentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleInstanciationArgumentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleInstanciationArgumentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element GALGAS_moduleInstanciationArgumentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentMap_2D_element result ;
  const GALGAS_moduleInstanciationArgumentMap_2D_element * p = (const GALGAS_moduleInstanciationArgumentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleInstanciationArgumentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleInstanciationArgumentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element::GALGAS_instanciedModuleMap_2D_element (void) :
mProperty_lkey (),
mProperty_mModuleInstanciationArgumentMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element::~ GALGAS_instanciedModuleMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element::GALGAS_instanciedModuleMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_moduleInstanciationArgumentMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mModuleInstanciationArgumentMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element GALGAS_instanciedModuleMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_instanciedModuleMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_moduleInstanciationArgumentMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element GALGAS_instanciedModuleMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_moduleInstanciationArgumentMap & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciedModuleMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_instanciedModuleMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instanciedModuleMap_2D_element::objectCompare (const GALGAS_instanciedModuleMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModuleInstanciationArgumentMap.objectCompare (inOperand.mProperty_mModuleInstanciationArgumentMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instanciedModuleMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mModuleInstanciationArgumentMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciedModuleMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mModuleInstanciationArgumentMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciedModuleMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @instanciedModuleMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModuleInstanciationArgumentMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_instanciedModuleMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap GALGAS_instanciedModuleMap_2D_element::getter_mModuleInstanciationArgumentMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleInstanciationArgumentMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @instanciedModuleMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanciedModuleMap_2D_element ("instanciedModuleMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instanciedModuleMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedModuleMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instanciedModuleMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedModuleMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element GALGAS_instanciedModuleMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instanciedModuleMap_2D_element result ;
  const GALGAS_instanciedModuleMap_2D_element * p = (const GALGAS_instanciedModuleMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanciedModuleMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedModuleMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element::GALGAS_moduleMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element::~ GALGAS_moduleMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element::GALGAS_moduleMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element GALGAS_moduleMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element GALGAS_moduleMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_moduleMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleMap_2D_element::objectCompare (const GALGAS_moduleMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @moduleMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @moduleMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleMap_2D_element ("moduleMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element GALGAS_moduleMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_moduleMap_2D_element result ;
  const GALGAS_moduleMap_2D_element * p = (const GALGAS_moduleMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element::GALGAS_staticArrayPropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element::~ GALGAS_staticArrayPropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element::GALGAS_staticArrayPropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_staticArrayPropertyTypeAST & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element GALGAS_staticArrayPropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_staticArrayPropertyTypeAST & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticArrayPropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticArrayPropertyListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticArrayPropertyListAST_2D_element::objectCompare (const GALGAS_staticArrayPropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyType.objectCompare (inOperand.mProperty_mPropertyType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticArrayPropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticArrayPropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticArrayPropertyListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @staticArrayPropertyListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticArrayPropertyListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyTypeAST GALGAS_staticArrayPropertyListAST_2D_element::getter_mPropertyType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @staticArrayPropertyListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayPropertyListAST_2D_element ("staticArrayPropertyListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticArrayPropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayPropertyListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticArrayPropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayPropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element GALGAS_staticArrayPropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayPropertyListAST_2D_element result ;
  const GALGAS_staticArrayPropertyListAST_2D_element * p = (const GALGAS_staticArrayPropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayPropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayPropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (void) :
mProperty_lkey (),
mProperty_mStaticlistPropertyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element::~ GALGAS_staticlistMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_propertyList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mStaticlistPropertyList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticlistMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_propertyList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_propertyList & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticlistMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticlistMap_2D_element::objectCompare (const GALGAS_staticlistMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticlistPropertyList.objectCompare (inOperand.mProperty_mStaticlistPropertyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticlistMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStaticlistPropertyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticlistMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mStaticlistPropertyList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticlistMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @staticlistMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticlistPropertyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticlistMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_staticlistMap_2D_element::getter_mStaticlistPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticlistPropertyList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @staticlistMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticlistMap_2D_element ("staticlistMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticlistMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticlistMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element result ;
  const GALGAS_staticlistMap_2D_element * p = (const GALGAS_staticlistMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticlistMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element::GALGAS_extendStaticArrayExpressionListAST_2D_element (void) :
mProperty_mExpression (),
mProperty_mEndOfExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element::~ GALGAS_extendStaticArrayExpressionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element::GALGAS_extendStaticArrayExpressionListAST_2D_element (const GALGAS_extendStaticArrayExpressionAST & inOperand0,
                                                                                                            const GALGAS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mEndOfExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element GALGAS_extendStaticArrayExpressionListAST_2D_element::constructor_new (const GALGAS_extendStaticArrayExpressionAST & inOperand0,
                                                                                                                            const GALGAS_location & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extendStaticArrayExpressionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extendStaticArrayExpressionListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extendStaticArrayExpressionListAST_2D_element::objectCompare (const GALGAS_extendStaticArrayExpressionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfExpression.objectCompare (inOperand.mProperty_mEndOfExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extendStaticArrayExpressionListAST_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mEndOfExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticArrayExpressionListAST_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mEndOfExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticArrayExpressionListAST_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @extendStaticArrayExpressionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionAST GALGAS_extendStaticArrayExpressionListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_extendStaticArrayExpressionListAST_2D_element::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @extendStaticArrayExpressionListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticArrayExpressionListAST_2D_element ("extendStaticArrayExpressionListAST-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extendStaticArrayExpressionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayExpressionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extendStaticArrayExpressionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticArrayExpressionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element GALGAS_extendStaticArrayExpressionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayExpressionListAST_2D_element result ;
  const GALGAS_extendStaticArrayExpressionListAST_2D_element * p = (const GALGAS_extendStaticArrayExpressionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticArrayExpressionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayExpressionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element::GALGAS_staticArrayMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInvokedFunctionSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element::~ GALGAS_staticArrayMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element::GALGAS_staticArrayMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_stringset & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInvokedFunctionSet (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element GALGAS_staticArrayMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticArrayMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element GALGAS_staticArrayMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_stringset & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticArrayMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticArrayMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticArrayMap_2D_element::objectCompare (const GALGAS_staticArrayMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInvokedFunctionSet.objectCompare (inOperand.mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticArrayMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInvokedFunctionSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticArrayMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInvokedFunctionSet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticArrayMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @staticArrayMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticArrayMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_staticArrayMap_2D_element::getter_mInvokedFunctionSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvokedFunctionSet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @staticArrayMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayMap_2D_element ("staticArrayMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticArrayMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticArrayMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element GALGAS_staticArrayMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayMap_2D_element result ;
  const GALGAS_staticArrayMap_2D_element * p = (const GALGAS_staticArrayMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::GALGAS_taskList_2D_element (void) :
mProperty_mTaskName (),
mProperty_mPriority (),
mProperty_mStackSize (),
mProperty_mVarList (),
mProperty_mTaskProcList (),
mProperty_mTaskInitListAST (),
mProperty_mGuardedCommandList (),
mProperty_mEndOfTaskDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::~ GALGAS_taskList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::GALGAS_taskList_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lbigint & inOperand1,
                                                        const GALGAS_lbigint & inOperand2,
                                                        const GALGAS_taskVarListAST & inOperand3,
                                                        const GALGAS_functionDeclarationListAST & inOperand4,
                                                        const GALGAS_taskInitListAST & inOperand5,
                                                        const GALGAS_syncInstructionBranchList & inOperand6,
                                                        const GALGAS_location & inOperand7) :
mProperty_mTaskName (inOperand0),
mProperty_mPriority (inOperand1),
mProperty_mStackSize (inOperand2),
mProperty_mVarList (inOperand3),
mProperty_mTaskProcList (inOperand4),
mProperty_mTaskInitListAST (inOperand5),
mProperty_mGuardedCommandList (inOperand6),
mProperty_mEndOfTaskDeclaration (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_taskVarListAST::constructor_emptyList (HERE),
                                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                     GALGAS_taskInitListAST::constructor_emptyList (HERE),
                                     GALGAS_syncInstructionBranchList::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lbigint & inOperand1,
                                                                        const GALGAS_lbigint & inOperand2,
                                                                        const GALGAS_taskVarListAST & inOperand3,
                                                                        const GALGAS_functionDeclarationListAST & inOperand4,
                                                                        const GALGAS_taskInitListAST & inOperand5,
                                                                        const GALGAS_syncInstructionBranchList & inOperand6,
                                                                        const GALGAS_location & inOperand7 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_taskList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskList_2D_element::objectCompare (const GALGAS_taskList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskName.objectCompare (inOperand.mProperty_mTaskName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriority.objectCompare (inOperand.mProperty_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStackSize.objectCompare (inOperand.mProperty_mStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mVarList.objectCompare (inOperand.mProperty_mVarList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskProcList.objectCompare (inOperand.mProperty_mTaskProcList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskInitListAST.objectCompare (inOperand.mProperty_mTaskInitListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardedCommandList.objectCompare (inOperand.mProperty_mGuardedCommandList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfTaskDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskList_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mVarList.isValid () && mProperty_mTaskProcList.isValid () && mProperty_mTaskInitListAST.isValid () && mProperty_mGuardedCommandList.isValid () && mProperty_mEndOfTaskDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList_2D_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mVarList.drop () ;
  mProperty_mTaskProcList.drop () ;
  mProperty_mTaskInitListAST.drop () ;
  mProperty_mGuardedCommandList.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @taskList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mVarList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskInitListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardedCommandList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskList_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskList_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST GALGAS_taskList_2D_element::getter_mVarList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_taskList_2D_element::getter_mTaskProcList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskList_2D_element::getter_mTaskInitListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskInitListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_taskList_2D_element::getter_mGuardedCommandList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardedCommandList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskList_2D_element::getter_mEndOfTaskDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTaskDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskList_2D_element ("taskList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskList_2D_element result ;
  const GALGAS_taskList_2D_element * p = (const GALGAS_taskList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element::GALGAS_taskInitListAST_2D_element (void) :
mProperty_mTaskInitPriority (),
mProperty_mTaskInitInstructionList (),
mProperty_mEndOfTaskInitDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element::~ GALGAS_taskInitListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element::GALGAS_taskInitListAST_2D_element (const GALGAS_lbigint & inOperand0,
                                                                      const GALGAS_instructionListAST & inOperand1,
                                                                      const GALGAS_location & inOperand2) :
mProperty_mTaskInitPriority (inOperand0),
mProperty_mTaskInitInstructionList (inOperand1),
mProperty_mEndOfTaskInitDeclaration (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element GALGAS_taskInitListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskInitListAST_2D_element (GALGAS_lbigint::constructor_default (HERE),
                                            GALGAS_instructionListAST::constructor_emptyList (HERE),
                                            GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element GALGAS_taskInitListAST_2D_element::constructor_new (const GALGAS_lbigint & inOperand0,
                                                                                      const GALGAS_instructionListAST & inOperand1,
                                                                                      const GALGAS_location & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskInitListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskInitListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskInitListAST_2D_element::objectCompare (const GALGAS_taskInitListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskInitPriority.objectCompare (inOperand.mProperty_mTaskInitPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskInitInstructionList.objectCompare (inOperand.mProperty_mTaskInitInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfTaskInitDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskInitDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskInitListAST_2D_element::isValid (void) const {
  return mProperty_mTaskInitPriority.isValid () && mProperty_mTaskInitInstructionList.isValid () && mProperty_mEndOfTaskInitDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST_2D_element::drop (void) {
  mProperty_mTaskInitPriority.drop () ;
  mProperty_mTaskInitInstructionList.drop () ;
  mProperty_mEndOfTaskInitDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @taskInitListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskInitPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskInitInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfTaskInitDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskInitListAST_2D_element::getter_mTaskInitPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskInitPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskInitListAST_2D_element::getter_mTaskInitInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskInitInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskInitListAST_2D_element::getter_mEndOfTaskInitDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTaskInitDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @taskInitListAST-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskInitListAST_2D_element ("taskInitListAST-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskInitListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskInitListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskInitListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskInitListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element GALGAS_taskInitListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_taskInitListAST_2D_element result ;
  const GALGAS_taskInitListAST_2D_element * p = (const GALGAS_taskInitListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskInitListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskInitListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::GALGAS_taskProcedureMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::~ GALGAS_taskProcedureMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::GALGAS_taskProcedureMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element GALGAS_taskProcedureMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskProcedureMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element GALGAS_taskProcedureMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskProcedureMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_taskProcedureMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskProcedureMap_2D_element::objectCompare (const GALGAS_taskProcedureMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskProcedureMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @taskProcedureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskProcedureMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @taskProcedureMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskProcedureMap_2D_element ("taskProcedureMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskProcedureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskProcedureMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskProcedureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskProcedureMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element GALGAS_taskProcedureMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskProcedureMap_2D_element result ;
  const GALGAS_taskProcedureMap_2D_element * p = (const GALGAS_taskProcedureMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskProcedureMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskProcedureMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTaskProcedureMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::~ GALGAS_taskMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_taskProcedureMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTaskProcedureMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                    GALGAS_taskProcedureMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_taskProcedureMap & inOperand1 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_taskMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskMap_2D_element::objectCompare (const GALGAS_taskMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskProcedureMap.objectCompare (inOperand.mProperty_mTaskProcedureMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskProcedureMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskProcedureMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @taskMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskProcedureMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskMap_2D_element::getter_mTaskProcedureMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskProcedureMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @taskMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMap_2D_element ("taskMap-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  const GALGAS_taskMap_2D_element * p = (const GALGAS_taskMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element::~ GALGAS_panicRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_panicRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_panicRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_panicRoutinePriorityMap_2D_element::objectCompare (const GALGAS_panicRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_panicRoutinePriorityMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @panicRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_panicRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @panicRoutinePriorityMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ("panicRoutinePriorityMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  const GALGAS_panicRoutinePriorityMap_2D_element * p = (const GALGAS_panicRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element::GALGAS_systemRoutineDeclarationListAST_2D_element (void) :
mProperty_mName (),
mProperty_mRoutineKind (),
mProperty_mPublic (),
mProperty_mAttributeList (),
mProperty_mFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionListLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element::~ GALGAS_systemRoutineDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element::GALGAS_systemRoutineDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_routineKind & inOperand1,
                                                                                                      const GALGAS_bool & inOperand2,
                                                                                                      const GALGAS_lstringlist & inOperand3,
                                                                                                      const GALGAS_routineFormalArgumentList & inOperand4,
                                                                                                      const GALGAS_lstring & inOperand5,
                                                                                                      const GALGAS_instructionListAST & inOperand6,
                                                                                                      const GALGAS_location & inOperand7) :
mProperty_mName (inOperand0),
mProperty_mRoutineKind (inOperand1),
mProperty_mPublic (inOperand2),
mProperty_mAttributeList (inOperand3),
mProperty_mFormalArgumentList (inOperand4),
mProperty_mReturnTypeName (inOperand5),
mProperty_mInstructionList (inOperand6),
mProperty_mEndOfInstructionListLocation (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element GALGAS_systemRoutineDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_routineKind & inOperand1,
                                                                                                                      const GALGAS_bool & inOperand2,
                                                                                                                      const GALGAS_lstringlist & inOperand3,
                                                                                                                      const GALGAS_routineFormalArgumentList & inOperand4,
                                                                                                                      const GALGAS_lstring & inOperand5,
                                                                                                                      const GALGAS_instructionListAST & inOperand6,
                                                                                                                      const GALGAS_location & inOperand7 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_systemRoutineDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_systemRoutineDeclarationListAST_2D_element::objectCompare (const GALGAS_systemRoutineDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineKind.objectCompare (inOperand.mProperty_mRoutineKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPublic.objectCompare (inOperand.mProperty_mPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeList.objectCompare (inOperand.mProperty_mAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentList.objectCompare (inOperand.mProperty_mFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnTypeName.objectCompare (inOperand.mProperty_mReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInstructionListLocation.objectCompare (inOperand.mProperty_mEndOfInstructionListLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_systemRoutineDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mRoutineKind.isValid () && mProperty_mPublic.isValid () && mProperty_mAttributeList.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mReturnTypeName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionListLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mRoutineKind.drop () ;
  mProperty_mPublic.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mReturnTypeName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionListLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @systemRoutineDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInstructionListLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mRoutineKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mEndOfInstructionListLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfInstructionListLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @systemRoutineDeclarationListAST-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST_2D_element ("systemRoutineDeclarationListAST-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_systemRoutineDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_systemRoutineDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_systemRoutineDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element GALGAS_systemRoutineDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationListAST_2D_element result ;
  const GALGAS_systemRoutineDeclarationListAST_2D_element * p = (const GALGAS_systemRoutineDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_systemRoutineDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemRoutineDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::~ GALGAS_bootRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootRoutinePriorityMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @bootRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bootRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
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

GALGAS_initRoutineMap_2D_element::GALGAS_initRoutineMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::~ GALGAS_initRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::GALGAS_initRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @initRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
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
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::~ GALGAS_initRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::GALGAS_initRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutinePriorityMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @initRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
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

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (void) :
mProperty_mMode (),
mProperty_mPublicFunction (),
mProperty_mFunctionName (),
mProperty_mFunctionAttributeList (),
mProperty_mFunctionFormalArgumentList (),
mProperty_mFunctionReturnTypeName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::~ GALGAS_functionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (const GALGAS_mode & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_lstringlist & inOperand3,
                                                                                            const GALGAS_routineFormalArgumentList & inOperand4,
                                                                                            const GALGAS_lstring & inOperand5,
                                                                                            const GALGAS_instructionListAST & inOperand6,
                                                                                            const GALGAS_location & inOperand7) :
mProperty_mMode (inOperand0),
mProperty_mPublicFunction (inOperand1),
mProperty_mFunctionName (inOperand2),
mProperty_mFunctionAttributeList (inOperand3),
mProperty_mFunctionFormalArgumentList (inOperand4),
mProperty_mFunctionReturnTypeName (inOperand5),
mProperty_mFunctionInstructionList (inOperand6),
mProperty_mEndOfFunctionDeclaration (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_new (const GALGAS_mode & inOperand0,
                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                            const GALGAS_lstring & inOperand2,
                                                                                                            const GALGAS_lstringlist & inOperand3,
                                                                                                            const GALGAS_routineFormalArgumentList & inOperand4,
                                                                                                            const GALGAS_lstring & inOperand5,
                                                                                                            const GALGAS_instructionListAST & inOperand6,
                                                                                                            const GALGAS_location & inOperand7 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_functionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionDeclarationListAST_2D_element::objectCompare (const GALGAS_functionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPublicFunction.objectCompare (inOperand.mProperty_mPublicFunction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionAttributeList.objectCompare (inOperand.mProperty_mFunctionAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionFormalArgumentList.objectCompare (inOperand.mProperty_mFunctionFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionReturnTypeName.objectCompare (inOperand.mProperty_mFunctionReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionInstructionList.objectCompare (inOperand.mProperty_mFunctionInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfFunctionDeclaration.objectCompare (inOperand.mProperty_mEndOfFunctionDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mMode.isValid () && mProperty_mPublicFunction.isValid () && mProperty_mFunctionName.isValid () && mProperty_mFunctionAttributeList.isValid () && mProperty_mFunctionFormalArgumentList.isValid () && mProperty_mFunctionReturnTypeName.isValid () && mProperty_mFunctionInstructionList.isValid () && mProperty_mEndOfFunctionDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::drop (void) {
  mProperty_mMode.drop () ;
  mProperty_mPublicFunction.drop () ;
  mProperty_mFunctionName.drop () ;
  mProperty_mFunctionAttributeList.drop () ;
  mProperty_mFunctionFormalArgumentList.drop () ;
  mProperty_mFunctionReturnTypeName.drop () ;
  mProperty_mFunctionInstructionList.drop () ;
  mProperty_mEndOfFunctionDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @functionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPublicFunction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfFunctionDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_functionDeclarationListAST_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionDeclarationListAST_2D_element::getter_mPublicFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPublicFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_functionDeclarationListAST_2D_element::getter_mEndOfFunctionDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfFunctionDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @functionDeclarationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ("functionDeclarationListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  const GALGAS_functionDeclarationListAST_2D_element * p = (const GALGAS_functionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element::GALGAS_routineFormalArgumentList_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element::~ GALGAS_routineFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element::GALGAS_routineFormalArgumentList_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_lstring & inOperand2,
                                                                                          const GALGAS_lstring & inOperand3) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element GALGAS_routineFormalArgumentList_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                          const GALGAS_lstring & inOperand3 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_routineFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineFormalArgumentList_2D_element::objectCompare (const GALGAS_routineFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentTypeName.objectCompare (inOperand.mProperty_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineFormalArgumentList_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentList_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @routineFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentList_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineFormalArgumentList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineFormalArgumentList_2D_element::getter_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineFormalArgumentList_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @routineFormalArgumentList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentList_2D_element ("routineFormalArgumentList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element GALGAS_routineFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentList_2D_element result ;
  const GALGAS_routineFormalArgumentList_2D_element * p = (const GALGAS_routineFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (void) :
mProperty_mName (),
mProperty_mExecutionMode (),
mProperty_mIsExported (),
mProperty_mFormalArgumentList (),
mProperty_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::~ GALGAS_requiredProcedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_mode & inOperand1,
                                                                                                              const GALGAS_bool & inOperand2,
                                                                                                              const GALGAS_routineFormalArgumentList & inOperand3,
                                                                                                              const GALGAS_location & inOperand4) :
mProperty_mName (inOperand0),
mProperty_mExecutionMode (inOperand1),
mProperty_mIsExported (inOperand2),
mProperty_mFormalArgumentList (inOperand3),
mProperty_mEndOfProcLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_mode & inOperand1,
                                                                                                                              const GALGAS_bool & inOperand2,
                                                                                                                              const GALGAS_routineFormalArgumentList & inOperand3,
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
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExecutionMode.objectCompare (inOperand.mProperty_mExecutionMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsExported.objectCompare (inOperand.mProperty_mIsExported) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentList.objectCompare (inOperand.mProperty_mFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfProcLocation.objectCompare (inOperand.mProperty_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_requiredProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mExecutionMode.isValid () && mProperty_mIsExported.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mExecutionMode.drop () ;
  mProperty_mIsExported.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @requiredProcedureDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExecutionMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsExported.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mExecutionMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExecutionMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mIsExported (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsExported ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfProcLocation ;
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

GALGAS_isrDeclarationListAST_2D_element::GALGAS_isrDeclarationListAST_2D_element (void) :
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mModuleName (),
mProperty_mISRInstructionList (),
mProperty_mEndOfISRDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element::~ GALGAS_isrDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element::GALGAS_isrDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_mode & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_instructionListAST & inOperand3,
                                                                                  const GALGAS_location & inOperand4) :
mProperty_mISRName (inOperand0),
mProperty_mMode (inOperand1),
mProperty_mModuleName (inOperand2),
mProperty_mISRInstructionList (inOperand3),
mProperty_mEndOfISRDeclaration (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element GALGAS_isrDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_mode & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_instructionListAST & inOperand3,
                                                                                                  const GALGAS_location & inOperand4 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_isrDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_isrDeclarationListAST_2D_element::objectCompare (const GALGAS_isrDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mISRName.objectCompare (inOperand.mProperty_mISRName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModuleName.objectCompare (inOperand.mProperty_mModuleName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mISRInstructionList.objectCompare (inOperand.mProperty_mISRInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfISRDeclaration.objectCompare (inOperand.mProperty_mEndOfISRDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_isrDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mISRName.isValid () && mProperty_mMode.isValid () && mProperty_mModuleName.isValid () && mProperty_mISRInstructionList.isValid () && mProperty_mEndOfISRDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST_2D_element::drop (void) {
  mProperty_mISRName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mModuleName.drop () ;
  mProperty_mISRInstructionList.drop () ;
  mProperty_mEndOfISRDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @isrDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mISRName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModuleName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mISRInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfISRDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST_2D_element::getter_mISRName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mISRName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_isrDeclarationListAST_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST_2D_element::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_isrDeclarationListAST_2D_element::getter_mISRInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mISRInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_isrDeclarationListAST_2D_element::getter_mEndOfISRDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfISRDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @isrDeclarationListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_isrDeclarationListAST_2D_element ("isrDeclarationListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_isrDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_isrDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_isrDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element GALGAS_isrDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST_2D_element result ;
  const GALGAS_isrDeclarationListAST_2D_element * p = (const GALGAS_isrDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_isrDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::~ GALGAS_functionCallEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
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
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionCallEffectiveParameterList_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @functionCallEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallEffectiveParameterList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
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

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (void) :
mProperty_mFieldName (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element::~ GALGAS_registerIntegerFieldListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_expressionAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2) :
mProperty_mFieldName (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_expressionAST & inOperand1,
                                                                                                              const GALGAS_location & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerIntegerFieldListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerIntegerFieldListAST_2D_element::objectCompare (const GALGAS_registerIntegerFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFieldName.objectCompare (inOperand.mProperty_mFieldName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpressionLocation.objectCompare (inOperand.mProperty_mExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerIntegerFieldListAST_2D_element::isValid (void) const {
  return mProperty_mFieldName.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST_2D_element::drop (void) {
  mProperty_mFieldName.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @registerIntegerFieldListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFieldName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerFieldListAST_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_registerIntegerFieldListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerFieldListAST_2D_element::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @registerIntegerFieldListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ("registerIntegerFieldListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  const GALGAS_registerIntegerFieldListAST_2D_element * p = (const GALGAS_registerIntegerFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (void) :
mProperty_mEffectiveParameterKind (),
mProperty_mSelector () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element::~ GALGAS_effectiveArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1) :
mProperty_mEffectiveParameterKind (inOperand0),
mProperty_mSelector (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::constructor_new (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_effectiveArgumentListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_effectiveArgumentListAST_2D_element::objectCompare (const GALGAS_effectiveArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEffectiveParameterKind.objectCompare (inOperand.mProperty_mEffectiveParameterKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_effectiveArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterKind.isValid () && mProperty_mSelector.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST_2D_element::drop (void) {
  mProperty_mEffectiveParameterKind.drop () ;
  mProperty_mSelector.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @effectiveArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEffectiveParameterKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentListAST_2D_element::getter_mEffectiveParameterKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_effectiveArgumentListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @effectiveArgumentListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ("effectiveArgumentListAST-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_effectiveArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_effectiveArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  const GALGAS_effectiveArgumentListAST_2D_element * p = (const GALGAS_effectiveArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_effectiveArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element::GALGAS_primaryInExpressionAccessListAST_2D_element (void) :
mProperty_mAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element::~ GALGAS_primaryInExpressionAccessListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element::GALGAS_primaryInExpressionAccessListAST_2D_element (const GALGAS_primaryInExpressionAccessAST & inOperand0) :
mProperty_mAccess (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element GALGAS_primaryInExpressionAccessListAST_2D_element::constructor_new (const GALGAS_primaryInExpressionAccessAST & inOperand0 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_primaryInExpressionAccessListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_primaryInExpressionAccessListAST_2D_element::objectCompare (const GALGAS_primaryInExpressionAccessListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_primaryInExpressionAccessListAST_2D_element::isValid (void) const {
  return mProperty_mAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST_2D_element::drop (void) {
  mProperty_mAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @primaryInExpressionAccessListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessListAST_2D_element::getter_mAccess (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @primaryInExpressionAccessListAST-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ("primaryInExpressionAccessListAST-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primaryInExpressionAccessListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element GALGAS_primaryInExpressionAccessListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST_2D_element result ;
  const GALGAS_primaryInExpressionAccessListAST_2D_element * p = (const GALGAS_primaryInExpressionAccessListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primaryInExpressionAccessListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element::GALGAS_syncInstructionBranchList_2D_element (void) :
mProperty_mGuardedCommand (),
mProperty_mInstructionList (),
mProperty_mEndOfBranch () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element::~ GALGAS_syncInstructionBranchList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element::GALGAS_syncInstructionBranchList_2D_element (const GALGAS_guardedCommand & inOperand0,
                                                                                          const GALGAS_instructionListAST & inOperand1,
                                                                                          const GALGAS_location & inOperand2) :
mProperty_mGuardedCommand (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfBranch (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element GALGAS_syncInstructionBranchList_2D_element::constructor_new (const GALGAS_guardedCommand & inOperand0,
                                                                                                          const GALGAS_instructionListAST & inOperand1,
                                                                                                          const GALGAS_location & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_syncInstructionBranchList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syncInstructionBranchList_2D_element::objectCompare (const GALGAS_syncInstructionBranchList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGuardedCommand.objectCompare (inOperand.mProperty_mGuardedCommand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfBranch.objectCompare (inOperand.mProperty_mEndOfBranch) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syncInstructionBranchList_2D_element::isValid (void) const {
  return mProperty_mGuardedCommand.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList_2D_element::drop (void) {
  mProperty_mGuardedCommand.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @syncInstructionBranchList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGuardedCommand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand GALGAS_syncInstructionBranchList_2D_element::getter_mGuardedCommand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_syncInstructionBranchList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionBranchList_2D_element::getter_mEndOfBranch (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfBranch ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @syncInstructionBranchList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchList_2D_element ("syncInstructionBranchList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element GALGAS_syncInstructionBranchList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchList_2D_element result ;
  const GALGAS_syncInstructionBranchList_2D_element * p = (const GALGAS_syncInstructionBranchList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element::GALGAS_syncInstructionBranchListIR_2D_element (void) :
mProperty_mGuardedCommand (),
mProperty_mInstructionGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element::~ GALGAS_syncInstructionBranchListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element::GALGAS_syncInstructionBranchListIR_2D_element (const GALGAS_guardedCommandIR & inOperand0,
                                                                                              const GALGAS_instructionListIR & inOperand1) :
mProperty_mGuardedCommand (inOperand0),
mProperty_mInstructionGenerationList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element GALGAS_syncInstructionBranchListIR_2D_element::constructor_new (const GALGAS_guardedCommandIR & inOperand0,
                                                                                                              const GALGAS_instructionListIR & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syncInstructionBranchListIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syncInstructionBranchListIR_2D_element::objectCompare (const GALGAS_syncInstructionBranchListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGuardedCommand.objectCompare (inOperand.mProperty_mGuardedCommand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionGenerationList.objectCompare (inOperand.mProperty_mInstructionGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syncInstructionBranchListIR_2D_element::isValid (void) const {
  return mProperty_mGuardedCommand.isValid () && mProperty_mInstructionGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR_2D_element::drop (void) {
  mProperty_mGuardedCommand.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @syncInstructionBranchListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGuardedCommand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR GALGAS_syncInstructionBranchListIR_2D_element::getter_mGuardedCommand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_syncInstructionBranchListIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @syncInstructionBranchListIR-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2D_element ("syncInstructionBranchListIR-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element GALGAS_syncInstructionBranchListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR_2D_element result ;
  const GALGAS_syncInstructionBranchListIR_2D_element * p = (const GALGAS_syncInstructionBranchListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (void) :
mProperty_mEffectiveParameterPassingMode (),
mProperty_mSelector (),
mProperty_mParameterType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::~ GALGAS_procEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mParameterType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::constructor_new (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
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
    result = mProperty_mEffectiveParameterPassingMode.objectCompare (inOperand.mProperty_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterType.objectCompare (inOperand.mProperty_mParameterType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procEffectiveParameterList_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mParameterType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::drop (void) {
  mProperty_mEffectiveParameterPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mParameterType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @procEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameterType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_procEffectiveParameterList_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procEffectiveParameterList_2D_element::getter_mParameterType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterType ;
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

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (void) :
mProperty_mEffectiveParameterPassingMode (),
mProperty_mParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::~ GALGAS_procCallEffectiveParameterListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                        const GALGAS_objectIR & inOperand1) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mParameter (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                                        const GALGAS_objectIR & inOperand1 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_procCallEffectiveParameterListIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procCallEffectiveParameterListIR_2D_element::objectCompare (const GALGAS_procCallEffectiveParameterListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEffectiveParameterPassingMode.objectCompare (inOperand.mProperty_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameter.objectCompare (inOperand.mProperty_mParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procCallEffectiveParameterListIR_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterPassingMode.isValid () && mProperty_mParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::drop (void) {
  mProperty_mEffectiveParameterPassingMode.drop () ;
  mProperty_mParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @procCallEffectiveParameterListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mParameter (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameter ;
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

GALGAS_accessInAssignmentListAST_2D_element::GALGAS_accessInAssignmentListAST_2D_element (void) :
mProperty_mAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element::~ GALGAS_accessInAssignmentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element::GALGAS_accessInAssignmentListAST_2D_element (const GALGAS_accessInAssignmentAST & inOperand0) :
mProperty_mAccess (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element GALGAS_accessInAssignmentListAST_2D_element::constructor_new (const GALGAS_accessInAssignmentAST & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_accessInAssignmentListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessInAssignmentListAST_2D_element::objectCompare (const GALGAS_accessInAssignmentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_accessInAssignmentListAST_2D_element::isValid (void) const {
  return mProperty_mAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST_2D_element::drop (void) {
  mProperty_mAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @accessInAssignmentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentListAST_2D_element::getter_mAccess (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @accessInAssignmentListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentListAST_2D_element ("accessInAssignmentListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessInAssignmentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element GALGAS_accessInAssignmentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST_2D_element result ;
  const GALGAS_accessInAssignmentListAST_2D_element * p = (const GALGAS_accessInAssignmentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessInAssignmentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element::~ GALGAS_routineTypedSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element GALGAS_routineTypedSignature_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineTypedSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineTypedSignature_2D_element::objectCompare (const GALGAS_routineTypedSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineTypedSignature_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @routineTypedSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineTypedSignature_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineTypedSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineTypedSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @routineTypedSignature-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ("routineTypedSignature-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineTypedSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineTypedSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element GALGAS_routineTypedSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature_2D_element result ;
  const GALGAS_routineTypedSignature_2D_element * p = (const GALGAS_routineTypedSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineTypedSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element::GALGAS_routineArgumentSignatureMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineLLVMName (),
mProperty_mDescriptor () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element::~ GALGAS_routineArgumentSignatureMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element::GALGAS_routineArgumentSignatureMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_routineDescriptor & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRoutineLLVMName (inOperand1),
mProperty_mDescriptor (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element GALGAS_routineArgumentSignatureMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                                  const GALGAS_routineDescriptor & inOperand2 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineArgumentSignatureMapForContext_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineArgumentSignatureMapForContext_2D_element::objectCompare (const GALGAS_routineArgumentSignatureMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineLLVMName.objectCompare (inOperand.mProperty_mRoutineLLVMName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDescriptor.objectCompare (inOperand.mProperty_mDescriptor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineArgumentSignatureMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineLLVMName.isValid () && mProperty_mDescriptor.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineArgumentSignatureMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineLLVMName.drop () ;
  mProperty_mDescriptor.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineArgumentSignatureMapForContext_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @routineArgumentSignatureMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineLLVMName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDescriptor.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineArgumentSignatureMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineArgumentSignatureMapForContext_2D_element::getter_mRoutineLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineArgumentSignatureMapForContext_2D_element::getter_mDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDescriptor ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @routineArgumentSignatureMapForContext-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext_2D_element ("routineArgumentSignatureMapForContext-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineArgumentSignatureMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineArgumentSignatureMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineArgumentSignatureMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element GALGAS_routineArgumentSignatureMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext_2D_element result ;
  const GALGAS_routineArgumentSignatureMapForContext_2D_element * p = (const GALGAS_routineArgumentSignatureMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineArgumentSignatureMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentSignatureMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element::GALGAS_internalRoutineMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineArgumentSignatureMapForContext () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element::~ GALGAS_internalRoutineMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element::GALGAS_internalRoutineMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_routineArgumentSignatureMapForContext & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineArgumentSignatureMapForContext (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element GALGAS_internalRoutineMapForContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_internalRoutineMapForContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_routineArgumentSignatureMapForContext::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element GALGAS_internalRoutineMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_routineArgumentSignatureMapForContext & inOperand1 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_internalRoutineMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_internalRoutineMapForContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_internalRoutineMapForContext_2D_element::objectCompare (const GALGAS_internalRoutineMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineArgumentSignatureMapForContext.objectCompare (inOperand.mProperty_mRoutineArgumentSignatureMapForContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_internalRoutineMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineArgumentSignatureMapForContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRoutineMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineArgumentSignatureMapForContext.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRoutineMapForContext_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @internalRoutineMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineArgumentSignatureMapForContext.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_internalRoutineMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext GALGAS_internalRoutineMapForContext_2D_element::getter_mRoutineArgumentSignatureMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineArgumentSignatureMapForContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @internalRoutineMapForContext-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_internalRoutineMapForContext_2D_element ("internalRoutineMapForContext-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_internalRoutineMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRoutineMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_internalRoutineMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_internalRoutineMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element GALGAS_internalRoutineMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_internalRoutineMapForContext_2D_element result ;
  const GALGAS_internalRoutineMapForContext_2D_element * p = (const GALGAS_internalRoutineMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_internalRoutineMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRoutineMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mSignature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element::~ GALGAS_guardMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_routineTypedSignature & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mSignature (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guardMapForContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_routineTypedSignature::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_routineTypedSignature & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guardMapForContext_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardMapForContext_2D_element::objectCompare (const GALGAS_guardMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guardMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mSignature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @guardMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guardMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardMapForContext_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_guardMapForContext_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @guardMapForContext-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapForContext_2D_element ("guardMapForContext-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  const GALGAS_guardMapForContext_2D_element * p = (const GALGAS_guardMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mObjectState (),
mProperty_mObjectShouldBeValuedAtEndOfScope (),
mProperty_mPossibleValuedObject (),
mProperty_mRoutineSignatureMapForContext () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::~ GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                        const GALGAS_valuedObjectState & inOperand1,
                                                                                                                                        const GALGAS_bool & inOperand2,
                                                                                                                                        const GALGAS_possibleValuedObject & inOperand3,
                                                                                                                                        const GALGAS_routineSignatureMapForContext & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mObjectState (inOperand1),
mProperty_mObjectShouldBeValuedAtEndOfScope (inOperand2),
mProperty_mPossibleValuedObject (inOperand3),
mProperty_mRoutineSignatureMapForContext (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                        const GALGAS_valuedObjectState & inOperand1,
                                                                                                                                                        const GALGAS_bool & inOperand2,
                                                                                                                                                        const GALGAS_possibleValuedObject & inOperand3,
                                                                                                                                                        const GALGAS_routineSignatureMapForContext & inOperand4 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::objectCompare (const GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObjectState.objectCompare (inOperand.mProperty_mObjectState) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObjectShouldBeValuedAtEndOfScope.objectCompare (inOperand.mProperty_mObjectShouldBeValuedAtEndOfScope) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPossibleValuedObject.objectCompare (inOperand.mProperty_mPossibleValuedObject) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineSignatureMapForContext.objectCompare (inOperand.mProperty_mRoutineSignatureMapForContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mPossibleValuedObject.isValid () && mProperty_mRoutineSignatureMapForContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObjectState.drop () ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.drop () ;
  mProperty_mPossibleValuedObject.drop () ;
  mProperty_mRoutineSignatureMapForContext.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @internalUniversalPropertyAndRoutineMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectState.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPossibleValuedObject.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineSignatureMapForContext.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_mObjectState (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_mObjectShouldBeValuedAtEndOfScope (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_mPossibleValuedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPossibleValuedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_mRoutineSignatureMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineSignatureMapForContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @internalUniversalPropertyAndRoutineMapForContext-element type                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element ("internalUniversalPropertyAndRoutineMapForContext-element",
                                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element result ;
  const GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element * p = (const GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalUniversalPropertyAndRoutineMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mState () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element::~ GALGAS_referenceStateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_valuedObjectState & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mState (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_valuedObjectState & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_referenceStateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_referenceStateMap_2D_element::objectCompare (const GALGAS_referenceStateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mState.objectCompare (inOperand.mProperty_mState) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_referenceStateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mState.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @referenceStateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mState.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_referenceStateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_referenceStateMap_2D_element::getter_mState (UNUSED_LOCATION_ARGS) const {
  return mProperty_mState ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @referenceStateMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_referenceStateMap_2D_element ("referenceStateMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_referenceStateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_referenceStateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  const GALGAS_referenceStateMap_2D_element * p = (const GALGAS_referenceStateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_referenceStateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element::GALGAS_routineSignatureMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mLLVMInvocationRoutineName (),
mProperty_mDescriptor () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element::~ GALGAS_routineSignatureMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element::GALGAS_routineSignatureMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_routineDescriptor & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mLLVMInvocationRoutineName (inOperand1),
mProperty_mDescriptor (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element GALGAS_routineSignatureMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_routineDescriptor & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineSignatureMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineSignatureMapForContext_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineSignatureMapForContext_2D_element::objectCompare (const GALGAS_routineSignatureMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLLVMInvocationRoutineName.objectCompare (inOperand.mProperty_mLLVMInvocationRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDescriptor.objectCompare (inOperand.mProperty_mDescriptor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineSignatureMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLLVMInvocationRoutineName.isValid () && mProperty_mDescriptor.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineSignatureMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLLVMInvocationRoutineName.drop () ;
  mProperty_mDescriptor.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineSignatureMapForContext_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @routineSignatureMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLLVMInvocationRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDescriptor.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineSignatureMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineSignatureMapForContext_2D_element::getter_mLLVMInvocationRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMInvocationRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineSignatureMapForContext_2D_element::getter_mDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDescriptor ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @routineSignatureMapForContext-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineSignatureMapForContext_2D_element ("routineSignatureMapForContext-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineSignatureMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineSignatureMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineSignatureMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineSignatureMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element GALGAS_routineSignatureMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineSignatureMapForContext_2D_element result ;
  const GALGAS_routineSignatureMapForContext_2D_element * p = (const GALGAS_routineSignatureMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineSignatureMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineSignatureMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mResultType (),
mProperty_mOperation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                        const GALGAS_infixOperatorDescription & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultType (inOperand1),
mProperty_mOperation (inOperand2) {
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperation.objectCompare (inOperand.mProperty_mOperation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @infixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_infixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_infixOperatorMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap_2D_element::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperation ;
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

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::~ GALGAS_prefixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefixOperatorMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_prefixOperatorMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefixOperatorMap_2D_element::objectCompare (const GALGAS_prefixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @prefixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
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
mProperty_lkey (),
mProperty_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::~ GALGAS_staticStringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticStringMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @staticStringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticStringMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_staticStringMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
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
mProperty_lkey (),
mProperty_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_objectIR & inOperand1 
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
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

GALGAS_allowedGuardMap_2D_element::GALGAS_allowedGuardMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element::~ GALGAS_allowedGuardMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element::GALGAS_allowedGuardMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element GALGAS_allowedGuardMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedGuardMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element GALGAS_allowedGuardMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedGuardMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_allowedGuardMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedGuardMap_2D_element::objectCompare (const GALGAS_allowedGuardMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedGuardMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @allowedGuardMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedGuardMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedGuardMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedGuardMap_2D_element ("allowedGuardMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedGuardMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedGuardMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedGuardMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedGuardMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element GALGAS_allowedGuardMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedGuardMap_2D_element result ;
  const GALGAS_allowedGuardMap_2D_element * p = (const GALGAS_allowedGuardMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedGuardMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedGuardMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (void) :
mProperty_lkey (),
mProperty_type (),
mProperty_executionModeSet (),
mProperty_allowedGuardMap (),
mProperty_initialValue (),
mProperty_isConstant (),
mProperty_allowedAccessToAll () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::~ GALGAS_globalVariableMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_stringset & inOperand2,
                                                                          const GALGAS_allowedGuardMap & inOperand3,
                                                                          const GALGAS_objectIR & inOperand4,
                                                                          const GALGAS_bool & inOperand5,
                                                                          const GALGAS_bool & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_type (inOperand1),
mProperty_executionModeSet (inOperand2),
mProperty_allowedGuardMap (inOperand3),
mProperty_initialValue (inOperand4),
mProperty_isConstant (inOperand5),
mProperty_allowedAccessToAll (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_stringset & inOperand2,
                                                                                          const GALGAS_allowedGuardMap & inOperand3,
                                                                                          const GALGAS_objectIR & inOperand4,
                                                                                          const GALGAS_bool & inOperand5,
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_executionModeSet.objectCompare (inOperand.mProperty_executionModeSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_allowedGuardMap.objectCompare (inOperand.mProperty_allowedGuardMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_initialValue.objectCompare (inOperand.mProperty_initialValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_isConstant.objectCompare (inOperand.mProperty_isConstant) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_allowedAccessToAll.objectCompare (inOperand.mProperty_allowedAccessToAll) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_executionModeSet.isValid () && mProperty_allowedGuardMap.isValid () && mProperty_initialValue.isValid () && mProperty_isConstant.isValid () && mProperty_allowedAccessToAll.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_type.drop () ;
  mProperty_executionModeSet.drop () ;
  mProperty_allowedGuardMap.drop () ;
  mProperty_initialValue.drop () ;
  mProperty_isConstant.drop () ;
  mProperty_allowedAccessToAll.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalVariableMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_executionModeSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_allowedGuardMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_initialValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_allowedAccessToAll.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMap_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
  return mProperty_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_globalVariableMap_2D_element::getter_executionModeSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_executionModeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap GALGAS_globalVariableMap_2D_element::getter_allowedGuardMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_allowedGuardMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalVariableMap_2D_element::getter_initialValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_initialValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMap_2D_element::getter_isConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_isConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMap_2D_element::getter_allowedAccessToAll (UNUSED_LOCATION_ARGS) const {
  return mProperty_allowedAccessToAll ;
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

GALGAS_operandList_2D_element::GALGAS_operandList_2D_element (void) :
mProperty_mOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element::~ GALGAS_operandList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element::GALGAS_operandList_2D_element (const GALGAS_objectIR & inOperand0) :
mProperty_mOperand (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element GALGAS_operandList_2D_element::constructor_new (const GALGAS_objectIR & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandList_2D_element::objectCompare (const GALGAS_operandList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandList_2D_element::isValid (void) const {
  return mProperty_mOperand.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList_2D_element::drop (void) {
  mProperty_mOperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @operandList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_operandList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @operandList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandList_2D_element ("operandList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element GALGAS_operandList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_operandList_2D_element result ;
  const GALGAS_operandList_2D_element * p = (const GALGAS_operandList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::~ GALGAS_classConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_objectIR & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_classConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_classConstantMap_2D_element::objectCompare (const GALGAS_classConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_classConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @classConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_classConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @classConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classConstantMap_2D_element ("classConstantMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classConstantMap_2D_element result ;
  const GALGAS_classConstantMap_2D_element * p = (const GALGAS_classConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (void) :
mProperty_mOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::~ GALGAS_operandIRList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (const GALGAS_objectIR & inOperand0) :
mProperty_mOperand (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::constructor_new (const GALGAS_objectIR & inOperand0 
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
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandIRList_2D_element::isValid (void) const {
  return mProperty_mOperand.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::drop (void) {
  mProperty_mOperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @operandIRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_operandIRList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
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

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInitValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_constructorValue & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_constructorValue & inOperand1 
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitValue.objectCompare (inOperand.mProperty_mInitValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
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
    mProperty_mInitValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
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

GALGAS_globalTaskVariableList_2D_element::GALGAS_globalTaskVariableList_2D_element (void) :
mProperty_mTaskName (),
mProperty_mTaskTypeName (),
mProperty_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::~ GALGAS_globalTaskVariableList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::GALGAS_globalTaskVariableList_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_objectIR & inOperand2) :
mProperty_mTaskName (inOperand0),
mProperty_mTaskTypeName (inOperand1),
mProperty_mInitialValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element GALGAS_globalTaskVariableList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_objectIR & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalTaskVariableList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalTaskVariableList_2D_element::objectCompare (const GALGAS_globalTaskVariableList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskName.objectCompare (inOperand.mProperty_mTaskName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskTypeName.objectCompare (inOperand.mProperty_mTaskTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialValue.objectCompare (inOperand.mProperty_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalTaskVariableList_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mTaskTypeName.isValid () && mProperty_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList_2D_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mTaskTypeName.drop () ;
  mProperty_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @globalTaskVariableList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList_2D_element::getter_mTaskTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalTaskVariableList_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @globalTaskVariableList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalTaskVariableList_2D_element ("globalTaskVariableList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalTaskVariableList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalTaskVariableList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalTaskVariableList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element GALGAS_globalTaskVariableList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList_2D_element result ;
  const GALGAS_globalTaskVariableList_2D_element * p = (const GALGAS_globalTaskVariableList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalTaskVariableList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_interruptionPanicCode_panicCode::cEnumAssociatedValues_interruptionPanicCode_panicCode (const GALGAS_lbigint & inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_interruptionPanicCode_panicCode::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_interruptionPanicCode_panicCode::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_interruptionPanicCode_panicCode * ptr = dynamic_cast<const cEnumAssociatedValues_interruptionPanicCode_panicCode *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode::GALGAS_interruptionPanicCode (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::constructor_noPanicCode (UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  result.mEnum = kEnum_noPanicCode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::constructor_panicCode (const GALGAS_lbigint & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_panicCode ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_interruptionPanicCode_panicCode (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionPanicCode::method_panicCode (GALGAS_lbigint & outAssociatedValue0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_panicCode) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @interruptionPanicCode panicCode invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_interruptionPanicCode_panicCode * ptr = (const cEnumAssociatedValues_interruptionPanicCode_panicCode *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_interruptionPanicCode [3] = {
  "(not built)",
  "noPanicCode",
  "panicCode"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isNoPanicCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noPanicCode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isPanicCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_panicCode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionPanicCode::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @interruptionPanicCode: " << gEnumNameArrayFor_interruptionPanicCode [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptionPanicCode::objectCompare (const GALGAS_interruptionPanicCode & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @interruptionPanicCode type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionPanicCode ("interruptionPanicCode",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptionPanicCode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptionPanicCode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionPanicCode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  const GALGAS_interruptionPanicCode * p = (const GALGAS_interruptionPanicCode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptionPanicCode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionPanicCode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//                  Extension method '@controlRegisterDeclarationListAST-element controlRegisterType'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_controlRegisterType (const GALGAS_controlRegisterDeclarationListAST_2D_element inObject,
                                          GALGAS_semanticContext & ioArgument_ioContext,
                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outRegisterType,
                                          GALGAS_uint & outArgument_outRegisterBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  outArgument_outRegisterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
  switch (outArgument_outRegisterType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_9386 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257)).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_9386->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 261)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 261)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 263)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 263)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 265)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 265)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 267)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 267)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 269)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 269)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 271)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 271)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 273)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 273)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 275)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 275)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 277)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 277)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
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
  GALGAS_unifiedTypeMap_2D_proxy var_variableAnnotationType_8021 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_variableAnnotationType_8021 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 241)) ;
  }else if (kBoolFalse == test_0) {
    var_variableAnnotationType_8021 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 243)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_8268 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-variable.galgas", 246)) ;
  GALGAS_instructionListIR var_instructionGenerationList_8326 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 247)) ;
  GALGAS_allocaList var_allocaList_8356 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 248)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_8480 ;
  {
  GALGAS_unifiedSymbolMapEx joker_8419 ; // Joker input parameter
  routine_variableMapWithConstants (ioArgument_ioContext, joker_8419, var_universalMap_8480, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 249)) ;
  }
  GALGAS_objectIR var_expressionResult_8935 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mProperty_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 255)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-variable.galgas", 257)), var_variableAnnotationType_8021, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-variable.galgas", 260)), var_temporaries_8268, ioArgument_ioGlobalLiteralStringMap, var_universalMap_8480, var_allocaList_8356, var_instructionGenerationList_8326, var_expressionResult_8935, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 254)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_8326.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 268)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_8356.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 268)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_expressionResult_8935, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 268)).operator_not (SOURCE_FILE ("declaration-global-variable.galgas", 268)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 269)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 269)) ;
  }
  GALGAS_bool test_5 = GALGAS_bool (kIsEqual, var_variableAnnotationType_8021.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 272)))) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = extensionGetter_kind (var_expressionResult_8935, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 272)).getter_isStaticInteger (SOURCE_FILE ("declaration-global-variable.galgas", 272)) ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 273)), GALGAS_string ("cannot infer type"), fixItArray7  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 273)) ;
  }
  GALGAS_objectIR var_result_9323 = function_checkAssignmentCompatibility (var_expressionResult_8935, var_variableAnnotationType_8021, inObject.mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 275)) ;
  GALGAS_stringset var_executionModes_9532 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-variable.galgas", 281)) ;
  GALGAS_allowedGuardMap var_allowedGuardMap_11689 = GALGAS_allowedGuardMap::constructor_emptyMap (SOURCE_FILE ("declaration-global-variable.galgas", 334)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalVariableMap.setter_insertKey (inObject.mProperty_mVarName, extensionGetter_type (var_result_9323, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 373)), var_executionModes_9532, var_allowedGuardMap_11689, var_result_9323, GALGAS_bool (false), inObject.mProperty_mAllowedAccessToAll, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 371)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@taskVarListAST-element enterInContext'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_taskVarListAST_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     GALGAS_propertyList & ioArgument_ioPropertyList,
                                     GALGAS_propertyMap & ioArgument_ioPropertyMap,
                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalPropertyAndRoutineMapForContext,
                                     GALGAS_operandIRList & ioArgument_ioInitialValueList,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_variableAnnotationType_9685 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mVarTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_variableAnnotationType_9685 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 276)) ;
  }else if (kBoolFalse == test_0) {
    var_variableAnnotationType_9685 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mVarTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 278)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_9938 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-task.galgas", 281)) ;
  GALGAS_instructionListIR var_instructionGenerationList_9996 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 282)) ;
  GALGAS_allocaList var_allocaList_10026 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 283)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_10150 ;
  {
  GALGAS_unifiedSymbolMapEx joker_10089 ; // Joker input parameter
  routine_variableMapWithConstants (ioArgument_ioContext, joker_10089, var_universalMap_10150, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 284)) ;
  }
  GALGAS_objectIR var_expressionResult_10594 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mProperty_mVarInitExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 290)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-task.galgas", 292)), var_variableAnnotationType_9685, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-task.galgas", 295)), var_temporaries_9938, ioArgument_ioGlobalLiteralStringMap, var_universalMap_10150, var_allocaList_10026, var_instructionGenerationList_9996, var_expressionResult_10594, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 289)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_9996.getter_length (SOURCE_FILE ("declaration-task.galgas", 303)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_10026.getter_length (SOURCE_FILE ("declaration-task.galgas", 303)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_expressionResult_10594, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 303)).operator_not (SOURCE_FILE ("declaration-task.galgas", 303)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-task.galgas", 304)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-task.galgas", 304)) ;
  }
  GALGAS_bool test_5 = GALGAS_bool (kIsEqual, var_variableAnnotationType_9685.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 307)))) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = extensionGetter_kind (var_expressionResult_10594, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 307)).getter_isStaticInteger (SOURCE_FILE ("declaration-task.galgas", 307)) ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-task.galgas", 308)), GALGAS_string ("cannot infer type"), fixItArray7  COMMA_SOURCE_FILE ("declaration-task.galgas", 308)) ;
  }
  GALGAS_objectIR var_result_10992 = function_checkAssignmentCompatibility (var_expressionResult_10594, var_variableAnnotationType_9685, inObject.mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 310)) ;
  const enumGalgasBool test_8 = extensionGetter_instanciable (extensionGetter_type (var_result_10992, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 318)).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 318)).operator_not (SOURCE_FILE ("declaration-task.galgas", 318)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-task.galgas", 319)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_10992, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 319)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 319)), fixItArray9  COMMA_SOURCE_FILE ("declaration-task.galgas", 319)) ;
  }
  {
  ioArgument_ioPropertyMap.setter_insertKey (inObject.mProperty_mVarName, GALGAS_bool (false), GALGAS_objectIR::constructor_property (extensionGetter_type (var_result_10992, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 324)), inObject.mProperty_mVarName, ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("declaration-task.galgas", 324))  COMMA_SOURCE_FILE ("declaration-task.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 321)) ;
  }
  {
  ioArgument_ioUniversalPropertyAndRoutineMapForContext.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_11559 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalPropertyAndRoutineMapForContext.ptr () ;
  callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_11559, inObject.mProperty_mVarName, GALGAS_bool (false), GALGAS_objectIR::constructor_property (extensionGetter_type (var_result_10992, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 329)), inObject.mProperty_mVarName, ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("declaration-task.galgas", 329))  COMMA_SOURCE_FILE ("declaration-task.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 326)) ;
  }
  ioArgument_ioInitialValueList.addAssign_operation (var_result_10992  COMMA_SOURCE_FILE ("declaration-task.galgas", 331)) ;
  ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mVarName.getter_string (HERE), extensionGetter_type (var_result_10992, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 332))  COMMA_SOURCE_FILE ("declaration-task.galgas", 332)) ;
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
  GALGAS_routineTypedSignature var_signature_3500 ;
  {
  routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mProcFormalArgumentList, var_signature_3500, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_3620 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mReturnTypeName, var_returnType_3620 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 81)) ;
  }
  {
  extensionSetter_insertKey (ioArgument_ioContext.mProperty_mRoutineMapForContext, inObject.mProperty_mExternProcedureName, extensionGetter_routineSignature (inObject.mProperty_mProcFormalArgumentList, inObject.mProperty_mExternProcedureName.getter_location (SOURCE_FILE ("declaration-extern-proc.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 84)), inObject.mProperty_mRoutineNameForGeneration, GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (inObject.mProperty_mMode  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 89)), var_signature_3500, var_returnType_3620, GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineCallingSheme::constructor_staticCall (SOURCE_FILE ("declaration-extern-proc.galgas", 94))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 82)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardKind_convenienceGuard::cEnumAssociatedValues_guardKind_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardKind_convenienceGuard::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardKind_convenienceGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardKind_convenienceGuard *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind::GALGAS_guardKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardKind::constructor_baseGuard (UNUSED_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  result.mEnum = kEnum_baseGuard ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardKind::constructor_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_convenienceGuard ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardKind_convenienceGuard (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKind::method_convenienceGuard (GALGAS_callInstructionAST & outAssociatedValue0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_convenienceGuard) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @guardKind convenienceGuard invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = (const cEnumAssociatedValues_guardKind_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_guardKind [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKind::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKind::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_convenienceGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKind::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<enum @guardKind: " << gEnumNameArrayFor_guardKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardKind::objectCompare (const GALGAS_guardKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @guardKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardKind ("guardKind",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardKind::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  const GALGAS_guardKind * p = (const GALGAS_guardKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varAssignmentInstructionAST * p = (const cPtr_varAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varAssignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mAssignmentTargetAST.objectCompare (p->mProperty_mAssignmentTargetAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varAssignmentInstructionAST::objectCompare (const GALGAS_varAssignmentInstructionAST & inOperand) const {
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

GALGAS_varAssignmentInstructionAST::GALGAS_varAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAssignmentInstructionAST::GALGAS_varAssignmentInstructionAST (const cPtr_varAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varAssignmentInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAssignmentInstructionAST GALGAS_varAssignmentInstructionAST::constructor_new (const GALGAS_assignmentTargetAST & inAttribute_mAssignmentTargetAST,
                                                                                        const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varAssignmentInstructionAST result ;
  if (inAttribute_mAssignmentTargetAST.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varAssignmentInstructionAST (inAttribute_mAssignmentTargetAST, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST GALGAS_varAssignmentInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_assignmentTargetAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varAssignmentInstructionAST * p = (const cPtr_varAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAssignmentInstructionAST) ;
    result = p->mProperty_mAssignmentTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST cPtr_varAssignmentInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_varAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varAssignmentInstructionAST * p = (const cPtr_varAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAssignmentInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_varAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @varAssignmentInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varAssignmentInstructionAST::cPtr_varAssignmentInstructionAST (const GALGAS_assignmentTargetAST & in_mAssignmentTargetAST,
                                                                    const GALGAS_expressionAST & in_mSourceExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mProperty_mAssignmentTargetAST (in_mAssignmentTargetAST),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAssignmentInstructionAST ;
}

void cPtr_varAssignmentInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@varAssignmentInstructionAST:" ;
  mProperty_mAssignmentTargetAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varAssignmentInstructionAST (mProperty_mAssignmentTargetAST, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @varAssignmentInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varAssignmentInstructionAST ("varAssignmentInstructionAST",
                                                    & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAssignmentInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAssignmentInstructionAST GALGAS_varAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_varAssignmentInstructionAST result ;
  const GALGAS_varAssignmentInstructionAST * p = (const GALGAS_varAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (void) :
mProperty_mInterruptName (),
mProperty_mInterruptionPanicCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element::~ GALGAS_interruptionConfigurationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_mInterruptName (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_interruptionPanicCode & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_interruptionConfigurationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptionConfigurationList_2D_element::objectCompare (const GALGAS_interruptionConfigurationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInterruptName.objectCompare (inOperand.mProperty_mInterruptName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_interruptionConfigurationList_2D_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList_2D_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @interruptionConfigurationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInterruptName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_interruptionConfigurationList_2D_element::getter_mInterruptName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionConfigurationList_2D_element::getter_mInterruptionPanicCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionPanicCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @interruptionConfigurationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ("interruptionConfigurationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptionConfigurationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptionConfigurationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionConfigurationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  const GALGAS_interruptionConfigurationList_2D_element * p = (const GALGAS_interruptionConfigurationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptionConfigurationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element::GALGAS_guardDeclarationListAST_2D_element (void) :
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element::~ GALGAS_guardDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element::GALGAS_guardDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bool & inOperand1,
                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                      const GALGAS_routineFormalArgumentList & inOperand3,
                                                                                      const GALGAS_guardKind & inOperand4,
                                                                                      const GALGAS_instructionListAST & inOperand5,
                                                                                      const GALGAS_location & inOperand6) :
mProperty_mGuardName (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mGuardAttributeList (inOperand2),
mProperty_mGuardFormalArgumentList (inOperand3),
mProperty_mGuardKind (inOperand4),
mProperty_mGuardInstructionList (inOperand5),
mProperty_mEndOfGuardDeclaration (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element GALGAS_guardDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1,
                                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                                      const GALGAS_routineFormalArgumentList & inOperand3,
                                                                                                      const GALGAS_guardKind & inOperand4,
                                                                                                      const GALGAS_instructionListAST & inOperand5,
                                                                                                      const GALGAS_location & inOperand6 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_guardDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardDeclarationListAST_2D_element::objectCompare (const GALGAS_guardDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGuardName.objectCompare (inOperand.mProperty_mGuardName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardAttributeList.objectCompare (inOperand.mProperty_mGuardAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardFormalArgumentList.objectCompare (inOperand.mProperty_mGuardFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardKind.objectCompare (inOperand.mProperty_mGuardKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardInstructionList.objectCompare (inOperand.mProperty_mGuardInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfGuardDeclaration.objectCompare (inOperand.mProperty_mEndOfGuardDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guardDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mGuardName.isValid () && mProperty_mIsPublic.isValid () && mProperty_mGuardAttributeList.isValid () && mProperty_mGuardFormalArgumentList.isValid () && mProperty_mGuardKind.isValid () && mProperty_mGuardInstructionList.isValid () && mProperty_mEndOfGuardDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST_2D_element::drop (void) {
  mProperty_mGuardName.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mGuardAttributeList.drop () ;
  mProperty_mGuardFormalArgumentList.drop () ;
  mProperty_mGuardKind.drop () ;
  mProperty_mGuardInstructionList.drop () ;
  mProperty_mEndOfGuardDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @guardDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGuardName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfGuardDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guardDeclarationListAST_2D_element::getter_mGuardName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardDeclarationListAST_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_guardDeclarationListAST_2D_element::getter_mGuardAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_guardDeclarationListAST_2D_element::getter_mGuardFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardDeclarationListAST_2D_element::getter_mGuardKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_guardDeclarationListAST_2D_element::getter_mGuardInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_guardDeclarationListAST_2D_element::getter_mEndOfGuardDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfGuardDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @guardDeclarationListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardDeclarationListAST_2D_element ("guardDeclarationListAST-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element GALGAS_guardDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardDeclarationListAST_2D_element result ;
  const GALGAS_guardDeclarationListAST_2D_element * p = (const GALGAS_guardDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

static void extensionMethod_configurationDeclarationAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                      GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                      GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
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
//                  Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_lstring var_rootNode_9653 = GALGAS_lstring::constructor_new (GALGAS_string ("config"), object->mProperty_mPanicCodeTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 293)) ;
  {
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_9653, temp_0, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 294)) ;
  }
  GALGAS_lstring var_panicCodeTypeName_9772 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mPanicCodeTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 295)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_9653, var_panicCodeTypeName_9772 COMMA_SOURCE_FILE ("configuration.galgas", 296)) ;
  }
  GALGAS_lstring var_panicLineTypeName_9906 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mPanicLineTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 297)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_9653, var_panicLineTypeName_9906 COMMA_SOURCE_FILE ("configuration.galgas", 298)) ;
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

static GALGAS_location extensionGetter_configurationDeclarationAST_location (const cPtr_abstractDeclaration * inObject,
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

static GALGAS_string extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * /* inObject */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("config") ;
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
//                  Overriding extension method '@configurationDeclarationAST enterRoutinesInContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                                const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                                GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                               extensionMethod_configurationDeclarationAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterRoutinesInContext (defineExtensionMethod_configurationDeclarationAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@configurationDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_stringset var_panicCodeSet_11722 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 333)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mPointerSize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 335)), GALGAS_string ("duplicate configuration"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 335)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 336)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 337)), GALGAS_string ("zero size pointer not allowed"), fixItArray3  COMMA_SOURCE_FILE ("configuration.galgas", 337)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioContext.mProperty_mPointerSize = object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 339)) ;
    }
  }
  ioArgument_ioContext.mProperty_mTargetParameters = object->mProperty_mTargetParameters ;
  ioArgument_ioContext.mProperty_mPanicCodeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicCodeTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 343)) ;
  const enumGalgasBool test_4 = ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 344)).getter_isInteger (SOURCE_FILE ("configuration.galgas", 344)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_unsigned_12353 ;
    GALGAS_bigint joker_12328_2 ; // Joker input parameter
    GALGAS_bigint joker_12328_1 ; // Joker input parameter
    GALGAS_uint joker_12355_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 345)).method_integer (joker_12328_2, joker_12328_1, var_unsigned_12353, joker_12355_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 345)) ;
    const enumGalgasBool test_5 = var_unsigned_12353.operator_not (SOURCE_FILE ("configuration.galgas", 346)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 347)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("configuration.galgas", 347)) ;
    }
  }else if (kBoolFalse == test_4) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 350)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray7  COMMA_SOURCE_FILE ("configuration.galgas", 350)) ;
  }
  ioArgument_ioContext.mProperty_mPanicLineType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicLineTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 353)) ;
  const enumGalgasBool test_8 = ioArgument_ioContext.getter_mPanicLineType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 354)).getter_isInteger (SOURCE_FILE ("configuration.galgas", 354)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_bool var_unsigned_12812 ;
    GALGAS_bigint joker_12787_2 ; // Joker input parameter
    GALGAS_bigint joker_12787_1 ; // Joker input parameter
    GALGAS_uint joker_12814_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicLineType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 355)).method_integer (joker_12787_2, joker_12787_1, var_unsigned_12812, joker_12814_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 355)) ;
    const enumGalgasBool test_9 = var_unsigned_12812.operator_not (SOURCE_FILE ("configuration.galgas", 356)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 357)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray10  COMMA_SOURCE_FILE ("configuration.galgas", 357)) ;
    }
  }else if (kBoolFalse == test_8) {
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 360)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray11  COMMA_SOURCE_FILE ("configuration.galgas", 360)) ;
  }
  cEnumerator_interruptionConfigurationList enumerator_13105 (object->mProperty_mInterruptionConfigurationList, kENUMERATION_UP) ;
  while (enumerator_13105.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_13105.current_mInterruptName (HERE), enumerator_13105.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 364)) ;
    }
    switch (enumerator_13105.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noPanicCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_panicCode:
      {
        const cEnumAssociatedValues_interruptionPanicCode_panicCode * extractPtr_13404 = (const cEnumAssociatedValues_interruptionPanicCode_panicCode *) (enumerator_13105.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_value = extractPtr_13404->mAssociatedValue0 ;
        GALGAS_string var_s_13261 = extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("configuration.galgas", 368)) ;
        const enumGalgasBool test_12 = var_panicCodeSet_11722.getter_hasKey (var_s_13261 COMMA_SOURCE_FILE ("configuration.galgas", 369)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_value.getter_location (SOURCE_FILE ("configuration.galgas", 370)), GALGAS_string ("duplicate panic code"), fixItArray13  COMMA_SOURCE_FILE ("configuration.galgas", 370)) ;
        }
        var_panicCodeSet_11722.addAssign_operation (var_s_13261  COMMA_SOURCE_FILE ("configuration.galgas", 372)) ;
      }
      break ;
    }
    enumerator_13105.gotoNextObject () ;
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
//                            Overriding extension getter '@typeArrayDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeArrayDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  result_outLocation = object->mProperty_mArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                 extensionGetter_typeArrayDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclaration_location (defineExtensionGetter_typeArrayDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@typeArrayDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  const GALGAS_typeArrayDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                     extensionMethod_typeArrayDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclaration_addExtension (defineExtensionMethod_typeArrayDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeArrayDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  GALGAS_lstring var_newTypeName_2849 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 60)) ;
  GALGAS_lstring var_elementTypeName_2926 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 61)) ;
  {
  const GALGAS_typeArrayDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2849, temp_0, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2849, var_elementTypeName_2926 COMMA_SOURCE_FILE ("type-array.galgas", 63)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_newTypeName_2849, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 64)) ;
  GALGAS_lstring var_rootNode_3171 = GALGAS_lstring::constructor_new (GALGAS_string ("config"), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 65)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2849, var_rootNode_3171 COMMA_SOURCE_FILE ("type-array.galgas", 66)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                               extensionMethod_typeArrayDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclaration_enterInPrecedenceGraph (defineExtensionMethod_typeArrayDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@typeArrayDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  result_outRepresentation = GALGAS_string ("arraytype $").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 72)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                                           extensionGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeArrayDeclaration enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                               extensionMethod_typeArrayDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclaration_enterRoutinesInContext (defineExtensionMethod_typeArrayDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typeArrayDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  GALGAS_typeKind var_kind_4731 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_kind_4731, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 95)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_kind_4731, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 99)).operator_not (SOURCE_FILE ("type-array.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 100)), GALGAS_string ("an array element should be copyable"), fixItArray1  COMMA_SOURCE_FILE ("type-array.galgas", 100)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_instanciable (var_kind_4731, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 102)).operator_not (SOURCE_FILE ("type-array.galgas", 102)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 103)), GALGAS_string ("an array element should be instanciable"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 103)) ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_5024 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 106)) ;
  GALGAS_allocaList var_allocaList_5054 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 107)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5100 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-array.galgas", 108)) ;
  GALGAS_unifiedSymbolMapEx var_variableMap_5200 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_5260 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_variableMap_5200, var_universalMap_5260, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 109)) ;
  }
  GALGAS_staticStringMap joker_5560 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 122)) ;
  GALGAS_objectIR var_sizeExpressionIR_5713 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 115)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mArrayTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 117)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 117)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 118)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-array.galgas", 120)), var_temporaries_5100, joker_5560, var_universalMap_5260, var_allocaList_5054, var_initInstructionGenerationList_5024, var_sizeExpressionIR_5713, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 114)) ;
  GALGAS_bool test_4 = GALGAS_bool (kIsStrictSup, var_allocaList_5054.getter_length (SOURCE_FILE ("type-array.galgas", 128)).add_operation (var_initInstructionGenerationList_5024.getter_length (SOURCE_FILE ("type-array.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 128)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_4.boolEnum ()) {
    test_4 = var_sizeExpressionIR_5713.getter_isLiteralInteger (SOURCE_FILE ("type-array.galgas", 128)).operator_not (SOURCE_FILE ("type-array.galgas", 128)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray6  COMMA_SOURCE_FILE ("type-array.galgas", 129)) ;
  }else if (kBoolFalse == test_5) {
    GALGAS_bigint var_arraySize_5982 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_5959_1 ; // Joker input parameter
    var_sizeExpressionIR_5713.method_literalInteger (joker_5959_1, var_arraySize_5982, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 131)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_elementType_6003 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 132)) ;
    GALGAS_classConstantMap var_classConstantMap_6160 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 134)) ;
    {
    var_classConstantMap_6160.setter_insertKey (GALGAS_string ("size").getter_nowhere (SOURCE_FILE ("type-array.galgas", 135)), var_sizeExpressionIR_5713, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 135)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mArrayTypeName, GALGAS_typeKind::constructor_arrayType (object->mProperty_mArrayTypeName, var_elementType_6003, var_arraySize_5982, var_classConstantMap_6160, function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 144)).operator_or (function_copyableFlag (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 144)) COMMA_SOURCE_FILE ("type-array.galgas", 144))  COMMA_SOURCE_FILE ("type-array.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 137)) ;
    }
    {
    ioArgument_ioContext.mProperty_mConstructorMap.setter_insertKey (object->mProperty_mArrayTypeName, GALGAS_constructorValue::constructor_zero (SOURCE_FILE ("type-array.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 148)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                       extensionMethod_typeArrayDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclaration_enterInContext (defineExtensionMethod_typeArrayDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@booleanDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_booleanDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outLocation = object->mProperty_mBooleanTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                 extensionGetter_booleanDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclaration_location (defineExtensionGetter_booleanDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@booleanDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
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

static void defineExtensionMethod_booleanDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                     extensionMethod_booleanDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_addExtension (defineExtensionMethod_booleanDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@booleanDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  GALGAS_lstring var_boolTypeName_1725 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 33)) ;
  {
  const GALGAS_booleanDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_boolTypeName_1725, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                               extensionMethod_booleanDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterInPrecedenceGraph (defineExtensionMethod_booleanDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@booleanDeclaration keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (function_llvmRegularTypeMangledNameFromName (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 40)).getter_string (SOURCE_FILE ("type-bool.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 40)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                                           extensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@booleanDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mBooleanTypeName, GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("type-bool.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 54)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mBooleanType (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-bool.galgas", 56)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mBooleanTypeName.getter_location (SOURCE_FILE ("type-bool.galgas", 57)), GALGAS_string ("Boolean type already defined"), fixItArray1  COMMA_SOURCE_FILE ("type-bool.galgas", 57)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType_3071 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 59)) ;
  ioArgument_ioContext.mProperty_mBooleanType = var_boolType_3071 ;
  {
  routine_enterBooleanOperators (object->mProperty_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 62)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                       extensionMethod_booleanDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterInContext (defineExtensionMethod_booleanDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@booleanDeclaration enterRoutinesInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                               extensionMethod_booleanDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterRoutinesInContext (defineExtensionMethod_booleanDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBooleanOperators (GALGAS_lstring inArgument_inBooleanTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_3950 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inArgument_inBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  GALGAS_lstring var_boolBoolOp_4042 = function_combineTypeNamesForInfixOperator (inArgument_inBooleanTypeName.getter_string (HERE), inArgument_inBooleanTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 84)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 88))  COMMA_SOURCE_FILE ("type-bool.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-bool.galgas", 93))  COMMA_SOURCE_FILE ("type-bool.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 90)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 98))  COMMA_SOURCE_FILE ("type-bool.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 95)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 103))  COMMA_SOURCE_FILE ("type-bool.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 100)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-bool.galgas", 108))  COMMA_SOURCE_FILE ("type-bool.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 105)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-bool.galgas", 113))  COMMA_SOURCE_FILE ("type-bool.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 110)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 118))  COMMA_SOURCE_FILE ("type-bool.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 115)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-bool.galgas", 123))  COMMA_SOURCE_FILE ("type-bool.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 120)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-bool.galgas", 128))  COMMA_SOURCE_FILE ("type-bool.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 125)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (inArgument_inBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 130)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@enumerationDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_enumerationDeclaration_location (const cPtr_abstractDeclaration * inObject,
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
//                         Overriding extension method '@enumerationDeclaration addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
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

static void extensionMethod_enumerationDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_lstring var_typeName_2952 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 72)) ;
  {
  const GALGAS_enumerationDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_2952, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 73)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2952, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 74)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 74)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 74)) ;
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
//              Overriding extension getter '@enumerationDeclaration keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outRepresentation = GALGAS_string ("enum $").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) ;
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

static void extensionMethod_enumerationDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                   const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                   GALGAS_semanticContext & ioArgument_ioContext,
                                                                   GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4509 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mEnumerationName, var_selfType_4509 COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 102)) ;
  }
  GALGAS_enumConstantMap var_enumConstantMap_4545 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 103)) ;
  GALGAS_classConstantMap var_classConstantMap_4587 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 104)) ;
  cEnumerator_lstringlist enumerator_4621 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_4621.hasCurrentObject ()) {
    GALGAS_uint var_idx_4636 = var_enumConstantMap_4545.getter_count (SOURCE_FILE ("type-enumeration-declaration.galgas", 106)) ;
    {
    var_enumConstantMap_4545.setter_insertKey (enumerator_4621.current_mValue (HERE), var_idx_4636, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 107)) ;
    }
    {
    var_classConstantMap_4587.setter_insertKey (enumerator_4621.current_mValue (HERE), GALGAS_objectIR::constructor_literalInteger (var_selfType_4509, var_idx_4636.getter_bigint (SOURCE_FILE ("type-enumeration-declaration.galgas", 108))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 108)) ;
    }
    enumerator_4621.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, GALGAS_typeKind::constructor_enumeration (var_enumConstantMap_4545, var_classConstantMap_4587  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
  }
  {
  routine_enterEnumerationOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
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
//                    Overriding extension method '@enumerationDeclaration enterRoutinesInContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                           GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                           GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                               extensionMethod_enumerationDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterRoutinesInContext (defineExtensionMethod_enumerationDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterEnumerationOperators'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationOperators (GALGAS_lstring inArgument_inEnumerationTypeName,
                                        GALGAS_semanticContext & ioArgument_ioContext,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_5727 = function_combineTypeNamesForInfixOperator (inArgument_inEnumerationTypeName.getter_string (HERE), inArgument_inEnumerationTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-enumeration-declaration.galgas", 145))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 142)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 150))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 147)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 155))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 152)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-enumeration-declaration.galgas", 160))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 157)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-enumeration-declaration.galgas", 165))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 162)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@structureDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_structureDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outLocation = object->mProperty_mStructureName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                 extensionGetter_structureDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_location (defineExtensionGetter_structureDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@structureDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & ioArgument_ioExtensionDeclarationListAST,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  const GALGAS_structureDeclaration temp_0 = object ;
  GALGAS_structureDeclaration var_newDeclaration_4383 = temp_0 ;
  GALGAS_extensionDeclarationListAST var_currentExtensionDeclarationListAST_4431 = ioArgument_ioExtensionDeclarationListAST ;
  ioArgument_ioExtensionDeclarationListAST = GALGAS_extensionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 123)) ;
  cEnumerator_extensionDeclarationListAST enumerator_4588 (var_currentExtensionDeclarationListAST_4431, kENUMERATION_UP) ;
  while (enumerator_4588.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mStructureName.getter_string (HERE).objectCompare (enumerator_4588.current_mTypeName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_newDeclaration_4383 = GALGAS_structureDeclaration::constructor_new (var_newDeclaration_4383.getter_mStructureName (SOURCE_FILE ("type-structure-declaration.galgas", 127)), var_newDeclaration_4383.getter_mAttributeListAST (SOURCE_FILE ("type-structure-declaration.galgas", 128)), var_newDeclaration_4383.getter_mStructurePropertyListAST (SOURCE_FILE ("type-structure-declaration.galgas", 129)).add_operation (enumerator_4588.current_mPropertyList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 129)), var_newDeclaration_4383.getter_mFunctionDeclarationListAST (SOURCE_FILE ("type-structure-declaration.galgas", 130)).add_operation (enumerator_4588.current_mProcedureDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 130)), var_newDeclaration_4383.getter_mSystemRoutineListAST (SOURCE_FILE ("type-structure-declaration.galgas", 131)).add_operation (enumerator_4588.current_mSVCListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 131)), var_newDeclaration_4383.getter_mGuardListAST (SOURCE_FILE ("type-structure-declaration.galgas", 132)).add_operation (enumerator_4588.current_mGuardListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 132))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 126)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioExtensionDeclarationListAST.addAssign_operation (enumerator_4588.current_mTypeName (HERE), enumerator_4588.current_mProcedureDeclarationListAST (HERE), enumerator_4588.current_mPropertyList (HERE), enumerator_4588.current_mSVCListAST (HERE), enumerator_4588.current_mGuardListAST (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 135)) ;
    }
    enumerator_4588.gotoNextObject () ;
  }
  outArgument_outNewDeclaration = var_newDeclaration_4383 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                     extensionMethod_structureDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_addExtension (defineExtensionMethod_structureDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structureDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_lstring var_structureTypeName_5647 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 146)) ;
  {
  const GALGAS_structureDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_structureTypeName_5647, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 148)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_5877 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_5877.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_5877.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_5938 = function_llvmRegularTypeMangledNameFromName (enumerator_5877.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 152)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_structureTypeName_5647, var_typeName_5938 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 153)) ;
      }
    }
    switch (enumerator_5877.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_6233 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_5877.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_6233->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), var_structureTypeName_5647, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 158)) ;
      }
      break ;
    }
    enumerator_5877.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_6317 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_6317.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentList enumerator_6390 (enumerator_6317.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_6390.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_6412 = function_llvmRegularTypeMangledNameFromName (enumerator_6390.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 164)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6412 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 165)) ;
      }
      enumerator_6390.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_6317.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 167)) ;
    enumerator_6317.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 170)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                               extensionMethod_structureDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInPrecedenceGraph (defineExtensionMethod_structureDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@structureDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structureDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outRepresentation = GALGAS_string ("struct $").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                                           extensionGetter_structureDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@structureDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalPropertyAndRoutineMapForContext_8853 = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 224)) ;
  GALGAS_propertyList var_propertyList_8893 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 225)) ;
  GALGAS_propertyMap var_propertyMap_8925 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 226)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_8973 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 227)) ;
  GALGAS_constructorSignature var_constructorSignature_9023 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 228)) ;
  GALGAS_bool var_canBeCopied_9046 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_9091 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  GALGAS_uint index_9059 ((uint32_t) 0) ;
  while (enumerator_9091.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_9091.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 233)) ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), enumerator_9091.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 234)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_optionalPropertyType_9179 = temp_0 ;
    GALGAS_instructionListIR var_initInstructionGenerationList_9379 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 237)) ;
    GALGAS_allocaList var_allocaList_9411 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 238)) ;
    GALGAS_semanticTemporariesStruct var_temporaries_9459 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 239)) ;
    switch (enumerator_9091.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_11249 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_9091.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_11249->mAssociatedValue0 ;
        GALGAS_staticStringMap joker_9882 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 250)) ;
        GALGAS_universalPropertyAndRoutineMapForContext joker_9906 = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
        GALGAS_objectIR var_expressionIR_10036 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 243)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mStructureName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 245)), object->mProperty_mStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 245)), var_optionalPropertyType_9179, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-structure-declaration.galgas", 248)), var_temporaries_9459, joker_9882, joker_9906, var_allocaList_9411, var_initInstructionGenerationList_9379, var_expressionIR_10036, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 242)) ;
        GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_initInstructionGenerationList_9379.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 256)).add_operation (var_allocaList_9411.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 256)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = extensionGetter_isStatic (var_expressionIR_10036, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 256)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 256)) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_9091.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 257)), GALGAS_string ("initialization expression cannot be computed statically"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 257)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_actualPropertyType_10303 ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_9179.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 260)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_actualPropertyType_10303 = var_optionalPropertyType_9179 ;
        }else if (kBoolFalse == test_5) {
          var_actualPropertyType_10303 = extensionGetter_type (var_expressionIR_10036, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 263)) ;
        }
        const enumGalgasBool test_6 = extensionGetter_instanciable (var_actualPropertyType_10303.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 265)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 265)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_9091.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 266)), GALGAS_string ("$").add_operation (var_actualPropertyType_10303.getter_key (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)) ;
        }
        const enumGalgasBool test_8 = extensionGetter_copyable (var_actualPropertyType_10303, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 268)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 268)).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_canBeCopied_9046 = GALGAS_bool (false) ;
        }
        var_propertyList_8893.addAssign_operation (enumerator_9091.current_mPropertyName (HERE).getter_string (HERE), var_actualPropertyType_10303  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 271)) ;
        {
        var_propertyMap_8925.setter_insertKey (enumerator_9091.current_mPropertyName (HERE), enumerator_9091.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_actualPropertyType_10303, enumerator_9091.current_mPropertyName (HERE), index_9059  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 272)) ;
        }
        {
        var_universalPropertyAndRoutineMapForContext_8853.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_10998 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8853.ptr () ;
        callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_10998, enumerator_9091.current_mPropertyName (HERE), enumerator_9091.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_actualPropertyType_10303, enumerator_9091.current_mPropertyName (HERE), index_9059  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
        var_sortedOperandIRList_8973.addAssign_operation (extensionGetter_withType (var_expressionIR_10036, var_actualPropertyType_10303, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)), index_9059  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
        const enumGalgasBool test_9 = extensionGetter_instanciable (var_optionalPropertyType_9179.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 284)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_9091.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 285)), GALGAS_string ("$").add_operation (var_optionalPropertyType_9179.getter_key (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 285)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 285)), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 285)) ;
        }
        var_propertyList_8893.addAssign_operation (enumerator_9091.current_mPropertyName (HERE).getter_string (HERE), var_optionalPropertyType_9179  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 287)) ;
        {
        var_propertyMap_8925.setter_insertKey (enumerator_9091.current_mPropertyName (HERE), enumerator_9091.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_optionalPropertyType_9179, enumerator_9091.current_mPropertyName (HERE), index_9059  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
        }
        {
        var_universalPropertyAndRoutineMapForContext_8853.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_11726 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8853.ptr () ;
        callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_11726, enumerator_9091.current_mPropertyName (HERE), enumerator_9091.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_optionalPropertyType_9179, enumerator_9091.current_mPropertyName (HERE), index_9059  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 293)) ;
        }
        var_constructorSignature_9023.addAssign_operation (enumerator_9091.current_mPropertyName (HERE).getter_string (HERE), var_optionalPropertyType_9179, index_9059  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 298)) ;
      }
      break ;
    }
    enumerator_9091.gotoNextObject () ;
    index_9059.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 230)) ;
  }
  {
  ioArgument_ioContext.mProperty_mConstructorMap.setter_insertKey (object->mProperty_mStructureName, GALGAS_constructorValue::constructor_structure (var_constructorSignature_9023, var_sortedOperandIRList_8973  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 302)) ;
  }
  GALGAS_uint var_flags_12262 = function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 307)) ;
  cEnumerator_lstringlist enumerator_12315 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_12315.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_12315.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_flags_12262.operator_and (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 310)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 310)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_12315.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 311)), GALGAS_string ("duplicated attribute"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 311)) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_14 = var_canBeCopied_9046.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 312)).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (object->mProperty_mStructureName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 313)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray15  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 313)) ;
        }else if (kBoolFalse == test_14) {
          var_flags_12262 = var_flags_12262.operator_or (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 315)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 315)) ;
        }
      }
    }else if (kBoolFalse == test_11) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (enumerator_12315.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 318)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 318)) ;
    }
    enumerator_12315.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_12834 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_12834.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_12886 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 324)) ;
    cEnumerator_lstringlist enumerator_12944 (enumerator_12834.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12944.hasCurrentObject ()) {
      var_attributeSet_12886.addAssign_operation (enumerator_12944.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 326)) ;
      enumerator_12944.gotoNextObject () ;
    }
    GALGAS_lstring var_signature_13037 = extensionGetter_routineSignature (enumerator_12834.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_12834.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 329)) ;
    GALGAS_routineTypedSignature var_typedSignature_13220 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12834.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_typedSignature_13220, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 330)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_13356 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12834.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnType_13356 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 332)) ;
    }
    GALGAS_lstring var_invocationName_13412 = function_routineMangledNameFromAST (GALGAS_string ("$").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 335)), enumerator_12834.current (HERE).getter_mFunctionName (HERE), enumerator_12834.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 334)) ;
    GALGAS_routineDescriptor var_functionDescriptor_13605 = GALGAS_routineDescriptor::constructor_new (enumerator_12834.current (HERE).getter_mPublicFunction (HERE), var_attributeSet_12886.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 342)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 342)), GALGAS_routineKind::constructor_function (enumerator_12834.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 343)), var_typedSignature_13220, var_returnType_13356, var_attributeSet_12886.getter_hasKey (function_accessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 346)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 346)), var_attributeSet_12886.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 347)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 347)), GALGAS_routineCallingSheme::constructor_staticCall (SOURCE_FILE ("type-structure-declaration.galgas", 348))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)) ;
    {
    var_universalPropertyAndRoutineMapForContext_8853.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_13984 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8853.ptr () ;
    callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_13984, enumerator_12834.current (HERE).getter_mFunctionName (HERE), var_signature_13037, var_invocationName_13412, var_functionDescriptor_13605, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 351)) ;
    }
    enumerator_12834.gotoNextObject () ;
  }
  cEnumerator_systemRoutineDeclarationListAST enumerator_14143 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_14143.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_14195 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 360)) ;
    cEnumerator_lstringlist enumerator_14243 (enumerator_14143.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14243.hasCurrentObject ()) {
      var_attributeSet_14195.addAssign_operation (enumerator_14243.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 362)) ;
      enumerator_14243.gotoNextObject () ;
    }
    GALGAS_lstring var_signature_14336 = extensionGetter_routineSignature (enumerator_14143.current (HERE).getter_mFormalArgumentList (HERE), enumerator_14143.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 365)) ;
    GALGAS_routineTypedSignature var_typedSignature_14512 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_14143.current (HERE).getter_mFormalArgumentList (HERE), var_typedSignature_14512, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 366)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_14638 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_14143.current (HERE).getter_mReturnTypeName (HERE), var_returnType_14638 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 368)) ;
    }
    GALGAS_lstring var_invocationName_14694 = function_routineMangledNameFromAST (GALGAS_string ("$").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 371)), enumerator_14143.current (HERE).getter_mName (HERE), enumerator_14143.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 370)) ;
    GALGAS_routineDescriptor var_descriptor_14859 = GALGAS_routineDescriptor::constructor_new (enumerator_14143.current (HERE).getter_mPublic (HERE), var_attributeSet_14195.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)), enumerator_14143.current (HERE).getter_mRoutineKind (HERE), var_typedSignature_14512, var_returnType_14638, var_attributeSet_14195.getter_hasKey (function_accessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 382)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 382)), var_attributeSet_14195.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 383)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 383)), GALGAS_routineCallingSheme::constructor_staticCall (SOURCE_FILE ("type-structure-declaration.galgas", 384))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 376)) ;
    {
    var_universalPropertyAndRoutineMapForContext_8853.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_15206 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8853.ptr () ;
    callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_15206, enumerator_14143.current (HERE).getter_mName (HERE), var_signature_14336, var_invocationName_14694, var_descriptor_14859, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 387)) ;
    }
    enumerator_14143.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mStructureName, GALGAS_typeKind::constructor_structure (object->mProperty_mStructureName, var_propertyMap_8925, var_universalPropertyAndRoutineMapForContext_8853, var_propertyList_8893, var_flags_12262  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 395)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                       extensionMethod_structureDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInContext (defineExtensionMethod_structureDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structureDeclaration enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * inObject,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  extensionMethod_enterFunctionInContext (object->mProperty_mFunctionDeclarationListAST, function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 415)).getter_string (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 414)) ;
  extensionMethod_enterInContext (object->mProperty_mSystemRoutineListAST, function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 419)).getter_string (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 418)) ;
  extensionMethod_enterInContext (object->mProperty_mGuardListAST, function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)).getter_string (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                               extensionMethod_structureDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterRoutinesInContext (defineExtensionMethod_structureDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@typeAliasDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeAliasDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void extensionMethod_typeAliasDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
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

static void extensionMethod_typeAliasDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_lstring var_newTypeName_2625 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 54)) ;
  GALGAS_lstring var_aliasedTypeName_2700 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 55)) ;
  {
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2625, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2625, var_aliasedTypeName_2700 COMMA_SOURCE_FILE ("type-alias.galgas", 57)) ;
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

static GALGAS_string extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outRepresentation = GALGAS_string ("typealias $").add_operation (object->mProperty_mNewTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 63)) ;
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
//                     Overriding extension method '@typeAliasDeclaration enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                               extensionMethod_typeAliasDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterRoutinesInContext (defineExtensionMethod_typeAliasDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typeAliasDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_typeKind var_kind_4304 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAliasedTypeName, var_kind_4304, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 86)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mNewTypeName, var_kind_4304, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 88)) ;
  }
  GALGAS_lstring var_newNewInfixKey_4442 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 90)) ;
  GALGAS_lstring var_aliasAliasInfixKey_4546 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 91)) ;
  GALGAS_lstring var_newLiteralIntegerInfixKey_4665 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 92)) ;
  GALGAS_lstring var_aliasLiteralIntegerInfixKey_4783 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 93)) ;
  GALGAS_lstring var_literalIntegerNewInfixKey_4903 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 94)), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 94)) ;
  GALGAS_lstring var_literalIntegerAliasInfixKey_5020 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 95)), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 95)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_newTypeProxy_5126 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mNewTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 96)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_oldTypeProxy_5215 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 97)) ;
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 98)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mNonEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 109)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictInfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 120)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mInfEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 131)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictSupOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 142)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSupEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 153)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAndOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 164)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mOrOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 175)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mXorOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 186)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mBooleanXorOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 197)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 208)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 219)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 230)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 241)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 252)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 263)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 274)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 285)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 296)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 307)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mLeftShiftOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 318)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mRightShiftOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 329)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 340)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mNotOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 341)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 342)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedTypeName.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 352)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 353)) ;
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 357)) ;
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
                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inNewTypeProxy,
                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOldTypeProxy,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedAliasedInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 377)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_12890 ;
    GALGAS_infixOperatorDescription var_operation_12937 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedAliasedInfixKey, var_resultType_12890, var_operation_12937, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 378)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_12890.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_resultType_12890 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewNewInfixKey, var_resultType_12890, var_operation_12937, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 386)) ;
    }
  }
  const enumGalgasBool test_2 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedLiteralIntegerInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 392)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_13324 ;
    GALGAS_infixOperatorDescription var_operation_13371 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedLiteralIntegerInfixKey, var_resultType_13324, var_operation_13371, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 393)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_resultType_13324.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_resultType_13324 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewLiteralIntegerInfixKey, var_resultType_13324, var_operation_13371, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 401)) ;
    }
  }
  const enumGalgasBool test_4 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inLiteralIntegerAliasInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 407)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_13765 ;
    GALGAS_infixOperatorDescription var_operation_13812 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inLiteralIntegerAliasInfixKey, var_resultType_13765, var_operation_13812, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 408)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_resultType_13765.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_resultType_13765 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inLiteralIntegerNewInfixKey, var_resultType_13765, var_operation_13812, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 416)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@integerDeclaration location'                              *
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

static void defineExtensionGetter_integerDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                 extensionGetter_integerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_location (defineExtensionGetter_integerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@integerDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
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

static void defineExtensionMethod_integerDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                     extensionMethod_integerDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_addExtension (defineExtensionMethod_integerDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@integerDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName_1957 = function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 40)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 40)) ;
  {
  const GALGAS_integerDeclaration temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_1957, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_1957, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)) COMMA_SOURCE_FILE ("type-integer.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                               extensionMethod_integerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInPrecedenceGraph (defineExtensionMethod_integerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@integerDeclaration keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)).getter_string (SOURCE_FILE ("type-integer.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                                           extensionGetter_integerDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@integerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName_3218 = callExtensionGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 61)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 61)) ;
  GALGAS_bigint var_min_3281 ;
  GALGAS_bigint var_max_3295 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_min_3281 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 66)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 66)) COMMA_SOURCE_FILE ("type-integer.galgas", 66)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 66)) ;
    var_max_3295 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 67)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) COMMA_SOURCE_FILE ("type-integer.galgas", 67)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) ;
  }else if (kBoolFalse == test_1) {
    var_min_3281 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 69)) ;
    var_max_3295 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)).left_shift_operation (object->mProperty_mSize COMMA_SOURCE_FILE ("type-integer.galgas", 70)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 70)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3218, GALGAS_typeKind::constructor_integer (var_min_3281, var_max_3295, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 75)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 73)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_3218, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_3218, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_3218, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 90)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                       extensionMethod_integerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInContext (defineExtensionMethod_integerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@integerDeclaration enterRoutinesInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                               extensionMethod_integerDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterRoutinesInContext (defineExtensionMethod_integerDeclaration_enterRoutinesInContext, NULL) ;

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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_5789 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 128)) ;
  GALGAS_lstring var_intIntOp_5910 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 130)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_5910, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 134))  COMMA_SOURCE_FILE ("type-integer.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_5910, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 139))  COMMA_SOURCE_FILE ("type-integer.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 136)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 144)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 144)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_5910, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 141)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 149)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 149)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_5910, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 146)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 154)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 154)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_5910, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 151)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 159)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 159)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_5910, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 162)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 166))  COMMA_SOURCE_FILE ("type-integer.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 163)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 171))  COMMA_SOURCE_FILE ("type-integer.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 168)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 176))  COMMA_SOURCE_FILE ("type-integer.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 173)) ;
    }
    {
    ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 178)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 184)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 192)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 189)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 197))  COMMA_SOURCE_FILE ("type-integer.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 194)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 202)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 202)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 199)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 207))  COMMA_SOURCE_FILE ("type-integer.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 204)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 212)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 212)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 209)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 217))  COMMA_SOURCE_FILE ("type-integer.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 214)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 222)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 222)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 219)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 227)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 227)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 224)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 232)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 232)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 229)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 237)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 237)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 234)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 243))  COMMA_SOURCE_FILE ("type-integer.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 240)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 248)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 248)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_5910, var_selfTypeProxy_5789, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 245)) ;
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
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  GALGAS_bool test_0 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 269)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 269)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left_10672 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_10646_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_10646_1, var_left_10672, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 270)) ;
    GALGAS_bigint var_right_10737 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_10710_1 ; // Joker input parameter
    constinArgument_inRightOperand.method_literalInteger (joker_10710_1, var_right_10737, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 271)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue_10827 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_10672, var_right_10737, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_10827  COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempVariable (constinArgument_inResultType, constinArgument_inOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 277)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 281)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 279)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_12019 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 302)) ;
  GALGAS_lstring var_intLiteralOp_12144 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 304)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_12144, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 308))  COMMA_SOURCE_FILE ("type-integer.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 305)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_12144, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 313))  COMMA_SOURCE_FILE ("type-integer.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 310)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 318)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 318)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_12144, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 315)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 323)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 323)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_12144, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 320)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 328)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 328)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_12144, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 325)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 333)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 333)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_12144, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 330)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 336)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 340))  COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 345))  COMMA_SOURCE_FILE ("type-integer.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 342)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 350))  COMMA_SOURCE_FILE ("type-integer.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 347)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 357)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 357)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 354)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 362))  COMMA_SOURCE_FILE ("type-integer.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 359)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 367)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 367)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 364)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 372))  COMMA_SOURCE_FILE ("type-integer.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 377)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 377)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 382))  COMMA_SOURCE_FILE ("type-integer.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 387)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 387)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 392)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 392)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 389)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 397)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 397)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 394)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 402)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 402)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 399)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 408))  COMMA_SOURCE_FILE ("type-integer.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 413)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 413)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_12144, var_selfTypeProxy_12019, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 410)) ;
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
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_16749 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_16715_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_16715_1, var_literalValue_16749, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 435)) ;
  GALGAS_bigint var_min_16803 ;
  GALGAS_bigint var_max_16824 ;
  GALGAS_bool joker_16826_2 ; // Joker input parameter
  GALGAS_uint joker_16826_1 ; // Joker input parameter
  extensionGetter_kind (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 436)).method_integer (var_min_16803, var_max_16824, joker_16826_2, joker_16826_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 436)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_16749.objectCompare (var_min_16803)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_16803.getter_string (SOURCE_FILE ("type-integer.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 438)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_16749.objectCompare (var_max_16824)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_16824.getter_string (SOURCE_FILE ("type-integer.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 440)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 440)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 440)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, constinArgument_inOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 442)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 445)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 443)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_18139 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 466)) ;
  GALGAS_lstring var_intLiteralOp_18264 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 468)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 468)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_18264, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 472))  COMMA_SOURCE_FILE ("type-integer.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 469)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_18264, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 477))  COMMA_SOURCE_FILE ("type-integer.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 474)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 482)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 482)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_18264, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 479)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 487)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 487)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_18264, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 484)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 492)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 492)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_18264, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 489)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 497)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 497)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_18264, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 494)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 500)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 504))  COMMA_SOURCE_FILE ("type-integer.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 501)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 509))  COMMA_SOURCE_FILE ("type-integer.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 506)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 514))  COMMA_SOURCE_FILE ("type-integer.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 511)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 521)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 521)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 518)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 526))  COMMA_SOURCE_FILE ("type-integer.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 523)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 531)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 531)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 528)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 536))  COMMA_SOURCE_FILE ("type-integer.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 533)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 541)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 541)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 538)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 546))  COMMA_SOURCE_FILE ("type-integer.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 543)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 551)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 551)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 548)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 556)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 556)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 553)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 561)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 561)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 558)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 566)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 566)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 563)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 572))  COMMA_SOURCE_FILE ("type-integer.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 569)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 577)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 577)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_18264, var_selfTypeProxy_18139, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 574)) ;
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
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_22843 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_22809_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_22809_1, var_literalValue_22843, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 599)) ;
  GALGAS_bigint var_min_22898 ;
  GALGAS_bigint var_max_22919 ;
  GALGAS_bool joker_22921_2 ; // Joker input parameter
  GALGAS_uint joker_22921_1 ; // Joker input parameter
  extensionGetter_kind (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)).method_integer (var_min_22898, var_max_22919, joker_22921_2, joker_22921_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_22843.objectCompare (var_min_22898)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_22898.getter_string (SOURCE_FILE ("type-integer.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 602)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_22843.objectCompare (var_max_22919)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_22919.getter_string (SOURCE_FILE ("type-integer.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 604)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 604)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 604)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, constinArgument_inOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 606)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 609)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 607)) ;
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
//                          Overriding extension getter '@literalIntegerDeclaration location'                          *
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

static void defineExtensionGetter_literalIntegerDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                 extensionGetter_literalIntegerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_location (defineExtensionGetter_literalIntegerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@literalIntegerDeclaration addExtension'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
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

static void defineExtensionMethod_literalIntegerDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                     extensionMethod_literalIntegerDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_addExtension (defineExtensionMethod_literalIntegerDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerDeclaration enterInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclaration * object = (const cPtr_literalIntegerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclaration) ;
  GALGAS_lstring var_staticIntegerTypeName_1717 = function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)) ;
  {
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName_1717, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName_1717, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                               extensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInPrecedenceGraph (defineExtensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@literalIntegerDeclaration keyRepresentationForErrorSignaling'             *
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

static void defineExtensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                                           extensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerDeclaration enterRoutinesInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                              const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                              GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                               extensionMethod_literalIntegerDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterRoutinesInContext (defineExtensionMethod_literalIntegerDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@literalIntegerDeclaration enterInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_enterInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_3347 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 62)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 62)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3347, GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("type-literal-integer.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 64)) ;
  }
  {
  routine_enterLiteralIntegerOperators (var_integerTypeName_3347, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 69)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                       extensionMethod_literalIntegerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInContext (defineExtensionMethod_literalIntegerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterLiteralIntegerOperators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                           GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_intIntOp_3901 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 82)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_4010 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)) ;
  ioArgument_ioContext.mProperty_mLiteralIntegerType = var_selfTypeProxy_4010 ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 89))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 86)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 94))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 91)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 99))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 96)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 104))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 114))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 111)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 120))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 117)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 125))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 122)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 130))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 127)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 132)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 136)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 143))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 140)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 148))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 145)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 153))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 150)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 158))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 155)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 163))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 160)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 168))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 165)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 173))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 170)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 178))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 175)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 183))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 180)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 188))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 185)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 194))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 191)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 199))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 196)) ;
  }
}


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
                                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_9068 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_9037_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_9037_1, var_leftValue_9068, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 232)) ;
  GALGAS_bigint var_rightValue_9136 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_9104_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_9104_1, var_rightValue_9136, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 233)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_9150 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_9068, var_rightValue_9136, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 234)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_9150  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                  extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

