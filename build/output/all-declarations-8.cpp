#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-8.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mSelfType (),
mProperty_mDriverName (),
mProperty_mMode () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR_2D_element::~ GALGAS_interruptMapIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_PLMType & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_mode & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mSelfType (inOperand1),
mProperty_mDriverName (inOperand2),
mProperty_mMode (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_PLMType & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_mode & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_interruptMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_interruptMapIR_2D_element::objectCompare (const GALGAS_interruptMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfType.objectCompare (inOperand.mProperty_mSelfType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverName.objectCompare (inOperand.mProperty_mDriverName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_interruptMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSelfType.isValid () && mProperty_mDriverName.isValid () && mProperty_mMode.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSelfType.drop () ;
  mProperty_mDriverName.drop () ;
  mProperty_mMode.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_interruptMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_interruptMapIR_2D_element::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_interruptMapIR_2D_element::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_interruptMapIR_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @interruptMapIR-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptMapIR_2D_element ("interruptMapIR-element",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_interruptMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_interruptMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST_2D_element::GALGAS_guardDeclarationListAST_2D_element (void) :
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST_2D_element::~ GALGAS_guardDeclarationListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST_2D_element::GALGAS_guardDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bool & inOperand1,
                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                      const GALGAS_routineFormalArgumentListAST & inOperand3,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST_2D_element GALGAS_guardDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1,
                                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                                      const GALGAS_routineFormalArgumentListAST & inOperand3,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_guardDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mGuardName.isValid () && mProperty_mIsPublic.isValid () && mProperty_mGuardAttributeList.isValid () && mProperty_mGuardFormalArgumentList.isValid () && mProperty_mGuardKind.isValid () && mProperty_mGuardInstructionList.isValid () && mProperty_mEndOfGuardDeclaration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardDeclarationListAST_2D_element::drop (void) {
  mProperty_mGuardName.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mGuardAttributeList.drop () ;
  mProperty_mGuardFormalArgumentList.drop () ;
  mProperty_mGuardKind.drop () ;
  mProperty_mGuardInstructionList.drop () ;
  mProperty_mEndOfGuardDeclaration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_guardDeclarationListAST_2D_element::getter_mGuardName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardDeclarationListAST_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_guardDeclarationListAST_2D_element::getter_mGuardAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_guardDeclarationListAST_2D_element::getter_mGuardFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKind GALGAS_guardDeclarationListAST_2D_element::getter_mGuardKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_guardDeclarationListAST_2D_element::getter_mGuardInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_guardDeclarationListAST_2D_element::getter_mEndOfGuardDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfGuardDeclaration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @guardDeclarationListAST-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardDeclarationListAST_2D_element ("guardDeclarationListAST-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mTypeProxy () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature_2D_element::~ GALGAS_routineTypedSignature_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mTypeProxy (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineTypedSignature_2D_element::objectCompare (const GALGAS_routineTypedSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeProxy.objectCompare (inOperand.mProperty_mTypeProxy) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineTypedSignature_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mTypeProxy.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mTypeProxy.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_routineTypedSignature_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentPassingMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineTypedSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineTypedSignature_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeProxy ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @routineTypedSignature-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ("routineTypedSignature-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineTypedSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineTypedSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mSignature () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext_2D_element::~ GALGAS_guardMapForContext_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_routineTypedSignature & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mSignature (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guardMapForContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_routineTypedSignature::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_guardMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mSignature.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_guardMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardMapForContext_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_guardMapForContext_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @guardMapForContext-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapForContext_2D_element ("guardMapForContext-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext_2D_element::GALGAS_routineArgumentSignatureMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineLLVMName (),
mProperty_mDescriptor () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext_2D_element::~ GALGAS_routineArgumentSignatureMapForContext_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext_2D_element::GALGAS_routineArgumentSignatureMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_routineDescriptor & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRoutineLLVMName (inOperand1),
mProperty_mDescriptor (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineArgumentSignatureMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineLLVMName.isValid () && mProperty_mDescriptor.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineArgumentSignatureMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineLLVMName.drop () ;
  mProperty_mDescriptor.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineArgumentSignatureMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineArgumentSignatureMapForContext_2D_element::getter_mRoutineLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineDescriptor GALGAS_routineArgumentSignatureMapForContext_2D_element::getter_mDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDescriptor ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @routineArgumentSignatureMapForContext-element type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext_2D_element ("routineArgumentSignatureMapForContext-element",
                                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineArgumentSignatureMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineArgumentSignatureMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineArgumentSignatureMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap_2D_element::GALGAS_flatValuedObjectMap_2D_element (void) :
mProperty_lkey (),
mProperty_mObjectState (),
mProperty_mObjectShouldBeValuedAtEndOfScope (),
mProperty_mValuedObject () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap_2D_element::~ GALGAS_flatValuedObjectMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap_2D_element::GALGAS_flatValuedObjectMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_valuedObjectState & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_valuedObject & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mObjectState (inOperand1),
mProperty_mObjectShouldBeValuedAtEndOfScope (inOperand2),
mProperty_mValuedObject (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap_2D_element GALGAS_flatValuedObjectMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_valuedObjectState & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_valuedObject & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_flatValuedObjectMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_flatValuedObjectMap_2D_element::objectCompare (const GALGAS_flatValuedObjectMap_2D_element & inOperand) const {
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
    result = mProperty_mValuedObject.objectCompare (inOperand.mProperty_mValuedObject) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_flatValuedObjectMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mValuedObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_flatValuedObjectMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObjectState.drop () ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.drop () ;
  mProperty_mValuedObject.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_flatValuedObjectMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @flatValuedObjectMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectState.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValuedObject.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_flatValuedObjectMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_flatValuedObjectMap_2D_element::getter_mObjectState (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectState ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_flatValuedObjectMap_2D_element::getter_mObjectShouldBeValuedAtEndOfScope (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_flatValuedObjectMap_2D_element::getter_mValuedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValuedObject ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @flatValuedObjectMap-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ("flatValuedObjectMap-element",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_flatValuedObjectMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_flatValuedObjectMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_flatValuedObjectMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap_2D_element GALGAS_flatValuedObjectMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap_2D_element result ;
  const GALGAS_flatValuedObjectMap_2D_element * p = (const GALGAS_flatValuedObjectMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_flatValuedObjectMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mState () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap_2D_element::~ GALGAS_referenceStateMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_valuedObjectState & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mState (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_valuedObjectState & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_referenceStateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_referenceStateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_referenceStateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mState.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_referenceStateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_referenceStateMap_2D_element::getter_mState (UNUSED_LOCATION_ARGS) const {
  return mProperty_mState ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @referenceStateMap-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_referenceStateMap_2D_element ("referenceStateMap-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_referenceStateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_referenceStateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mResultType (),
mProperty_mOperation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_PLMType & inOperand1,
                                                                        const GALGAS_infixOperatorDescription & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultType (inOperand1),
mProperty_mOperation (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_PLMType & inOperand1,
                                                                                        const GALGAS_infixOperatorDescription & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_infixOperatorMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_infixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_infixOperatorMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap_2D_element::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @infixOperatorMap-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ("infixOperatorMap-element",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_infixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_2D_element::~ GALGAS_prefixOperatorMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefixOperatorMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_prefixOperatorMap_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_prefixOperatorMap_2D_element::objectCompare (const GALGAS_prefixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_prefixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_prefixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @prefixOperatorMap-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ("prefixOperatorMap-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_prefixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList_2D_element::GALGAS_globalStructuredConstantList_2D_element (void) :
mProperty_mType (),
mProperty_mOperandIRList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList_2D_element::~ GALGAS_globalStructuredConstantList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList_2D_element::GALGAS_globalStructuredConstantList_2D_element (const GALGAS_PLMType & inOperand0,
                                                                                                const GALGAS_operandIRList & inOperand1) :
mProperty_mType (inOperand0),
mProperty_mOperandIRList (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalStructuredConstantList_2D_element (GALGAS_PLMType::constructor_default (HERE),
                                                         GALGAS_operandIRList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                                                                const GALGAS_operandIRList & inOperand1 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalStructuredConstantList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_globalStructuredConstantList_2D_element::objectCompare (const GALGAS_globalStructuredConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperandIRList.objectCompare (inOperand.mProperty_mOperandIRList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_globalStructuredConstantList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mOperandIRList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mOperandIRList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @globalStructuredConstantList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperandIRList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_globalStructuredConstantList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_globalStructuredConstantList_2D_element::getter_mOperandIRList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandIRList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @globalStructuredConstantList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ("globalStructuredConstantList-element",
                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalStructuredConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalStructuredConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalStructuredConstantList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList_2D_element result ;
  const GALGAS_globalStructuredConstantList_2D_element * p = (const GALGAS_globalStructuredConstantList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalStructuredConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap_2D_element::~ GALGAS_staticStringMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticStringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticStringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_staticStringMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticStringMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_staticStringMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_staticStringMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @staticStringMap-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticStringMap_2D_element ("staticStringMap-element",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticStringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticStringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_objectIR & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_globalConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_globalConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @globalConstantMap-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap_2D_element ("globalConstantMap-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInterruptionPanicCode () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap_2D_element::~ GALGAS_availableInterruptMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_interruptionPanicCode & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_availableInterruptMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_availableInterruptMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_availableInterruptMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_availableInterruptMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionPanicCode GALGAS_availableInterruptMap_2D_element::getter_mInterruptionPanicCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionPanicCode ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @availableInterruptMap-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ("availableInterruptMap-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_availableInterruptMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_availableInterruptMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList_2D_element::GALGAS_arcAssignmentList_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType (),
mProperty_mPropertyIndexPath () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList_2D_element::~ GALGAS_arcAssignmentList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList_2D_element::GALGAS_arcAssignmentList_2D_element (const GALGAS_string & inOperand0,
                                                                          const GALGAS_PLMType & inOperand1,
                                                                          const GALGAS_uintlist & inOperand2) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1),
mProperty_mPropertyIndexPath (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_arcAssignmentList_2D_element (GALGAS_string::constructor_default (HERE),
                                              GALGAS_PLMType::constructor_default (HERE),
                                              GALGAS_uintlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_PLMType & inOperand1,
                                                                                          const GALGAS_uintlist & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arcAssignmentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_arcAssignmentList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_arcAssignmentList_2D_element::objectCompare (const GALGAS_arcAssignmentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyType.objectCompare (inOperand.mProperty_mPropertyType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyIndexPath.objectCompare (inOperand.mProperty_mPropertyIndexPath) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_arcAssignmentList_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () && mProperty_mPropertyIndexPath.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
  mProperty_mPropertyIndexPath.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @arcAssignmentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyIndexPath.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arcAssignmentList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_arcAssignmentList_2D_element::getter_mPropertyType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uintlist GALGAS_arcAssignmentList_2D_element::getter_mPropertyIndexPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyIndexPath ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @arcAssignmentList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ("arcAssignmentList-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arcAssignmentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arcAssignmentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arcAssignmentList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList_2D_element result ;
  const GALGAS_arcAssignmentList_2D_element * p = (const GALGAS_arcAssignmentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arcAssignmentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList_2D_element::GALGAS_orderedTypeList_2D_element (void) :
mProperty_mType (),
mProperty_mIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList_2D_element::~ GALGAS_orderedTypeList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList_2D_element::GALGAS_orderedTypeList_2D_element (const GALGAS_PLMType & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_mType (inOperand0),
mProperty_mIndex (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList_2D_element GALGAS_orderedTypeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_orderedTypeList_2D_element (GALGAS_PLMType::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList_2D_element GALGAS_orderedTypeList_2D_element::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_orderedTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_orderedTypeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_orderedTypeList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orderedTypeList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_orderedTypeList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_orderedTypeList_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @orderedTypeList-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orderedTypeList_2D_element ("orderedTypeList-element",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_orderedTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orderedTypeList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_orderedTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orderedTypeList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mAccess () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_bool & inOperand1,
                                                              const GALGAS_propertyAccessKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mAccess (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_bool & inOperand1,
                                                                              const GALGAS_propertyAccessKind & inOperand2 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_propertyMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyMap_2D_element::objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mAccess.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mAccess.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_propertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMap_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAccessKind GALGAS_propertyMap_2D_element::getter_mAccess (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccess ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @propertyMap-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap_2D_element ("propertyMap-element",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (void) :
mProperty_mSelector (),
mProperty_mType (),
mProperty_mFieldIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorSignature_2D_element::~ GALGAS_constructorSignature_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_PLMType & inOperand1,
                                                                                const GALGAS_uint & inOperand2) :
mProperty_mSelector (inOperand0),
mProperty_mType (inOperand1),
mProperty_mFieldIndex (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorSignature_2D_element (GALGAS_string::constructor_default (HERE),
                                                 GALGAS_PLMType::constructor_default (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_PLMType & inOperand1,
                                                                                                const GALGAS_uint & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_constructorSignature_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mType.isValid () && mProperty_mFieldIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorSignature_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
  mProperty_mFieldIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_constructorSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_constructorSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_constructorSignature_2D_element::getter_mFieldIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @constructorSignature-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorSignature_2D_element ("constructorSignature-element",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_constructorSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_constructorSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSignature (),
mProperty_mInitValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_constructorSignature & inOperand1,
                                                                    const GALGAS_constructorValue & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSignature (inOperand1),
mProperty_mInitValue (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mInitValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_constructorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorSignature GALGAS_constructorMap_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorValue GALGAS_constructorMap_2D_element::getter_mInitValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @constructorMap-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR_2D_element::GALGAS_routineFormalArgumentListIR_2D_element (void) :
mProperty_mFormalArgumentKind (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR_2D_element::~ GALGAS_routineFormalArgumentListIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR_2D_element::GALGAS_routineFormalArgumentListIR_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                              const GALGAS_PLMType & inOperand1,
                                                                                              const GALGAS_string & inOperand2) :
mProperty_mFormalArgumentKind (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR_2D_element GALGAS_routineFormalArgumentListIR_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                              const GALGAS_PLMType & inOperand1,
                                                                                                              const GALGAS_string & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineFormalArgumentListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineFormalArgumentListIR_2D_element::objectCompare (const GALGAS_routineFormalArgumentListIR_2D_element & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineFormalArgumentListIR_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentKind.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR_2D_element::drop (void) {
  mProperty_mFormalArgumentKind.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @routineFormalArgumentListIR-element:" ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListIR_2D_element::getter_mFormalArgumentKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_routineFormalArgumentListIR_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_routineFormalArgumentListIR_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @routineFormalArgumentListIR-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ("routineFormalArgumentListIR-element",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineFormalArgumentListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR_2D_element GALGAS_routineFormalArgumentListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR_2D_element result ;
  const GALGAS_routineFormalArgumentListIR_2D_element * p = (const GALGAS_routineFormalArgumentListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (void) :
mProperty_mVarLLVMName (),
mProperty_mLLVMType (),
mProperty_mFormalInputArgument () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList_2D_element::~ GALGAS_allocaList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (const GALGAS_string & inOperand0,
                                                            const GALGAS_PLMType & inOperand1,
                                                            const GALGAS_bool & inOperand2) :
mProperty_mVarLLVMName (inOperand0),
mProperty_mLLVMType (inOperand1),
mProperty_mFormalInputArgument (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allocaList_2D_element (GALGAS_string::constructor_default (HERE),
                                       GALGAS_PLMType::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                            const GALGAS_PLMType & inOperand1,
                                                                            const GALGAS_bool & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_allocaList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_allocaList_2D_element::objectCompare (const GALGAS_allocaList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mVarLLVMName.objectCompare (inOperand.mProperty_mVarLLVMName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLLVMType.objectCompare (inOperand.mProperty_mLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalInputArgument.objectCompare (inOperand.mProperty_mFormalInputArgument) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_allocaList_2D_element::isValid (void) const {
  return mProperty_mVarLLVMName.isValid () && mProperty_mLLVMType.isValid () && mProperty_mFormalInputArgument.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList_2D_element::drop (void) {
  mProperty_mVarLLVMName.drop () ;
  mProperty_mLLVMType.drop () ;
  mProperty_mFormalInputArgument.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @allocaList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mVarLLVMName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLLVMType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_allocaList_2D_element::getter_mVarLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_allocaList_2D_element::getter_mLLVMType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_allocaList_2D_element::getter_mFormalInputArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalInputArgument ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @allocaList-element type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allocaList_2D_element ("allocaList-element",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_allocaList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_allocaList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  const GALGAS_allocaList_2D_element * p = (const GALGAS_allocaList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allocaList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap_2D_element::~ GALGAS_panicRoutinePriorityMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_panicRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_panicRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_panicRoutinePriorityMap_2D_element::objectCompare (const GALGAS_panicRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_panicRoutinePriorityMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_panicRoutinePriorityMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_panicRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @panicRoutinePriorityMap-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ("panicRoutinePriorityMap-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallEffectiveParameterListAST_2D_element::~ GALGAS_functionCallEffectiveParameterListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_expressionAST & inOperand1 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_functionCallEffectiveParameterListAST_2D_element::objectCompare (const GALGAS_functionCallEffectiveParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_functionCallEffectiveParameterListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionCallEffectiveParameterListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionCallEffectiveParameterListAST_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @functionCallEffectiveParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionCallEffectiveParameterListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @functionCallEffectiveParameterListAST-element type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ("functionCallEffectiveParameterListAST-element",
                                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  const GALGAS_functionCallEffectiveParameterListAST_2D_element * p = (const GALGAS_functionCallEffectiveParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallEffectiveParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceFieldListAST_2D_element::GALGAS_integerSliceFieldListAST_2D_element (void) :
mProperty_mSliceWidth (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceFieldListAST_2D_element::~ GALGAS_integerSliceFieldListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceFieldListAST_2D_element::GALGAS_integerSliceFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_expressionAST & inOperand1,
                                                                                        const GALGAS_location & inOperand2) :
mProperty_mSliceWidth (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceFieldListAST_2D_element GALGAS_integerSliceFieldListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_expressionAST & inOperand1,
                                                                                                        const GALGAS_location & inOperand2 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_integerSliceFieldListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_integerSliceFieldListAST_2D_element::objectCompare (const GALGAS_integerSliceFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSliceWidth.objectCompare (inOperand.mProperty_mSliceWidth) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpressionLocation.objectCompare (inOperand.mProperty_mExpressionLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_integerSliceFieldListAST_2D_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_integerSliceFieldListAST_2D_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_integerSliceFieldListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @integerSliceFieldListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSliceWidth.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_integerSliceFieldListAST_2D_element::getter_mSliceWidth (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSliceWidth ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_integerSliceFieldListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_integerSliceFieldListAST_2D_element::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @integerSliceFieldListAST-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ("integerSliceFieldListAST-element",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_integerSliceFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_integerSliceFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceFieldListAST_2D_element GALGAS_integerSliceFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST_2D_element result ;
  const GALGAS_integerSliceFieldListAST_2D_element * p = (const GALGAS_integerSliceFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerSliceFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (void) :
mProperty_mFieldName (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIntegerFieldListAST_2D_element::~ GALGAS_registerIntegerFieldListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_expressionAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2) :
mProperty_mFieldName (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_registerIntegerFieldListAST_2D_element::isValid (void) const {
  return mProperty_mFieldName.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerIntegerFieldListAST_2D_element::drop (void) {
  mProperty_mFieldName.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_registerIntegerFieldListAST_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_registerIntegerFieldListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_registerIntegerFieldListAST_2D_element::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @registerIntegerFieldListAST-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ("registerIntegerFieldListAST-element",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_registerIntegerFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentListAST_2D_element::GALGAS_sliceAssignmentListAST_2D_element (void) :
mProperty_mSliceWidth (),
mProperty_mSliceKind () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentListAST_2D_element::~ GALGAS_sliceAssignmentListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentListAST_2D_element::GALGAS_sliceAssignmentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_sliceTargetAST & inOperand1) :
mProperty_mSliceWidth (inOperand0),
mProperty_mSliceKind (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentListAST_2D_element GALGAS_sliceAssignmentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_sliceTargetAST & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sliceAssignmentListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_sliceAssignmentListAST_2D_element::objectCompare (const GALGAS_sliceAssignmentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSliceWidth.objectCompare (inOperand.mProperty_mSliceWidth) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSliceKind.objectCompare (inOperand.mProperty_mSliceKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_sliceAssignmentListAST_2D_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mSliceKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceAssignmentListAST_2D_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mSliceKind.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceAssignmentListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @sliceAssignmentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSliceWidth.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSliceKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_sliceAssignmentListAST_2D_element::getter_mSliceWidth (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSliceWidth ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceTargetAST GALGAS_sliceAssignmentListAST_2D_element::getter_mSliceKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSliceKind ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @sliceAssignmentListAST-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ("sliceAssignmentListAST-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sliceAssignmentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sliceAssignmentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentListAST_2D_element GALGAS_sliceAssignmentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST_2D_element result ;
  const GALGAS_sliceAssignmentListAST_2D_element * p = (const GALGAS_sliceAssignmentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceAssignmentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (void) :
mProperty_mEffectiveParameterPassingMode (),
mProperty_mSelector (),
mProperty_mParameterType () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList_2D_element::~ GALGAS_procEffectiveParameterList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_PLMType & inOperand2) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mParameterType (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::constructor_new (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_PLMType & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procEffectiveParameterList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_procEffectiveParameterList_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mParameterType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_procEffectiveParameterList_2D_element::drop (void) {
  mProperty_mEffectiveParameterPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mParameterType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentPassingModeAST GALGAS_procEffectiveParameterList_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterPassingMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_procEffectiveParameterList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_procEffectiveParameterList_2D_element::getter_mParameterType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @procEffectiveParameterList-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ("procEffectiveParameterList-element",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_procEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (void) :
mProperty_mEffectiveParameterKind (),
mProperty_mSelector () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST_2D_element::~ GALGAS_effectiveArgumentListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1) :
mProperty_mEffectiveParameterKind (inOperand0),
mProperty_mSelector (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::constructor_new (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_effectiveArgumentListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_effectiveArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterKind.isValid () && mProperty_mSelector.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST_2D_element::drop (void) {
  mProperty_mEffectiveParameterKind.drop () ;
  mProperty_mSelector.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentListAST_2D_element::getter_mEffectiveParameterKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_effectiveArgumentListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @effectiveArgumentListAST-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ("effectiveArgumentListAST-element",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_effectiveArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_effectiveArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element::GALGAS_controlRegisterGroupArrayList_2D_element (void) :
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element::~ GALGAS_controlRegisterGroupArrayList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element::GALGAS_controlRegisterGroupArrayList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lbigintlist & inOperand1) :
mProperty_mGroupName (inOperand0),
mProperty_mBaseAddresses (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterGroupArrayList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lbigintlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lbigintlist & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterGroupArrayList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterGroupArrayList_2D_element::objectCompare (const GALGAS_controlRegisterGroupArrayList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGroupName.objectCompare (inOperand.mProperty_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBaseAddresses.objectCompare (inOperand.mProperty_mBaseAddresses) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterGroupArrayList_2D_element::isValid (void) const {
  return mProperty_mGroupName.isValid () && mProperty_mBaseAddresses.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList_2D_element::drop (void) {
  mProperty_mGroupName.drop () ;
  mProperty_mBaseAddresses.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterGroupArrayList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBaseAddresses.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterGroupArrayList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigintlist GALGAS_controlRegisterGroupArrayList_2D_element::getter_mBaseAddresses (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseAddresses ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @controlRegisterGroupArrayList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ("controlRegisterGroupArrayList-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupArrayList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterGroupArrayList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupArrayList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList_2D_element result ;
  const GALGAS_controlRegisterGroupArrayList_2D_element * p = (const GALGAS_controlRegisterGroupArrayList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupArrayList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mSourceExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMapIR_2D_element::~ GALGAS_globalConstantMapIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_objectIR & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mSourceExpression (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_globalConstantMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mSourceExpression.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalConstantMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mSourceExpression.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_globalConstantMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_globalConstantMapIR_2D_element::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @globalConstantMapIR-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ("globalConstantMapIR-element",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalConstantMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalConstantMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMapIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element::GALGAS_routineListIR_2D_element (void) :
mProperty_mRoutine () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element::~ GALGAS_routineListIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element::GALGAS_routineListIR_2D_element (const GALGAS_abstractRoutineIR & inOperand0) :
mProperty_mRoutine (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element GALGAS_routineListIR_2D_element::constructor_new (const GALGAS_abstractRoutineIR & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineListIR_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_routineListIR_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineListIR_2D_element::objectCompare (const GALGAS_routineListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutine.objectCompare (inOperand.mProperty_mRoutine) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineListIR_2D_element::isValid (void) const {
  return mProperty_mRoutine.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineListIR_2D_element::drop (void) {
  mProperty_mRoutine.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineListIR_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @routineListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRoutine.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractRoutineIR GALGAS_routineListIR_2D_element::getter_mRoutine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutine ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @routineListIR-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineListIR_2D_element ("routineListIR-element",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineListIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineListIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element GALGAS_routineListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR_2D_element result ;
  const GALGAS_routineListIR_2D_element * p = (const GALGAS_routineListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element::GALGAS_routineAccessibilityIR_2D_element (void) :
mProperty_mRoutine (),
mProperty_mAccessibleRoutineSet () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element::~ GALGAS_routineAccessibilityIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element::GALGAS_routineAccessibilityIR_2D_element (const GALGAS_abstractRoutineIR & inOperand0,
                                                                                    const GALGAS_stringset & inOperand1) :
mProperty_mRoutine (inOperand0),
mProperty_mAccessibleRoutineSet (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element GALGAS_routineAccessibilityIR_2D_element::constructor_new (const GALGAS_abstractRoutineIR & inOperand0,
                                                                                                    const GALGAS_stringset & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_routineAccessibilityIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineAccessibilityIR_2D_element::objectCompare (const GALGAS_routineAccessibilityIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutine.objectCompare (inOperand.mProperty_mRoutine) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessibleRoutineSet.objectCompare (inOperand.mProperty_mAccessibleRoutineSet) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineAccessibilityIR_2D_element::isValid (void) const {
  return mProperty_mRoutine.isValid () && mProperty_mAccessibleRoutineSet.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineAccessibilityIR_2D_element::drop (void) {
  mProperty_mRoutine.drop () ;
  mProperty_mAccessibleRoutineSet.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineAccessibilityIR_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @routineAccessibilityIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRoutine.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessibleRoutineSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractRoutineIR GALGAS_routineAccessibilityIR_2D_element::getter_mRoutine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_routineAccessibilityIR_2D_element::getter_mAccessibleRoutineSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessibleRoutineSet ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @routineAccessibilityIR-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ("routineAccessibilityIR-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineAccessibilityIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineAccessibilityIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineAccessibilityIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element GALGAS_routineAccessibilityIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR_2D_element result ;
  const GALGAS_routineAccessibilityIR_2D_element * p = (const GALGAS_routineAccessibilityIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineAccessibilityIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAccessibilityIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters::GALGAS_targetParameters (void) :
mProperty_mConfigurationLocation (),
mProperty_mPython_5F_utilityToolList (),
mProperty_mPython_5F_build (),
mProperty_mLinkerScript (),
mProperty_mPointerSize (),
mProperty_mHandleDynamicArray (),
mProperty_mSystemStackSize (),
mProperty_mStackedUserRegisterOnInterruptByteSize (),
mProperty_mNopInstructionStringInLLVM (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterEndAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier (),
mProperty_mSectionHandler (),
mProperty_mSectionPushedRegisterByteSize (),
mProperty_mSectionDispatcherHeader (),
mProperty_mSectionDispatcherEntry (),
mProperty_mSectionDispatcherInvocationFromAnyMode (),
mProperty_mSectionDispatcherInvocationFromUserMode (),
mProperty_m_5F_C_5F_definitionFiles (),
mProperty_m_5F_S_5F_definitionFiles (),
mProperty_m_5F_LL_5F_definitionFiles (),
mProperty_mXtrInterruptHandler (),
mProperty_mUndefinedInterruptHandler (),
mProperty_mServiceHandler (),
mProperty_mServicePushedRegisterByteSize (),
mProperty_mServiceDispatcherEntry (),
mProperty_mServiceDispatcherHeader (),
mProperty_mServiceEntryNoReturnedValue (),
mProperty_mServiceEntryWithReturnValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters::~ GALGAS_targetParameters (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters::GALGAS_targetParameters (const GALGAS_location & inOperand0,
                                                  const GALGAS__32_lstringlist & inOperand1,
                                                  const GALGAS_lstring & inOperand2,
                                                  const GALGAS_lstring & inOperand3,
                                                  const GALGAS_uint & inOperand4,
                                                  const GALGAS_bool & inOperand5,
                                                  const GALGAS_lbigint & inOperand6,
                                                  const GALGAS_lbigint & inOperand7,
                                                  const GALGAS_lstring & inOperand8,
                                                  const GALGAS_lbigint & inOperand9,
                                                  const GALGAS_lbigint & inOperand10,
                                                  const GALGAS_lbigint & inOperand11,
                                                  const GALGAS_lbigint & inOperand12,
                                                  const GALGAS_lbigint & inOperand13,
                                                  const GALGAS_lstring & inOperand14,
                                                  const GALGAS_lbigint & inOperand15,
                                                  const GALGAS_lstring & inOperand16,
                                                  const GALGAS_lstring & inOperand17,
                                                  const GALGAS_lstring & inOperand18,
                                                  const GALGAS_lstring & inOperand19,
                                                  const GALGAS_lstringlist & inOperand20,
                                                  const GALGAS_lstringlist & inOperand21,
                                                  const GALGAS_lstringlist & inOperand22,
                                                  const GALGAS_lstring & inOperand23,
                                                  const GALGAS_lstring & inOperand24,
                                                  const GALGAS_lstring & inOperand25,
                                                  const GALGAS_lbigint & inOperand26,
                                                  const GALGAS_lstring & inOperand27,
                                                  const GALGAS_lstring & inOperand28,
                                                  const GALGAS_lstring & inOperand29,
                                                  const GALGAS_lstring & inOperand30) :
mProperty_mConfigurationLocation (inOperand0),
mProperty_mPython_5F_utilityToolList (inOperand1),
mProperty_mPython_5F_build (inOperand2),
mProperty_mLinkerScript (inOperand3),
mProperty_mPointerSize (inOperand4),
mProperty_mHandleDynamicArray (inOperand5),
mProperty_mSystemStackSize (inOperand6),
mProperty_mStackedUserRegisterOnInterruptByteSize (inOperand7),
mProperty_mNopInstructionStringInLLVM (inOperand8),
mProperty_mBitbandRegisterBaseAddress (inOperand9),
mProperty_mBitbandRegisterEndAddress (inOperand10),
mProperty_mBitbandRegisterRelocationAddress (inOperand11),
mProperty_mBitbandRegisterOffsetMultiplier (inOperand12),
mProperty_mBitbandRegisterBitMultiplier (inOperand13),
mProperty_mSectionHandler (inOperand14),
mProperty_mSectionPushedRegisterByteSize (inOperand15),
mProperty_mSectionDispatcherHeader (inOperand16),
mProperty_mSectionDispatcherEntry (inOperand17),
mProperty_mSectionDispatcherInvocationFromAnyMode (inOperand18),
mProperty_mSectionDispatcherInvocationFromUserMode (inOperand19),
mProperty_m_5F_C_5F_definitionFiles (inOperand20),
mProperty_m_5F_S_5F_definitionFiles (inOperand21),
mProperty_m_5F_LL_5F_definitionFiles (inOperand22),
mProperty_mXtrInterruptHandler (inOperand23),
mProperty_mUndefinedInterruptHandler (inOperand24),
mProperty_mServiceHandler (inOperand25),
mProperty_mServicePushedRegisterByteSize (inOperand26),
mProperty_mServiceDispatcherEntry (inOperand27),
mProperty_mServiceDispatcherHeader (inOperand28),
mProperty_mServiceEntryNoReturnedValue (inOperand29),
mProperty_mServiceEntryWithReturnValue (inOperand30) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_targetParameters::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_targetParameters (GALGAS_location::constructor_nowhere (HERE),
                                  GALGAS__32_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_uint::constructor_default (HERE),
                                  GALGAS_bool::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_targetParameters::constructor_new (const GALGAS_location & inOperand0,
                                                                  const GALGAS__32_lstringlist & inOperand1,
                                                                  const GALGAS_lstring & inOperand2,
                                                                  const GALGAS_lstring & inOperand3,
                                                                  const GALGAS_uint & inOperand4,
                                                                  const GALGAS_bool & inOperand5,
                                                                  const GALGAS_lbigint & inOperand6,
                                                                  const GALGAS_lbigint & inOperand7,
                                                                  const GALGAS_lstring & inOperand8,
                                                                  const GALGAS_lbigint & inOperand9,
                                                                  const GALGAS_lbigint & inOperand10,
                                                                  const GALGAS_lbigint & inOperand11,
                                                                  const GALGAS_lbigint & inOperand12,
                                                                  const GALGAS_lbigint & inOperand13,
                                                                  const GALGAS_lstring & inOperand14,
                                                                  const GALGAS_lbigint & inOperand15,
                                                                  const GALGAS_lstring & inOperand16,
                                                                  const GALGAS_lstring & inOperand17,
                                                                  const GALGAS_lstring & inOperand18,
                                                                  const GALGAS_lstring & inOperand19,
                                                                  const GALGAS_lstringlist & inOperand20,
                                                                  const GALGAS_lstringlist & inOperand21,
                                                                  const GALGAS_lstringlist & inOperand22,
                                                                  const GALGAS_lstring & inOperand23,
                                                                  const GALGAS_lstring & inOperand24,
                                                                  const GALGAS_lstring & inOperand25,
                                                                  const GALGAS_lbigint & inOperand26,
                                                                  const GALGAS_lstring & inOperand27,
                                                                  const GALGAS_lstring & inOperand28,
                                                                  const GALGAS_lstring & inOperand29,
                                                                  const GALGAS_lstring & inOperand30 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid ()) {
    result = GALGAS_targetParameters (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_targetParameters::objectCompare (const GALGAS_targetParameters & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConfigurationLocation.objectCompare (inOperand.mProperty_mConfigurationLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_utilityToolList.objectCompare (inOperand.mProperty_mPython_5F_utilityToolList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_build.objectCompare (inOperand.mProperty_mPython_5F_build) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLinkerScript.objectCompare (inOperand.mProperty_mLinkerScript) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPointerSize.objectCompare (inOperand.mProperty_mPointerSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleDynamicArray.objectCompare (inOperand.mProperty_mHandleDynamicArray) ;
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
    result = mProperty_mBitbandRegisterBaseAddress.objectCompare (inOperand.mProperty_mBitbandRegisterBaseAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterEndAddress.objectCompare (inOperand.mProperty_mBitbandRegisterEndAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterRelocationAddress.objectCompare (inOperand.mProperty_mBitbandRegisterRelocationAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterOffsetMultiplier.objectCompare (inOperand.mProperty_mBitbandRegisterOffsetMultiplier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterBitMultiplier.objectCompare (inOperand.mProperty_mBitbandRegisterBitMultiplier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionHandler.objectCompare (inOperand.mProperty_mSectionHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionPushedRegisterByteSize.objectCompare (inOperand.mProperty_mSectionPushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherHeader.objectCompare (inOperand.mProperty_mSectionDispatcherHeader) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherEntry.objectCompare (inOperand.mProperty_mSectionDispatcherEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherInvocationFromAnyMode.objectCompare (inOperand.mProperty_mSectionDispatcherInvocationFromAnyMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherInvocationFromUserMode.objectCompare (inOperand.mProperty_mSectionDispatcherInvocationFromUserMode) ;
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
    result = mProperty_mServiceHandler.objectCompare (inOperand.mProperty_mServiceHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServicePushedRegisterByteSize.objectCompare (inOperand.mProperty_mServicePushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherEntry.objectCompare (inOperand.mProperty_mServiceDispatcherEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherHeader.objectCompare (inOperand.mProperty_mServiceDispatcherHeader) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceEntryNoReturnedValue.objectCompare (inOperand.mProperty_mServiceEntryNoReturnedValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceEntryWithReturnValue.objectCompare (inOperand.mProperty_mServiceEntryWithReturnValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_targetParameters::isValid (void) const {
  return mProperty_mConfigurationLocation.isValid () && mProperty_mPython_5F_utilityToolList.isValid () && mProperty_mPython_5F_build.isValid () && mProperty_mLinkerScript.isValid () && mProperty_mPointerSize.isValid () && mProperty_mHandleDynamicArray.isValid () && mProperty_mSystemStackSize.isValid () && mProperty_mStackedUserRegisterOnInterruptByteSize.isValid () && mProperty_mNopInstructionStringInLLVM.isValid () && mProperty_mBitbandRegisterBaseAddress.isValid () && mProperty_mBitbandRegisterEndAddress.isValid () && mProperty_mBitbandRegisterRelocationAddress.isValid () && mProperty_mBitbandRegisterOffsetMultiplier.isValid () && mProperty_mBitbandRegisterBitMultiplier.isValid () && mProperty_mSectionHandler.isValid () && mProperty_mSectionPushedRegisterByteSize.isValid () && mProperty_mSectionDispatcherHeader.isValid () && mProperty_mSectionDispatcherEntry.isValid () && mProperty_mSectionDispatcherInvocationFromAnyMode.isValid () && mProperty_mSectionDispatcherInvocationFromUserMode.isValid () && mProperty_m_5F_C_5F_definitionFiles.isValid () && mProperty_m_5F_S_5F_definitionFiles.isValid () && mProperty_m_5F_LL_5F_definitionFiles.isValid () && mProperty_mXtrInterruptHandler.isValid () && mProperty_mUndefinedInterruptHandler.isValid () && mProperty_mServiceHandler.isValid () && mProperty_mServicePushedRegisterByteSize.isValid () && mProperty_mServiceDispatcherEntry.isValid () && mProperty_mServiceDispatcherHeader.isValid () && mProperty_mServiceEntryNoReturnedValue.isValid () && mProperty_mServiceEntryWithReturnValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_targetParameters::drop (void) {
  mProperty_mConfigurationLocation.drop () ;
  mProperty_mPython_5F_utilityToolList.drop () ;
  mProperty_mPython_5F_build.drop () ;
  mProperty_mLinkerScript.drop () ;
  mProperty_mPointerSize.drop () ;
  mProperty_mHandleDynamicArray.drop () ;
  mProperty_mSystemStackSize.drop () ;
  mProperty_mStackedUserRegisterOnInterruptByteSize.drop () ;
  mProperty_mNopInstructionStringInLLVM.drop () ;
  mProperty_mBitbandRegisterBaseAddress.drop () ;
  mProperty_mBitbandRegisterEndAddress.drop () ;
  mProperty_mBitbandRegisterRelocationAddress.drop () ;
  mProperty_mBitbandRegisterOffsetMultiplier.drop () ;
  mProperty_mBitbandRegisterBitMultiplier.drop () ;
  mProperty_mSectionHandler.drop () ;
  mProperty_mSectionPushedRegisterByteSize.drop () ;
  mProperty_mSectionDispatcherHeader.drop () ;
  mProperty_mSectionDispatcherEntry.drop () ;
  mProperty_mSectionDispatcherInvocationFromAnyMode.drop () ;
  mProperty_mSectionDispatcherInvocationFromUserMode.drop () ;
  mProperty_m_5F_C_5F_definitionFiles.drop () ;
  mProperty_m_5F_S_5F_definitionFiles.drop () ;
  mProperty_m_5F_LL_5F_definitionFiles.drop () ;
  mProperty_mXtrInterruptHandler.drop () ;
  mProperty_mUndefinedInterruptHandler.drop () ;
  mProperty_mServiceHandler.drop () ;
  mProperty_mServicePushedRegisterByteSize.drop () ;
  mProperty_mServiceDispatcherEntry.drop () ;
  mProperty_mServiceDispatcherHeader.drop () ;
  mProperty_mServiceEntryNoReturnedValue.drop () ;
  mProperty_mServiceEntryWithReturnValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_targetParameters::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @targetParameters:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConfigurationLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPython_5F_utilityToolList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPython_5F_build.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLinkerScript.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPointerSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandleDynamicArray.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSystemStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStackedUserRegisterOnInterruptByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNopInstructionStringInLLVM.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterEndAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionPushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherInvocationFromAnyMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherInvocationFromUserMode.description (ioString, inIndentation+1) ;
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
    mProperty_mServiceHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServicePushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceEntryNoReturnedValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceEntryWithReturnValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_targetParameters::getter_mConfigurationLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConfigurationLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_lstringlist GALGAS_targetParameters::getter_mPython_5F_utilityToolList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPython_5F_utilityToolList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mPython_5F_build (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPython_5F_build ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mLinkerScript (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLinkerScript ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_targetParameters::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPointerSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_targetParameters::getter_mHandleDynamicArray (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandleDynamicArray ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mSystemStackSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemStackSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mStackedUserRegisterOnInterruptByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStackedUserRegisterOnInterruptByteSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mNopInstructionStringInLLVM (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNopInstructionStringInLLVM ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterBaseAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterBaseAddress ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterEndAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterEndAddress ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterRelocationAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterRelocationAddress ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterOffsetMultiplier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterOffsetMultiplier ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterBitMultiplier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterBitMultiplier ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionHandler ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mSectionPushedRegisterByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionPushedRegisterByteSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherHeader (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherHeader ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherEntry (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherEntry ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherInvocationFromAnyMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherInvocationFromAnyMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherInvocationFromUserMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherInvocationFromUserMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_C_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_C_5F_definitionFiles ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_S_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_S_5F_definitionFiles ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_LL_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_LL_5F_definitionFiles ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mXtrInterruptHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXtrInterruptHandler ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mUndefinedInterruptHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUndefinedInterruptHandler ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceHandler ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mServicePushedRegisterByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServicePushedRegisterByteSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceDispatcherEntry (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceDispatcherEntry ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceDispatcherHeader (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceDispatcherHeader ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceEntryNoReturnedValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceEntryNoReturnedValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceEntryWithReturnValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceEntryWithReturnValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @targetParameters type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetParameters (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_configurationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_targetParameters::constructor_default (HERE),
                                                              GALGAS_interruptionConfigurationList::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicCodeTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicLineTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  GALGAS_targetParameters result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mTargetParameters ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters cPtr_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList GALGAS_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mInterruptionConfigurationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList cPtr_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionConfigurationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @configurationDeclarationAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_configurationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @configurationDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumToUintRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumToUintRoutineIR * p = (const cPtr_enumToUintRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRequired.objectCompare (p->mProperty_mIsRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarnIfUnused.objectCompare (p->mProperty_mWarnIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationLLVMTypeName.objectCompare (p->mProperty_mEnumerationLLVMTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumToUintRoutineIR::objectCompare (const GALGAS_enumToUintRoutineIR & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumToUintRoutineIR::GALGAS_enumToUintRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumToUintRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumToUintRoutineIR::GALGAS_enumToUintRoutineIR (const cPtr_enumToUintRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumToUintRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                        const GALGAS_bool & inAttribute_mIsRequired,
                                                                        const GALGAS_bool & inAttribute_mWarnIfUnused,
                                                                        const GALGAS_string & inAttribute_mEnumerationLLVMTypeName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_mIsRequired.isValid () && inAttribute_mWarnIfUnused.isValid () && inAttribute_mEnumerationLLVMTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumToUintRoutineIR (inAttribute_mRoutineMangledName, inAttribute_mIsRequired, inAttribute_mWarnIfUnused, inAttribute_mEnumerationLLVMTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_enumToUintRoutineIR::getter_mEnumerationLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumToUintRoutineIR * p = (const cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    result = p->mProperty_mEnumerationLLVMTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_enumToUintRoutineIR::getter_mEnumerationLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationLLVMTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @enumToUintRoutineIR class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumToUintRoutineIR::cPtr_enumToUintRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                    const GALGAS_bool & in_mIsRequired,
                                                    const GALGAS_bool & in_mWarnIfUnused,
                                                    const GALGAS_string & in_mEnumerationLLVMTypeName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_mIsRequired, in_mWarnIfUnused COMMA_THERE),
mProperty_mEnumerationLLVMTypeName (in_mEnumerationLLVMTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumToUintRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

void cPtr_enumToUintRoutineIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@enumToUintRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWarnIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumerationLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumToUintRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumToUintRoutineIR (mProperty_mRoutineMangledName, mProperty_mIsRequired, mProperty_mWarnIfUnused, mProperty_mEnumerationLLVMTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @enumToUintRoutineIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumToUintRoutineIR ("enumToUintRoutineIR",
                                            & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumToUintRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumToUintRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumToUintRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR result ;
  const GALGAS_enumToUintRoutineIR * p = (const GALGAS_enumToUintRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumToUintRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumToUintRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Extension method '@structurePropertyListAST-element enterPropertyInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterPropertyInContext (const GALGAS_structurePropertyListAST_2D_element inObject,
                                             const GALGAS_lstring constinArgument_inStructureName,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             GALGAS_propertyList & ioArgument_ioPropertyList,
                                             GALGAS_propertyMap & ioArgument_ioPropertyMap,
                                             GALGAS_sortedOperandIRList & ioArgument_sortedOperandIRList,
                                             GALGAS_constructorSignature & ioArgument_constructorSignature,
                                             GALGAS_string & ioArgument_ioConstructorKey,
                                             GALGAS_bool & ioArgument_canBeCopied,
                                             GALGAS_globalVariableIRList & ioArgument_ioGlobalVariableIRList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbigint var_explicitAlignment_17477 = GALGAS_lbigint::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 486)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 486))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 486)) ;
  GALGAS_bool var_alignmentDefined_17523 = GALGAS_bool (false) ;
  cEnumerator_propertyAttributeList enumerator_17581 (inObject.mProperty_mPropertyAttributeList, kENUMERATION_UP) ;
  while (enumerator_17581.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_17581.current_mAttributeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("align"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_17581.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 490)), GALGAS_string ("only the @align attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 490)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = var_alignmentDefined_17523.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_17581.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 492)), GALGAS_string ("@align attribute already defined"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 492)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_17581.current_mAttributeValue (HERE).getter_bigint (HERE).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 495)).left_shift_operation (enumerator_17581.current_mAttributeValue (HERE).getter_bigint (HERE).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 495)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 495)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 495)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_17581.current_mAttributeValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 496)), GALGAS_string ("alignment should be a power of 2"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 496)) ;
        }else if (kBoolFalse == test_4) {
          var_explicitAlignment_17477 = enumerator_17581.current_mAttributeValue (HERE) ;
          var_alignmentDefined_17523 = GALGAS_bool (true) ;
        }
      }
    }
    enumerator_17581.gotoNextObject () ;
  }
  GALGAS_PLMType temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, inObject.mProperty_mPropertyTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 505)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 506)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 506)) ;
  }
  GALGAS_PLMType var_optionalPropertyType_18145 = temp_6 ;
  switch (inObject.mProperty_mInitialisation.enumValue ()) {
  case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
    break ;
  case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
    {
      const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_20738 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (inObject.mProperty_mInitialisation.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_initExpression = extractPtr_20738->mAssociatedValue0 ;
      GALGAS_semanticTemporariesStruct joker_18593 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 517)) ;
      GALGAS_allocaList joker_18699 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 520)) ;
      GALGAS_instructionListIR joker_18727 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 521)) ;
      GALGAS_objectIR var_expressionIR_18769 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 512)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("type-structure-declaration.galgas", 513)), var_optionalPropertyType_18145, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-structure-declaration.galgas", 516)), joker_18593, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, joker_18699, joker_18727, var_expressionIR_18769, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 511)) ;
      const enumGalgasBool test_8 = extensionGetter_isStatic (var_expressionIR_18769, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 524)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 524)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 525)), GALGAS_string ("initialization expression cannot be computed statically"), fixItArray9  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 525)) ;
      }
      GALGAS_PLMType var_actualPropertyType_18941 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_18145.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 528)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        var_actualPropertyType_18941 = var_optionalPropertyType_18145 ;
      }else if (kBoolFalse == test_10) {
        var_actualPropertyType_18941 = extensionGetter_type (var_expressionIR_18769, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 531)) ;
      }
      const enumGalgasBool test_11 = extensionGetter_instanciable (var_actualPropertyType_18941, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 533)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 533)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 534)), var_actualPropertyType_18941.getter_plmTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 534)), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 534)) ;
      }
      const enumGalgasBool test_13 = extensionGetter_copyable (var_actualPropertyType_18941, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 536)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 536)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_canBeCopied = GALGAS_bool (false) ;
      }
      const enumGalgasBool test_14 = inObject.mProperty_mIsConstant.boolEnum () ;
      if (kBoolTrue == test_14) {
        {
        ioArgument_ioPropertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_constantProperty (extensionGetter_withType (var_expressionIR_18769, var_actualPropertyType_18941, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 543))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 540)) ;
        }
      }else if (kBoolFalse == test_14) {
        const enumGalgasBool test_15 = inObject.mProperty_mIsSingletonObject.boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_uint var_alignment_19578 = extensionGetter_defaultAlignment (var_actualPropertyType_18941, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 546)) ;
          const enumGalgasBool test_16 = var_alignmentDefined_17523.boolEnum () ;
          if (kBoolTrue == test_16) {
            const enumGalgasBool test_17 = GALGAS_bool (kIsStrictInf, var_explicitAlignment_17477.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 548)).objectCompare (var_alignment_19578)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (var_explicitAlignment_17477.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 549)), GALGAS_string ("minimum alignment for this property is ").add_operation (var_alignment_19578.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 549)), fixItArray18  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 549)) ;
            }else if (kBoolFalse == test_17) {
              var_alignment_19578 = var_explicitAlignment_17477.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 551)) ;
            }
          }
          GALGAS_lstring var_name_19903 = GALGAS_lstring::constructor_new (constinArgument_inStructureName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 554)).add_operation (inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 554)), inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 554))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 554)) ;
          GALGAS_string var_llvmName_20000 = function_llvmNameForGlobalVariable (var_name_19903.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 555)) ;
          GALGAS_objectIR var_object_20053 = GALGAS_objectIR::constructor_reference (var_actualPropertyType_18941, var_llvmName_20000  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 556)) ;
          {
          ioArgument_ioPropertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_singleton (var_object_20053, inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 560))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 557)) ;
          }
          ioArgument_ioGlobalVariableIRList.addAssign_operation (var_llvmName_20000, extensionGetter_withType (var_expressionIR_18769, var_actualPropertyType_18941, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 562)), var_alignment_19578  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 562)) ;
        }else if (kBoolFalse == test_15) {
          GALGAS_uint var_propertyIndex_20401 = ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 564)) ;
          ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_actualPropertyType_18941  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 565)) ;
          {
          ioArgument_ioPropertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_indexed (var_actualPropertyType_18941, var_propertyIndex_20401  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 566)) ;
          }
          ioArgument_sortedOperandIRList.addAssign_operation (extensionGetter_withType (var_expressionIR_18769, var_actualPropertyType_18941, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 571)), var_propertyIndex_20401  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 571)) ;
        }
      }
    }
    break ;
  case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
    {
      const enumGalgasBool test_19 = extensionGetter_instanciable (var_optionalPropertyType_18145, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 574)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 574)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 575)), var_optionalPropertyType_18145.getter_plmTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 575)), fixItArray20  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 575)) ;
      }
      GALGAS_uint var_propertyIndex_20944 = ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 577)) ;
      ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_18145  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 578)) ;
      {
      ioArgument_ioPropertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_indexed (var_optionalPropertyType_18145, var_propertyIndex_20944  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 579)) ;
      }
      ioArgument_constructorSignature.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_18145, var_propertyIndex_20944  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 584)) ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 585)) ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Extension method '@functionDeclarationListAST-element functionSemanticAnalysis'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_functionSemanticAnalysis (const GALGAS_functionDeclarationListAST_2D_element inObject,
                                               const GALGAS_PLMType constinArgument_inStructureType,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_warnIfUnused_23827 = GALGAS_bool (true) ;
  GALGAS_routineAttributes var_functionAttributes_23859 = GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("type-structure-declaration.galgas", 649)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("type-structure-declaration.galgas", 649)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)) ;
  cEnumerator_lstringlist enumerator_23964 (inObject.mProperty_mFunctionAttributeList, kENUMERATION_UP) ;
  while (enumerator_23964.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_23964.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_warnIfUnused_23827.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 652)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_23964.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 653)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 653)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 653)), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 653)) ;
      }
      var_warnIfUnused_23827 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_23964.current_mValue (HERE).getter_string (HERE).objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 656)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_functionAttributes_23859.getter_directPropertyAccess (SOURCE_FILE ("type-structure-declaration.galgas", 657)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_23964.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 658)), GALGAS_string ("duplicated @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 658)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 658)), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 658)) ;
        }
        var_functionAttributes_23859 = var_functionAttributes_23859.operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("type-structure-declaration.galgas", 660)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 660)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_23964.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 661)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          const enumGalgasBool test_7 = var_functionAttributes_23859.getter_panicAllowed (SOURCE_FILE ("type-structure-declaration.galgas", 662)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 662)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_23964.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 663)), GALGAS_string ("duplicated @").add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 663)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 663)), fixItArray8  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 663)) ;
          }
          var_functionAttributes_23859 = var_functionAttributes_23859.substract_operation (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("type-structure-declaration.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 665)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_23964.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 666)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            const enumGalgasBool test_10 = var_functionAttributes_23859.getter_mutating (SOURCE_FILE ("type-structure-declaration.galgas", 667)).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_23964.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 668)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 668)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 668)), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 668)) ;
            }
            var_functionAttributes_23859 = var_functionAttributes_23859.operator_or (GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("type-structure-declaration.galgas", 670)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 670)) ;
          }else if (kBoolFalse == test_9) {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_23964.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 672)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 672)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 672)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 673)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 673)).add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 673)), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 672)) ;
          }
        }
      }
    }
    enumerator_23964.gotoNextObject () ;
  }
  {
  routine_routineSemanticAnalysis (constinArgument_inStructureType, GALGAS_routineKind::constructor_function (inObject.mProperty_mMode  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)), inObject.mProperty_mMode, inObject.mProperty_mFunctionName, inObject.mProperty_mFunctionFormalArgumentList, inObject.mProperty_mFunctionReturnTypeName, inObject.mProperty_mFunctionInstructionList, inObject.mProperty_mEndOfFunctionDeclaration, var_functionAttributes_23859, var_warnIfUnused_23827, GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 677)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_infixObjectObjectOperatorDescription::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_infixObjectObjectOperatorDescription * p = (const cPtr_infixObjectObjectOperatorDescription *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_infixObjectObjectOperatorDescription) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixObjectObjectOperatorDescription::GALGAS_infixObjectObjectOperatorDescription (void) :
GALGAS_infixOperatorDescription () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixObjectObjectOperatorDescription::GALGAS_infixObjectObjectOperatorDescription (const cPtr_infixObjectObjectOperatorDescription * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixObjectObjectOperatorDescription) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixObjectObjectOperatorDescription GALGAS_infixObjectObjectOperatorDescription::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_infixObjectObjectOperatorDescription result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_infixObjectObjectOperatorDescription (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @infixObjectObjectOperatorDescription class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_infixObjectObjectOperatorDescription::cPtr_infixObjectObjectOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_infixObjectObjectOperatorDescription::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;
}

void cPtr_infixObjectObjectOperatorDescription::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@infixObjectObjectOperatorDescription:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_infixObjectObjectOperatorDescription::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_infixObjectObjectOperatorDescription (mProperty_mOperator COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @infixObjectObjectOperatorDescription type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ("infixObjectObjectOperatorDescription",
                                                             & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_infixObjectObjectOperatorDescription::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_infixObjectObjectOperatorDescription::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixObjectObjectOperatorDescription (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Extension method '@controlRegisterDeclarationList-element buildControlRegisterMapForGroup'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildControlRegisterMapForGroup (const GALGAS_controlRegisterDeclarationList_2D_element inObject,
                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                      GALGAS_controlRegisterMap & ioArgument_ioControlRegisterMap,
                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_registerType_17704 ;
  GALGAS_uint var_registerBitCount_17735 ;
  {
  routine_controlRegisterType (inObject.mProperty_mRegisterTypeName, ioArgument_ioContext, var_registerType_17704, var_registerBitCount_17735, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 446)) ;
  }
  GALGAS_controlRegisterFieldMap var_registerFieldMap_17961 ;
  GALGAS_sliceMap var_registerBitSliceMap_17990 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_18024 ;
  {
  routine_buildControlRegisterSliceMap (inObject.mProperty_mRegisterBitSliceList, inObject.mProperty_mRegisterBitSliceListLocation, ioArgument_ioContext, var_registerType_17704, var_registerBitCount_17735, var_registerFieldMap_17961, var_registerBitSliceMap_17990, var_controlRegisterFieldList_18024, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
  }
  cEnumerator_controlRegisterNameListAST enumerator_18094 (inObject.mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_18094.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly_18142 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_18191 (enumerator_18094.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_18191.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_18191.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_isReadOnly_18142.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_18191.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 465)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 465)) ;
        }else if (kBoolFalse == test_1) {
          var_isReadOnly_18142 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_18191.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 470)), GALGAS_string ("only the @ro (read only) attribute is accepted here"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 470)) ;
      }
      enumerator_18191.gotoNextObject () ;
    }
    GALGAS_objectIR var_addressOffsetExpressionResult_18731 ;
    callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) enumerator_18094.current (HERE).getter_mRegisterOffset (HERE).ptr (), enumerator_18094.current (HERE).getter_mRegisterOffsetLocation (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_addressOffsetExpressionResult_18731, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
    GALGAS_bigint var_registerAddressOffset_18771 ;
    const enumGalgasBool test_4 = var_addressOffsetExpressionResult_18731.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 481)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 481)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_18094.current (HERE).getter_mRegisterOffsetLocation (HERE), GALGAS_string ("control register address offset is not a static integer expression"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 482)) ;
      var_registerAddressOffset_18771.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_PLMType joker_19055_1 ; // Joker input parameter
      var_addressOffsetExpressionResult_18731.method_literalInteger (joker_19055_1, var_registerAddressOffset_18771, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 486)) ;
    }
    GALGAS_bigint var_arraySize_19117 ;
    GALGAS_uint var_elementArraySize_19144 ;
    switch (enumerator_18094.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_19117 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 492)) ;
        var_elementArraySize_19144 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_21606 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_18094.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_21606->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_21606->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_21606->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_21606->mAssociatedValue3 ;
        GALGAS_semanticTemporariesStruct var_temporaries_19535 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-control-register.galgas", 497)) ;
        GALGAS_instructionListIR var_instructionGenerationList_19597 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 498)) ;
        GALGAS_allocaList var_allocaList_19631 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 499)) ;
        GALGAS_objectIR var_sizeExpressionResult_20100 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_arraySizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 501)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-control-register.galgas", 502)), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 503)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-control-register.galgas", 505)), var_temporaries_19535, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, var_allocaList_19631, var_instructionGenerationList_19597, var_sizeExpressionResult_20100, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 500)) ;
        const enumGalgasBool test_6 = var_sizeExpressionResult_20100.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 513)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 513)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 514)) ;
          var_arraySize_19117.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          GALGAS_PLMType joker_20332_1 ; // Joker input parameter
          var_sizeExpressionResult_20100.method_literalInteger (joker_20332_1, var_arraySize_19117, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 516)) ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_arraySize_19117.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 517)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 518)) ;
            var_arraySize_19117.drop () ; // Release error dropped variable
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_21220 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSizeExpression.ptr (), extractedValue_arrayElementSizeLocation, ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_elementArraySizeExpressionResult_21220, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 531)) ;
        const enumGalgasBool test_10 = var_elementArraySizeExpressionResult_21220.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 537)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 537)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 538)) ;
          var_elementArraySize_19144.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_10) {
          GALGAS_bigint var_elementArraySizeAsBigInt_21536 ;
          GALGAS_PLMType joker_21498_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_21220.method_literalInteger (joker_21498_1, var_elementArraySizeAsBigInt_21536, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)) ;
          var_elementArraySize_19144 = var_elementArraySizeAsBigInt_21536.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 543)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioControlRegisterMap.setter_insertKey (enumerator_18094.current (HERE).getter_mRegisterName (HERE), var_registerType_17704, var_isReadOnly_18142, GALGAS_bool (false), var_registerBitSliceMap_17990, var_registerFieldMap_17961, var_registerAddressOffset_18771, var_controlRegisterFieldList_18024, var_registerBitCount_17735, var_arraySize_19117.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 556)), var_elementArraySize_19144, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 546)) ;
    }
    enumerator_18094.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@globalSyncInstanceMapIR-element generateLLVM'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVM (const GALGAS_globalSyncInstanceMapIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalSyncInstance (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 171)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 171)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (extensionGetter_type (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 172)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 172)).add_operation (extensionGetter_llvmValue (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 172)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 172)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension method '@driverListIR-element generateLLVMDriverVariableDefinition'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVMDriverVariableDefinition (const GALGAS_driverListIR_2D_element inObject,
                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (inObject.mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 477)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 477)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mProperty_mType, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 478)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 478)) ;
  cEnumerator_operandIRList enumerator_19493 (inObject.mProperty_mInitialValueList, kENUMERATION_UP) ;
  while (enumerator_19493.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19493.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 480)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 480)).add_operation (extensionGetter_llvmValue (enumerator_19493.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 480)) ;
    if (enumerator_19493.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 481)) ;
    }
    enumerator_19493.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 483)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension method '@decoratedTaskList-element taskSemanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_taskSemanticAnalysis (const GALGAS_decoratedTaskList_2D_element inObject,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           const GALGAS_uint constinArgument_inPriority,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_taskType_16647 ;
  GALGAS_uint joker_16649_2 ; // Joker input parameter
  GALGAS_bool joker_16649_1 ; // Joker input parameter
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (inObject.mProperty_mTaskName, var_taskType_16647, joker_16649_2, joker_16649_1, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 457)) ;
  GALGAS_bigint var_stackSize_16760 = inObject.mProperty_mStackSize.getter_bigint (HERE) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsStrictInf, var_stackSize_16760.objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 460)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsNotEqual, var_stackSize_16760.modulo_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 460)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 460)))) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (inObject.mProperty_mStackSize.getter_location (SOURCE_FILE ("task-declaration.galgas", 461)), GALGAS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray2  COMMA_SOURCE_FILE ("task-declaration.galgas", 461)) ;
  }
  GALGAS_instructionListIR var_setupInstructionListIR_17192 ;
  GALGAS_allocaList var_setupAllocaList_17217 ;
  {
  routine_analyzeOrderedTaskRoutines (var_taskType_16647, inObject.mProperty_mTaskSetupListAST, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_setupInstructionListIR_17192, var_setupAllocaList_17217, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 464)) ;
  }
  GALGAS_instructionListIR var_activateInstructionListIR_17505 ;
  GALGAS_allocaList var_activateAllocaList_17533 ;
  {
  routine_analyzeOrderedTaskRoutines (var_taskType_16647, inObject.mProperty_mTaskActivateListAST, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_activateInstructionListIR_17505, var_activateAllocaList_17533, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 474)) ;
  }
  GALGAS_instructionListIR var_deactivateInstructionListIR_17827 ;
  GALGAS_allocaList var_deactivateAllocaList_17857 ;
  {
  routine_analyzeOrderedTaskRoutines (var_taskType_16647, inObject.mProperty_mTaskDeactivateListAST, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_deactivateInstructionListIR_17827, var_deactivateAllocaList_17857, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 484)) ;
  }
  GALGAS_instructionListAST var_taskListInstructionList_18046 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 495)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, inObject.mProperty_mGuardedCommandList.getter_length (SOURCE_FILE ("task-declaration.galgas", 496)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_syncInstructionAST var_syncInstruction_18118 = GALGAS_syncInstructionAST::constructor_new (inObject.mProperty_mTaskName.getter_location (HERE), inObject.mProperty_mGuardedCommandList, inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 497)) ;
    var_taskListInstructionList_18046.addAssign_operation (var_syncInstruction_18118  COMMA_SOURCE_FILE ("task-declaration.galgas", 498)) ;
  }
  {
  routine_routineSemanticAnalysis (var_taskType_16647, GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 502))  COMMA_SOURCE_FILE ("task-declaration.galgas", 502)), GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 503)), GALGAS_lstring::constructor_new (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 504)), inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 504)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 505)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 506)), var_taskListInstructionList_18046, inObject.mProperty_mTaskName.getter_location (HERE), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("task-declaration.galgas", 509)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("task-declaration.galgas", 509)) COMMA_SOURCE_FILE ("task-declaration.galgas", 509)).operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("task-declaration.galgas", 509)) COMMA_SOURCE_FILE ("task-declaration.galgas", 509)), GALGAS_bool (true), GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 500)) ;
  }
  GALGAS_uint var_taskNameStringIndex_18960 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, inObject.mProperty_mTaskName.getter_string (HERE), var_taskNameStringIndex_18960, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 517)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (inObject.mProperty_mTaskName, var_taskType_16647, constinArgument_inPriority, inObject.mProperty_mStackSize.getter_bigint (HERE), var_setupAllocaList_17217, var_setupInstructionListIR_17192, var_activateAllocaList_17533, var_activateInstructionListIR_17505, var_deactivateAllocaList_17857, var_deactivateInstructionListIR_17827, var_taskNameStringIndex_18960, inObject.mProperty_mActivate, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 519)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Extension method '@externProcedureDeclarationListAST-element enterExternProcInContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterExternProcInContext (const GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_3443 ;
  {
  routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mProcFormalArgumentList, var_signature_3443, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 77)) ;
  }
  GALGAS_bool var_safe_3460 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_3504 (inObject.mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_3504.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3504.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 81)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_safe_3460 = GALGAS_bool (true) ;
    }
    enumerator_3504.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_3866 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mReturnTypeName, var_returnTypeProxy_3866 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 92)) ;
  }
  {
  extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, GALGAS_string::makeEmptyString (), inObject.mProperty_mExternProcedureName, extensionGetter_routineSignature (inObject.mProperty_mProcFormalArgumentList, inObject.mProperty_mExternProcedureName.getter_location (SOURCE_FILE ("declaration-extern-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 96)), inObject.mProperty_mRoutineNameForGeneration, GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), inObject.mProperty_mExternProcedureName.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 101)), inObject.mProperty_mRoutineNameForGeneration.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 102)), GALGAS_routineKind::constructor_function (inObject.mProperty_mMode  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 103)), var_signature_3443, var_returnTypeProxy_3866, GALGAS_bool (false), GALGAS_bool (false), var_safe_3460  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 93)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_externRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externRoutineIR * p = (const cPtr_externRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externRoutineIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRequired.objectCompare (p->mProperty_mIsRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarnIfUnused.objectCompare (p->mProperty_mWarnIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (p->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_externRoutineIR::objectCompare (const GALGAS_externRoutineIR & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineIR::GALGAS_externRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineIR GALGAS_externRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_externRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_routineFormalArgumentListIR::constructor_emptyList (HERE),
                                                  GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                  COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineIR::GALGAS_externRoutineIR (const cPtr_externRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineIR GALGAS_externRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                const GALGAS_bool & inAttribute_mIsRequired,
                                                                const GALGAS_bool & inAttribute_mWarnIfUnused,
                                                                const GALGAS_routineFormalArgumentListIR & inAttribute_mFormalArgumentListForGeneration,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnType
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_mIsRequired.isValid () && inAttribute_mWarnIfUnused.isValid () && inAttribute_mFormalArgumentListForGeneration.isValid () && inAttribute_mReturnType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externRoutineIR (inAttribute_mRoutineMangledName, inAttribute_mIsRequired, inAttribute_mWarnIfUnused, inAttribute_mFormalArgumentListForGeneration, inAttribute_mReturnType COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_externRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineIR * p = (const cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR cPtr_externRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_externRoutineIR::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineIR * p = (const cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_externRoutineIR::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @externRoutineIR class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_externRoutineIR::cPtr_externRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_mIsRequired,
                                            const GALGAS_bool & in_mWarnIfUnused,
                                            const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_mIsRequired, in_mWarnIfUnused COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReturnType (in_mReturnType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_externRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR ;
}

void cPtr_externRoutineIR::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@externRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWarnIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_externRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externRoutineIR (mProperty_mRoutineMangledName, mProperty_mIsRequired, mProperty_mWarnIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnType COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @externRoutineIR type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineIR ("externRoutineIR",
                                        & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineIR GALGAS_externRoutineIR::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineIR result ;
  const GALGAS_externRoutineIR * p = (const GALGAS_externRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR_2D_element inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_procName_9338 = function_llvmNameForFunction (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 229)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 230)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 231)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 233)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_procName_9338, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_9615 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9615.hasCurrentObject ()) {
    switch (enumerator_9615.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 240)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 240)).add_operation (enumerator_9615.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 240)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 242)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 242)).add_operation (function_llvmNameForLocalVariable (enumerator_9615.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 242)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 244)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 244)).add_operation (function_llvmNameForLocalVariable (enumerator_9615.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 244)) ;
      }
      break ;
    }
    if (enumerator_9615.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 247)) ;
    }
    enumerator_9615.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 249)).add_operation (GALGAS_string ("; declared by extern PLM function declaration\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 249)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Abstract extension method '@callInstructionAST baseGuardAnalyze'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_callInstructionAST_baseGuardAnalyze> gExtensionMethodTable_callInstructionAST_baseGuardAnalyze ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_baseGuardAnalyze (const int32_t inClassIndex,
                                            extensionMethodSignature_callInstructionAST_baseGuardAnalyze inMethod) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_callInstructionAST_baseGuardAnalyze (void) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_callInstructionAST_baseGuardAnalyze (NULL,
                                                                freeExtensionMethod_callInstructionAST_baseGuardAnalyze) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                           const GALGAS_PLMType constin_inSelfType,
                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_mode constin_inMode,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                           GALGAS_universalValuedObjectMap & io_ioUniversalMap,
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
      f (inObject, constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, out_outConvenienceGuardGenerationIR, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@guardMapIR-element llvmCodeGeneration'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_llvmCodeGeneration (const GALGAS_guardMapIR_2D_element inObject,
                                         GALGAS_string & ioArgument_ioLLVMcode,
                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_guardRoutineName_28368 = inObject.mProperty_mGuardImplementationMangledName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 710)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardRoutineName_28368, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 711)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 711)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_28368, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 712)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 712)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 713)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = extensionGetter_llvmTypeName (inObject.mProperty_mReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 716)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_28564 = temp_0 ;
  GALGAS_bool var_first_28667 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_28564.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_28564.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 720)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 720)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 720)) ;
    var_first_28667 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_28847 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_28847.hasCurrentObject ()) {
    const enumGalgasBool test_3 = var_first_28667.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_first_28667 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 727)) ;
    }
    switch (enumerator_28847.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_28847.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 731)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 731)).add_operation (enumerator_28847.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 731)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 731)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_28847.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 733)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 733)).add_operation (function_llvmNameForLocalVariable (enumerator_28847.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 733)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 733)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 733)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_28847.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 735)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 735)).add_operation (function_llvmNameForLocalVariable (enumerator_28847.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 735)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 735)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 735)) ;
      }
      break ;
    }
    enumerator_28847.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 738)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 738)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 738)) ;
  GALGAS_allocaList var_allocaList_29446 = inObject.mProperty_mAllocaList ;
  cEnumerator_routineFormalArgumentListIR enumerator_29542 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_29542.hasCurrentObject ()) {
    switch (enumerator_29542.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_29446.addAssign_operation (function_llvmNameForLocalVariable (enumerator_29542.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 745)), enumerator_29542.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 745)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_29542.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_29446, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 750)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_29862 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_29862.hasCurrentObject ()) {
    switch (enumerator_29862.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_29932 = extensionGetter_llvmTypeName (enumerator_29862.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 755)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_29932, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 756)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 756)).add_operation (enumerator_29862.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 756)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 756)).add_operation (var_llvmType_29932, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 756)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 757)).add_operation (function_llvmNameForLocalVariable (enumerator_29862.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 757)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 756)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_29862.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_30236 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 762)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_30322 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 763)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 763)) ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      GALGAS_string var_accepted_5F_label_30502 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 767)).add_operation (GALGAS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 767)) ;
      GALGAS_string var_rejected_5F_label_30572 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 768)).add_operation (GALGAS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 768)) ;
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 769)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_30322, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 770)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 770)).add_operation (var_accepted_5F_llvmName_30236, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 770)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 770)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_30322, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 771)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 771)).add_operation (var_accepted_5F_label_30502, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 771)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 771)).add_operation (var_rejected_5F_label_30572, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 771)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 771)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_label_30502.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 772)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 773)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 774)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_rejected_5F_label_30572.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 775)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 776)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 777)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_32524 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_baseGuardAllocaList = extractPtr_32524->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_32524->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_32524->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_baseGuardEffectiveParameterList = extractPtr_32524->mAssociatedValue3 ;
      extensionMethod_generateAllocaList (extractedValue_baseGuardAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 779)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 780)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_baseGuardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 781)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 781)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 781)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 782)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_31674 (extractedValue_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_31674.hasCurrentObject ()) {
        switch (enumerator_31674.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_31674.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 786)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 786)).add_operation (extensionGetter_llvmName (enumerator_31674.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 786)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 786)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_31674.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 788)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 788)).add_operation (extensionGetter_llvmName (enumerator_31674.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 788)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 788)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 788)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_31674.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 790)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 790)).add_operation (extensionGetter_llvmName (enumerator_31674.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 790)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 790)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 790)) ;
          }
          break ;
        }
        if (enumerator_31674.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 793)) ;
        }
        enumerator_31674.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 795)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 796)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 797)) ;
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 798)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 799)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 800)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 801)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 802)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 804)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 805)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension method '@decoratedRegularRoutineList-element semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_decoratedRegularRoutineList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 46)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mReceiverTypeName, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 47)).getter_type (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 47)) ;
  }
  GALGAS_PLMType var_receiverType_1824 = temp_0 ;
  GALGAS_universalValuedObjectMap var_universalMap_2015 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_2015, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 51)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_2015, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 52)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, inObject.mProperty_mReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_lstring var_resultVarName_2201 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 55)), inObject.mProperty_mReturnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 55)) ;
    GALGAS_PLMType var_resultType_2294 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 56)).getter_type (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 56)) ;
    {
    extensionSetter_insertLocalVariable (var_universalMap_2015, var_resultVarName_2201, var_resultType_2294, var_resultVarName_2201, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("regular-routine-analysis.galgas", 57)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 57)) ;
    }
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_2556 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 60)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mProperty_mRoutineFormalArgumentList, var_universalMap_2015, var_formalArguments_2556, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 61)) ;
  }
  GALGAS_allocaList var_allocaList_2741 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 68)) ;
  GALGAS_instructionListIR var_instructionGenerationList_2793 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 69)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mProperty_mRoutineInstructionList, var_receiverType_1824, inObject.mProperty_mRoutineAttributes, constinArgument_inContext, inObject.mProperty_mMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_2015, var_allocaList_2741, var_instructionGenerationList_2793, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 70)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_2015, var_instructionGenerationList_2793, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 82)) ;
  {
  extensionSetter_closeBranch (var_universalMap_2015, inObject.mProperty_mEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 83)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_2015, inObject.mProperty_mEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 84)) ;
  }
  GALGAS_PLMType temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 87)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 89)).getter_type (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 89)) ;
  }
  GALGAS_PLMType var_returnType_3410 = temp_3 ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_regularRoutineIR::constructor_new (inObject.mProperty_mRoutineMangledName, ioArgument_ioIntermediateCodeStruct.getter_mRequiredProcedureSet (HERE).getter_hasKey (inObject.mProperty_mRoutineMangledName.getter_string (HERE) COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 93)), inObject.mProperty_mWarnIfUnused, var_receiverType_1824, var_formalArguments_2556, var_allocaList_2741, var_instructionGenerationList_2793, inObject.mProperty_mExportedRoutine, inObject.mProperty_mRoutineKind, var_returnType_3410, GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 91))  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 91)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mTargetParameters (),
