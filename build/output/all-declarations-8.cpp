#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


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

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_routineFormalArgumentListAST GALGAS_guardDeclarationListAST_2D_element::getter_mGuardFormalArgumentList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListAST_2D_element::~ GALGAS_functionCallEffectiveParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_expressionAST & inOperand1 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionCallEffectiveParameterListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallEffectiveParameterListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @functionCallEffectiveParameterListAST-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ("functionCallEffectiveParameterListAST-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
                                                                                            const GALGAS_PLMType & inOperand2) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mParameterType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_PLMType GALGAS_procEffectiveParameterList_2D_element::getter_mParameterType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mTypeProxy () {
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
mProperty_mTypeProxy (inOperand2) {
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
    result = mProperty_mTypeProxy.objectCompare (inOperand.mProperty_mTypeProxy) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineTypedSignature_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mTypeProxy.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mTypeProxy.drop () ;
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
    mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineTypedSignature_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeProxy ;
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

GALGAS_internalValuedObjectMapMapForContext_2D_element::GALGAS_internalValuedObjectMapMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mObjectState (),
mProperty_mObjectShouldBeValuedAtEndOfScope (),
mProperty_mPossibleValuedObject () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalValuedObjectMapMapForContext_2D_element::~ GALGAS_internalValuedObjectMapMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalValuedObjectMapMapForContext_2D_element::GALGAS_internalValuedObjectMapMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_valuedObjectState & inOperand1,
                                                                                                                const GALGAS_bool & inOperand2,
                                                                                                                const GALGAS_valuedObject & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mObjectState (inOperand1),
mProperty_mObjectShouldBeValuedAtEndOfScope (inOperand2),
mProperty_mPossibleValuedObject (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalValuedObjectMapMapForContext_2D_element GALGAS_internalValuedObjectMapMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_valuedObjectState & inOperand1,
                                                                                                                                const GALGAS_bool & inOperand2,
                                                                                                                                const GALGAS_valuedObject & inOperand3 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_internalValuedObjectMapMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_internalValuedObjectMapMapForContext_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_internalValuedObjectMapMapForContext_2D_element::objectCompare (const GALGAS_internalValuedObjectMapMapForContext_2D_element & inOperand) const {
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_internalValuedObjectMapMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mPossibleValuedObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalValuedObjectMapMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObjectState.drop () ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.drop () ;
  mProperty_mPossibleValuedObject.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalValuedObjectMapMapForContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @internalValuedObjectMapMapForContext-element:" ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_internalValuedObjectMapMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_internalValuedObjectMapMapForContext_2D_element::getter_mObjectState (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalValuedObjectMapMapForContext_2D_element::getter_mObjectShouldBeValuedAtEndOfScope (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObject GALGAS_internalValuedObjectMapMapForContext_2D_element::getter_mPossibleValuedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPossibleValuedObject ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @internalValuedObjectMapMapForContext-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_internalValuedObjectMapMapForContext_2D_element ("internalValuedObjectMapMapForContext-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_internalValuedObjectMapMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalValuedObjectMapMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_internalValuedObjectMapMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_internalValuedObjectMapMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalValuedObjectMapMapForContext_2D_element GALGAS_internalValuedObjectMapMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_internalValuedObjectMapMapForContext_2D_element result ;
  const GALGAS_internalValuedObjectMapMapForContext_2D_element * p = (const GALGAS_internalValuedObjectMapMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_internalValuedObjectMapMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalValuedObjectMapMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                                        const GALGAS_PLMType & inOperand1,
                                                                        const GALGAS_infixOperatorDescription & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultType (inOperand1),
mProperty_mOperation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_PLMType GALGAS_infixOperatorMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
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
                                                                          const GALGAS_PLMType & inOperand1,
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
                                                                                          const GALGAS_PLMType & inOperand1,
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

GALGAS_PLMType GALGAS_globalVariableMap_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
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

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_bool & inOperand1,
                                                              const GALGAS_propertyAccessKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mAccess (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyMap_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessKind GALGAS_propertyMap_2D_element::getter_mAccess (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccess ;
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
                                                                                const GALGAS_PLMType & inOperand1,
                                                                                const GALGAS_uint & inOperand2) :
mProperty_mSelector (inOperand0),
mProperty_mType (inOperand1),
mProperty_mFieldIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_PLMType GALGAS_constructorSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
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
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 410)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)) ;
  }
  GALGAS_PLMType var_optionalPropertyType_15756 = temp_0 ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_16049 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_16049, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 414)) ;
  }
  switch (inObject.mProperty_mInitialisation.enumValue ()) {
  case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
    break ;
  case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
    {
      const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_17717 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (inObject.mProperty_mInitialisation.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_initExpression = extractPtr_17717->mAssociatedValue0 ;
      GALGAS_semanticTemporariesStruct joker_16436 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 428)) ;
      GALGAS_allocaList joker_16535 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 431)) ;
      GALGAS_instructionListIR joker_16563 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 432)) ;
      GALGAS_objectIR var_expressionIR_16605 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)), GALGAS_bool (false), GALGAS_lstring::constructor_new (constinArgument_inStructureName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)), constinArgument_inStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)), var_optionalPropertyType_15756, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-structure-declaration.galgas", 427)), joker_16436, ioArgument_ioGlobalLiteralStringMap, var_universalMap_16049, joker_16535, joker_16563, var_expressionIR_16605, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)) ;
      const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionIR_16605, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 435)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 436)), GALGAS_string ("initialization expression cannot be computed statically"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)) ;
      }
      GALGAS_PLMType var_actualPropertyType_16777 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_15756.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 439)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_actualPropertyType_16777 = var_optionalPropertyType_15756 ;
      }else if (kBoolFalse == test_4) {
        var_actualPropertyType_16777 = extensionGetter_type (var_expressionIR_16605, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 442)) ;
      }
      const enumGalgasBool test_5 = extensionGetter_instanciable (var_actualPropertyType_16777, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 444)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 445)), GALGAS_string ("$").add_operation (var_actualPropertyType_16777.getter_plmTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)) ;
      }
      const enumGalgasBool test_7 = extensionGetter_copyable (var_actualPropertyType_16777, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 447)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 447)).boolEnum () ;
      if (kBoolTrue == test_7) {
        ioArgument_canBeCopied = GALGAS_bool (false) ;
      }
      const enumGalgasBool test_8 = inObject.mProperty_mIsConstant.boolEnum () ;
      if (kBoolTrue == test_8) {
        {
        ioArgument_propertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_constantProperty (extensionGetter_withType (var_expressionIR_16605, var_actualPropertyType_16777, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 454))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 451)) ;
        }
      }else if (kBoolFalse == test_8) {
        GALGAS_uint var_propertyIndex_17386 = ioArgument_propertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 457)) ;
        ioArgument_propertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_actualPropertyType_16777  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 458)) ;
        {
        ioArgument_propertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_indexed (var_actualPropertyType_16777, var_propertyIndex_17386  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 459)) ;
        }
        ioArgument_sortedOperandIRList.addAssign_operation (extensionGetter_withType (var_expressionIR_16605, var_actualPropertyType_16777, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)), var_propertyIndex_17386  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)) ;
      }
    }
    break ;
  case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
    {
      const enumGalgasBool test_9 = extensionGetter_instanciable (var_optionalPropertyType_15756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 467)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 468)), GALGAS_string ("$").add_operation (var_optionalPropertyType_15756.getter_plmTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 468)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 468)), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 468)) ;
      }
      GALGAS_uint var_propertyIndex_17918 = ioArgument_propertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 470)) ;
      ioArgument_propertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15756  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 471)) ;
      {
      ioArgument_propertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_indexed (var_optionalPropertyType_15756, var_propertyIndex_17918  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 472)) ;
      }
      ioArgument_constructorSignature.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15756, var_propertyIndex_17918  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 477)) ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)) ;
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
                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_variableAnnotationType_7126 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_variableAnnotationType_7126 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 218)) ;
  }else if (kBoolFalse == test_0) {
    var_variableAnnotationType_7126 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 220)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 220)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_7386 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-variable.galgas", 223)) ;
  GALGAS_instructionListIR var_instructionGenerationList_7444 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 224)) ;
  GALGAS_allocaList var_allocaList_7474 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 225)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_7585 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_7585, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 226)) ;
  }
  GALGAS_objectIR var_expressionResult_8046 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mProperty_mSourceExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 231)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-variable.galgas", 233)), var_variableAnnotationType_7126, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-variable.galgas", 236)), var_temporaries_7386, ioArgument_ioGlobalLiteralStringMap, var_universalMap_7585, var_allocaList_7474, var_instructionGenerationList_7444, var_expressionResult_8046, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 230)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_7444.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 244)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_7474.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 244)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_expressionResult_8046, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 244)).operator_not (SOURCE_FILE ("declaration-global-variable.galgas", 244)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 245)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 245)) ;
  }
  GALGAS_bool test_5 = GALGAS_bool (kIsEqual, var_variableAnnotationType_7126.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-global-variable.galgas", 248)))) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = extensionGetter_type (var_expressionResult_8046, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 248)).getter_kind (HERE).getter_isStaticInteger (SOURCE_FILE ("declaration-global-variable.galgas", 248)) ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 249)), GALGAS_string ("cannot infer type"), fixItArray7  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 249)) ;
  }
  GALGAS_objectIR var_result_8444 = function_checkAssignmentCompatibility (var_expressionResult_8046, var_variableAnnotationType_7126, inObject.mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 251)) ;
  GALGAS_stringset var_executionModes_8653 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-variable.galgas", 257)) ;
  GALGAS_allowedGuardMap var_allowedGuardMap_10830 = GALGAS_allowedGuardMap::constructor_emptyMap (SOURCE_FILE ("declaration-global-variable.galgas", 310)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalVariableMap.setter_insertKey (inObject.mProperty_mVarName, extensionGetter_type (var_result_8444, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 349)), var_executionModes_8653, var_allowedGuardMap_10830, var_result_8444, GALGAS_bool (false), inObject.mProperty_mAllowedAccessToAll, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 347)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedGlobalVariable::constructor_new (inObject.mProperty_mVarName, var_executionModes_8653, var_result_8444  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 360))  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 360)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 393)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (extensionGetter_type (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 394)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 394)) ;
  GALGAS_string var_initialString_14586 = extensionGetter_llvmName (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 395)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString_14586.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 397)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_initialString_14586, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 399)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 401)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (inObject.mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 330)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 330)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mProperty_mType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 331)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 331)) ;
  cEnumerator_operandIRList enumerator_14220 (inObject.mProperty_mInitialValueList, kENUMERATION_UP) ;
  while (enumerator_14220.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_14220.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 333)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 333)).add_operation (extensionGetter_llvmName (enumerator_14220.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 333)) ;
    if (enumerator_14220.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 334)) ;
    }
    enumerator_14220.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 336)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@taskListAST-element semanticAnalysis'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const GALGAS_taskListAST_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_stackSize_9205 = inObject.mProperty_mStackSize.getter_bigint (HERE) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsStrictInf, var_stackSize_9205.objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 248)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsNotEqual, var_stackSize_9205.modulo_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 248)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 248)))) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (inObject.mProperty_mStackSize.getter_location (SOURCE_FILE ("declaration-task.galgas", 249)), GALGAS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray2  COMMA_SOURCE_FILE ("declaration-task.galgas", 249)) ;
  }
  GALGAS_PLMType var_taskType_9446 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mTaskName, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 252)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 252)) ;
  cEnumerator_functionDeclarationListAST enumerator_9553 (inObject.mProperty_mTaskProcList, kENUMERATION_UP) ;
  while (enumerator_9553.hasCurrentObject ()) {
    {
    routine_routineSemanticAnalysis (var_taskType_9446, GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 256))  COMMA_SOURCE_FILE ("declaration-task.galgas", 256)), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 257)), enumerator_9553.current (HERE).getter_mFunctionName (HERE), enumerator_9553.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_9553.current (HERE).getter_mFunctionReturnTypeName (HERE), enumerator_9553.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_9553.current (HERE).getter_mEndOfFunctionDeclaration (HERE), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 254)) ;
    }
    enumerator_9553.gotoNextObject () ;
  }
  GALGAS_taskSetupSortedListAST var_taskInitSortedListAST_10263 = GALGAS_taskSetupSortedListAST::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 273)) ;
  cEnumerator_taskSetupListAST enumerator_10339 (inObject.mProperty_mTaskSetupListAST, kENUMERATION_UP) ;
  while (enumerator_10339.hasCurrentObject ()) {
    var_taskInitSortedListAST_10263.addAssign_operation (enumerator_10339.current_mTaskSetupPriority (HERE), enumerator_10339.current_mTaskSetupInstructionList (HERE), enumerator_10339.current_mEndOfTaskSetupDeclaration (HERE), enumerator_10339.current_mTaskSetupPriority (HERE).getter_bigint (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 275)) ;
    enumerator_10339.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_setupInstructionListIR_10483 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 277)) ;
  GALGAS_allocaList var_setupAllocaList_10518 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 278)) ;
  cEnumerator_taskSetupSortedListAST enumerator_10624 (var_taskInitSortedListAST_10263, kENUMERATION_UP) ;
  while (enumerator_10624.hasCurrentObject ()) {
    GALGAS_allocaList var_partialAllocaList_10966 ;
    GALGAS_instructionListIR var_partialInstructionGenerationList_11029 ;
    {
    routine_initSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_taskType_9446, enumerator_10624.current_mTaskSetupPriority (HERE), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 286)), enumerator_10624.current_mTaskSetupInstructionList (HERE), enumerator_10624.current_mEndOfTaskSetupDeclaration (HERE), var_partialAllocaList_10966, var_partialInstructionGenerationList_11029, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 280)) ;
    }
    var_setupInstructionListIR_10483.plusAssign_operation(var_partialInstructionGenerationList_11029, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 292)) ;
    var_setupAllocaList_10518.plusAssign_operation(var_partialAllocaList_10966, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 293)) ;
    enumerator_10624.gotoNextObject () ;
  }
  GALGAS_instructionListAST var_taskListInstructionList_11330 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 297)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, inObject.mProperty_mGuardedCommandList.getter_length (SOURCE_FILE ("declaration-task.galgas", 298)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_syncInstructionAST var_syncInstruction_11402 = GALGAS_syncInstructionAST::constructor_new (inObject.mProperty_mTaskName.getter_location (HERE), inObject.mProperty_mGuardedCommandList, inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 299)) ;
    var_taskListInstructionList_11330.addAssign_operation (var_syncInstruction_11402  COMMA_SOURCE_FILE ("declaration-task.galgas", 300)) ;
  }
  {
  routine_routineSemanticAnalysis (var_taskType_9446, GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 304))  COMMA_SOURCE_FILE ("declaration-task.galgas", 304)), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 305)), GALGAS_lstring::constructor_new (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 306)), inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 306)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 307)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-task.galgas", 308)), var_taskListInstructionList_11330, inObject.mProperty_mTaskName.getter_location (HERE), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 302)) ;
  }
  GALGAS_uint var_taskNameStringIndex_12244 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, inObject.mProperty_mTaskName.getter_string (HERE), var_taskNameStringIndex_12244, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 320)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (inObject.mProperty_mTaskName, var_taskType_9446, inObject.mProperty_mPriority.getter_bigint (HERE), inObject.mProperty_mStackSize.getter_bigint (HERE), var_setupAllocaList_10518, var_setupInstructionListIR_10483, var_taskNameStringIndex_12244, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 322)) ;
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
  GALGAS_routineTypedSignature var_signature_3497 ;
  {
  routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mProcFormalArgumentList, var_signature_3497, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 77)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_3622 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mReturnTypeName, var_returnTypeProxy_3622 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 79)) ;
  }
  {
  extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, inObject.mProperty_mExternProcedureName, extensionGetter_routineSignature (inObject.mProperty_mProcFormalArgumentList, inObject.mProperty_mExternProcedureName.getter_location (SOURCE_FILE ("declaration-extern-proc.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 82)), inObject.mProperty_mRoutineNameForGeneration, GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (inObject.mProperty_mMode  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 87)), var_signature_3497, var_returnTypeProxy_3622, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 80)) ;
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
  GALGAS_string var_procName_7510 = function_llvmNameForFunction (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 185)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("extern procedure ").add_operation (inObject.mProperty_lkey.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 188)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_procName_7510, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
  cEnumerator_routineFormalArgumentListForGeneration enumerator_7850 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7850.hasCurrentObject ()) {
    switch (enumerator_7850.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7850.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)).add_operation (enumerator_7850.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7850.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)).add_operation (function_llvmNameForLocalVariable (enumerator_7850.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 200)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7850.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)).add_operation (function_llvmNameForLocalVariable (enumerator_7850.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)) ;
      }
      break ;
    }
    if (enumerator_7850.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 205)) ;
    }
    enumerator_7850.gotoNextObject () ;
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
  GALGAS_string var_guardRoutineName_20598 ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      var_guardRoutineName_20598 = function_llvmNameForGuardCall (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 514)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      var_guardRoutineName_20598 = function_llvmNameForGuardImplementation (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 516)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardRoutineName_20598, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_20598, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 519)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 519)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 520)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = function_llvmTypeStringFromPLMname (inObject.mProperty_mReceiverType.getter_plmTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 523)) ;
  }
  GALGAS_string var_receiverTypeName_20951 = temp_0 ;
  GALGAS_bool var_first_21080 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_20951.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_receiverTypeName_20951.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 527)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 527)) ;
    var_first_21080 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_21269 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21269.hasCurrentObject ()) {
    const enumGalgasBool test_3 = var_first_21080.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_first_21080 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 534)) ;
    }
    switch (enumerator_21269.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21269.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)).add_operation (enumerator_21269.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21269.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 540)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 540)).add_operation (function_llvmNameForLocalVariable (enumerator_21269.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 540)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21269.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)).add_operation (function_llvmNameForLocalVariable (enumerator_21269.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)) ;
      }
      break ;
    }
    enumerator_21269.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 545)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 545)) ;
  cEnumerator_allocaList enumerator_21898 (inObject.mProperty_mAllocaList, kENUMERATION_UP) ;
  while (enumerator_21898.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_21898.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)).add_operation (enumerator_21898.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)) ;
    enumerator_21898.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_22060 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22060.hasCurrentObject ()) {
    switch (enumerator_22060.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_22130 = extensionGetter_llvmTypeName (enumerator_22060.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (enumerator_22060.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)).add_operation (var_llvmType_22130, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22060.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_22365 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22365.hasCurrentObject ()) {
    switch (enumerator_22365.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_22435 = extensionGetter_llvmTypeName (enumerator_22365.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 562)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_22435, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)).add_operation (enumerator_22365.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)).add_operation (var_llvmType_22435, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (function_llvmNameForLocalVariable (enumerator_22365.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22365.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_22739 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_22825 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_true_22921 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 571)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 571)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_false_22989 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 572)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 572)) ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i1 false, i1* ").add_operation (var_accepted_5F_llvmName_22739, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 576)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 576)) ;
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 577)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_22825, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 578)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 578)).add_operation (var_accepted_5F_llvmName_22739, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 578)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 578)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_22825, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (var_accepted_5F_llvmName_5F_true_22921, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (var_accepted_5F_llvmName_5F_false_22989, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_llvmName_5F_true_22921.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 581)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 582)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_llvmName_5F_false_22989.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 583)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 583)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 584)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_25172 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_baseGuardAllocaList = extractPtr_25172->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_25172->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_25172->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_baseGuardEffectiveParameterList = extractPtr_25172->mAssociatedValue3 ;
      cEnumerator_allocaList enumerator_23994 (extractedValue_baseGuardAllocaList, kENUMERATION_UP) ;
      while (enumerator_23994.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_23994.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (enumerator_23994.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)) ;
        enumerator_23994.gotoNextObject () ;
      }
      extensionMethod_instructionListLLVMCode (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %baseGuard.result = call i1 @").add_operation (function_llvmNameForGuardCall (extractedValue_baseGuardMangledName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 592)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_24364 (extractedValue_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_24364.hasCurrentObject ()) {
        switch (enumerator_24364.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24364.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 596)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 596)).add_operation (extensionGetter_llvmName (enumerator_24364.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 596)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24364.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)).add_operation (extensionGetter_llvmName (enumerator_24364.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24364.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)).add_operation (extensionGetter_llvmName (enumerator_24364.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)) ;
          }
          break ;
        }
        if (enumerator_24364.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)) ;
        }
        enumerator_24364.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %baseGuard.result, label %baseGuard.true, label %baseGuard.exit\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("baseGuard.true:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)) ;
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("baseGuard.exit:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 610)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare void @noteGuardHasBeenAccepted ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)) ;
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
  GALGAS_string var_routineName_6299 ;
  switch (inObject.mProperty_mKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_routineName_6299 = function_llvmNameForFunction (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 162)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineName_6299 = function_llvmNameForSectionImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 163)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      var_routineName_6299 = function_llvmNameForSafeImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 164)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineName_6299 = function_llvmNameForServiceImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 165)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_routineName_6299 = function_llvmNameForPrimitiveImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 166)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineName_6299, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 168)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 169)) ;
  const enumGalgasBool test_0 = inObject.mProperty_mGlobal.operator_not (SOURCE_FILE ("semantic-routines.galgas", 170)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 171)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_routineName_6299, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 175)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = function_llvmTypeStringFromPLMname (inObject.mProperty_mReceiverType.getter_plmTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 177)) ;
  }
  GALGAS_string var_receiverTypeName_7055 = temp_1 ;
  GALGAS_bool var_first_7182 = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_7055.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_receiverTypeName_7055.getter_assemblerRepresentation (SOURCE_FILE ("semantic-routines.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 181)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 181)) ;
    var_first_7182 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_7371 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7371.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_first_7182.boolEnum () ;
    if (kBoolTrue == test_4) {
      var_first_7182 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 188)) ;
    }
    switch (enumerator_7371.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7371.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)).add_operation (enumerator_7371.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7371.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)).add_operation (function_llvmNameForLocalVariable (enumerator_7371.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7371.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)).add_operation (function_llvmNameForLocalVariable (enumerator_7371.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)) ;
      }
      break ;
    }
    enumerator_7371.gotoNextObject () ;
  }
  GALGAS_bool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("semantic-routines.galgas", 199)) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = inObject.mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = var_first_7182.operator_not (SOURCE_FILE ("semantic-routines.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 201)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 203)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, inObject.mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 207)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 208)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 208)).add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 208)) ;
  }
  cEnumerator_allocaList enumerator_8433 (inObject.mProperty_mAllocaList, kENUMERATION_UP) ;
  while (enumerator_8433.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_8433.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 212)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 212)).add_operation (enumerator_8433.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 212)) ;
    enumerator_8433.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_8595 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8595.hasCurrentObject ()) {
    switch (enumerator_8595.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_8665 = extensionGetter_llvmTypeName (enumerator_8595.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 218)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (enumerator_8595.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 219)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 219)).add_operation (var_llvmType_8665, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 219)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 219)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_8595.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_8900 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8900.hasCurrentObject ()) {
    switch (enumerator_8900.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_8970 = extensionGetter_llvmTypeName (enumerator_8900.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 226)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_8970, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (enumerator_8900.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (var_llvmType_8970, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (function_llvmNameForLocalVariable (enumerator_8900.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_8900.gotoNextObject () ;
  }
  extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 233)) ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 235)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)) ;
  }else if (kBoolFalse == test_9) {
    GALGAS_string var_resultVarLLVMName_9470 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 238)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)).add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)).add_operation (var_resultVarLLVMName_9470, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 240)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 240)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 242)) ;
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
                                                              const GALGAS_instructionListSortedListIR & inOperand10,
                                                              const GALGAS_instructionListSortedListIR & inOperand11,
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
                                        GALGAS_bootListIR::constructor_emptySortedList (HERE),
                                        GALGAS_initListIR::constructor_emptySortedList (HERE),
                                        GALGAS_instructionListSortedListIR::constructor_emptySortedList (HERE),
                                        GALGAS_instructionListSortedListIR::constructor_emptySortedList (HERE),
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
                                                                              const GALGAS_instructionListSortedListIR & inOperand10,
                                                                              const GALGAS_instructionListSortedListIR & inOperand11,
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