mProperty_mPanicCodeType (),
mProperty_mPanicLineType (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mRoutineMapForContext (),
mProperty_mGuardMapForContext (),
mProperty_mControlRegisterGroupMap (),
mProperty_mGlobalConstantMap (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mStaticListMap (),
mProperty_mTypeMap (),
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
mProperty_mGlobalTaskVariableList (),
mProperty_mValuedObjectMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_targetParameters & inOperand0,
                                                const GALGAS_PLMType & inOperand1,
                                                const GALGAS_PLMType & inOperand2,
                                                const GALGAS_panicRoutinePriorityMap & inOperand3,
                                                const GALGAS_panicRoutinePriorityMap & inOperand4,
                                                const GALGAS_routineMapForContext & inOperand5,
                                                const GALGAS_guardMapForContext & inOperand6,
                                                const GALGAS_controlRegisterGroupMap & inOperand7,
                                                const GALGAS_globalConstantMap & inOperand8,
                                                const GALGAS_globalSyncInstanceMap & inOperand9,
                                                const GALGAS_staticlistMap & inOperand10,
                                                const GALGAS_unifiedTypeMap & inOperand11,
                                                const GALGAS_availableInterruptMap & inOperand12,
                                                const GALGAS_infixOperatorMap & inOperand13,
                                                const GALGAS_infixOperatorMap & inOperand14,
                                                const GALGAS_infixOperatorMap & inOperand15,
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
                                                const GALGAS_prefixOperatorMap & inOperand35,
                                                const GALGAS_prefixOperatorMap & inOperand36,
                                                const GALGAS_prefixOperatorMap & inOperand37,
                                                const GALGAS_taskMap & inOperand38,
                                                const GALGAS_globalTaskVariableList & inOperand39,
                                                const GALGAS_universalValuedObjectMap & inOperand40) :
mProperty_mTargetParameters (inOperand0),
mProperty_mPanicCodeType (inOperand1),
mProperty_mPanicLineType (inOperand2),
mProperty_mPanicSetupRoutinePriorityMap (inOperand3),
mProperty_mPanicLoopRoutinePriorityMap (inOperand4),
mProperty_mRoutineMapForContext (inOperand5),
mProperty_mGuardMapForContext (inOperand6),
mProperty_mControlRegisterGroupMap (inOperand7),
mProperty_mGlobalConstantMap (inOperand8),
mProperty_mGlobalSyncInstanceMap (inOperand9),
mProperty_mStaticListMap (inOperand10),
mProperty_mTypeMap (inOperand11),
mProperty_mAvailableInterruptMap (inOperand12),
mProperty_mEqualOperatorMap (inOperand13),
mProperty_mNonEqualOperatorMap (inOperand14),
mProperty_mStrictInfOperatorMap (inOperand15),
mProperty_mInfEqualOperatorMap (inOperand16),
mProperty_mStrictSupOperatorMap (inOperand17),
mProperty_mSupEqualOperatorMap (inOperand18),
mProperty_mAndOperatorMap (inOperand19),
mProperty_mOrOperatorMap (inOperand20),
mProperty_mXorOperatorMap (inOperand21),
mProperty_mBooleanXorOperatorMap (inOperand22),
mProperty_mAddOperatorMap (inOperand23),
mProperty_mAddNoOvfOperatorMap (inOperand24),
mProperty_mSubOperatorMap (inOperand25),
mProperty_mSubNoOvfOperatorMap (inOperand26),
mProperty_mMulOperatorMap (inOperand27),
mProperty_mMulNoOvfOperatorMap (inOperand28),
mProperty_mDivOperatorMap (inOperand29),
mProperty_mDivNoOvfOperatorMap (inOperand30),
mProperty_mModOperatorMap (inOperand31),
mProperty_mModNoOvfOperatorMap (inOperand32),
mProperty_mLeftShiftOperatorMap (inOperand33),
mProperty_mRightShiftOperatorMap (inOperand34),
mProperty_mUnaryMinusOperatorMap (inOperand35),
mProperty_mNotOperatorMap (inOperand36),
mProperty_mUnsignedComplementOperatorMap (inOperand37),
mProperty_mTaskMap (inOperand38),
mProperty_mGlobalTaskVariableList (inOperand39),
mProperty_mValuedObjectMap (inOperand40) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_targetParameters::constructor_default (HERE),
                                 GALGAS_PLMType::constructor_default (HERE),
                                 GALGAS_PLMType::constructor_default (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMapForContext::constructor_default (HERE),
                                 GALGAS_guardMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_controlRegisterGroupMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalSyncInstanceMap::constructor_emptyMap (HERE),
                                 GALGAS_staticlistMap::constructor_emptyMap (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
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
                                 GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                 GALGAS_universalValuedObjectMap::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_targetParameters & inOperand0,
                                                                const GALGAS_PLMType & inOperand1,
                                                                const GALGAS_PLMType & inOperand2,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand3,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand4,
                                                                const GALGAS_routineMapForContext & inOperand5,
                                                                const GALGAS_guardMapForContext & inOperand6,
                                                                const GALGAS_controlRegisterGroupMap & inOperand7,
                                                                const GALGAS_globalConstantMap & inOperand8,
                                                                const GALGAS_globalSyncInstanceMap & inOperand9,
                                                                const GALGAS_staticlistMap & inOperand10,
                                                                const GALGAS_unifiedTypeMap & inOperand11,
                                                                const GALGAS_availableInterruptMap & inOperand12,
                                                                const GALGAS_infixOperatorMap & inOperand13,
                                                                const GALGAS_infixOperatorMap & inOperand14,
                                                                const GALGAS_infixOperatorMap & inOperand15,
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
                                                                const GALGAS_prefixOperatorMap & inOperand35,
                                                                const GALGAS_prefixOperatorMap & inOperand36,
                                                                const GALGAS_prefixOperatorMap & inOperand37,
                                                                const GALGAS_taskMap & inOperand38,
                                                                const GALGAS_globalTaskVariableList & inOperand39,
                                                                const GALGAS_universalValuedObjectMap & inOperand40 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid () && inOperand31.isValid () && inOperand32.isValid () && inOperand33.isValid () && inOperand34.isValid () && inOperand35.isValid () && inOperand36.isValid () && inOperand37.isValid () && inOperand38.isValid () && inOperand39.isValid () && inOperand40.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30, inOperand31, inOperand32, inOperand33, inOperand34, inOperand35, inOperand36, inOperand37, inOperand38, inOperand39, inOperand40) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetParameters.objectCompare (inOperand.mProperty_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicCodeType.objectCompare (inOperand.mProperty_mPanicCodeType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLineType.objectCompare (inOperand.mProperty_mPanicLineType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMapForContext.objectCompare (inOperand.mProperty_mRoutineMapForContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardMapForContext.objectCompare (inOperand.mProperty_mGuardMapForContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterGroupMap.objectCompare (inOperand.mProperty_mControlRegisterGroupMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalConstantMap.objectCompare (inOperand.mProperty_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalSyncInstanceMap.objectCompare (inOperand.mProperty_mGlobalSyncInstanceMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticListMap.objectCompare (inOperand.mProperty_mStaticListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeMap.objectCompare (inOperand.mProperty_mTypeMap) ;
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
  if (result == kOperandEqual) {
    result = mProperty_mValuedObjectMap.objectCompare (inOperand.mProperty_mValuedObjectMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mRoutineMapForContext.isValid () && mProperty_mGuardMapForContext.isValid () && mProperty_mControlRegisterGroupMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mTypeMap.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mEqualOperatorMap.isValid () && mProperty_mNonEqualOperatorMap.isValid () && mProperty_mStrictInfOperatorMap.isValid () && mProperty_mInfEqualOperatorMap.isValid () && mProperty_mStrictSupOperatorMap.isValid () && mProperty_mSupEqualOperatorMap.isValid () && mProperty_mAndOperatorMap.isValid () && mProperty_mOrOperatorMap.isValid () && mProperty_mXorOperatorMap.isValid () && mProperty_mBooleanXorOperatorMap.isValid () && mProperty_mAddOperatorMap.isValid () && mProperty_mAddNoOvfOperatorMap.isValid () && mProperty_mSubOperatorMap.isValid () && mProperty_mSubNoOvfOperatorMap.isValid () && mProperty_mMulOperatorMap.isValid () && mProperty_mMulNoOvfOperatorMap.isValid () && mProperty_mDivOperatorMap.isValid () && mProperty_mDivNoOvfOperatorMap.isValid () && mProperty_mModOperatorMap.isValid () && mProperty_mModNoOvfOperatorMap.isValid () && mProperty_mLeftShiftOperatorMap.isValid () && mProperty_mRightShiftOperatorMap.isValid () && mProperty_mUnaryMinusOperatorMap.isValid () && mProperty_mNotOperatorMap.isValid () && mProperty_mUnsignedComplementOperatorMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mValuedObjectMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::drop (void) {
  mProperty_mTargetParameters.drop () ;
  mProperty_mPanicCodeType.drop () ;
  mProperty_mPanicLineType.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mRoutineMapForContext.drop () ;
  mProperty_mGuardMapForContext.drop () ;
  mProperty_mControlRegisterGroupMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mStaticListMap.drop () ;
  mProperty_mTypeMap.drop () ;
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
  mProperty_mValuedObjectMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicCodeType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLineType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMapForContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardMapForContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterGroupMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
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
    ioString << ", " ;
    mProperty_mValuedObjectMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_semanticContext::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_semanticContext::getter_mPanicCodeType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_semanticContext::getter_mPanicLineType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupRoutinePriorityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopRoutinePriorityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapForContext GALGAS_semanticContext::getter_mRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMapForContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_semanticContext::getter_mGuardMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardMapForContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap GALGAS_semanticContext::getter_mControlRegisterGroupMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterGroupMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_semanticContext::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap GALGAS_semanticContext::getter_mGlobalSyncInstanceMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalSyncInstanceMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap GALGAS_semanticContext::getter_mStaticListMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_semanticContext::getter_mAvailableInterruptMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAvailableInterruptMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEqualOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mNonEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonEqualOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStrictInfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfEqualOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictSupOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStrictSupOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSupEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSupEqualOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAndOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOrOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXorOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mBooleanXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBooleanXorOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftShiftOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightShiftOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnaryMinusOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnaryMinusOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mNotOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNotOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnsignedComplementOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnsignedComplementOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap GALGAS_semanticContext::getter_mTaskMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_semanticContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalValuedObjectMap GALGAS_semanticContext::getter_mValuedObjectMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValuedObjectMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension Getter '@semanticContext booleanType'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType extensionGetter_booleanType (const GALGAS_semanticContext & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  GALGAS_uint joker_6026_2 ; // Joker input parameter
  GALGAS_bool joker_6026_1 ; // Joker input parameter
  inObject.mProperty_mTypeMap.method_searchKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 150)).getter_nowhere (SOURCE_FILE ("context.galgas", 150)), result_result, joker_6026_2, joker_6026_1, inCompiler COMMA_SOURCE_FILE ("context.galgas", 150)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addressofControlRegisterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofControlRegisterAST * p = (const cPtr_addressofControlRegisterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_addressofControlRegisterAST::objectCompare (const GALGAS_addressofControlRegisterAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST::GALGAS_addressofControlRegisterAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST::GALGAS_addressofControlRegisterAST (const cPtr_addressofControlRegisterAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofControlRegisterAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST GALGAS_addressofControlRegisterAST::constructor_new (const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_addressofControlRegisterAST result ;
  if (inAttribute_mControlRegisterLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofControlRegisterAST (inAttribute_mControlRegisterLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST GALGAS_addressofControlRegisterAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterLValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofControlRegisterAST * p = (const cPtr_addressofControlRegisterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
    result = p->mProperty_mControlRegisterLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST cPtr_addressofControlRegisterAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @addressofControlRegisterAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addressofControlRegisterAST::cPtr_addressofControlRegisterAST (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addressofControlRegisterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

void cPtr_addressofControlRegisterAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@addressofControlRegisterAST:" ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addressofControlRegisterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofControlRegisterAST (mProperty_mControlRegisterLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @addressofControlRegisterAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofControlRegisterAST ("addressofControlRegisterAST",
                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addressofControlRegisterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addressofControlRegisterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofControlRegisterAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST GALGAS_addressofControlRegisterAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_addressofControlRegisterAST result ;
  const GALGAS_addressofControlRegisterAST * p = (const GALGAS_addressofControlRegisterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofControlRegisterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofControlRegisterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addressofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_addressofExpressionAST::constructor_new (GALGAS_LValueAST::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (const cPtr_addressofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST cPtr_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @addressofExpressionAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addressofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

void cPtr_addressofExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addressofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @addressofExpressionAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofExpressionAST ("addressofExpressionAST",
                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addressofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addressofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addressofInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_addressofInstructionIR::objectCompare (const GALGAS_addressofInstructionIR & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (const cPtr_addressofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                              const GALGAS_LValueRepresentation & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofInstructionIR (inAttribute_mTarget, inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_addressofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_addressofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation GALGAS_addressofInstructionIR::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueRepresentation result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation cPtr_addressofInstructionIR::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @addressofInstructionIR class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                          const GALGAS_LValueRepresentation & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mLValue (in_mLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addressofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

void cPtr_addressofInstructionIR::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addressofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofInstructionIR (mProperty_mTarget, mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @addressofInstructionIR type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofInstructionIR ("addressofInstructionIR",
                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addressofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addressofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR result ;
  const GALGAS_addressofInstructionIR * p = (const GALGAS_addressofInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mProperty_mStaticEntityMap (),
mProperty_mGlobalConstantMap (),
mProperty_mInterruptMapIR (),
mProperty_mExternProcedureMapIR (),
mProperty_mRequiredProcedureSet (),
mProperty_mPanicSetupInstructionListIR (),
mProperty_mPanicLoopInstructionListIR (),
mProperty_mTaskMapIR (),
mProperty_mGlobalTaskVariableList (),
mProperty_mMaxBranchOfOnInstructions (),
mProperty_mTargetParameters (),
mProperty_mDriverList (),
mProperty_mStaticArrayMapForIntermediate (),
mProperty_mGenerationListIR (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mControlRegisterGroupArrayList (),
mProperty_mGuardListIR (),
mProperty_mRoutineListIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_staticEntityMap & inOperand0,
                                                              const GALGAS_globalConstantMapIR & inOperand1,
                                                              const GALGAS_interruptMapIR & inOperand2,
                                                              const GALGAS_externProcedureMapIR & inOperand3,
                                                              const GALGAS_stringset & inOperand4,
                                                              const GALGAS_instructionListSortedListIR & inOperand5,
                                                              const GALGAS_instructionListSortedListIR & inOperand6,
                                                              const GALGAS_taskMapIR & inOperand7,
                                                              const GALGAS_globalTaskVariableList & inOperand8,
                                                              const GALGAS_uint & inOperand9,
                                                              const GALGAS_targetParameters & inOperand10,
                                                              const GALGAS_driverListIR & inOperand11,
                                                              const GALGAS_staticListInvokedFunctionSetMap & inOperand12,
                                                              const GALGAS_generationListIR & inOperand13,
                                                              const GALGAS_globalSyncInstanceMapIR & inOperand14,
                                                              const GALGAS_controlRegisterGroupArrayList & inOperand15,
                                                              const GALGAS_guardMapIR & inOperand16,
                                                              const GALGAS_routineListIR & inOperand17) :
mProperty_mStaticEntityMap (inOperand0),
mProperty_mGlobalConstantMap (inOperand1),
mProperty_mInterruptMapIR (inOperand2),
mProperty_mExternProcedureMapIR (inOperand3),
mProperty_mRequiredProcedureSet (inOperand4),
mProperty_mPanicSetupInstructionListIR (inOperand5),
mProperty_mPanicLoopInstructionListIR (inOperand6),
mProperty_mTaskMapIR (inOperand7),
mProperty_mGlobalTaskVariableList (inOperand8),
mProperty_mMaxBranchOfOnInstructions (inOperand9),
mProperty_mTargetParameters (inOperand10),
mProperty_mDriverList (inOperand11),
mProperty_mStaticArrayMapForIntermediate (inOperand12),
mProperty_mGenerationListIR (inOperand13),
mProperty_mGlobalSyncInstanceMap (inOperand14),
mProperty_mControlRegisterGroupArrayList (inOperand15),
mProperty_mGuardListIR (inOperand16),
mProperty_mRoutineListIR (inOperand17) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_staticEntityMap::constructor_default (HERE),
                                        GALGAS_globalConstantMapIR::constructor_emptyMap (HERE),
                                        GALGAS_interruptMapIR::constructor_emptyMap (HERE),
                                        GALGAS_externProcedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_instructionListSortedListIR::constructor_emptySortedList (HERE),
                                        GALGAS_instructionListSortedListIR::constructor_emptySortedList (HERE),
                                        GALGAS_taskMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                        GALGAS_uint::constructor_default (HERE),
                                        GALGAS_targetParameters::constructor_default (HERE),
                                        GALGAS_driverListIR::constructor_emptyList (HERE),
                                        GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (HERE),
                                        GALGAS_generationListIR::constructor_emptyList (HERE),
                                        GALGAS_globalSyncInstanceMapIR::constructor_emptyMap (HERE),
                                        GALGAS_controlRegisterGroupArrayList::constructor_emptyList (HERE),
                                        GALGAS_guardMapIR::constructor_emptyList (HERE),
                                        GALGAS_routineListIR::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_staticEntityMap & inOperand0,
                                                                              const GALGAS_globalConstantMapIR & inOperand1,
                                                                              const GALGAS_interruptMapIR & inOperand2,
                                                                              const GALGAS_externProcedureMapIR & inOperand3,
                                                                              const GALGAS_stringset & inOperand4,
                                                                              const GALGAS_instructionListSortedListIR & inOperand5,
                                                                              const GALGAS_instructionListSortedListIR & inOperand6,
                                                                              const GALGAS_taskMapIR & inOperand7,
                                                                              const GALGAS_globalTaskVariableList & inOperand8,
                                                                              const GALGAS_uint & inOperand9,
                                                                              const GALGAS_targetParameters & inOperand10,
                                                                              const GALGAS_driverListIR & inOperand11,
                                                                              const GALGAS_staticListInvokedFunctionSetMap & inOperand12,
                                                                              const GALGAS_generationListIR & inOperand13,
                                                                              const GALGAS_globalSyncInstanceMapIR & inOperand14,
                                                                              const GALGAS_controlRegisterGroupArrayList & inOperand15,
                                                                              const GALGAS_guardMapIR & inOperand16,
                                                                              const GALGAS_routineListIR & inOperand17 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStaticEntityMap.objectCompare (inOperand.mProperty_mStaticEntityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalConstantMap.objectCompare (inOperand.mProperty_mGlobalConstantMap) ;
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
    result = mProperty_mDriverList.objectCompare (inOperand.mProperty_mDriverList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticArrayMapForIntermediate.objectCompare (inOperand.mProperty_mStaticArrayMapForIntermediate) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerationListIR.objectCompare (inOperand.mProperty_mGenerationListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalSyncInstanceMap.objectCompare (inOperand.mProperty_mGlobalSyncInstanceMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterGroupArrayList.objectCompare (inOperand.mProperty_mControlRegisterGroupArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardListIR.objectCompare (inOperand.mProperty_mGuardListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineListIR.objectCompare (inOperand.mProperty_mRoutineListIR) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mProperty_mStaticEntityMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mInterruptMapIR.isValid () && mProperty_mExternProcedureMapIR.isValid () && mProperty_mRequiredProcedureSet.isValid () && mProperty_mPanicSetupInstructionListIR.isValid () && mProperty_mPanicLoopInstructionListIR.isValid () && mProperty_mTaskMapIR.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mMaxBranchOfOnInstructions.isValid () && mProperty_mTargetParameters.isValid () && mProperty_mDriverList.isValid () && mProperty_mStaticArrayMapForIntermediate.isValid () && mProperty_mGenerationListIR.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mControlRegisterGroupArrayList.isValid () && mProperty_mGuardListIR.isValid () && mProperty_mRoutineListIR.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_intermediateCodeStruct::drop (void) {
  mProperty_mStaticEntityMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mInterruptMapIR.drop () ;
  mProperty_mExternProcedureMapIR.drop () ;
  mProperty_mRequiredProcedureSet.drop () ;
  mProperty_mPanicSetupInstructionListIR.drop () ;
  mProperty_mPanicLoopInstructionListIR.drop () ;
  mProperty_mTaskMapIR.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mMaxBranchOfOnInstructions.drop () ;
  mProperty_mTargetParameters.drop () ;
  mProperty_mDriverList.drop () ;
  mProperty_mStaticArrayMapForIntermediate.drop () ;
  mProperty_mGenerationListIR.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mControlRegisterGroupArrayList.drop () ;
  mProperty_mGuardListIR.drop () ;
  mProperty_mRoutineListIR.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredProcedureSet.description (ioString, inIndentation+1) ;
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
    mProperty_mDriverList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticArrayMapForIntermediate.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerationListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterGroupArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticEntityMap GALGAS_intermediateCodeStruct::getter_mStaticEntityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticEntityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMapIR GALGAS_intermediateCodeStruct::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR GALGAS_intermediateCodeStruct::getter_mInterruptMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_intermediateCodeStruct::getter_mExternProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcedureMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_intermediateCodeStruct::getter_mRequiredProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRequiredProcedureSet ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicSetupInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupInstructionListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicLoopInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopInstructionListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR GALGAS_intermediateCodeStruct::getter_mTaskMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_intermediateCodeStruct::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_intermediateCodeStruct::getter_mMaxBranchOfOnInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMaxBranchOfOnInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_intermediateCodeStruct::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_intermediateCodeStruct::getter_mDriverList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap GALGAS_intermediateCodeStruct::getter_mStaticArrayMapForIntermediate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticArrayMapForIntermediate ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationListIR GALGAS_intermediateCodeStruct::getter_mGenerationListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerationListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR GALGAS_intermediateCodeStruct::getter_mGlobalSyncInstanceMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalSyncInstanceMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_intermediateCodeStruct::getter_mControlRegisterGroupArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterGroupArrayList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR GALGAS_intermediateCodeStruct::getter_mGuardListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR GALGAS_intermediateCodeStruct::getter_mRoutineListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineListIR ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @intermediateCodeStruct type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

C_BoolCommandLineOption gOption_plm_5F_options_taskStrictPriorityOrder ("plm_options",
                                         "taskStrictPriorityOrder",
                                         0,
                                         "task-strict-priority-order",
                                         "Ensure task strict priority order") ;

C_BoolCommandLineOption gOption_plm_5F_options_timePasses ("plm_options",
                                         "timePasses",
                                         0,
                                         "time-passes",
                                         "Print the amount of time needed for each pass") ;

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_StringListCommandLineOption gOption_plm_5F_options_pathList ("plm_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_BoolCommandLineOption gOption_plm_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ("plm_option_not_appearing_in_cocoa",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Once function 'configurationNodeNameForPrecedenceGraph'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_configurationNodeNameForPrecedenceGraph (C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("config") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = false ;
static GALGAS_string gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_configurationNodeNameForPrecedenceGraph (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph) {
    gOnceFunctionResult_configurationNodeNameForPrecedenceGraph = onceFunction_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = true ;
  }
  return gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph (void) {
  gOnceFunctionResult_configurationNodeNameForPrecedenceGraph.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_configurationNodeNameForPrecedenceGraph (NULL,
                                                                                     releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_configurationNodeNameForPrecedenceGraph [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_configurationNodeNameForPrecedenceGraph (C_Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GALGAS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_configurationNodeNameForPrecedenceGraph ("configurationNodeNameForPrecedenceGraph",
                                                                                         functionWithGenericHeader_configurationNodeNameForPrecedenceGraph,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         0,
                                                                                         functionArgs_configurationNodeNameForPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Once function 'isrSlotTypeName'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_isrSlotTypeName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("$isrSlot") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GALGAS_string gOnceFunctionResult_isrSlotTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_isrSlotTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (NULL,
                                                             releaseOnceFunctionResult_isrSlotTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_isrSlotTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_isrSlotTypeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_lstring var_rootNode_11171 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 312)), object->mProperty_mPanicCodeTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 312)) ;
  {
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_11171, temp_0, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 313)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11171, object->mProperty_mPanicCodeTypeName COMMA_SOURCE_FILE ("configuration.galgas", 314)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11171, object->mProperty_mPanicLineTypeName COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                               extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@configurationDeclarationAST locationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_configurationDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  result_outLocation = object->mProperty_mPanicCodeTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_configurationDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                  extensionGetter_configurationDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_configurationDeclarationAST_locationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 327)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                           extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@configurationDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_configurationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                        GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                        GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                        GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mConfigurationLocation (HERE), GALGAS_string ("duplicate configuration"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 347)) ;
  }
  ioArgument_ioContext.mProperty_mTargetParameters = object->mProperty_mTargetParameters ;
  GALGAS_PLMType var_panicCodeType_13373 ;
  GALGAS_uint joker_13379_2 ; // Joker input parameter
  GALGAS_bool joker_13379_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mPanicCodeTypeName, var_panicCodeType_13373, joker_13379_2, joker_13379_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 351)) ;
  ioArgument_ioContext.mProperty_mPanicCodeType = var_panicCodeType_13373 ;
  const enumGalgasBool test_2 = ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 357)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bool var_unsigned_13550 ;
    GALGAS_bigint joker_13525_2 ; // Joker input parameter
    GALGAS_bigint joker_13525_1 ; // Joker input parameter
    GALGAS_uint joker_13552_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_kind (HERE).method_integer (joker_13525_2, joker_13525_1, var_unsigned_13550, joker_13552_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 358)) ;
    const enumGalgasBool test_3 = var_unsigned_13550.operator_not (SOURCE_FILE ("configuration.galgas", 359)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 360)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray4  COMMA_SOURCE_FILE ("configuration.galgas", 360)) ;
    }
  }else if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 363)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray5  COMMA_SOURCE_FILE ("configuration.galgas", 363)) ;
  }
  GALGAS_PLMType var_panicLineType_13869 ;
  GALGAS_uint joker_13875_2 ; // Joker input parameter
  GALGAS_bool joker_13875_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mPanicLineTypeName, var_panicLineType_13869, joker_13875_2, joker_13875_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 366)) ;
  ioArgument_ioContext.mProperty_mPanicLineType = var_panicLineType_13869 ;
  const enumGalgasBool test_6 = ioArgument_ioContext.getter_mPanicLineType (HERE).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 372)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_bool var_unsigned_14046 ;
    GALGAS_bigint joker_14021_2 ; // Joker input parameter
    GALGAS_bigint joker_14021_1 ; // Joker input parameter
    GALGAS_uint joker_14048_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicLineType (HERE).getter_kind (HERE).method_integer (joker_14021_2, joker_14021_1, var_unsigned_14046, joker_14048_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 373)) ;
    const enumGalgasBool test_7 = var_unsigned_14046.operator_not (SOURCE_FILE ("configuration.galgas", 374)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 375)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray8  COMMA_SOURCE_FILE ("configuration.galgas", 375)) ;
    }
  }else if (kBoolFalse == test_6) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 378)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray9  COMMA_SOURCE_FILE ("configuration.galgas", 378)) ;
  }
  GALGAS_stringset var_panicCodeSet_14338 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 381)) ;
  cEnumerator_interruptionConfigurationList enumerator_14400 (object->mProperty_mInterruptionConfigurationList, kENUMERATION_UP) ;
  while (enumerator_14400.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_14400.current_mInterruptName (HERE), enumerator_14400.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 383)) ;
    }
    switch (enumerator_14400.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_code:
      {
        const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_14693 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_14400.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_value = extractPtr_14693->mAssociatedValue0 ;
        GALGAS_string var_s_14546 = extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("configuration.galgas", 387)) ;
        const enumGalgasBool test_10 = var_panicCodeSet_14338.getter_hasKey (var_s_14546 COMMA_SOURCE_FILE ("configuration.galgas", 388)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_value.getter_location (SOURCE_FILE ("configuration.galgas", 389)), GALGAS_string ("duplicate interrupt code"), fixItArray11  COMMA_SOURCE_FILE ("configuration.galgas", 389)) ;
        }
        var_panicCodeSet_14338.addAssign_operation (var_s_14546  COMMA_SOURCE_FILE ("configuration.galgas", 391)) ;
      }
      break ;
    }
    enumerator_14400.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_configurationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                       extensionMethod_configurationDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInContext (defineExtensionMethod_configurationDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@typeAliasDeclarationAST locationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_typeAliasDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  result_outLocation = object->mProperty_mAliasTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeAliasDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                                  extensionGetter_typeAliasDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeAliasDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeAliasDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@typeAliasDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  {
  const GALGAS_typeAliasDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mAliasTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 49)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mAliasTypeName, object->mProperty_mOriginalTypeName COMMA_SOURCE_FILE ("type-alias.galgas", 50)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                               extensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@typeAliasDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("typealias $").add_operation (object->mProperty_mAliasTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                                           extensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@typeAliasDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeAliasDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                    GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                    GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                    GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  GALGAS_PLMType var_type_3848 ;
  GALGAS_uint joker_3850_2 ; // Joker input parameter
  GALGAS_bool joker_3850_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mOriginalTypeName, var_type_3848, joker_3850_2, joker_3850_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mAliasTypeName, var_type_3848, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-alias.galgas", 80)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 77)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeAliasDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                       extensionMethod_typeAliasDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeAliasDeclarationAST_enterInContext (defineExtensionMethod_typeAliasDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@staticArrayTypeDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayTypeDeclarationAST * object = (const cPtr_staticArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeDeclarationAST) ;
  {
  const GALGAS_staticArrayTypeDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mArrayTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 46)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mArrayTypeName, object->mProperty_mElementTypeName COMMA_SOURCE_FILE ("type-static-array.galgas", 47)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), object->mProperty_mArrayTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 48)) ;
  GALGAS_lstring var_rootNode_2377 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 49)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-static-array.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mArrayTypeName, var_rootNode_2377 COMMA_SOURCE_FILE ("type-static-array.galgas", 50)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST.mSlotID,
                                               extensionMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@staticArrayTypeDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_staticArrayTypeDeclarationAST * object = (const cPtr_staticArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("anonymous $").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-static-array.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST.mSlotID,
                                                           extensionGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@staticArrayTypeDeclarationAST locationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_staticArrayTypeDeclarationAST * object = (const cPtr_staticArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeDeclarationAST) ;
  result_outLocation = object->mProperty_mArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST.mSlotID,
                                                  extensionGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling (defineExtensionGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@staticArrayTypeDeclarationAST enterInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticArrayTypeDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                          const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                          GALGAS_semanticContext & ioArgument_ioContext,
                                                                          GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                          GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                          GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                          GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                          GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayTypeDeclarationAST * object = (const cPtr_staticArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeDeclarationAST) ;
  GALGAS_PLMType var_elementType_4200 ;
  GALGAS_uint joker_4202_2 ; // Joker input parameter
  GALGAS_bool joker_4202_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_elementType_4200, joker_4202_2, joker_4202_1, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 81)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_elementType_4200, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 82)).operator_not (SOURCE_FILE ("type-static-array.galgas", 82)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 83)), GALGAS_string ("an array element should be copyable"), fixItArray1  COMMA_SOURCE_FILE ("type-static-array.galgas", 83)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_instanciable (var_elementType_4200, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 85)).operator_not (SOURCE_FILE ("type-static-array.galgas", 85)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 86)), GALGAS_string ("an array element should be instanciable"), fixItArray3  COMMA_SOURCE_FILE ("type-static-array.galgas", 86)) ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_4508 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 89)) ;
  GALGAS_allocaList var_allocaList_4538 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 90)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_4584 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-static-array.galgas", 91)) ;
  GALGAS_staticEntityMap joker_4813 = GALGAS_staticEntityMap::constructor_default (SOURCE_FILE ("type-static-array.galgas", 99)) ;
  GALGAS_objectIR var_sizeExpressionIR_4980 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 93)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("type-static-array.galgas", 94)), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 95)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-static-array.galgas", 97)), var_temporaries_4584, joker_4813, ioArgument_ioContext.mProperty_mValuedObjectMap, var_allocaList_4538, var_initInstructionGenerationList_4508, var_sizeExpressionIR_4980, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 92)) ;
  const enumGalgasBool test_4 = var_sizeExpressionIR_4980.getter_isLiteralInteger (SOURCE_FILE ("type-static-array.galgas", 105)).operator_not (SOURCE_FILE ("type-static-array.galgas", 105)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray5  COMMA_SOURCE_FILE ("type-static-array.galgas", 106)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_arraySize_5177 ;
    GALGAS_PLMType joker_5154_1 ; // Joker input parameter
    var_sizeExpressionIR_4980.method_literalInteger (joker_5154_1, var_arraySize_5177, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 108)) ;
    GALGAS_lstring var_plmTypeDescriptionName_5276 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_arraySize_5177.getter_string (SOURCE_FILE ("type-static-array.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 110)).add_operation (GALGAS_string (" \xE2""\x80""\xA2"" "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 110)).add_operation (var_elementType_4200.getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 110)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 110)), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 110))  COMMA_SOURCE_FILE ("type-static-array.galgas", 110)) ;
    GALGAS_lstring var_llvmBaseTypeName_5402 = GALGAS_lstring::constructor_new (var_elementType_4200.getter_llvmBaseTypeName (HERE).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 111)).add_operation (var_arraySize_5177.getter_string (SOURCE_FILE ("type-static-array.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 111)), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 111))  COMMA_SOURCE_FILE ("type-static-array.galgas", 111)) ;
    const enumGalgasBool test_6 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_plmTypeDescriptionName_5276.getter_string (SOURCE_FILE ("type-static-array.galgas", 112)) COMMA_SOURCE_FILE ("type-static-array.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_PLMType var_type_5627 ;
      GALGAS_uint joker_5629_2 ; // Joker input parameter
      GALGAS_bool joker_5629_1 ; // Joker input parameter
      ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_plmTypeDescriptionName_5276, var_type_5627, joker_5629_2, joker_5629_1, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 113)) ;
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mArrayTypeName, var_type_5627, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-static-array.galgas", 117)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 114)) ;
      }
    }else if (kBoolFalse == test_6) {
      GALGAS_classConstantMap var_classConstantMap_5936 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-static-array.galgas", 122)) ;
      {
      var_classConstantMap_5936.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 123))  COMMA_SOURCE_FILE ("type-static-array.galgas", 123)), var_arraySize_5177, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 123)).getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 123)) ;
      }
      GALGAS_propertyMap var_arrayTypePropertyMap_6160 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-static-array.galgas", 125)) ;
      {
      var_arrayTypePropertyMap_6160.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), var_plmTypeDescriptionName_5276.getter_location (HERE)  COMMA_SOURCE_FILE ("type-static-array.galgas", 127)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 129)), var_arraySize_5177  COMMA_SOURCE_FILE ("type-static-array.galgas", 129))  COMMA_SOURCE_FILE ("type-static-array.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 126)) ;
      }
      GALGAS_constructorMap var_constructorMap_6514 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-static-array.galgas", 132)) ;
      {
      var_constructorMap_6514.setter_insertKey (GALGAS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 134)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 134)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4200, var_arraySize_5177.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 134))  COMMA_SOURCE_FILE ("type-static-array.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 134)) ;
      }
      GALGAS_string var_constructorName_6726 = GALGAS_string ("(") ;
      cEnumerator_range enumerator_6770 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_arraySize_5177.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 137)).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 137))), kENUMERATION_UP) ;
      while (enumerator_6770.hasCurrentObject ()) {
        var_constructorName_6726.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 138)) ;
        enumerator_6770.gotoNextObject () ;
      }
      var_constructorName_6726.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 140)) ;
      {
      var_constructorMap_6514.setter_insertKey (var_constructorName_6726.getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 141)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 141)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4200, var_arraySize_5177.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 141))  COMMA_SOURCE_FILE ("type-static-array.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 141)) ;
      }
      GALGAS_PLMTypeAttributes var_typeAttributes_7071 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-static-array.galgas", 143)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-static-array.galgas", 143)) COMMA_SOURCE_FILE ("type-static-array.galgas", 143)) ;
      GALGAS_PLMType var_arrayType_7187 = GALGAS_PLMType::constructor_new (var_arrayTypePropertyMap_6160, var_classConstantMap_5936, var_constructorMap_6514, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-static-array.galgas", 149)), var_typeAttributes_7071, var_plmTypeDescriptionName_5276.getter_string (SOURCE_FILE ("type-static-array.galgas", 151)), GALGAS_typeKind::constructor_arrayType (var_elementType_4200, var_arraySize_5177  COMMA_SOURCE_FILE ("type-static-array.galgas", 152)), var_llvmBaseTypeName_5402.getter_string (SOURCE_FILE ("type-static-array.galgas", 153))  COMMA_SOURCE_FILE ("type-static-array.galgas", 145)) ;
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mArrayTypeName, var_arrayType_7187, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-static-array.galgas", 158)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 155)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmTypeDescriptionName_5276, var_arrayType_7187, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-static-array.galgas", 164)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 161)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticArrayTypeDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST.mSlotID,
                                       extensionMethod_staticArrayTypeDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticArrayTypeDeclarationAST_enterInContext (defineExtensionMethod_staticArrayTypeDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Routine 'generateLLVMCodeForStaticArrayType'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateLLVMCodeForStaticArrayType (GALGAS_string & ioArgument_ioLLVMcode,
                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                 const GALGAS_PLMType constinArgument_inStaticArrayTypeName,
                                                 const GALGAS_bigint constinArgument_inSize,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_llvmBaseTypeName_8462 = constinArgument_inStaticArrayTypeName.getter_llvmBaseTypeName (SOURCE_FILE ("type-static-array.galgas", 181)).getter_assemblerRepresentation (SOURCE_FILE ("type-static-array.galgas", 181)) ;
  GALGAS_string var_llvmTypeName_8550 = extensionGetter_llvmTypeName (constinArgument_inStaticArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 182)) ;
  GALGAS_lstring var_routineMangledName_8614 = function_routineMangledNameFromAST (var_llvmBaseTypeName_8462, GALGAS_string ("count").getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 185)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 183)) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_8725 = extensionGetter_arcList (constinArgument_inStaticArrayTypeName, GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 188)) ;
  GALGAS_string var_routineLLVMName_8785 = function_llvmNameForFunction (var_routineMangledName_8614.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 189)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineMangledName_8614.getter_string (SOURCE_FILE ("type-static-array.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32  @").add_operation (var_routineLLVMName_8785, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 191)).add_operation (GALGAS_string (" (%"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 191)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmBaseTypeName_8462.add_operation (GALGAS_string ("* %inUnusedValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 ").add_operation (constinArgument_inSize.getter_string (SOURCE_FILE ("type-static-array.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 193)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 195)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign."), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 196)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmBaseTypeName_8462, inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 197)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 198)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmBaseTypeName_8462, inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 199)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 200)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 200)).add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 200)).add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 200)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 201)) ;
  cEnumerator_arcAssignmentList enumerator_9497 (var_arcAssignmentList_8725, kENUMERATION_UP) ;
  while (enumerator_9497.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_9529 = extensionGetter_llvmTypeName (enumerator_9497.current_mPropertyType (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 203)) ;
    GALGAS_string var_llvmVarName_9579 = GALGAS_string ("%arc.retain.").add_operation (enumerator_9497.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-static-array.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 204)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-static-array.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 204)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 205)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_9579, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 206)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 206)).add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 206)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 206)).add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 206)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 206)) ;
    cEnumerator_uintlist enumerator_9861 (enumerator_9497.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_9861.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_9861.current_mValue (HERE).getter_string (SOURCE_FILE ("type-static-array.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 208)) ;
      enumerator_9861.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_9497.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 210)) ;
    GALGAS_string var_llvmLoadedVarName_9979 = var_llvmVarName_9579.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 211)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_9979, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 212)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 212)).add_operation (var_propertyTypeLLVMName_9529, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 212)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 212)).add_operation (var_propertyTypeLLVMName_9529, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 212)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 212)).add_operation (var_llvmVarName_9579, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 212)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_9529, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 213)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 213)).add_operation (var_llvmLoadedVarName_9979, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 213)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 213)) ;
    enumerator_9497.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_10318 (var_arcAssignmentList_8725, kENUMERATION_UP) ;
  while (enumerator_10318.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_10341 = GALGAS_string ("%arc.release.").add_operation (enumerator_10318.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-static-array.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 216)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-static-array.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 216)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 217)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_10341, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 218)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 218)).add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 218)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 218)).add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 218)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 218)) ;
    cEnumerator_uintlist enumerator_10624 (enumerator_10318.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_10624.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_10624.current_mValue (HERE).getter_string (SOURCE_FILE ("type-static-array.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 220)) ;
      enumerator_10624.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_10318.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 222)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 222)) ;
    GALGAS_string var_propertyTypeLLVMName_10745 = extensionGetter_llvmTypeName (enumerator_10318.current_mPropertyType (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 223)) ;
    GALGAS_string var_llvmLoadedVarName_10801 = var_llvmVarName_10341.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 224)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_10801, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 225)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 225)).add_operation (var_propertyTypeLLVMName_10745, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 225)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 225)).add_operation (var_propertyTypeLLVMName_10745, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 225)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 225)).add_operation (var_llvmVarName_10341, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 225)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 225)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_10745, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 226)).add_operation (var_llvmLoadedVarName_10801, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 226)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 226)) ;
    enumerator_10318.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 228)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 229)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 229)).add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 229)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 230)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 233)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 234)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 235)).add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 235)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)).add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 236)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 243)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 245)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 248)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 248)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 249)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 253)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 254)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %byteCount, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 257)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 259)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 261)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_8550, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 262)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 267)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mDynamicArrayTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 36)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDynamicArrayTypeName, object->mProperty_mElementTypeName COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 37)) ;
  }
  GALGAS_lstring var_rootNode_2078 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)), object->mProperty_mDynamicArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDynamicArrayTypeName, var_rootNode_2078 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 39)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                               extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("anonymous $").add_operation (object->mProperty_mDynamicArrayTypeName.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 45)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                                           extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@typeDynamicArrayDeclarationAST locationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mDynamicArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                                  extensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@typeDynamicArrayDeclarationAST enterInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                                           GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                           GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                           GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                           GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                           GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  const enumGalgasBool test_0 = ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mHandleDynamicArray (HERE).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 69)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 70)), GALGAS_string ("this target does not handle dynamic array"), fixItArray1  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 70)) ;
  }
  GALGAS_PLMType var_elementType_4107 ;
  GALGAS_uint joker_4109_2 ; // Joker input parameter
  GALGAS_bool joker_4109_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_elementType_4107, joker_4109_2, joker_4109_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 73)) ;
  const enumGalgasBool test_2 = extensionGetter_copyable (var_elementType_4107, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 74)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 75)), GALGAS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 75)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_instanciable (var_elementType_4107, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 77)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 78)), GALGAS_string ("an array element should be instanciable"), fixItArray5  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 78)) ;
  }
  GALGAS_lstring var_plmTypeDescriptionName_4434 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_elementType_4107.getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 81))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)) ;
  GALGAS_lstring var_llvmBaseTypeName_4545 = GALGAS_lstring::constructor_new (GALGAS_string ("dyn-").add_operation (var_elementType_4107.getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 82))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)) ;
  const enumGalgasBool test_6 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_plmTypeDescriptionName_4434.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 84)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 84)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_PLMType var_type_4829 ;
    GALGAS_uint joker_4831_2 ; // Joker input parameter
    GALGAS_bool joker_4831_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_plmTypeDescriptionName_4434, var_type_4829, joker_4831_2, joker_4831_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 85)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mDynamicArrayTypeName, var_type_4829, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-dynamic-array.galgas", 89)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 86)) ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_uint_33__32_TypeProxy_5097 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_string ("$uint32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 93)), var_uint_33__32_TypeProxy_5097 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 93)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_5196 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mElementTypeName, var_elementTypeProxy_5196 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 94)) ;
    }
    GALGAS_propertyMap var_propertyMap_5287 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 96)) ;
    {
    extensionSetter_addFunctionWithoutArgument (var_propertyMap_5287, ioArgument_ioRoutineListIR, var_llvmBaseTypeName_4545.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 100)), GALGAS_string ("removeAll"), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 103)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 98)) ;
    }
    {
    extensionSetter_addFunctionWithoutArgument (var_propertyMap_5287, ioArgument_ioRoutineListIR, var_llvmBaseTypeName_4545.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 109)), GALGAS_string ("length"), GALGAS_bool (false), var_uint_33__32_TypeProxy_5097, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 107)) ;
    }
    {
    extensionSetter_addFunctionWithInputArgument (var_propertyMap_5287, ioArgument_ioContext, ioArgument_ioRoutineListIR, var_llvmBaseTypeName_4545.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 119)), GALGAS_string ("append"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5196, GALGAS_string ("inValue"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 125)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 116)) ;
    }
    {
    extensionSetter_addFunctionWithTwoInputArguments (var_propertyMap_5287, ioArgument_ioContext, ioArgument_ioRoutineListIR, var_llvmBaseTypeName_4545.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 132)), GALGAS_string ("insert"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5196, GALGAS_string ("inValue"), GALGAS_string ("atIndex"), var_uint_33__32_TypeProxy_5097, GALGAS_string ("inIndex"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 141)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 129)) ;
    }
    GALGAS_constructorMap var_constructorMap_6829 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 145)) ;
    {
    var_constructorMap_6829.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 146)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 146)), GALGAS_constructorValue::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 146)) ;
    }
    GALGAS_PLMTypeAttributes var_typeAttributes_7000 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-dynamic-array.galgas", 148)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-dynamic-array.galgas", 148)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 148)) ;
    GALGAS_PLMType var_dynamicArrayType_7119 = GALGAS_PLMType::constructor_new (var_propertyMap_5287, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 152)), var_constructorMap_6829, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 154)), var_typeAttributes_7000, var_plmTypeDescriptionName_4434.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 156)), GALGAS_typeKind::constructor_dynamicArrayType (var_elementType_4107  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 157)), var_llvmBaseTypeName_4545.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 158))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 150)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mDynamicArrayTypeName, var_dynamicArrayType_7119, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-dynamic-array.galgas", 163)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 160)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                       extensionMethod_typeDynamicArrayDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInContext (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateLLVMcodeForDynamicArray'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateLLVMcodeForDynamicArray (GALGAS_string & ioArgument_ioLLVMcode,
                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                              const GALGAS_PLMType constinArgument_inArrayType,
                                              const GALGAS_PLMType constinArgument_inElementType,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  GALGAS_string var_llvmArrayBaseTypeName_8220 = constinArgument_inArrayType.getter_llvmBaseTypeName (HERE) ;
  GALGAS_string var_elementLLVMTypeName_8299 = extensionGetter_llvmTypeName (constinArgument_inElementType, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 181)) ;
  GALGAS_lstring var_removeAllRoutineMangledName_8397 = function_routineMangledNameFromAST (var_llvmArrayBaseTypeName_8220, GALGAS_string ("removeAll").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 185)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 183)) ;
  GALGAS_string var_removeAllRoutineLLVMName_8524 = function_llvmNameForFunction (var_removeAllRoutineMangledName_8397.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_removeAllRoutineMangledName_8397.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 189)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (var_removeAllRoutineLLVMName_8524, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 190)).add_operation (GALGAS_string (" (%ptrtype* %ioArray)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 190)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 190)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 191)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 195)) ;
  GALGAS_lstring var_lengthRoutineMangledName_9108 = function_routineMangledNameFromAST (var_llvmArrayBaseTypeName_8220, GALGAS_string ("length").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 199)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 197)) ;
  GALGAS_string var_lengthRoutineLLVMName_9229 = function_llvmNameForFunction (var_lengthRoutineMangledName_9108.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 202)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_lengthRoutineMangledName_9108.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 203)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32 @").add_operation (var_lengthRoutineLLVMName_9229, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 204)).add_operation (GALGAS_string (" (%ptrtype* %ioArray)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 204)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 204)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 204)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 205)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 207)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 208)) ;
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 219)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 211)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 212)), constinArgument_inElementType.getter_llvmBaseTypeName (HERE).getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 213)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 214))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 214)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 216)), GALGAS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 217)), GALGAS_string ("uint32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 218)), GALGAS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 219))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 219)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_9774 = temp_0 ;
  GALGAS_lstring var_insertRoutineMangledName_10004 = function_routineMangledNameFromAST (var_llvmArrayBaseTypeName_8220, GALGAS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 223)), var_argumentList_9774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 221)) ;
  GALGAS_string var_insertRoutineLLVMName_10135 = function_llvmNameForFunction (var_insertRoutineMangledName_10004.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 226)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_insertRoutineMangledName_10004.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 227)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (var_insertRoutineLLVMName_10135, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 228)).add_operation (GALGAS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 228)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 229)).add_operation (GALGAS_string (" %inValue"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 %inIndex"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 231)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 233)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 234)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 236)).add_operation (GALGAS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 236)).add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 236)).add_operation (GALGAS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 236)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 238)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 238)).add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 238)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 239)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 245)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 245)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @plm.assign."), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inElementType.getter_llvmBaseTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 248)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inElementType.getter_llvmBaseTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 249)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 250)).add_operation (GALGAS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 250)).add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 250)).add_operation (GALGAS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 255)) ;
  GALGAS_routineFormalArgumentListAST temp_1 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 261)) ;
  temp_1.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 258)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 259)), constinArgument_inElementType.getter_llvmBaseTypeName (HERE).getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 260)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 261))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 261)) ;
  var_argumentList_9774 = temp_1 ;
  GALGAS_lstring var_routineMangledName_12292 = function_routineMangledNameFromAST (var_llvmArrayBaseTypeName_8220, GALGAS_string ("append").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 265)), var_argumentList_9774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 263)) ;
  GALGAS_string var_routineLLVMName_12417 = function_llvmNameForFunction (var_routineMangledName_12292.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineMangledName_12292.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (var_routineLLVMName_12417, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 270)).add_operation (GALGAS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 270)).add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 271)).add_operation (GALGAS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 271)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 271)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 272)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 274)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 275)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_insertRoutineLLVMName_10135, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 276)).add_operation (GALGAS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 276)).add_operation (var_elementLLVMTypeName_8299, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 277)).add_operation (GALGAS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 278)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 280)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 282)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign."), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 283)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inArrayType.getter_llvmBaseTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 284)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 285)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inArrayType.getter_llvmBaseTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 286)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype * %inTargetPtr, %ptrtype* %inSourcePtr) nounwind optsize {\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source = load %ptrtype, %ptrtype* %inSourcePtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 288)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (%ptrtype %source)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target = load %ptrtype, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %target)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %source, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 294)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@booleanDeclarationAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_booleanDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_booleanDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                                  extensionGetter_booleanDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_booleanDeclarationAST_locationForErrorSignaling (defineExtensionGetter_booleanDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@booleanDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  {
  const GALGAS_booleanDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 21)), temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 21)) ;
  }
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$uint1").getter_nowhere (SOURCE_FILE ("type-bool.galgas", 22)) COMMA_SOURCE_FILE ("type-bool.galgas", 22)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                               extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@booleanDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("$bool") ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                                           extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Once function 'boolTypeName'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_boolTypeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("$bool") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@booleanDeclarationAST enterInContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                  GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                  GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                  GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                  GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap var_propertyMap_2743 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 53)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_uint_31_TypeProxy_2868 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 54)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 54)).getter_location (SOURCE_FILE ("type-bool.galgas", 54))  COMMA_SOURCE_FILE ("type-bool.galgas", 54)), var_uint_31_TypeProxy_2868 COMMA_SOURCE_FILE ("type-bool.galgas", 54)) ;
  }
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_2743, ioArgument_ioRoutineListIR, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 58)), GALGAS_string ("uint1"), GALGAS_bool (true), var_uint_31_TypeProxy_2868, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 56)) ;
  }
  GALGAS_PLMType var_booleanType_3169 = GALGAS_PLMType::constructor_new (var_propertyMap_2743, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 67)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 68)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 69)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-bool.galgas", 70)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-bool.galgas", 70)) COMMA_SOURCE_FILE ("type-bool.galgas", 70)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-bool.galgas", 70)) COMMA_SOURCE_FILE ("type-bool.galgas", 70)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71)), GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("type-bool.galgas", 72)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73))  COMMA_SOURCE_FILE ("type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 77)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 77)), var_booleanType_3169, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-bool.galgas", 79)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 76)) ;
  }
  {
  routine_enterBooleanOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                       extensionMethod_booleanDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInContext (defineExtensionMethod_booleanDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterBooleanOperators (GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_3922 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 91)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 91)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 91)) ;
  GALGAS_lstring var_boolBoolOp_4029 = function_combineTypeNamesForInfixOperator (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 92)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 92)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_4029, var_selfType_3922, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 96))  COMMA_SOURCE_FILE ("type-bool.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 93)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_boolBoolOp_4029, var_selfType_3922, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-bool.galgas", 101))  COMMA_SOURCE_FILE ("type-bool.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 98)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_4029, var_selfType_3922, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 106))  COMMA_SOURCE_FILE ("type-bool.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 103)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_4029, var_selfType_3922, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 111))  COMMA_SOURCE_FILE ("type-bool.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 108)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_boolBoolOp_4029, var_selfType_3922, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-bool.galgas", 116))  COMMA_SOURCE_FILE ("type-bool.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 113)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_boolBoolOp_4029, var_selfType_3922, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-bool.galgas", 121))  COMMA_SOURCE_FILE ("type-bool.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 118)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_4029, var_selfType_3922, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 126))  COMMA_SOURCE_FILE ("type-bool.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 123)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_boolBoolOp_4029, var_selfType_3922, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-bool.galgas", 131))  COMMA_SOURCE_FILE ("type-bool.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 128)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_boolBoolOp_4029, var_selfType_3922, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-bool.galgas", 136))  COMMA_SOURCE_FILE ("type-bool.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 133)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 139)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 138)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'generateBoolTypeLLVMCode'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateBoolTypeLLVMCode (GALGAS_string & ioArgument_ioLLVMcode,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("GENERATED FUNCTIONS FOR $bool TYPE"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 148)) ;
  GALGAS_lstring var_routineMangledName_5925 = function_routineMangledNameFromAST (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 150)), GALGAS_string ("$uint1").getter_nowhere (SOURCE_FILE ("type-bool.galgas", 151)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-bool.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 149)) ;
  GALGAS_string var_functionName_6031 = function_llvmNameForFunction (var_routineMangledName_5925.getter_string (SOURCE_FILE ("type-bool.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 154)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i1 @").add_operation (var_functionName_6031, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 155)).add_operation (GALGAS_string (" (i1* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 155)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load i1, i1* %inValue\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 %value\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 157)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 159)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign.").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)).add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)).add_operation (GALGAS_string (" (i1* %target, i1*%source) {\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 160)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load i1, i1* %source\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 161)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i1 %value, i1* %target\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 162)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 163)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 164)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  {
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mEnumerationName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mEnumerationName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 54)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 54)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 54)) ;
  }
  GALGAS_bigint var_maxValue_2399 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 56)) ;
  cEnumerator_enumerationConstantList enumerator_2437 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_2437.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_maxValue_2399.objectCompare (enumerator_2437.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_maxValue_2399 = enumerator_2437.current_mConstantValue (HERE) ;
    }
    enumerator_2437.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_2537 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 63)).isValid ()) {
    uint32_t variant_2548 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 63)).uintValue () ;
    bool loop_2548 = true ;
    while (loop_2548) {
      loop_2548 = GALGAS_bool (kIsStrictSup, var_maxValue_2399.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)))).isValid () ;
      if (loop_2548) {
        loop_2548 = GALGAS_bool (kIsStrictSup, var_maxValue_2399.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)))).boolValue () ;
      }
      if (loop_2548 && (0 == variant_2548)) {
        loop_2548 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
      }
      if (loop_2548) {
        variant_2548 -- ;
        var_representationBitCount_2537.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
        var_maxValue_2399 = var_maxValue_2399.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)) ;
      }
    }
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mEnumerationName, GALGAS_string ("$uint").add_operation (var_representationBitCount_2537.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                               extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_enumerationDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                  extensionGetter_enumerationDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_locationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("enum $").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 79)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                           extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Function 'integerEnumAccessorName'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_integerEnumAccessorName (const GALGAS_uint & constinArgument_inBitCount,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("uint").add_operation (constinArgument_inBitCount.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 87)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_integerEnumAccessorName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_integerEnumAccessorName (C_Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_integerEnumAccessorName (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_integerEnumAccessorName ("integerEnumAccessorName",
                                                                         functionWithGenericHeader_integerEnumAccessorName,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         1,
                                                                         functionArgs_integerEnumAccessorName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclarationAST enterInContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                      GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                      GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                      GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                      GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                      GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_classConstantMap var_enumConstantMap_5193 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
  GALGAS_bigint var_maxValue_5217 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 116)) ;
  cEnumerator_enumerationConstantList enumerator_5258 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_5258.hasCurrentObject ()) {
    {
    var_enumConstantMap_5193.setter_insertKey (enumerator_5258.current_mConstantName (HERE), enumerator_5258.current_mConstantValue (HERE), object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_5217.objectCompare (enumerator_5258.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_maxValue_5217 = enumerator_5258.current_mConstantValue (HERE) ;
    }
    enumerator_5258.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_5474 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 125)).isValid ()) {
    uint32_t variant_5485 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 125)).uintValue () ;
    bool loop_5485 = true ;
    while (loop_5485) {
      loop_5485 = GALGAS_bool (kIsStrictSup, var_maxValue_5217.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 125)))).isValid () ;
      if (loop_5485) {
        loop_5485 = GALGAS_bool (kIsStrictSup, var_maxValue_5217.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 125)))).boolValue () ;
      }
      if (loop_5485 && (0 == variant_5485)) {
        loop_5485 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 125)) ;
      }
      if (loop_5485) {
        variant_5485 -- ;
        var_representationBitCount_5474.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)) ;
        var_maxValue_5217 = var_maxValue_5217.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)) ;
      }
    }
  }
  GALGAS_propertyMap var_propertyMap_5667 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 130)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_integerTypeProxy_5695 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("$uint").add_operation (var_representationBitCount_5474.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 133)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 133))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 131)) ;
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_5667, ioArgument_ioRoutineListIR, object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 137)), function_integerEnumAccessorName (var_representationBitCount_5474, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 138)), GALGAS_bool (true), var_integerTypeProxy_5695, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 135)) ;
  }
  GALGAS_PLMType var_enumerationType_6165 = GALGAS_PLMType::constructor_new (var_propertyMap_5667, var_enumConstantMap_5193, GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 147)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 148)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 150)), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_5474  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 152))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 144)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, var_enumerationType_6165, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-enumeration-declaration.galgas", 157)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 154)) ;
  }
  {
  routine_enterEnumerationComparisonOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 161)) ;
  }
  GALGAS_lstring var_conversionToUIntN_6849 = function_routineMangledNameFromAST (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 165)), GALGAS_lstring::constructor_new (function_integerEnumAccessorName (var_representationBitCount_5474, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 166)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 166))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 166)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 164)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_enumToUintRoutineIR::constructor_new (var_conversionToUIntN_6849, GALGAS_bool (false), GALGAS_bool (false), extensionGetter_llvmTypeName (var_enumerationType_6165, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 173))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 169))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 169)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                       extensionMethod_enumerationDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInContext (defineExtensionMethod_enumerationDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Routine 'enterEnumerationComparisonOperators'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterEnumerationComparisonOperators (GALGAS_lstring inArgument_inTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_7381 = function_combineTypeNamesForInfixOperator (inArgument_inTypeName.getter_string (HERE), inArgument_inTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 183)) ;
  GALGAS_PLMType var_booleanType_7474 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 184)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_7381, var_booleanType_7474, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 188))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 185)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_key_7381, var_booleanType_7474, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-enumeration-declaration.galgas", 193))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 190)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_7381, var_booleanType_7474, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 198))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 195)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_7381, var_booleanType_7474, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 203))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 200)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_key_7381, var_booleanType_7474, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-enumeration-declaration.galgas", 208))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 205)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_key_7381, var_booleanType_7474, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-enumeration-declaration.galgas", 213))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateLLVMcodeForEnumeration'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateLLVMcodeForEnumeration (GALGAS_string & ioArgument_ioLLVMcode,
                                             const GALGAS_PLMType constinArgument_inType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_llvmTypeName_8782 = extensionGetter_llvmTypeName (constinArgument_inType, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 225)) ;
  GALGAS_string var_llvmBaseTypeName_8829 = constinArgument_inType.getter_llvmBaseTypeName (HERE) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("@plm.assign.").add_operation (var_llvmBaseTypeName_8829, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 227)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 227)).add_operation (var_llvmBaseTypeName_8829, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 227)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign.").add_operation (var_llvmBaseTypeName_8829, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 229)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 229)).add_operation (var_llvmBaseTypeName_8829, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_8782, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)).add_operation (GALGAS_string ("* %target, "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)).add_operation (var_llvmTypeName_8782, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)).add_operation (GALGAS_string ("*%source) {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (var_llvmTypeName_8782, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 231)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 231)).add_operation (var_llvmTypeName_8782, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 231)).add_operation (GALGAS_string ("* %source\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_8782, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 232)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 232)).add_operation (var_llvmTypeName_8782, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 232)).add_operation (GALGAS_string ("* %target\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 233)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 234)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumToUintRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    GALGAS_string & /* ioArgument_ioAssemblerCode */,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumToUintRoutineIR * object = (const cPtr_enumToUintRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumToUintRoutineIR) ;
  GALGAS_string var_routineLLVMName_9948 = function_llvmNameForFunction (object->mProperty_mRoutineMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (object->mProperty_mRoutineMangledName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 253)).add_operation (GALGAS_string ("  @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 253)).add_operation (var_routineLLVMName_9948, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 254)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 255)).add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 255)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 257)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_enumToUintRoutineIR.mSlotID,
                                           extensionMethod_enumToUintRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumToUintRoutineIR_llvmCodeGeneration (defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStructureTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 209)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_6861 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_6861.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6861.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mStructureTypeName, enumerator_6861.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
      }
    }
    switch (enumerator_6861.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_7151 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_6861.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_7151->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mStructureTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 218)) ;
      }
      break ;
    }
    enumerator_6861.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_7234 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_7234.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_7307 (enumerator_7234.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_7307.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_7307.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 224)) ;
      }
      enumerator_7307.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_7234.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_7234.current_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 227)) ;
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_7234.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
    enumerator_7234.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 232)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 233)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                               extensionMethod_structureDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outRepresentation = object->mProperty_mStructureTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 239)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                           extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_structureDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outLocation = object->mProperty_mStructureTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                  extensionGetter_structureDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_locationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                    GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                    GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GALGAS_globalVariableIRList & ioArgument_ioGlobalVariableIRList,
                                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_propertyList var_propertyList_10005 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 290)) ;
  GALGAS_propertyMap var_propertyMap_10037 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 291)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_10085 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 292)) ;
  GALGAS_constructorSignature var_constructorSignature_10135 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 293)) ;
  GALGAS_string var_constructorKey_10165 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_10189 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_10240 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_10240.hasCurrentObject ()) {
    extensionMethod_enterPropertyInContext (enumerator_10240.current (HERE), object->mProperty_mLLVMBaseTypeName, ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_propertyList_10005, var_propertyMap_10037, var_sortedOperandIRList_10085, var_constructorSignature_10135, var_constructorKey_10165, var_canBeCopied_10189, ioArgument_ioGlobalVariableIRList, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 297)) ;
    enumerator_10240.gotoNextObject () ;
  }
  var_constructorKey_10165.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 310)) ;
  GALGAS_constructorMap var_constructorMap_10672 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 312)) ;
  {
  var_constructorMap_10672.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_10165, object->mProperty_mStructureTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 314)), var_constructorSignature_10135, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_10085  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 313)) ;
  }
  GALGAS_PLMTypeAttributes var_typeAttributes_10947 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 319)) ;
  cEnumerator_lstringlist enumerator_11082 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_11082.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_11082.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 322)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_typeAttributes_10947.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 323)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_11082.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 324)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 324)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = var_canBeCopied_10189.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 325)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mStructureTypeName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 326)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 326)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_11082.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 329)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 329)) ;
    }
    enumerator_11082.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = object->mProperty_mGenerateAssignmentRoutine.operator_and (var_canBeCopied_10189 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 332)).boolEnum () ;
  if (kBoolTrue == test_6) {
    var_typeAttributes_10947 = var_typeAttributes_10947.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 333)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 333)) ;
  }
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 336)), ioArgument_ioContext, var_propertyMap_10037, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 336)) ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_11842 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_11842.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_11891 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 340)) ;
    cEnumerator_lstringlist enumerator_11939 (enumerator_11842.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_11939.hasCurrentObject ()) {
      var_attributeSet_11891.addAssign_operation (enumerator_11939.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 342)) ;
      enumerator_11939.gotoNextObject () ;
    }
    GALGAS_bool var_exportedRoutine_12021 = var_attributeSet_11891.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 344)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 344)) ;
    GALGAS_bool var_canMutateProperties_12095 = var_attributeSet_11891.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 345)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 345)) ;
    GALGAS_lstring var_routineMangledName_12196 = function_routineMangledNameFromAST (object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 348)), enumerator_11842.current (HERE).getter_mName (HERE), enumerator_11842.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 347)) ;
    GALGAS_routineTypedSignature var_signature_12415 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_11842.current (HERE).getter_mFormalArgumentList (HERE), var_signature_12415, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 353)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_12546 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_11842.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_12546 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 355)) ;
    }
    GALGAS_bool var_mutating_12582 = GALGAS_bool (false) ;
    GALGAS_bool var_safe_12603 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12656 (enumerator_11842.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12656.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_12656.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 360)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_mutating_12582 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_12656.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 362)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_safe_12603 = GALGAS_bool (true) ;
        }
      }
      enumerator_12656.gotoNextObject () ;
    }
    GALGAS_routineDescriptor var_descriptor_12883 = GALGAS_routineDescriptor::constructor_new (enumerator_11842.current (HERE).getter_mPublic (HERE), var_exportedRoutine_12021, enumerator_11842.current (HERE).getter_mName (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 370)), var_routineMangledName_12196.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 371)), enumerator_11842.current (HERE).getter_mRoutineKind (HERE), var_signature_12415, var_returnTypeProxy_12546, GALGAS_bool (true), var_canMutateProperties_12095, var_safe_12603  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 367)) ;
    {
    var_propertyMap_10037.setter_insertKey (var_routineMangledName_12196, enumerator_11842.current (HERE).getter_mPublic (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_12883  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 380)) ;
    }
    enumerator_11842.gotoNextObject () ;
  }
  GALGAS_guardMapForContext var_guardMap_13498 = GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 383)) ;
  cEnumerator_guardDeclarationListAST enumerator_13532 (object->mProperty_mGuardListAST, kENUMERATION_UP) ;
  while (enumerator_13532.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_13586 = function_guardUserMangledNameFromAST (object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 387)), enumerator_13532.current (HERE).getter_mGuardName (HERE), enumerator_13532.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 386)) ;
    GALGAS_routineTypedSignature var_signature_13818 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_13532.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_13818, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 392)) ;
    }
    {
    var_guardMap_13498.setter_insertKey (var_guardMangledName_13586, enumerator_13532.current (HERE).getter_mIsPublic (HERE), var_signature_13818, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 394)) ;
    }
    enumerator_13532.gotoNextObject () ;
  }
  GALGAS_PLMType var_structureType_14025 = GALGAS_PLMType::constructor_new (var_propertyMap_10037, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 403)), var_constructorMap_10672, var_guardMap_13498, var_typeAttributes_10947, object->mProperty_mPLMTypeSpecificName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 407)), GALGAS_typeKind::constructor_structure (var_propertyList_10005  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 408)), object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 409))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 401)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mStructureTypeName, var_structureType_14025, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 414)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)) ;
  }
  cEnumerator_functionDeclarationListAST enumerator_14567 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_14567.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_14591 = GALGAS_bool (true) ;
    GALGAS_routineAttributes var_functionAttributes_14625 = GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("type-structure-declaration.galgas", 420)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("type-structure-declaration.galgas", 420)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 420)) ;
    cEnumerator_lstringlist enumerator_14741 (enumerator_14567.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14741.hasCurrentObject ()) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_14741.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        const enumGalgasBool test_10 = var_warnIfUnused_14591.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 423)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_14741.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 424)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)) ;
        }
        var_warnIfUnused_14591 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_9) {
        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_14741.current_mValue (HERE).getter_string (HERE).objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 427)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const enumGalgasBool test_13 = var_functionAttributes_14625.getter_directPropertyAccess (SOURCE_FILE ("type-structure-declaration.galgas", 428)).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_14741.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 429)), GALGAS_string ("duplicated @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 429)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 429)), fixItArray14  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 429)) ;
          }
          var_functionAttributes_14625 = var_functionAttributes_14625.operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("type-structure-declaration.galgas", 431)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)) ;
        }else if (kBoolFalse == test_12) {
          const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, enumerator_14741.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 432)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const enumGalgasBool test_16 = var_functionAttributes_14625.getter_panicAllowed (SOURCE_FILE ("type-structure-declaration.galgas", 433)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 433)).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_14741.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 434)), GALGAS_string ("duplicated @").add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)) ;
            }
            var_functionAttributes_14625 = var_functionAttributes_14625.substract_operation (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("type-structure-declaration.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, enumerator_14741.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 437)))).boolEnum () ;
            if (kBoolTrue == test_18) {
              const enumGalgasBool test_19 = var_functionAttributes_14625.getter_mutating (SOURCE_FILE ("type-structure-declaration.galgas", 438)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_14741.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 439)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 439)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 439)), fixItArray20  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 439)) ;
              }
              var_functionAttributes_14625 = var_functionAttributes_14625.operator_or (GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("type-structure-declaration.galgas", 441)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 441)) ;
            }else if (kBoolFalse == test_18) {
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (enumerator_14741.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 443)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)).add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)), fixItArray21  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)) ;
            }
          }
        }
      }
      enumerator_14741.gotoNextObject () ;
    }
    GALGAS_lstring var_functionMangledName_16023 = function_routineMangledNameFromAST (object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 447)), enumerator_14567.current (HERE).getter_mFunctionName (HERE), enumerator_14567.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 447)) ;
    ioArgument_ioDecoratedRoutineList.addAssign_operation (object->mProperty_mStructureTypeName, enumerator_14567.current (HERE).getter_mMode (HERE), GALGAS_routineKind::constructor_function (enumerator_14567.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 451)), var_warnIfUnused_14591, GALGAS_bool (false), var_functionAttributes_14625, var_functionMangledName_16023, enumerator_14567.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_14567.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_14567.current (HERE).getter_mEndOfFunctionDeclaration (HERE), enumerator_14567.current (HERE).getter_mFunctionReturnTypeName (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 448)) ;
    enumerator_14567.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStructureDeclaration::constructor_new (object->mProperty_mStructureTypeName, GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 464)), object->mProperty_mSystemRoutineListAST, object->mProperty_mGuardListAST, object->mProperty_mMayImplementDeinit  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 462))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 462)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                       extensionMethod_structureDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInContext (defineExtensionMethod_structureDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@decoratedStructureDeclaration semanticAnalysis'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedStructureDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedStructureDeclaration * object = (const cPtr_decoratedStructureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedStructureDeclaration) ;
  GALGAS_PLMType var_structureType_22344 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mStructureTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 608)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 608)) ;
  cEnumerator_functionDeclarationListAST enumerator_22504 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_22504.hasCurrentObject ()) {
    GALGAS_bool var_functionHasUserAccess_22537 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_22600 (enumerator_22504.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_0 = var_functionHasUserAccess_22537.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 612)).isValidAndTrue () ;
    if (enumerator_22600.hasCurrentObject () && bool_0) {
      while (enumerator_22600.hasCurrentObject () && bool_0) {
        var_functionHasUserAccess_22537 = GALGAS_bool (kIsEqual, enumerator_22600.current_mValue (HERE).getter_string (HERE).objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)))) ;
        enumerator_22600.gotoNextObject () ;
        if (enumerator_22600.hasCurrentObject ()) {
          bool_0 = var_functionHasUserAccess_22537.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 612)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_1 = var_functionHasUserAccess_22537.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 615)).boolEnum () ;
    if (kBoolTrue == test_1) {
      extensionMethod_functionSemanticAnalysis (enumerator_22504.current (HERE), var_structureType_22344, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 616)) ;
    }
    enumerator_22504.gotoNextObject () ;
  }
  extensionMethod_systemRoutineSemanticAnalysis (object->mProperty_mSystemRoutineListAST, var_structureType_22344, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 625)) ;
  extensionMethod_guardSemanticAnalysis (object->mProperty_mGuardListAST, var_structureType_22344, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 632)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedStructureDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedStructureDeclaration.mSlotID,
                                         extensionMethod_decoratedStructureDeclaration_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedStructureDeclaration_semanticAnalysis (defineExtensionMethod_decoratedStructureDeclaration_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'generateLLVMcodeForStructure'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateLLVMcodeForStructure (GALGAS_string & ioArgument_ioLLVMcode,
                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                           const GALGAS_PLMType constinArgument_inStructureType,
                                           const GALGAS_uint constinArgument_inPointerSize,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_llvmTypeName_26231 = extensionGetter_llvmTypeName (constinArgument_inStructureType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 705)) ;
  GALGAS_string var_llvmBaseTypeName_26287 = constinArgument_inStructureType.getter_llvmBaseTypeName (SOURCE_FILE ("type-structure-declaration.galgas", 706)).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 706)) ;
  const enumGalgasBool test_0 = extensionGetter_deinitNeeded (constinArgument_inStructureType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("CODE FOR STRUCTURE TYPE ").add_operation (constinArgument_inStructureType.getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @deinit.").add_operation (var_llvmBaseTypeName_26287, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)).add_operation (GALGAS_string (" %inPointer) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
    GALGAS_string var_arg_26648 = GALGAS_string ("ptr") ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (var_arg_26648, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)).add_operation (GALGAS_string (" = inttoptr i"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)).add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)).add_operation (GALGAS_string (" %inPointer to "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)).add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)) ;
    extensionMethod_generateRelease (constinArgument_inStructureType, var_arg_26648, ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)) ;
  }
  const enumGalgasBool test_1 = constinArgument_inStructureType.getter_attributes (HERE).getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 718)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_arcAssignmentList var_arcAssignmentList_27022 = extensionGetter_arcList (constinArgument_inStructureType, GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign."), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 722)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_llvmBaseTypeName_26287, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 723)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 724)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_llvmBaseTypeName_26287, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 725)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)).add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)).add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)) ;
    cEnumerator_arcAssignmentList enumerator_27493 (var_arcAssignmentList_27022, kENUMERATION_UP) ;
    while (enumerator_27493.hasCurrentObject ()) {
      GALGAS_string var_propertyTypeLLVMName_27529 = extensionGetter_llvmTypeName (enumerator_27493.current_mPropertyType (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 729)) ;
      GALGAS_string var_llvmVarName_27583 = GALGAS_string ("%arc.retain.").add_operation (enumerator_27493.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 730)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 730)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 731)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_27583, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)).add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)).add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)) ;
      cEnumerator_uintlist enumerator_27877 (enumerator_27493.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_27877.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_27877.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 734)) ;
        enumerator_27877.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_27493.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 736)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 736)) ;
      GALGAS_string var_llvmLoadedVarName_28011 = var_llvmVarName_27583.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 737)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_28011, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)).add_operation (var_propertyTypeLLVMName_27529, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)).add_operation (var_propertyTypeLLVMName_27529, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)).add_operation (var_llvmVarName_27583, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_27529, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)).add_operation (var_llvmLoadedVarName_28011, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)) ;
      enumerator_27493.gotoNextObject () ;
    }
    cEnumerator_arcAssignmentList enumerator_28366 (var_arcAssignmentList_27022, kENUMERATION_UP) ;
    while (enumerator_28366.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_28393 = GALGAS_string ("%arc.release.").add_operation (enumerator_28366.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 742)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 742)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 743)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_28393, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 744)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 744)).add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 744)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 744)).add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 744)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 744)) ;
      cEnumerator_uintlist enumerator_28688 (enumerator_28366.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_28688.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_28688.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)) ;
        enumerator_28688.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_28366.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 748)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 748)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 748)) ;
      GALGAS_string var_propertyTypeLLVMName_28825 = extensionGetter_llvmTypeName (enumerator_28366.current_mPropertyType (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
      GALGAS_string var_llvmLoadedVarName_28885 = var_llvmVarName_28393.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_28885, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)).add_operation (var_propertyTypeLLVMName_28825, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)).add_operation (var_propertyTypeLLVMName_28825, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)).add_operation (var_llvmVarName_28393, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_28825, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)).add_operation (var_llvmLoadedVarName_28885, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
      enumerator_28366.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)).add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)).add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)).add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 768)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add nsw nuw i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_26231, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 791)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 792)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 793)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  {
  const GALGAS_syncDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mSyncToolName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 59)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_2767 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_2767.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2767.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncToolName, enumerator_2767.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 63)) ;
      }
    }
    const enumGalgasBool test_2 = enumerator_2767.current_mIsPublic (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_2767.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 66)), GALGAS_string ("a sync tool property cannot be public (should be private)"), fixItArray3  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
    }
    switch (enumerator_2767.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_3161 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_2767.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3161->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mSyncToolName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 71)) ;
      }
      break ;
    }
    enumerator_2767.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_3244 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_3244.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_3317 (enumerator_3244.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_3317.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_3317.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 77)) ;
      }
      enumerator_3317.gotoNextObject () ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_3244.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_3244.current_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 80)) ;
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_3244.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 82)) ;
    enumerator_3244.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 85)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 86)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                               extensionMethod_syncDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("synctype.").add_operation (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 92)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                           extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@syncDeclarationAST locationForErrorSignaling'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_syncDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outLocation = object->mProperty_mSyncToolName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                  extensionGetter_syncDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncDeclarationAST_locationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@syncDeclarationAST enterInContext'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                               GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               GALGAS_globalVariableIRList & ioArgument_ioGlobalVariableIRList,
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  GALGAS_propertyList var_propertyList_5370 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 117)) ;
  GALGAS_propertyMap var_propertyMap_5402 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 118)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_5450 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-sync-declaration.galgas", 119)) ;
  GALGAS_constructorSignature var_constructorSignature_5500 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 120)) ;
  GALGAS_string var_constructorKey_5530 = GALGAS_string ("(") ;
  cEnumerator_structurePropertyListAST enumerator_5580 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_5580.hasCurrentObject ()) {
    GALGAS_bool joker_5839 = GALGAS_bool::constructor_default (SOURCE_FILE ("type-sync-declaration.galgas", 132)) ;
    extensionMethod_enterPropertyInContext (enumerator_5580.current (HERE), object->mProperty_mSyncToolName, ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_propertyList_5370, var_propertyMap_5402, var_sortedOperandIRList_5450, var_constructorSignature_5500, var_constructorKey_5530, joker_5839, ioArgument_ioGlobalVariableIRList, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 123)) ;
    enumerator_5580.gotoNextObject () ;
  }
  var_constructorKey_5530.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 136)) ;
  GALGAS_constructorMap var_constructorMap_5998 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 138)) ;
  {
  var_constructorMap_5998.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_5530, object->mProperty_mSyncToolName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 140)), var_constructorSignature_5500, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_5450  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 139)) ;
  }
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 145)), ioArgument_ioContext, var_propertyMap_5402, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 145)) ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_6473 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_6473.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_6522 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sync-declaration.galgas", 149)) ;
    cEnumerator_lstringlist enumerator_6570 (enumerator_6473.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_6570.hasCurrentObject ()) {
      var_attributeSet_6522.addAssign_operation (enumerator_6570.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 151)) ;
      enumerator_6570.gotoNextObject () ;
    }
    GALGAS_bool var_exportedRoutine_6652 = var_attributeSet_6522.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 153)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 153)) ;
    GALGAS_bool var_canMutateProperties_6726 = var_attributeSet_6522.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 154)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 154)) ;
    GALGAS_lstring var_routineMangledName_6827 = function_routineMangledNameFromAST (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 157)), enumerator_6473.current (HERE).getter_mName (HERE), enumerator_6473.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 156)) ;
    GALGAS_routineTypedSignature var_signature_7041 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_6473.current (HERE).getter_mFormalArgumentList (HERE), var_signature_7041, inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 162)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_7172 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_6473.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_7172 COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 164)) ;
    }
    GALGAS_bool var_mutating_7208 = GALGAS_bool (false) ;
    GALGAS_bool var_safe_7229 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7282 (enumerator_6473.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7282.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_7282.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 169)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_mutating_7208 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7282.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 171)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_safe_7229 = GALGAS_bool (true) ;
        }
      }
      enumerator_7282.gotoNextObject () ;
    }
    GALGAS_routineDescriptor var_descriptor_7509 = GALGAS_routineDescriptor::constructor_new (enumerator_6473.current (HERE).getter_mPublic (HERE), var_exportedRoutine_6652, enumerator_6473.current (HERE).getter_mName (HERE).getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 179)), var_routineMangledName_6827.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 180)), enumerator_6473.current (HERE).getter_mRoutineKind (HERE), var_signature_7041, var_returnTypeProxy_7172, GALGAS_bool (true), var_canMutateProperties_6726, var_safe_7229  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 176)) ;
    {
    var_propertyMap_5402.setter_insertKey (var_routineMangledName_6827, enumerator_6473.current (HERE).getter_mPublic (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_7509  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 189)) ;
    }
    enumerator_6473.gotoNextObject () ;
  }
  GALGAS_guardMapForContext var_guardMap_8124 = GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 192)) ;
  cEnumerator_guardDeclarationListAST enumerator_8158 (object->mProperty_mGuardListAST, kENUMERATION_UP) ;
  while (enumerator_8158.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_8212 = function_guardUserMangledNameFromAST (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 196)), enumerator_8158.current (HERE).getter_mGuardName (HERE), enumerator_8158.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 195)) ;
    GALGAS_routineTypedSignature var_signature_8440 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_8158.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_8440, inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 201)) ;
    }
    {
    var_guardMap_8124.setter_insertKey (var_guardMangledName_8212, enumerator_8158.current (HERE).getter_mIsPublic (HERE), var_signature_8440, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 203)) ;
    }
    enumerator_8158.gotoNextObject () ;
  }
  GALGAS_PLMType var_structureType_8647 = GALGAS_PLMType::constructor_new (var_propertyMap_5402, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 212)), var_constructorMap_5998, var_guardMap_8124, GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 215)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 216)), GALGAS_typeKind::constructor_syncTool (var_propertyList_5370  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 217)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 218))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 210)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mSyncToolName, var_structureType_8647, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-sync-declaration.galgas", 223)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 220)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStructureDeclaration::constructor_new (object->mProperty_mSyncToolName, object->mProperty_mFunctionDeclarationListAST, object->mProperty_mSystemRoutineListAST, object->mProperty_mGuardListAST, GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 227))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 227)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                       extensionMethod_syncDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInContext (defineExtensionMethod_syncDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_integerDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                  extensionGetter_integerDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_integerDeclarationAST_locationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_1434 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_1434, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_1434, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                               extensionMethod_integerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 37)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                           extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'minValueForInteger'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint function_minValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 46)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) COMMA_SOURCE_FILE ("type-integer.galgas", 48)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_minValueForInteger (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_minValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'maxValueForInteger'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint function_maxValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)).left_shift_operation (constinArgument_inBitCount COMMA_SOURCE_FILE ("type-integer.galgas", 56)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 56)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_maxValueForInteger (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_maxValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'byteSwappedMethodName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_byteSwappedMethodName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("byteSwapped") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_byteSwappedMethodName = false ;