GALGAS_instructionListSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicSetupInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicLoopInstructionListIR (UNUSED_LOCATION_ARGS) const {
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
  GALGAS_lstring var_rootNode_10473 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 315)), object->mProperty_mPanicCodeTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  {
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_10473, temp_0, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 316)) ;
  }
  GALGAS_lstring var_panicCodeTypeName_10626 = function_llvmTypeNameFromPLMname (object->mProperty_mPanicCodeTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 317)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_10473, var_panicCodeTypeName_10626 COMMA_SOURCE_FILE ("configuration.galgas", 318)) ;
  }
  GALGAS_lstring var_panicLineTypeName_10749 = function_llvmTypeNameFromPLMname (object->mProperty_mPanicLineTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 319)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_10473, var_panicLineTypeName_10749 COMMA_SOURCE_FILE ("configuration.galgas", 320)) ;
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
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
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
    inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 349)), GALGAS_string ("duplicate configuration"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 349)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 350)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 351)), GALGAS_string ("zero size pointer not allowed"), fixItArray3  COMMA_SOURCE_FILE ("configuration.galgas", 351)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioContext.mProperty_mPointerSize = object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 353)) ;
    }
  }
  ioArgument_ioContext.mProperty_mTargetParameters = object->mProperty_mTargetParameters ;
  ioArgument_ioContext.mProperty_mPanicCodeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicCodeTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 357)) ;
  const enumGalgasBool test_4 = ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 358)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 358)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_unsigned_12936 ;
    GALGAS_bigint joker_12911_2 ; // Joker input parameter
    GALGAS_bigint joker_12911_1 ; // Joker input parameter
    GALGAS_uint joker_12938_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 359)).getter_kind (HERE).method_integer (joker_12911_2, joker_12911_1, var_unsigned_12936, joker_12938_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 359)) ;
    const enumGalgasBool test_5 = var_unsigned_12936.operator_not (SOURCE_FILE ("configuration.galgas", 360)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 361)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("configuration.galgas", 361)) ;
    }
  }else if (kBoolFalse == test_4) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 364)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray7  COMMA_SOURCE_FILE ("configuration.galgas", 364)) ;
  }
  ioArgument_ioContext.mProperty_mPanicLineType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicLineTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 367)) ;
  const enumGalgasBool test_8 = ioArgument_ioContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 368)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 368)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_bool var_unsigned_13405 ;
    GALGAS_bigint joker_13380_2 ; // Joker input parameter
    GALGAS_bigint joker_13380_1 ; // Joker input parameter
    GALGAS_uint joker_13407_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 369)).getter_kind (HERE).method_integer (joker_13380_2, joker_13380_1, var_unsigned_13405, joker_13407_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 369)) ;
    const enumGalgasBool test_9 = var_unsigned_13405.operator_not (SOURCE_FILE ("configuration.galgas", 370)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 371)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray10  COMMA_SOURCE_FILE ("configuration.galgas", 371)) ;
    }
  }else if (kBoolFalse == test_8) {
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 374)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray11  COMMA_SOURCE_FILE ("configuration.galgas", 374)) ;
  }
  GALGAS_stringset var_panicCodeSet_13697 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 377)) ;
  cEnumerator_interruptionConfigurationList enumerator_13759 (object->mProperty_mInterruptionConfigurationList, kENUMERATION_UP) ;
  while (enumerator_13759.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_13759.current_mInterruptName (HERE), enumerator_13759.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 379)) ;
    }
    switch (enumerator_13759.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_code:
      {
        const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_14052 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_13759.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_value = extractPtr_14052->mAssociatedValue0 ;
        GALGAS_string var_s_13905 = extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("configuration.galgas", 383)) ;
        const enumGalgasBool test_12 = var_panicCodeSet_13697.getter_hasKey (var_s_13905 COMMA_SOURCE_FILE ("configuration.galgas", 384)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_value.getter_location (SOURCE_FILE ("configuration.galgas", 385)), GALGAS_string ("duplicate interrupt code"), fixItArray13  COMMA_SOURCE_FILE ("configuration.galgas", 385)) ;
        }
        var_panicCodeSet_13697.addAssign_operation (var_s_13905  COMMA_SOURCE_FILE ("configuration.galgas", 387)) ;
      }
      break ;
    }
    enumerator_13759.gotoNextObject () ;
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
  GALGAS_lstring var_newTypeName_2951 = function_llvmTypeNameFromPLMname (object->mProperty_mArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 61)) ;
  GALGAS_lstring var_elementTypeName_3017 = function_llvmTypeNameFromPLMname (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
  {
  const GALGAS_typeArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2951, temp_0, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 63)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2951, var_elementTypeName_3017 COMMA_SOURCE_FILE ("type-array.galgas", 64)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_newTypeName_2951, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 65)) ;
  GALGAS_lstring var_rootNode_3251 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 66)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 66)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2951, var_rootNode_3251 COMMA_SOURCE_FILE ("type-array.galgas", 67)) ;
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
                                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                    GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  GALGAS_PLMType var_kind_4589 ;
  GALGAS_uint joker_4595_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_kind_4589, joker_4595_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 89)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_kind_4589, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 94)).operator_not (SOURCE_FILE ("type-array.galgas", 94)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 95)), GALGAS_string ("an array element should be copyable"), fixItArray1  COMMA_SOURCE_FILE ("type-array.galgas", 95)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_instanciable (var_kind_4589, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 97)).operator_not (SOURCE_FILE ("type-array.galgas", 97)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 98)), GALGAS_string ("an array element should be instanciable"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 98)) ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_4890 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 101)) ;
  GALGAS_allocaList var_allocaList_4920 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 102)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_4966 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-array.galgas", 103)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_5083 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_5083, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 104)) ;
  }
  GALGAS_staticStringMap joker_5395 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 116)) ;
  GALGAS_objectIR var_sizeExpressionIR_5548 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 109)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mArrayTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 111)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 111)), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 112)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-array.galgas", 114)), var_temporaries_4966, joker_5395, var_universalMap_5083, var_allocaList_4920, var_initInstructionGenerationList_4890, var_sizeExpressionIR_5548, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 108)) ;
  const enumGalgasBool test_4 = var_sizeExpressionIR_5548.getter_isLiteralInteger (SOURCE_FILE ("type-array.galgas", 122)).operator_not (SOURCE_FILE ("type-array.galgas", 122)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray5  COMMA_SOURCE_FILE ("type-array.galgas", 123)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_arraySize_5745 ;
    GALGAS_PLMType joker_5722_1 ; // Joker input parameter
    var_sizeExpressionIR_5548.method_literalInteger (joker_5722_1, var_arraySize_5745, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 125)) ;
    GALGAS_PLMType var_elementType_5766 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 126)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 126)) ;
    GALGAS_classConstantMap var_classConstantMap_5977 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 128)) ;
    {
    var_classConstantMap_5977.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 129))  COMMA_SOURCE_FILE ("type-array.galgas", 129)), var_arraySize_5745, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 129)).getter_nowhere (SOURCE_FILE ("type-array.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 129)) ;
    }
    GALGAS_propertyMap var_arrayTypePropertyMap_6195 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 131)) ;
    {
    var_arrayTypePropertyMap_6195.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 140)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 142)), var_arraySize_5745  COMMA_SOURCE_FILE ("type-array.galgas", 142))  COMMA_SOURCE_FILE ("type-array.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 139)) ;
    }
    GALGAS_constructorMap var_constructorMap_6726 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 145)) ;
    {
    var_constructorMap_6726.setter_insertKey (GALGAS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-array.galgas", 146)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 146)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_5766, var_arraySize_5745.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 146))  COMMA_SOURCE_FILE ("type-array.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 146)) ;
    }
    GALGAS_PLMTypeAttributes var_typeAttributes_6951 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-array.galgas", 148)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-array.galgas", 148)) COMMA_SOURCE_FILE ("type-array.galgas", 148)) ;
    const enumGalgasBool test_6 = extensionGetter_copyable (var_elementType_5766, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 149)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_typeAttributes_6951 = var_typeAttributes_6951.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-array.galgas", 150)) COMMA_SOURCE_FILE ("type-array.galgas", 150)) ;
    }
    GALGAS_PLMType var_arrayType_7173 = GALGAS_PLMType::constructor_new (var_arrayTypePropertyMap_6195, var_classConstantMap_5977, var_constructorMap_6726, var_typeAttributes_6951, object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 158)), GALGAS_typeKind::constructor_arrayType (var_elementType_5766, var_arraySize_5745  COMMA_SOURCE_FILE ("type-array.galgas", 159))  COMMA_SOURCE_FILE ("type-array.galgas", 153)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mArrayTypeName, var_arrayType_7173, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-array.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 161)) ;
    }
    ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedTypeArrayDeclaration::constructor_new (object->mProperty_mArrayTypeName, var_arraySize_5745.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 167))  COMMA_SOURCE_FILE ("type-array.galgas", 167))  COMMA_SOURCE_FILE ("type-array.galgas", 167)) ;
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
//                    Overriding extension method '@decoratedTypeArrayDeclaration semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedTypeArrayDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedTypeArrayDeclaration * object = (const cPtr_decoratedTypeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedTypeArrayDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_arrayIR::constructor_new (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 188)), object->mProperty_mArraySize.getter_bigint (SOURCE_FILE ("type-array.galgas", 188))  COMMA_SOURCE_FILE ("type-array.galgas", 188))  COMMA_SOURCE_FILE ("type-array.galgas", 188)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedTypeArrayDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedTypeArrayDeclaration.mSlotID,
                                         extensionMethod_decoratedTypeArrayDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedTypeArrayDeclaration_semanticAnalysis (defineExtensionMethod_decoratedTypeArrayDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@arrayIR generateLLVMcode'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayIR_generateLLVMcode (const cPtr_abstractGenerationIR * inObject,
                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayIR * object = (const cPtr_arrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_arrayIR) ;
  GALGAS_lstring var_routineMangledName_9442 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (object->mProperty_mArrayTypePLMName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 204)), GALGAS_string ("count").getter_nowhere (SOURCE_FILE ("type-array.galgas", 205)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 203)) ;
  GALGAS_string var_routineLLVMName_9581 = function_llvmNameForFunction (var_routineMangledName_9442.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineMangledName_9442.getter_string (SOURCE_FILE ("type-array.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32  @").add_operation (var_routineLLVMName_9581, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 210)).add_operation (GALGAS_string (" (%"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 210)).add_operation (function_llvmTypeStringFromPLMname (object->mProperty_mArrayTypePLMName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 210)).add_operation (GALGAS_string ("* %inUnusedValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 ").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("type-array.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 211)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 212)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayIR_generateLLVMcode (void) {
  enterExtensionMethod_generateLLVMcode (kTypeDescriptor_GALGAS_arrayIR.mSlotID,
                                         extensionMethod_arrayIR_generateLLVMcode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayIR_generateLLVMcode (defineExtensionMethod_arrayIR_generateLLVMcode, NULL) ;

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
  GALGAS_lstring var_boolTypeName_1821 = function_llvmTypeNameFromPLMname (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 34)) ;
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
  result_outRepresentation = GALGAS_string ("bool ").add_operation (function_llvmTypeNameFromPLMname (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 41)).getter_string (SOURCE_FILE ("type-bool.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 41)) ;
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
                                                                  GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                  GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mBooleanTypeName, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 57)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-bool.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 57)) ;
  }
  {
  routine_enterBooleanOperators (object->mProperty_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 59)) ;
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
  GALGAS_PLMType var_selfType_3555 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inArgument_inBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 71)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71)) ;
  GALGAS_lstring var_boolBoolOp_3654 = function_combineTypeNamesForInfixOperator (inArgument_inBooleanTypeName.getter_string (HERE), inArgument_inBooleanTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_3654, var_selfType_3555, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 76))  COMMA_SOURCE_FILE ("type-bool.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_boolBoolOp_3654, var_selfType_3555, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-bool.galgas", 81))  COMMA_SOURCE_FILE ("type-bool.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_3654, var_selfType_3555, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 86))  COMMA_SOURCE_FILE ("type-bool.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_3654, var_selfType_3555, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 91))  COMMA_SOURCE_FILE ("type-bool.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 88)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_boolBoolOp_3654, var_selfType_3555, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-bool.galgas", 96))  COMMA_SOURCE_FILE ("type-bool.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 93)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_boolBoolOp_3654, var_selfType_3555, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-bool.galgas", 101))  COMMA_SOURCE_FILE ("type-bool.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 98)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_3654, var_selfType_3555, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 106))  COMMA_SOURCE_FILE ("type-bool.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 103)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_boolBoolOp_3654, var_selfType_3555, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-bool.galgas", 111))  COMMA_SOURCE_FILE ("type-bool.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 108)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_boolBoolOp_3654, var_selfType_3555, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-bool.galgas", 116))  COMMA_SOURCE_FILE ("type-bool.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 113)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (inArgument_inBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 118)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@enumerationDeclarationAST addExtension'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                    GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                    GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                     extensionMethod_enumerationDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_addExtension (defineExtensionMethod_enumerationDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_lstring var_typeName_2871 = function_llvmTypeNameFromPLMname (object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)) ;
  {
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_2871, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2871, function_llvmTypeNameFromPLMname (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) ;
  }
  GALGAS_bigint var_maxValue_3117 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 69)) ;
  cEnumerator_enumerationConstantList enumerator_3155 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_3155.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_maxValue_3117.objectCompare (enumerator_3155.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_maxValue_3117 = enumerator_3155.current_mConstantValue (HERE) ;
    }
    enumerator_3155.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_3255 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)).isValid ()) {
    uint32_t variant_3266 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)).uintValue () ;
    bool loop_3266 = true ;
    while (loop_3266) {
      loop_3266 = GALGAS_bool (kIsStrictSup, var_maxValue_3117.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 76)))).isValid () ;
      if (loop_3266) {
        loop_3266 = GALGAS_bool (kIsStrictSup, var_maxValue_3117.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 76)))).boolValue () ;
      }
      if (loop_3266 && (0 == variant_3266)) {
        loop_3266 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)) ;
      }
      if (loop_3266) {
        variant_3266 -- ;
        var_representationBitCount_3255.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 77)) ;
        var_maxValue_3117 = var_maxValue_3117.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
      }
    }
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2871, function_llvmTypeNameFromPLMname (GALGAS_string ("uint").add_operation (var_representationBitCount_3255.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                               extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@enumerationDeclarationAST location'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_enumerationDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                 extensionGetter_enumerationDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_location (defineExtensionGetter_enumerationDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("enum $").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 92)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                           extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'integerEnumAccessorName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_integerEnumAccessorName (const GALGAS_uint & constinArgument_inBitCount,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("uint").add_operation (constinArgument_inBitCount.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 100)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_integerEnumAccessorName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_integerEnumAccessorName ("integerEnumAccessorName",
                                                                         functionWithGenericHeader_integerEnumAccessorName,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         1,
                                                                         functionArgs_integerEnumAccessorName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclarationAST enterInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                      GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                                      GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_classConstantMap var_enumConstantMap_5685 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 125)) ;
  GALGAS_bigint var_maxValue_5709 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)) ;
  cEnumerator_enumerationConstantList enumerator_5750 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_5750.hasCurrentObject ()) {
    {
    var_enumConstantMap_5685.setter_insertKey (enumerator_5750.current_mConstantName (HERE), enumerator_5750.current_mConstantValue (HERE), object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 128)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_5709.objectCompare (enumerator_5750.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_maxValue_5709 = enumerator_5750.current_mConstantValue (HERE) ;
    }
    enumerator_5750.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_5966 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)).isValid ()) {
    uint32_t variant_5977 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)).uintValue () ;
    bool loop_5977 = true ;
    while (loop_5977) {
      loop_5977 = GALGAS_bool (kIsStrictSup, var_maxValue_5709.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 135)))).isValid () ;
      if (loop_5977) {
        loop_5977 = GALGAS_bool (kIsStrictSup, var_maxValue_5709.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 135)))).boolValue () ;
      }
      if (loop_5977 && (0 == variant_5977)) {
        loop_5977 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)) ;
      }
      if (loop_5977) {
        variant_5977 -- ;
        var_representationBitCount_5966.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) ;
        var_maxValue_5709 = var_maxValue_5709.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 137)) ;
      }
    }
  }
  GALGAS_propertyMap var_propertyMap_6159 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 140)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_integerTypeProxy_6187 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_5966.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 143))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 141)) ;
  {
  extensionSetter_addFunction (var_propertyMap_6159, object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 146)), function_integerEnumAccessorName (var_representationBitCount_5966, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 147)), var_integerTypeProxy_6187, ioArgument_ioSubprogramInvocationGraph, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 145)) ;
  }
  GALGAS_PLMType var_enumerationType_6607 = GALGAS_PLMType::constructor_new (var_propertyMap_6159, var_enumConstantMap_5685, GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 155)), GALGAS_PLMTypeAttributes::constructor_all (SOURCE_FILE ("type-enumeration-declaration.galgas", 156)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 157)), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_5966  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 158))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 152)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, var_enumerationType_6607, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-enumeration-declaration.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 160)) ;
  }
  {
  routine_enterEnumerationComparisonOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 166)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_enumerationDecoratedDeclaration::constructor_new (object->mProperty_mEnumerationName, var_representationBitCount_5966  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 168))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 168)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                       extensionMethod_enumerationDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInContext (defineExtensionMethod_enumerationDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterEnumerationComparisonOperators'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationComparisonOperators (GALGAS_lstring inArgument_inTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_7493 = function_combineTypeNamesForInfixOperator (inArgument_inTypeName.getter_string (HERE), inArgument_inTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 177)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_7493, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 180)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 181))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 178)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_key_7493, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 185)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-enumeration-declaration.galgas", 186))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 183)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_7493, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 190)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 191))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 188)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_7493, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 195)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 196))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 193)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_key_7493, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 200)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-enumeration-declaration.galgas", 201))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 198)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_key_7493, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 205)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-enumeration-declaration.galgas", 206))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDecoratedDeclaration semanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDecoratedDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                              const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDecoratedDeclaration * object = (const cPtr_enumerationDecoratedDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDecoratedDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_enumerationIR::constructor_new (object->mProperty_mEnumerationName, object->mProperty_mRepresentationBitCount  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 227))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 227)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDecoratedDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumerationDecoratedDeclaration.mSlotID,
                                         extensionMethod_enumerationDecoratedDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDecoratedDeclaration_semanticAnalysis (defineExtensionMethod_enumerationDecoratedDeclaration_semanticAnalysis, NULL) ;

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
  GALGAS_lstring var_routineMangledName_10157 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 243)), GALGAS_lstring::constructor_new (function_integerEnumAccessorName (object->mProperty_mBitCount, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 244)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 244))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 244)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 242)) ;
  GALGAS_string var_routineLLVMName_10352 = function_llvmNameForFunction (var_routineMangledName_10157.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 247)) ;
  GALGAS_string var_type_10414 = GALGAS_string ("i").add_operation (object->mProperty_mBitCount.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 248)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineMangledName_10157.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 249)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (var_type_10414, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 250)).add_operation (GALGAS_string ("  @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 250)).add_operation (var_routineLLVMName_10352, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 250)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 250)).add_operation (var_type_10414, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 250)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (var_type_10414, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 251)).add_operation (var_type_10414, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 251)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (var_type_10414, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 252)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 253)) ;
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
  GALGAS_structureDeclarationAST var_newDeclaration_5400 = temp_0 ;
  GALGAS_extensionDeclarationListAST var_currentExtensionDeclarationListAST_5448 = ioArgument_ioExtensionDeclarationListAST ;
  ioArgument_ioExtensionDeclarationListAST = GALGAS_extensionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 146)) ;
  cEnumerator_extensionDeclarationListAST enumerator_5605 (var_currentExtensionDeclarationListAST_5448, kENUMERATION_UP) ;
  while (enumerator_5605.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mStructureName.getter_string (HERE).objectCompare (enumerator_5605.current_mTypeName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_newDeclaration_5400 = GALGAS_structureDeclarationAST::constructor_new (var_newDeclaration_5400.getter_mStructureName (SOURCE_FILE ("type-structure-declaration.galgas", 150)), var_newDeclaration_5400.getter_mAttributeListAST (SOURCE_FILE ("type-structure-declaration.galgas", 151)), var_newDeclaration_5400.getter_mGenerateAssignmentRoutine (SOURCE_FILE ("type-structure-declaration.galgas", 152)), var_newDeclaration_5400.getter_mStructurePropertyListAST (SOURCE_FILE ("type-structure-declaration.galgas", 153)).add_operation (enumerator_5605.current_mPropertyList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 153)), var_newDeclaration_5400.getter_mFunctionDeclarationListAST (SOURCE_FILE ("type-structure-declaration.galgas", 154)).add_operation (enumerator_5605.current_mProcedureDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 154)), var_newDeclaration_5400.getter_mSystemRoutineListAST (SOURCE_FILE ("type-structure-declaration.galgas", 155)).add_operation (enumerator_5605.current_mSVCListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 155)), var_newDeclaration_5400.getter_mGuardListAST (SOURCE_FILE ("type-structure-declaration.galgas", 156)).add_operation (enumerator_5605.current_mGuardListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 156))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 149)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioExtensionDeclarationListAST.addAssign_operation (enumerator_5605.current_mTypeName (HERE), enumerator_5605.current_mProcedureDeclarationListAST (HERE), enumerator_5605.current_mPropertyList (HERE), enumerator_5605.current_mSVCListAST (HERE), enumerator_5605.current_mGuardListAST (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 159)) ;
    }
    enumerator_5605.gotoNextObject () ;
  }
  outArgument_outNewDeclaration = var_newDeclaration_5400 ;
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
  GALGAS_lstring var_structureTypeName_6721 = function_llvmTypeNameFromPLMname (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 170)) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_structureTypeName_6721, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 172)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_6945 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_6945.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6945.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_7006 = function_llvmTypeNameFromPLMname (enumerator_6945.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 176)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_structureTypeName_6721, var_typeName_7006 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      }
    }
    switch (enumerator_6945.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_7290 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_6945.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_7290->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), var_structureTypeName_6721, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 182)) ;
      }
      break ;
    }
    enumerator_6945.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_7373 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_7373.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_7446 (enumerator_7373.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_7446.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_7468 = function_llvmTypeNameFromPLMname (enumerator_7446.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 188)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_7468 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 189)) ;
      }
      enumerator_7446.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_7373.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_typeName_7633 = function_llvmTypeNameFromPLMname (enumerator_7373.current_mFunctionReturnTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 192)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_7633 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 193)) ;
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_7373.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 195)) ;
    enumerator_7373.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 198)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 199)) ;
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
  result_outRepresentation = GALGAS_string ("struct $").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 205)) ;
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
                                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                    GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_propertyList var_propertyList_9574 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 237)) ;
  GALGAS_propertyMap var_propertyMap_9606 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 238)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_9654 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 239)) ;
  GALGAS_constructorSignature var_constructorSignature_9704 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
  GALGAS_string var_constructorKey_9734 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_9758 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_9809 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_9809.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_9809.current (HERE), object->mProperty_mStructureName, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_propertyList_9574, var_propertyMap_9606, var_sortedOperandIRList_9654, var_constructorSignature_9704, var_constructorKey_9734, var_canBeCopied_9758, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 244)) ;
    enumerator_9809.gotoNextObject () ;
  }
  var_constructorKey_9734.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 256)) ;
  GALGAS_constructorMap var_constructorMap_10206 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 258)) ;
  {
  var_constructorMap_10206.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_9734, object->mProperty_mStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 260)), var_constructorSignature_9704, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_9654  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 259)) ;
  }
  GALGAS_PLMTypeAttributes var_attributes_10461 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 265)) ;
  const enumGalgasBool test_0 = object->mProperty_mGenerateAssignmentRoutine.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_attributes_10461 = var_attributes_10461.operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-structure-declaration.galgas", 267)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 267)) ;
  }
  cEnumerator_lstringlist enumerator_10626 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_10626.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_10626.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_attributes_10461.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 271)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10626.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 272)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 272)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = var_canBeCopied_9758.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 273)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mStructureName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 274)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 274)) ;
        }else if (kBoolFalse == test_4) {
          var_attributes_10461 = var_attributes_10461.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 276)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 276)) ;
        }
      }
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (enumerator_10626.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 279)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 279)) ;
    }
    enumerator_10626.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_11133 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_11133.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_11182 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 285)) ;
    cEnumerator_lstringlist enumerator_11240 (enumerator_11133.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_11240.hasCurrentObject ()) {
      var_attributeSet_11182.addAssign_operation (enumerator_11240.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 287)) ;
      enumerator_11240.gotoNextObject () ;
    }
    GALGAS_bool var_exportedFunction_11323 = var_attributeSet_11182.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 289)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 289)) ;
    GALGAS_bool var_canMutateProperties_11397 = var_attributeSet_11182.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 290)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 290)) ;
    GALGAS_bool var_canAccessProperties_11471 = GALGAS_bool (kIsNotEqual, enumerator_11133.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("type-structure-declaration.galgas", 291)))) ;
    GALGAS_routineTypedSignature var_signature_11614 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_11133.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_signature_11614, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 293)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_11755 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_11133.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnTypeProxy_11755 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 295)) ;
    }
    GALGAS_lstring var_routineMangledName_11811 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_11133.current (HERE).getter_mFunctionName (HERE), enumerator_11133.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 297)) ;
    GALGAS_routineDescriptor var_descriptor_11994 = GALGAS_routineDescriptor::constructor_new (enumerator_11133.current (HERE).getter_mPublicFunction (HERE), var_exportedFunction_11323, GALGAS_routineKind::constructor_function (enumerator_11133.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 306)), var_signature_11614, var_returnTypeProxy_11755, var_canAccessProperties_11471, var_canMutateProperties_11397  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 303)) ;
    {
    var_propertyMap_9606.setter_insertKey (var_routineMangledName_11811, enumerator_11133.current (HERE).getter_mPublicFunction (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_11994  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 313)) ;
    }
    enumerator_11133.gotoNextObject () ;
  }
  cEnumerator_systemRoutineDeclarationListAST enumerator_12596 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_12596.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_12645 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 318)) ;
    cEnumerator_lstringlist enumerator_12693 (enumerator_12596.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12693.hasCurrentObject ()) {
      var_attributeSet_12645.addAssign_operation (enumerator_12693.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 320)) ;
      enumerator_12693.gotoNextObject () ;
    }
    GALGAS_bool var_exportedRoutine_12775 = var_attributeSet_12645.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 322)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 322)) ;
    GALGAS_bool var_canMutateProperties_12849 = var_attributeSet_12645.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 323)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 323)) ;
    GALGAS_lstring var_routineMangledName_12950 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_12596.current (HERE).getter_mName (HERE), enumerator_12596.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 325)) ;
    GALGAS_routineTypedSignature var_signature_13171 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12596.current (HERE).getter_mFormalArgumentList (HERE), var_signature_13171, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 331)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_13302 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12596.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_13302 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 333)) ;
    }
    GALGAS_bool var_mutating_13338 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13391 (enumerator_12596.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13391.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_13391.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 337)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_mutating_13338 = GALGAS_bool (true) ;
      }
      enumerator_13391.gotoNextObject () ;
    }
    GALGAS_routineDescriptor var_descriptor_13540 = GALGAS_routineDescriptor::constructor_new (enumerator_12596.current (HERE).getter_mPublic (HERE), var_exportedRoutine_12775, enumerator_12596.current (HERE).getter_mRoutineKind (HERE), var_signature_13171, var_returnTypeProxy_13302, GALGAS_bool (true), var_canMutateProperties_12849  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 342)) ;
    {
    var_propertyMap_9606.setter_insertKey (var_routineMangledName_12950, enumerator_12596.current (HERE).getter_mPublic (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_13540  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 352)) ;
    }
    enumerator_12596.gotoNextObject () ;
  }
  GALGAS_guardMapForContext var_guardMap_14065 = GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 355)) ;
  cEnumerator_guardDeclarationListAST enumerator_14099 (object->mProperty_mGuardListAST, kENUMERATION_UP) ;
  while (enumerator_14099.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_14153 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_14099.current (HERE).getter_mGuardName (HERE), enumerator_14099.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 358)) ;
    GALGAS_routineTypedSignature var_signature_14369 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_14099.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_14369, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 364)) ;
    }
    {
    var_guardMap_14065.setter_insertKey (var_guardMangledName_14153, enumerator_14099.current (HERE).getter_mIsPublic (HERE), var_signature_14369, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 366)) ;
    }
    enumerator_14099.gotoNextObject () ;
  }
  GALGAS_PLMType var_structureType_14576 = GALGAS_PLMType::constructor_new (var_propertyMap_9606, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 375)), var_constructorMap_10206, var_attributes_10461, object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 378)), GALGAS_typeKind::constructor_structure (var_propertyList_9574, var_guardMap_14065  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 373)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mStructureName, var_structureType_14576, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 381)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStructureDeclaration::constructor_new (object->mProperty_mStructureName, object->mProperty_mFunctionDeclarationListAST, object->mProperty_mSystemRoutineListAST, object->mProperty_mGuardListAST  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 387))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 387)) ;
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
//                    Overriding extension method '@decoratedStructureDeclaration semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedStructureDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedStructureDeclaration * object = (const cPtr_decoratedStructureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedStructureDeclaration) ;
  GALGAS_PLMType var_structureType_19280 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mStructureName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)) ;
  const GALGAS_decoratedStructureDeclaration temp_0 = object ;
  callExtensionMethod_functionSemanticAnalysis ((const cPtr_decoratedStructureDeclaration *) temp_0.ptr (), var_structureType_19280, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 502)) ;
  extensionMethod_systemRoutineSemanticAnalysis (object->mProperty_mSystemRoutineListAST, var_structureType_19280, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 509)) ;
  extensionMethod_guardSemanticAnalysis (object->mProperty_mGuardListAST, var_structureType_19280, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 516)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedStructureDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedStructureDeclaration.mSlotID,
                                         extensionMethod_decoratedStructureDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedStructureDeclaration_semanticAnalysis (defineExtensionMethod_decoratedStructureDeclaration_semanticAnalysis, NULL) ;

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
  GALGAS_lstring var_newTypeName_2712 = function_llvmTypeNameFromPLMname (object->mProperty_mNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 55)) ;
  GALGAS_lstring var_aliasedTypeName_2776 = function_llvmTypeNameFromPLMname (object->mProperty_mAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
  {
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2712, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 57)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2712, var_aliasedTypeName_2776 COMMA_SOURCE_FILE ("type-alias.galgas", 58)) ;
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
                                                                 GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                 GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_PLMType var_kind_4114 ;
  GALGAS_uint joker_4116_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAliasedTypeName, var_kind_4114, joker_4116_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 80)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mNewTypeName, var_kind_4114, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-alias.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 82)) ;
  }
  GALGAS_lstring var_newNewInfixKey_4291 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 85)) ;
  GALGAS_lstring var_aliasAliasInfixKey_4395 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 86)) ;
  GALGAS_lstring var_newLiteralIntegerInfixKey_4514 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 87)) ;
  GALGAS_lstring var_aliasLiteralIntegerInfixKey_4632 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 88)) ;
  GALGAS_lstring var_literalIntegerNewInfixKey_4752 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 89)), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 89)) ;
  GALGAS_lstring var_literalIntegerAliasInfixKey_4869 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 90)), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 90)) ;
  GALGAS_PLMType var_newType_4970 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mNewTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 91)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 91)) ;
  GALGAS_PLMType var_oldType_5061 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 92)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 92)) ;
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mEqualOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 93)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mNonEqualOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 104)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictInfOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 115)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mInfEqualOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 126)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictSupOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 137)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSupEqualOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 148)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAndOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 159)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mOrOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 170)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mXorOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 181)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mBooleanXorOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 192)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 203)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 214)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 225)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 236)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 247)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 258)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 269)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 280)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 291)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModNoOvfOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 302)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mLeftShiftOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 313)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mRightShiftOperatorMap, var_newNewInfixKey_4291, var_aliasAliasInfixKey_4395, var_newLiteralIntegerInfixKey_4514, var_aliasLiteralIntegerInfixKey_4632, var_literalIntegerNewInfixKey_4752, var_literalIntegerAliasInfixKey_4869, var_newType_4970, var_oldType_5061, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 324)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 335)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mNotOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 336)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 337)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedTypeName.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 347)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 348)) ;
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 352)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedAliasedInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 372)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_resultType_12474 ;
    GALGAS_infixOperatorDescription var_operation_12521 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedAliasedInfixKey, var_resultType_12474, var_operation_12521, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 373)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_12474.objectCompare (constinArgument_inOldType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_resultType_12474 = constinArgument_inNewType ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewNewInfixKey, var_resultType_12474, var_operation_12521, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 381)) ;
    }
  }
  const enumGalgasBool test_2 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedLiteralIntegerInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 387)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_PLMType var_resultType_12885 ;
    GALGAS_infixOperatorDescription var_operation_12932 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedLiteralIntegerInfixKey, var_resultType_12885, var_operation_12932, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 388)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_resultType_12885.objectCompare (constinArgument_inOldType)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_resultType_12885 = constinArgument_inNewType ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewLiteralIntegerInfixKey, var_resultType_12885, var_operation_12932, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 396)) ;
    }
  }
  const enumGalgasBool test_4 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inLiteralIntegerAliasInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 402)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_PLMType var_resultType_13303 ;
    GALGAS_infixOperatorDescription var_operation_13350 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inLiteralIntegerAliasInfixKey, var_resultType_13303, var_operation_13350, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 403)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_resultType_13303.objectCompare (constinArgument_inOldType)).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_resultType_13303 = constinArgument_inNewType ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inLiteralIntegerNewInfixKey, var_resultType_13303, var_operation_13350, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 411)) ;
    }
  }
}


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
  GALGAS_lstring var_integerTypeName_2056 = function_llvmTypeNameFromPLMname (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_2056, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_2056, function_llvmTypeNameFromPLMname (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 43)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 43)) COMMA_SOURCE_FILE ("type-integer.galgas", 43)) ;
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
  result_outRepresentation = GALGAS_string ("integer ").add_operation (function_llvmTypeNameFromPLMname (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)).getter_string (SOURCE_FILE ("type-integer.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)) ;
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
//                                            Function 'minValueForInteger'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_minValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) COMMA_SOURCE_FILE ("type-integer.galgas", 60)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'maxValueForInteger'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_maxValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 68)).left_shift_operation (constinArgument_inBitCount COMMA_SOURCE_FILE ("type-integer.galgas", 68)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 68)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 70)) COMMA_SOURCE_FILE ("type-integer.galgas", 70)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 70)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'byteSwappedMethoName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_byteSwappedMethoName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("byteSwapped") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_byteSwappedMethoName = false ;
static GALGAS_string gOnceFunctionResult_byteSwappedMethoName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_byteSwappedMethoName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_byteSwappedMethoName) {
    gOnceFunctionResult_byteSwappedMethoName = onceFunction_byteSwappedMethoName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_byteSwappedMethoName = true ;
  }
  return gOnceFunctionResult_byteSwappedMethoName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_byteSwappedMethoName (void) {
  gOnceFunctionResult_byteSwappedMethoName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_byteSwappedMethoName (NULL,
                                                                  releaseOnceFunctionResult_byteSwappedMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_byteSwappedMethoName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_byteSwappedMethoName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_byteSwappedMethoName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_byteSwappedMethoName ("byteSwappedMethoName",
                                                                      functionWithGenericHeader_byteSwappedMethoName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_byteSwappedMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'bitReversedMethoName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_bitReversedMethoName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bitReversed") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_bitReversedMethoName = false ;
static GALGAS_string gOnceFunctionResult_bitReversedMethoName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_bitReversedMethoName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_bitReversedMethoName) {
    gOnceFunctionResult_bitReversedMethoName = onceFunction_bitReversedMethoName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_bitReversedMethoName = true ;
  }
  return gOnceFunctionResult_bitReversedMethoName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_bitReversedMethoName (void) {
  gOnceFunctionResult_bitReversedMethoName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_bitReversedMethoName (NULL,
                                                                  releaseOnceFunctionResult_bitReversedMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_bitReversedMethoName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_bitReversedMethoName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_bitReversedMethoName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_bitReversedMethoName ("bitReversedMethoName",
                                                                      functionWithGenericHeader_bitReversedMethoName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_bitReversedMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'countLeadingZerosMethoName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_countLeadingZerosMethoName (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("leadingZeroCount") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_countLeadingZerosMethoName = false ;
static GALGAS_string gOnceFunctionResult_countLeadingZerosMethoName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_countLeadingZerosMethoName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_countLeadingZerosMethoName) {
    gOnceFunctionResult_countLeadingZerosMethoName = onceFunction_countLeadingZerosMethoName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_countLeadingZerosMethoName = true ;
  }
  return gOnceFunctionResult_countLeadingZerosMethoName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_countLeadingZerosMethoName (void) {
  gOnceFunctionResult_countLeadingZerosMethoName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_countLeadingZerosMethoName (NULL,
                                                                        releaseOnceFunctionResult_countLeadingZerosMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_countLeadingZerosMethoName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_countLeadingZerosMethoName (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_countLeadingZerosMethoName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_countLeadingZerosMethoName ("countLeadingZerosMethoName",
                                                                            functionWithGenericHeader_countLeadingZerosMethoName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_countLeadingZerosMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'countTrainingZerosMethoName'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_countTrainingZerosMethoName (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("trainingZeroCount") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_countTrainingZerosMethoName = false ;
static GALGAS_string gOnceFunctionResult_countTrainingZerosMethoName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_countTrainingZerosMethoName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_countTrainingZerosMethoName) {
    gOnceFunctionResult_countTrainingZerosMethoName = onceFunction_countTrainingZerosMethoName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_countTrainingZerosMethoName = true ;
  }
  return gOnceFunctionResult_countTrainingZerosMethoName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_countTrainingZerosMethoName (void) {
  gOnceFunctionResult_countTrainingZerosMethoName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_countTrainingZerosMethoName (NULL,
                                                                         releaseOnceFunctionResult_countTrainingZerosMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_countTrainingZerosMethoName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_countTrainingZerosMethoName (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_countTrainingZerosMethoName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_countTrainingZerosMethoName ("countTrainingZerosMethoName",
                                                                             functionWithGenericHeader_countTrainingZerosMethoName,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_countTrainingZerosMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'setBitCountMethoName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_setBitCountMethoName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("setBitCount") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_setBitCountMethoName = false ;
static GALGAS_string gOnceFunctionResult_setBitCountMethoName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_setBitCountMethoName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_setBitCountMethoName) {
    gOnceFunctionResult_setBitCountMethoName = onceFunction_setBitCountMethoName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_setBitCountMethoName = true ;
  }
  return gOnceFunctionResult_setBitCountMethoName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_setBitCountMethoName (void) {
  gOnceFunctionResult_setBitCountMethoName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_setBitCountMethoName (NULL,
                                                                  releaseOnceFunctionResult_setBitCountMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_setBitCountMethoName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_setBitCountMethoName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_setBitCountMethoName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_setBitCountMethoName ("setBitCountMethoName",
                                                                      functionWithGenericHeader_setBitCountMethoName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_setBitCountMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@integerDeclarationAST enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                  GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_5288 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 116)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 116)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_5408 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_5288, var_selfTypeProxy_5408 COMMA_SOURCE_FILE ("type-integer.galgas", 117)) ;
  }
  GALGAS_bigint var_min_5476 = function_minValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 119)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 119)) ;
  GALGAS_bigint var_max_5531 = function_maxValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 120)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 120)) ;
  GALGAS_propertyMap var_propertyMap_5657 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 122)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    extensionSetter_addFunction (var_propertyMap_5657, var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 125)), function_byteSwappedMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 126)), var_selfTypeProxy_5408, ioArgument_ioSubprogramInvocationGraph, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 124)) ;
    }
  }
  {
  extensionSetter_addFunction (var_propertyMap_5657, var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 132)), function_bitReversedMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 133)), var_selfTypeProxy_5408, ioArgument_ioSubprogramInvocationGraph, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  }
  {
  extensionSetter_addFunction (var_propertyMap_5657, var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 138)), function_countLeadingZerosMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 139)), var_selfTypeProxy_5408, ioArgument_ioSubprogramInvocationGraph, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 137)) ;
  }
  {
  extensionSetter_addFunction (var_propertyMap_5657, var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 144)), function_countTrainingZerosMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 145)), var_selfTypeProxy_5408, ioArgument_ioSubprogramInvocationGraph, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 143)) ;
  }
  {
  extensionSetter_addFunction (var_propertyMap_5657, var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 150)), function_setBitCountMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 151)), var_selfTypeProxy_5408, ioArgument_ioSubprogramInvocationGraph, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 149)) ;
  }
  GALGAS_classConstantMap var_classConstantMap_6759 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 156)) ;
  {
  var_classConstantMap_6759.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 157)), var_min_5476, var_integerTypeName_5288, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 157)) ;
  }
  {
  var_classConstantMap_6759.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 158)), var_max_5531, var_integerTypeName_5288, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 158)) ;
  }
  GALGAS_PLMType var_integerType_6985 = GALGAS_PLMType::constructor_new (var_propertyMap_5657, var_classConstantMap_6759, GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 163)), GALGAS_PLMTypeAttributes::constructor_all (SOURCE_FILE ("type-integer.galgas", 164)), var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 165)), GALGAS_typeKind::constructor_integer (var_min_5476, var_max_5531, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 166)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 166))  COMMA_SOURCE_FILE ("type-integer.galgas", 160)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_5288, var_integerType_6985, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-integer.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 168)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_5288, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 174)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_5288, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 180)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_5288, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 186)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_integerDecoratedDeclaration::constructor_new (var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 192)), object->mProperty_mSize, object->mProperty_mIsSigned  COMMA_SOURCE_FILE ("type-integer.galgas", 192))  COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
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
//                     Overriding extension method '@integerDecoratedDeclaration semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDecoratedDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                          const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDecoratedDeclaration * object = (const cPtr_integerDecoratedDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDecoratedDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_integerIR::constructor_new (object->mProperty_mTypeName, object->mProperty_mSize, object->mProperty_mIsSigned  COMMA_SOURCE_FILE ("type-integer.galgas", 212))  COMMA_SOURCE_FILE ("type-integer.galgas", 212)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDecoratedDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_integerDecoratedDeclaration.mSlotID,
                                         extensionMethod_integerDecoratedDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDecoratedDeclaration_semanticAnalysis (defineExtensionMethod_integerDecoratedDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateIntegerIntrinsicFunction'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateIntegerIntrinsicFunction (const GALGAS_string constinArgument_inPLMtypeName,
                                               GALGAS_string & ioArgument_ioLLVMcode,
                                               const GALGAS_string constinArgument_inPLMMethodName,
                                               const GALGAS_string constinArgument_inIntrinsicName,
                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                               const GALGAS_string constinArgument_inLLVMtypeName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_routineMangledName_9941 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (constinArgument_inPLMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 236)), constinArgument_inPLMMethodName.getter_nowhere (SOURCE_FILE ("type-integer.galgas", 237)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 235)) ;
  GALGAS_string var_functionName_10081 = function_llvmNameForFunction (var_routineMangledName_9941.getter_string (SOURCE_FILE ("type-integer.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 241)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 241)).add_operation (var_functionName_10081, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 241)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 241)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 241)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 243)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 243)).add_operation (constinArgument_inIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 243)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 243)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 243)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 243)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 243)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 244)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 245)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247)).add_operation (constinArgument_inIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247))  COMMA_SOURCE_FILE ("type-integer.galgas", 246)) ;
}


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
  GALGAS_string var_llvmTypeName_10976 = GALGAS_string ("i").add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("INTEGER TYPE $").add_operation (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 254)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 256)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_byteSwappedMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 260)), GALGAS_string ("bswap"), ioArgument_ioGenerationAdds, var_llvmTypeName_10976, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 257)) ;
    }
  }
  {
  routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_bitReversedMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 270)), GALGAS_string ("bitreverse"), ioArgument_ioGenerationAdds, var_llvmTypeName_10976, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 267)) ;
  }
  {
  routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_countLeadingZerosMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 279)), GALGAS_string ("ctlz"), ioArgument_ioGenerationAdds, var_llvmTypeName_10976, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
  }
  {
  routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_countTrainingZerosMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 288)), GALGAS_string ("cttz"), ioArgument_ioGenerationAdds, var_llvmTypeName_10976, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 285)) ;
  }
  {
  routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_setBitCountMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 297)), GALGAS_string ("ctpop"), ioArgument_ioGenerationAdds, var_llvmTypeName_10976, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 294)) ;
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
  GALGAS_PLMType var_selfType_12831 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 313)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 313)) ;
  GALGAS_lstring var_intIntOp_12959 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 315)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_12959, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 318)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 319))  COMMA_SOURCE_FILE ("type-integer.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 316)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_12959, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 324))  COMMA_SOURCE_FILE ("type-integer.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 321)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 329)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 329)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_12959, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 328)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 326)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 334)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 334)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_12959, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 331)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 339)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 339)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_12959, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 338)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 336)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 344)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 344)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_12959, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 347)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 351))  COMMA_SOURCE_FILE ("type-integer.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 348)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 356))  COMMA_SOURCE_FILE ("type-integer.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 353)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 361))  COMMA_SOURCE_FILE ("type-integer.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 358)) ;
    }
    {
    ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 377)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 377)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 382))  COMMA_SOURCE_FILE ("type-integer.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 387)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 387)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 392))  COMMA_SOURCE_FILE ("type-integer.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 389)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 397)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 397)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 394)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 402))  COMMA_SOURCE_FILE ("type-integer.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 399)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 407)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 407)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 412)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 412)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 417)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 417)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 414)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 422)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 422)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 419)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 428))  COMMA_SOURCE_FILE ("type-integer.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 425)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 433)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 433)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_12959, var_selfType_12831, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 430)) ;
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
  GALGAS_bool test_0 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 454)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 454)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left_17585 ;
    GALGAS_PLMType joker_17559_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_17559_1, var_left_17585, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 455)) ;
    GALGAS_bigint var_right_17650 ;
    GALGAS_PLMType joker_17623_1 ; // Joker input parameter
    constinArgument_inRightOperand.method_literalInteger (joker_17623_1, var_right_17650, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 456)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue_17740 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_17585, var_right_17650, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 458)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_17740  COMMA_SOURCE_FILE ("type-integer.galgas", 459)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 462)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 466)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 464)) ;
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
  GALGAS_PLMType var_selfType_18719 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 485)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 485)) ;
  GALGAS_lstring var_intLiteralOp_18851 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 487)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_18851, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 490)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 491))  COMMA_SOURCE_FILE ("type-integer.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 488)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_18851, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 495)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 496))  COMMA_SOURCE_FILE ("type-integer.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 493)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 501)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 501)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_18851, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 500)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 498)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 506)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 506)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_18851, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 505)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 503)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 511)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 511)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_18851, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 508)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 516)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 516)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_18851, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 515)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 513)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 519)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 523))  COMMA_SOURCE_FILE ("type-integer.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 520)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 528))  COMMA_SOURCE_FILE ("type-integer.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 525)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 533))  COMMA_SOURCE_FILE ("type-integer.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 530)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 540)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 540)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 537)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 545))  COMMA_SOURCE_FILE ("type-integer.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 542)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 550)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 550)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 547)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 555))  COMMA_SOURCE_FILE ("type-integer.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 552)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 560)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 560)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 557)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 565))  COMMA_SOURCE_FILE ("type-integer.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 562)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 570)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 570)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 567)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 575)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 575)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 572)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 580)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 580)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 577)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 585)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 585)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 582)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 591))  COMMA_SOURCE_FILE ("type-integer.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 588)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 596)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 596)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_18851, var_selfType_18719, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 593)) ;
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
  GALGAS_bigint var_literalValue_23320 ;
  GALGAS_PLMType joker_23286_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_23286_1, var_literalValue_23320, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 618)) ;
  GALGAS_bigint var_min_23379 ;
  GALGAS_bigint var_max_23400 ;
  GALGAS_bool joker_23402_2 ; // Joker input parameter
  GALGAS_uint joker_23402_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 619)).getter_kind (HERE).method_integer (var_min_23379, var_max_23400, joker_23402_2, joker_23402_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 619)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_23320.objectCompare (var_min_23379)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_23379.getter_string (SOURCE_FILE ("type-integer.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 621)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 621)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 621)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_23320.objectCompare (var_max_23400)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_23400.getter_string (SOURCE_FILE ("type-integer.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 623)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 623)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 623)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 625)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 628)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 626)) ;
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
  GALGAS_PLMType var_selfType_24502 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 647)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 647)) ;
  GALGAS_lstring var_intLiteralOp_24634 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 649)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 649)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_24634, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 652)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 653))  COMMA_SOURCE_FILE ("type-integer.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 650)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_24634, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 657)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 658))  COMMA_SOURCE_FILE ("type-integer.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 655)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 663)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 663)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_24634, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 662)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 660)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 668)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 668)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_24634, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 667)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 665)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 673)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 673)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_24634, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 672)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 670)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 678)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 678)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_24634, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 677)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 675)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 681)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 685))  COMMA_SOURCE_FILE ("type-integer.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 682)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 690))  COMMA_SOURCE_FILE ("type-integer.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 687)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 695))  COMMA_SOURCE_FILE ("type-integer.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 692)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 702)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 702)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 699)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 707))  COMMA_SOURCE_FILE ("type-integer.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 704)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 712)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 712)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 709)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 717))  COMMA_SOURCE_FILE ("type-integer.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 714)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 722)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 722)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 719)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 727))  COMMA_SOURCE_FILE ("type-integer.galgas", 727)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 724)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 732)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 732)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 732)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 729)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 737)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 737)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 734)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 742)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 742)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 739)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 747)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 747)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 744)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 753))  COMMA_SOURCE_FILE ("type-integer.galgas", 753)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 750)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 758)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 758)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_24634, var_selfType_24502, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 755)) ;
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
  GALGAS_bigint var_literalValue_29046 ;
  GALGAS_PLMType joker_29012_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_29012_1, var_literalValue_29046, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 779)) ;
  GALGAS_bigint var_min_29106 ;
  GALGAS_bigint var_max_29127 ;
  GALGAS_bool joker_29129_2 ; // Joker input parameter
  GALGAS_uint joker_29129_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 780)).getter_kind (HERE).method_integer (var_min_29106, var_max_29127, joker_29129_2, joker_29129_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 780)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_29046.objectCompare (var_min_29106)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_29106.getter_string (SOURCE_FILE ("type-integer.galgas", 782)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 782)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 782)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 782)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_29046.objectCompare (var_max_29127)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_29127.getter_string (SOURCE_FILE ("type-integer.galgas", 784)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 784)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 784)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 784)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 786)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 789)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 787)) ;
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
  GALGAS_lstring var_staticIntegerTypeName_1813 = function_llvmTypeNameFromPLMname (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)) ;
  {
  const GALGAS_literalIntegerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName_1813, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName_1813, function_llvmTypeNameFromPLMname (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)) ;
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
                                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                         GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_3167 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 56)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 56)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3167, function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 60)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-literal-integer.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 58)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 64)) ;
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
  GALGAS_lstring var_literalIntegerTypeName_3671 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 74)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 74)) ;
  GALGAS_lstring var_intIntOp_3744 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_3671.getter_string (HERE), var_literalIntegerTypeName_3671.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 76)) ;
  GALGAS_PLMType var_selfType_3858 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_3671, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 77)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 77)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3744, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 82)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 83))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 80)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3744, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 87)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 88))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3744, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 92)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 93))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 90)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3744, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 97)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 98))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 95)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3744, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 102)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 103))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 100)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3744, function_booleanType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 107)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 108))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 105)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 114))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 111)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 119))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 116)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 124))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 121)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (var_literalIntegerTypeName_3671, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 126)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (var_literalIntegerTypeName_3671, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 130)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 137))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 134)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 142))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 139)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 147))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 144)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 152))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 149)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 157))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 154)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 162))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 159)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 167))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 164)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 172))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 169)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 177))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 174)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 182))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 179)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 188))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 185)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 193))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 190)) ;
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
                                                                                                   const GALGAS_PLMType constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_9331 ;
  GALGAS_PLMType joker_9300_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_9300_1, var_leftValue_9331, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 233)) ;
  GALGAS_bigint var_rightValue_9399 ;
  GALGAS_PLMType joker_9367_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_9367_1, var_rightValue_9399, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 234)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_9413 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_9331, var_rightValue_9399, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 235)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_9413  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 236)) ;
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
  GALGAS_lstring var_literalStringTypeName_1866 = function_llvmTypeNameFromPLMname (object->mProperty_mLiteralStringTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 34)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1866, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1866, function_llvmTypeNameFromPLMname (GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 36)) COMMA_SOURCE_FILE ("type-static-string.galgas", 36)) ;
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
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                        GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mLiteralStringTypeName, function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 60)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-static-string.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 58)) ;
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
  GALGAS_lstring var_typeName_3042 = function_llvmTypeNameFromPLMname (object->mProperty_mOpaqueTypeName, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 65)) ;
  {
  const GALGAS_opaqueTypeDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_3042, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_3042, function_llvmTypeNameFromPLMname (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)) ;
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
                                                                     GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                     GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  GALGAS_PLMTypeAttributes var_attributes_4452 = GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 90)) ;
  cEnumerator_lstringlist enumerator_4496 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4496.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4496.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("instantiable"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_attributes_4452.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4496.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 94)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
      }else if (kBoolFalse == test_1) {
        var_attributes_4452 = var_attributes_4452.operator_or (GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4496.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_attributes_4452.getter_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_4496.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 100)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
        }else if (kBoolFalse == test_4) {
          var_attributes_4452 = var_attributes_4452.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 102)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 102)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4496.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 105)), GALGAS_string ("only @copyable and @instantiable attributes are allowed here"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 105)) ;
      }
    }
    enumerator_4496.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_5085 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 109)) ;
  GALGAS_allocaList var_allocaList_5115 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 110)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5161 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-opaque-declaration.galgas", 111)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_5278 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_5278, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  GALGAS_staticStringMap joker_5592 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 124)) ;
  GALGAS_objectIR var_sizeExpressionIR_5745 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mOpaqueTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 119)), object->mProperty_mOpaqueTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 119)), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 120)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-opaque-declaration.galgas", 122)), var_temporaries_5161, joker_5592, var_universalMap_5278, var_allocaList_5115, var_initInstructionGenerationList_5085, var_sizeExpressionIR_5745, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 116)) ;
  GALGAS_bool test_7 = GALGAS_bool (kIsStrictSup, var_allocaList_5115.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 130)).add_operation (var_initInstructionGenerationList_5085.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_7.boolEnum ()) {
    test_7 = var_sizeExpressionIR_5745.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 130)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 130)) ;
  }
  const enumGalgasBool test_8 = test_7.boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 131)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_constructorMap var_constructorMap_5987 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 133)) ;
    const enumGalgasBool test_10 = var_attributes_4452.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 134)).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      var_constructorMap_5987.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 135)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 135)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 135))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 135)) ;
      }
    }
    GALGAS_bigint var_bitSize_6174 ;
    GALGAS_PLMType joker_6153_1 ; // Joker input parameter
    var_sizeExpressionIR_5745.method_literalInteger (joker_6153_1, var_bitSize_6174, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 137)) ;
    GALGAS_PLMType var_opaqueType_6194 = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 139)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 140)), var_constructorMap_5987, var_attributes_4452, object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 143)), GALGAS_typeKind::constructor_opaque (var_bitSize_6174  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 144))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 138)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, var_opaqueType_6194, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-opaque-declaration.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 146)) ;
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
//                 Overriding extension method '@controlRegisterDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  GALGAS_lstring var_nodeName_7454 = object->mProperty_mRegisterArrayList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 201)) ;
  {
  const GALGAS_controlRegisterDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_7454, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 203)) ;
  }
  GALGAS_lstring var_typeName_7603 = function_llvmTypeNameFromPLMname (object->mProperty_mRegisterTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 205)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_7454, var_typeName_7603 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
  }
  GALGAS_lstring var_rootNode_7744 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)), var_nodeName_7454.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_7454, var_rootNode_7744 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 209)) ;
  }
  cEnumerator_controlRegisterList enumerator_7947 (object->mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_7947.hasCurrentObject ()) {
    switch (enumerator_7947.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_8254 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_7947.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySize = extractPtr_8254->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_8254->mAssociatedValue2 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_7454, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 215)) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_7454, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
      }
      break ;
    }
    enumerator_7947.gotoNextObject () ;
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
  GALGAS_lstring var_nodeName_8521 = object->mProperty_mRegisterArrayList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 224)) ;
  result_outRepresentation = GALGAS_string ("control register ").add_operation (var_nodeName_8521.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 225)) ;
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
                                                                          GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                          GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  GALGAS_PLMType var_registerType_13879 ;
  GALGAS_uint var_registerBitCount_13910 ;
  const GALGAS_controlRegisterDeclarationAST temp_0 = object ;
  callExtensionMethod_controlRegisterType ((const cPtr_controlRegisterDeclarationAST *) temp_0.ptr (), ioArgument_ioContext, var_registerType_13879, var_registerBitCount_13910, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 357)) ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_14078 ;
  GALGAS_sliceMap var_registerBitSliceMap_14107 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_14141 ;
  const GALGAS_controlRegisterDeclarationAST temp_1 = object ;
  callExtensionMethod_buildControlRegisterSliceMap ((const cPtr_controlRegisterDeclarationAST *) temp_1.ptr (), ioArgument_ioContext, var_registerType_13879, var_registerBitCount_13910, var_registerFieldMap_14078, var_registerBitSliceMap_14107, var_controlRegisterFieldList_14141, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 359)) ;
  GALGAS_bigint var_maxRegisterAddress_14207 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 368)).left_shift_operation (ioArgument_ioContext.getter_mPointerSize (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 368)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 368)) ;
  cEnumerator_controlRegisterList enumerator_14282 (object->mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_14282.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly_14330 = GALGAS_bool (false) ;
    GALGAS_bool var_isAccessibleInUserMode_14369 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_14418 (enumerator_14282.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14418.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_14418.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_isReadOnly_14330.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_14418.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 376)), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 376)) ;
        }else if (kBoolFalse == test_3) {
          var_isReadOnly_14330 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_14418.current_mValue (HERE).getter_string (HERE).objectCompare (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 380)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const enumGalgasBool test_6 = var_isAccessibleInUserMode_14369.boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_14418.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 382)), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 382)) ;
          }else if (kBoolFalse == test_6) {
            var_isAccessibleInUserMode_14369 = GALGAS_bool (true) ;
          }
        }else if (kBoolFalse == test_5) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_14418.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 387)), GALGAS_string ("only @ro (read only) and @user (accessible in `user mode) attributes are accepted here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 387)) ;
        }
      }
      enumerator_14418.gotoNextObject () ;
    }
    GALGAS_objectIR var_addressExpressionResult_15192 ;
    callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) enumerator_14282.current (HERE).getter_mRegisterAddress (HERE).ptr (), enumerator_14282.current (HERE).getter_mRegisterAddressLocation (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_addressExpressionResult_15192, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 391)) ;
    GALGAS_bigint var_registerAddress_15226 ;
    const enumGalgasBool test_9 = var_addressExpressionResult_15192.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 398)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 398)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (enumerator_14282.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("control register address is not a static integer expression"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 399)) ;
      var_registerAddress_15226.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_9) {
      GALGAS_PLMType joker_15486_1 ; // Joker input parameter
      var_addressExpressionResult_15192.method_literalInteger (joker_15486_1, var_registerAddress_15226, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 403)) ;
      const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_registerAddress_15226.objectCompare (var_maxRegisterAddress_14207)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_14282.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxRegisterAddress_14207.getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 407)), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 406)) ;
      }
    }
    GALGAS_bigint var_arraySize_15771 ;
    GALGAS_uint var_elementArraySize_15798 ;
    switch (enumerator_14282.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_15771 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 414)) ;
        var_elementArraySize_15798 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_18800 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_14282.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_18800->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_18800->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_18800->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_18800->mAssociatedValue3 ;
        GALGAS_universalValuedObjectMapForContext var_universalMap_16413 ;
        {
        routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-control-register.galgas", 421)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 423)), var_universalMap_16413, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
        }
        GALGAS_semanticTemporariesStruct var_temporaries_16701 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-control-register.galgas", 432)) ;
        GALGAS_instructionListIR var_instructionGenerationList_16763 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 433)) ;
        GALGAS_allocaList var_allocaList_16797 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 434)) ;
        GALGAS_objectIR var_sizeExpressionResult_17294 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_arraySizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 436)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 438)), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 439)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-control-register.galgas", 441)), var_temporaries_16701, ioArgument_ioGlobalLiteralStringMap, var_universalMap_16413, var_allocaList_16797, var_instructionGenerationList_16763, var_sizeExpressionResult_17294, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 435)) ;
        const enumGalgasBool test_13 = var_sizeExpressionResult_17294.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 449)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 449)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression"), fixItArray14  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)) ;
          var_arraySize_15771.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          GALGAS_PLMType joker_17526_1 ; // Joker input parameter
          var_sizeExpressionResult_17294.method_literalInteger (joker_17526_1, var_arraySize_15771, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)) ;
          const enumGalgasBool test_15 = GALGAS_bool (kIsStrictInf, var_arraySize_15771.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 453)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray16  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 454)) ;
            var_arraySize_15771.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_15) {
            GALGAS_uint var_powerOfTwoForArraySize_17795 = var_arraySize_15771.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 458)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("declaration-control-register.galgas", 458)) ;
            const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_arraySize_15771.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)).left_shift_operation (var_powerOfTwoForArraySize_17795 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray18  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
              var_arraySize_15771.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_18414 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSizeExpression.ptr (), extractedValue_arrayElementSizeLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_elementArraySizeExpressionResult_18414, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
        const enumGalgasBool test_19 = var_elementArraySizeExpressionResult_18414.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 473)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 473)).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression"), fixItArray20  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          var_elementArraySize_15798.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_19) {
          GALGAS_bigint var_elementArraySizeAsBigInt_18730 ;
          GALGAS_PLMType joker_18692_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_18414.method_literalInteger (joker_18692_1, var_elementArraySizeAsBigInt_18730, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 478)) ;
          var_elementArraySize_15798 = var_elementArraySizeAsBigInt_18730.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 479)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioContext.mProperty_mControlRegisterMap.setter_insertKey (enumerator_14282.current (HERE).getter_mRegisterName (HERE), var_registerType_13879, var_isReadOnly_14330, var_isAccessibleInUserMode_14369, var_registerBitSliceMap_14107, var_registerFieldMap_14078, var_registerAddress_15226, var_controlRegisterFieldList_14141, var_registerBitCount_13910, var_arraySize_15771.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 492)), var_elementArraySize_15798, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 482)) ;
    }
    enumerator_14282.gotoNextObject () ;
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
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_20853 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 525)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_21003 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 527)) ;
    cEnumerator_controlRegisterMap enumerator_21043 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_21043.hasCurrentObject ()) {
      var_firstLetterSet_21003.addAssign_operation (enumerator_21043.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 529)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 529))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 529)) ;
      enumerator_21043.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_21151 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_21185 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_controlRegisterMap enumerator_21232 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_21232.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_21185.objectCompare (enumerator_21232.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 534)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_21185 = enumerator_21232.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 535)) ;
        var_tableOfTypeString_21151.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_21185.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 536)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 536)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 536)).add_operation (var_currentFirstLetter_21185.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 536)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 536)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_21232.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_tableOfTypeString_21151.plusAssign_operation(function_linkForControlRegister (enumerator_21232.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 539)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 539)) ;
      }else if (kBoolFalse == test_2) {
        cEnumerator_range enumerator_21677 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_21232.current_mArraySize (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 541))), kENUMERATION_UP) ;
        while (enumerator_21677.hasCurrentObject ()) {
          var_tableOfTypeString_21151.plusAssign_operation(function_linkForControlRegister (enumerator_21232.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)).add_operation (enumerator_21677.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)) ;
          enumerator_21677.gotoNextObject () ;
        }
      }
      enumerator_21232.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_21842 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 547)), constinArgument_inControlRegisterMap, var_firstLetterSet_21003, var_tableOfTypeString_21151 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 546))) ;
    GALGAS_bool joker_22094 ; // Joker input parameter
    var_typeDumpString_21842.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_20853, joker_22094, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 552)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_20853, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 554)) ;
    }
  }
}