static GALGAS_string gOnceFunctionResult_byteSwappedMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_byteSwappedMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_byteSwappedMethodName) {
    gOnceFunctionResult_byteSwappedMethodName = onceFunction_byteSwappedMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_byteSwappedMethodName = true ;
  }
  return gOnceFunctionResult_byteSwappedMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_byteSwappedMethodName (void) {
  gOnceFunctionResult_byteSwappedMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_byteSwappedMethodName (NULL,
                                                                   releaseOnceFunctionResult_byteSwappedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_byteSwappedMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_byteSwappedMethodName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_byteSwappedMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_byteSwappedMethodName ("byteSwappedMethodName",
                                                                       functionWithGenericHeader_byteSwappedMethodName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_byteSwappedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'bitReversedMethodName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_bitReversedMethodName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bitReversed") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_bitReversedMethodName = false ;
static GALGAS_string gOnceFunctionResult_bitReversedMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_bitReversedMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_bitReversedMethodName) {
    gOnceFunctionResult_bitReversedMethodName = onceFunction_bitReversedMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_bitReversedMethodName = true ;
  }
  return gOnceFunctionResult_bitReversedMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_bitReversedMethodName (void) {
  gOnceFunctionResult_bitReversedMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_bitReversedMethodName (NULL,
                                                                   releaseOnceFunctionResult_bitReversedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_bitReversedMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_bitReversedMethodName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_bitReversedMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_bitReversedMethodName ("bitReversedMethodName",
                                                                       functionWithGenericHeader_bitReversedMethodName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_bitReversedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Once function 'countLeadingZerosMethodName'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_countLeadingZerosMethodName (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("leadingZeroCount") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_countLeadingZerosMethodName = false ;
static GALGAS_string gOnceFunctionResult_countLeadingZerosMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_countLeadingZerosMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_countLeadingZerosMethodName) {
    gOnceFunctionResult_countLeadingZerosMethodName = onceFunction_countLeadingZerosMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_countLeadingZerosMethodName = true ;
  }
  return gOnceFunctionResult_countLeadingZerosMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_countLeadingZerosMethodName (void) {
  gOnceFunctionResult_countLeadingZerosMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_countLeadingZerosMethodName (NULL,
                                                                         releaseOnceFunctionResult_countLeadingZerosMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_countLeadingZerosMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_countLeadingZerosMethodName (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_countLeadingZerosMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_countLeadingZerosMethodName ("countLeadingZerosMethodName",
                                                                             functionWithGenericHeader_countLeadingZerosMethodName,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_countLeadingZerosMethodName) ;

