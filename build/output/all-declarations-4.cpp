#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element::GALGAS_variableListIR_2D_element (void) :
mAttribute_mVar () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element::~ GALGAS_variableListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element::GALGAS_variableListIR_2D_element (const GALGAS_variableKindIR & inOperand0) :
mAttribute_mVar (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element GALGAS_variableListIR_2D_element::constructor_new (const GALGAS_variableKindIR & inOperand0 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_variableListIR_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_variableListIR_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_variableListIR_2D_element::objectCompare (const GALGAS_variableListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mVar.objectCompare (inOperand.mAttribute_mVar) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_variableListIR_2D_element::isValid (void) const {
  return mAttribute_mVar.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableListIR_2D_element::drop (void) {
  mAttribute_mVar.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableListIR_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @variableListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mVar.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_variableListIR_2D_element::reader_mVar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVar ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @variableListIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableListIR_2D_element ("variableListIR-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_variableListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_variableListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element GALGAS_variableListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_variableListIR_2D_element result ;
  const GALGAS_variableListIR_2D_element * p = (const GALGAS_variableListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInlineGeneratedCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mInlineGeneratedCode (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1 
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
    result = mAttribute_mInlineGeneratedCode.objectCompare (inOperand.mAttribute_mInlineGeneratedCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInlineGeneratedCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInlineGeneratedCode.drop () ;
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
    mAttribute_mInlineGeneratedCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_constructorMap_2D_element::reader_mInlineGeneratedCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInlineGeneratedCode ;
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

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mResultType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_infixOperatorMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_infixOperatorMap_2D_element (inOperand0, inOperand1) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mResultType.drop () ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_infixOperatorMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_infixOperatorMap_2D_element::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
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

GALGAS_lstring GALGAS_prefixOperatorMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_prefixOperatorMap_2D_element::reader_mResultType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_globalLiteralStringMap_2D_element::GALGAS_globalLiteralStringMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLiteralStringCname () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element::~ GALGAS_globalLiteralStringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element::GALGAS_globalLiteralStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLiteralStringCname (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element GALGAS_globalLiteralStringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalLiteralStringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element GALGAS_globalLiteralStringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_string & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalLiteralStringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalLiteralStringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalLiteralStringMap_2D_element::objectCompare (const GALGAS_globalLiteralStringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLiteralStringCname.objectCompare (inOperand.mAttribute_mLiteralStringCname) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalLiteralStringMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLiteralStringCname.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalLiteralStringMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLiteralStringCname.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalLiteralStringMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @globalLiteralStringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLiteralStringCname.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalLiteralStringMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalLiteralStringMap_2D_element::reader_mLiteralStringCname (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralStringCname ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @globalLiteralStringMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalLiteralStringMap_2D_element ("globalLiteralStringMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalLiteralStringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalLiteralStringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalLiteralStringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalLiteralStringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element GALGAS_globalLiteralStringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalLiteralStringMap_2D_element result ;
  const GALGAS_globalLiteralStringMap_2D_element * p = (const GALGAS_globalLiteralStringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalLiteralStringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalLiteralStringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                                          const GALGAS_variableKindIR & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mConstantType (inOperand1),
mAttribute_mExpressionCode (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_variableKindIR & inOperand2 
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

GALGAS_lstring GALGAS_globalConstantMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMap_2D_element::reader_mConstantType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_globalConstantMap_2D_element::reader_mExpressionCode (UNUSED_LOCATION_ARGS) const {
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

GALGAS_targetBaseTypeMap_2D_element::GALGAS_targetBaseTypeMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCType (),
mAttribute_mSize (),
mAttribute_mIsSigned () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element::~ GALGAS_targetBaseTypeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element::GALGAS_targetBaseTypeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_string & inOperand1,
                                                                          const GALGAS_uint & inOperand2,
                                                                          const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mCType (inOperand1),
mAttribute_mSize (inOperand2),
mAttribute_mIsSigned (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element GALGAS_targetBaseTypeMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_targetBaseTypeMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_string::constructor_default (HERE),
                                              GALGAS_uint::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element GALGAS_targetBaseTypeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_string & inOperand1,
                                                                                          const GALGAS_uint & inOperand2,
                                                                                          const GALGAS_bool & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_targetBaseTypeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_targetBaseTypeMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_targetBaseTypeMap_2D_element::objectCompare (const GALGAS_targetBaseTypeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCType.objectCompare (inOperand.mAttribute_mCType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSize.objectCompare (inOperand.mAttribute_mSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsSigned.objectCompare (inOperand.mAttribute_mIsSigned) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_targetBaseTypeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCType.isValid () && mAttribute_mSize.isValid () && mAttribute_mIsSigned.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetBaseTypeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCType.drop () ;
  mAttribute_mSize.drop () ;
  mAttribute_mIsSigned.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetBaseTypeMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @targetBaseTypeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsSigned.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetBaseTypeMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_targetBaseTypeMap_2D_element::reader_mCType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_targetBaseTypeMap_2D_element::reader_mSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_targetBaseTypeMap_2D_element::reader_mIsSigned (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsSigned ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @targetBaseTypeMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_targetBaseTypeMap_2D_element ("targetBaseTypeMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_targetBaseTypeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetBaseTypeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_targetBaseTypeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetBaseTypeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element GALGAS_targetBaseTypeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_targetBaseTypeMap_2D_element result ;
  const GALGAS_targetBaseTypeMap_2D_element * p = (const GALGAS_targetBaseTypeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_targetBaseTypeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetBaseTypeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
mAttribute_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::~ GALGAS_globalVariableMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_stringset & inOperand2,
                                                                          const GALGAS_allowedRoutineMap & inOperand3,
                                                                          const GALGAS_variableKindIR & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mVariableType (inOperand1),
mAttribute_mExecutionModeSet (inOperand2),
mAttribute_mAllowedProcedureMap (inOperand3),
mAttribute_mInitialValue (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_stringset & inOperand2,
                                                                                          const GALGAS_allowedRoutineMap & inOperand3,
                                                                                          const GALGAS_variableKindIR & inOperand4 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVariableMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_globalVariableMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
    result = mAttribute_mInitialValue.objectCompare (inOperand.mAttribute_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mVariableType.isValid () && mAttribute_mExecutionModeSet.isValid () && mAttribute_mAllowedProcedureMap.isValid () && mAttribute_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mVariableType.drop () ;
  mAttribute_mExecutionModeSet.drop () ;
  mAttribute_mAllowedProcedureMap.drop () ;
  mAttribute_mInitialValue.drop () ;
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
    mAttribute_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMap_2D_element::reader_mVariableType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariableType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_globalVariableMap_2D_element::reader_mExecutionModeSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExecutionModeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap GALGAS_globalVariableMap_2D_element::reader_mAllowedProcedureMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedProcedureMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_globalVariableMap_2D_element::reader_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialValue ;
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

GALGAS_lstring GALGAS_modeMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
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

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mAttribute_mTypeProxy (),
mAttribute_mPropertyName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                const GALGAS_lstring & inOperand1) :
mAttribute_mTypeProxy (inOperand0),
mAttribute_mPropertyName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                         GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                const GALGAS_lstring & inOperand1 
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
    result = mAttribute_mTypeProxy.objectCompare (inOperand.mAttribute_mTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyName.objectCompare (inOperand.mAttribute_mPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mAttribute_mTypeProxy.isValid () && mAttribute_mPropertyName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::drop (void) {
  mAttribute_mTypeProxy.drop () ;
  mAttribute_mPropertyName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @propertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyList_2D_element::reader_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyList_2D_element::reader_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typeList_2D_element::reader_mActualType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_typeMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractTypeIR GALGAS_typeMapIR_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_globalVarDeclarationList_2D_element::GALGAS_globalVarDeclarationList_2D_element (void) :
mAttribute_mType (),
mAttribute_mVarName (),
mAttribute_mSourceExpression (),
mAttribute_mAllowedProcList (),
mAttribute_mAllowedInitList (),
mAttribute_mAllowedExceptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element::~ GALGAS_globalVarDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element::GALGAS_globalVarDeclarationList_2D_element (const GALGAS_generalizedTypeEnumAST & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_expressionAST & inOperand2,
                                                                                        const GALGAS_allowedProcList & inOperand3,
                                                                                        const GALGAS_allowedInitList & inOperand4,
                                                                                        const GALGAS_allowedExceptionList & inOperand5) :
mAttribute_mType (inOperand0),
mAttribute_mVarName (inOperand1),
mAttribute_mSourceExpression (inOperand2),
mAttribute_mAllowedProcList (inOperand3),
mAttribute_mAllowedInitList (inOperand4),
mAttribute_mAllowedExceptionList (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element GALGAS_globalVarDeclarationList_2D_element::constructor_new (const GALGAS_generalizedTypeEnumAST & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_expressionAST & inOperand2,
                                                                                                        const GALGAS_allowedProcList & inOperand3,
                                                                                                        const GALGAS_allowedInitList & inOperand4,
                                                                                                        const GALGAS_allowedExceptionList & inOperand5 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVarDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_globalVarDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVarDeclarationList_2D_element::objectCompare (const GALGAS_globalVarDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mVarName.objectCompare (inOperand.mAttribute_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceExpression.objectCompare (inOperand.mAttribute_mSourceExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedProcList.objectCompare (inOperand.mAttribute_mAllowedProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedInitList.objectCompare (inOperand.mAttribute_mAllowedInitList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedExceptionList.objectCompare (inOperand.mAttribute_mAllowedExceptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVarDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mVarName.isValid () && mAttribute_mSourceExpression.isValid () && mAttribute_mAllowedProcList.isValid () && mAttribute_mAllowedInitList.isValid () && mAttribute_mAllowedExceptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mVarName.drop () ;
  mAttribute_mSourceExpression.drop () ;
  mAttribute_mAllowedProcList.drop () ;
  mAttribute_mAllowedInitList.drop () ;
  mAttribute_mAllowedExceptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @globalVarDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedExceptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generalizedTypeEnumAST GALGAS_globalVarDeclarationList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVarDeclarationList_2D_element::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_globalVarDeclarationList_2D_element::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList GALGAS_globalVarDeclarationList_2D_element::reader_mAllowedProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList GALGAS_globalVarDeclarationList_2D_element::reader_mAllowedInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList GALGAS_globalVarDeclarationList_2D_element::reader_mAllowedExceptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedExceptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @globalVarDeclarationList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVarDeclarationList_2D_element ("globalVarDeclarationList-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVarDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVarDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVarDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVarDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element GALGAS_globalVarDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_globalVarDeclarationList_2D_element result ;
  const GALGAS_globalVarDeclarationList_2D_element * p = (const GALGAS_globalVarDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVarDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVarDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@globalVarDeclarationList-element semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const GALGAS_globalVarDeclarationList_2D_element inObject,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_stringset var_executionModeSet ;
  GALGAS_allowedRoutineMap var_allowedProcedureMap ;
  GALGAS_variableKindIR var_expressionGeneratedCode ;
  constinArgument_inContext.mAttribute_mGlobalVariableMap.method_searchKey (inObject.mAttribute_mVarName, var_inferredType, var_executionModeSet, var_allowedProcedureMap, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 222)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap.modifier_insertKey (inObject.mAttribute_mVarName, var_inferredType.reader_key (inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 231)), GALGAS_bool (kIsStrictSup, var_executionModeSet.reader_count (SOURCE_FILE ("global-variable-declaration.galgas", 232)).objectCompare (GALGAS_uint ((uint32_t) 1U))), var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 229)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mActualTypeName (),
mAttribute_mGenerateVolatile (),
mAttribute_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::~ GALGAS_globalVariableMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_variableKindIR & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mActualTypeName (inOperand1),
mAttribute_mGenerateVolatile (inOperand2),
mAttribute_mInitialValue (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_variableKindIR & inOperand3 
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
    result = mAttribute_mActualTypeName.objectCompare (inOperand.mAttribute_mActualTypeName) ;
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
  return mAttribute_lkey.isValid () && mAttribute_mActualTypeName.isValid () && mAttribute_mGenerateVolatile.isValid () && mAttribute_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mActualTypeName.drop () ;
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
    mAttribute_mActualTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGenerateVolatile.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalVariableMapIR_2D_element::reader_mActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMapIR_2D_element::reader_mGenerateVolatile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGenerateVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_globalVariableMapIR_2D_element::reader_mInitialValue (UNUSED_LOCATION_ARGS) const {
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
mAttribute_mValueExpressionGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::~ GALGAS_globalConstantMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_variableKindIR & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mValueExpressionGeneration (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_variableKindIR & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalConstantMapIR_2D_element (inOperand0, inOperand1) ;
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
    result = mAttribute_mValueExpressionGeneration.objectCompare (inOperand.mAttribute_mValueExpressionGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValueExpressionGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValueExpressionGeneration.drop () ;
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
    mAttribute_mValueExpressionGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_globalConstantMapIR_2D_element::reader_mValueExpressionGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValueExpressionGeneration ;
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
    ioArgument_ioContext.mAttribute_mExceptionSetupRoutinePriorityMap.modifier_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("exception.galgas", 68)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("exception.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 68)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mAttribute_mExceptionClauseName.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioContext.mAttribute_mExceptionLoopRoutinePriorityMap.modifier_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("exception.galgas", 70)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("exception.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 70)) ;
      }
    }else if (kBoolFalse == test_1) {
      GALGAS_location location_2 (inObject.mAttribute_mExceptionClauseName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("exception routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("exception.galgas", 72)) ;
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
  cEnumerator_funcFormalArgumentList enumerator_2923 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_2923.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.modifier_noteNode (enumerator_2923.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("func-declaration.galgas", 83)) ;
    }
    enumerator_2923.gotoNextObject () ;
  }
  {
  ioArgument_ioGraph.modifier_noteNode (inObject.mAttribute_mResultTypeName COMMA_SOURCE_FILE ("func-declaration.galgas", 85)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@functionMapIR-element headerCodeGeneration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_headerCodeGeneration (const GALGAS_functionMapIR_2D_element & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_functionGenerationTemplate_declaration (inCompiler, inObject.mAttribute_lkey.mAttribute_string, inObject.mAttribute_mFormalArgumentListForGeneration, inObject.mAttribute_mResultType COMMA_SOURCE_FILE ("func-declaration.galgas", 256))) ;
//---
  return result_outCode ;
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
  switch (inObject.mAttribute_mProcedureKind.enumValue ()) {
  case GALGAS_procedureKindAST::kNotBuilt:
    break ;
  case GALGAS_procedureKindAST::kEnum_standAloneProc:
    {
      cEnumerator_procFormalArgumentList enumerator_5556 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
      while (enumerator_5556.hasCurrentObject ()) {
        {
        ioArgument_ioGraph.modifier_noteNode (enumerator_5556.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("proc-declaration.galgas", 164)) ;
        }
        enumerator_5556.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_procedureKindAST::kEnum_structureProc:
    {
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@procedureMapIR-element headerCodeGeneration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_headerCodeGeneration (const GALGAS_procedureMapIR_2D_element & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_procedureGenerationTemplate_declaration (inCompiler, function_mangledNameForProcedure (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 523)), inObject.mAttribute_mFormalArgumentListForGeneration COMMA_SOURCE_FILE ("proc-declaration.galgas", 522))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category Reader '@registerMapIR-element headerCodeGenerationForRegister'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_headerCodeGenerationForRegister (const GALGAS_registerMapIR_2D_element & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_registerGenerationTemplate_declaration (inCompiler, inObject.mAttribute_mRegisterTypeName, inObject.mAttribute_lkey.mAttribute_string, inObject.mAttribute_mRegisterAddress COMMA_SOURCE_FILE ("register-declaration.galgas", 308))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@globalVarDeclarationList-element enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_globalVarDeclarationList_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  switch (inObject.mAttribute_mType.enumValue ()) {
  case GALGAS_generalizedTypeEnumAST::kNotBuilt:
    break ;
  case GALGAS_generalizedTypeEnumAST::kEnum_valueType:
    {
      const cEnumAssociatedValues_generalizedTypeEnumAST_valueType * extractPtr_7789 = (const cEnumAssociatedValues_generalizedTypeEnumAST_valueType *) (inObject.mAttribute_mType.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_7789->mAssociatedValue0 ;
      GALGAS_unifiedTypeMap_2D_proxy var_variableType ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, extractedValue_typeName, var_variableType COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 117)) ;
      }
      GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("global-variable-declaration.galgas", 119)) ;
      GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("global-variable-declaration.galgas", 120)) ;
      GALGAS_variableMap var_variableMap = function_variableMapWithConstants (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 121)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
      GALGAS_variableKindIR var_resultValueName ;
      callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mAttribute_mSourceExpression.ptr (), GALGAS_string ("compiler").reader_nowhere (SOURCE_FILE ("global-variable-declaration.galgas", 123)), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("global-variable-declaration.galgas", 124)), var_variableType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-variable-declaration.galgas", 127)), GALGAS_bool (true), var_temporaries, ioArgument_ioGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, var_expressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 122)) ;
      GALGAS_bool test_0 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList.reader_length (SOURCE_FILE ("global-variable-declaration.galgas", 136)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      if (kBoolTrue != test_0.boolEnum ()) {
        test_0 = categoryReader_isStatic (var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 136)).operator_not (SOURCE_FILE ("global-variable-declaration.galgas", 136)) ;
      }
      const enumGalgasBool test_1 = test_0.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (inObject.mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 137)) ;
      }
      {
      routine_checkAssignmentCompatibility (var_expressionType, var_variableType, inObject.mAttribute_mVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 140)) ;
      }
      GALGAS_stringset var_executionModes = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-variable-declaration.galgas", 145)) ;
      GALGAS_allowedRoutineMap var_allowedProcedureMap = GALGAS_allowedRoutineMap::constructor_emptyMap (SOURCE_FILE ("global-variable-declaration.galgas", 146)) ;
      cEnumerator_allowedInitList enumerator_5554 (inObject.mAttribute_mAllowedInitList, kEnumeration_up) ;
      while (enumerator_5554.hasCurrentObject ()) {
        ioArgument_ioContext.mAttribute_mInitRoutineMap.method_searchKey (GALGAS_lstring::constructor_new (enumerator_5554.current_mInitPriority (HERE).mAttribute_uint_36__34_.reader_string (SOURCE_FILE ("global-variable-declaration.galgas", 149)), enumerator_5554.current_mInitPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 149)) ;
        {
        var_allowedProcedureMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("init ").add_operation (enumerator_5554.current_mInitPriority (HERE).mAttribute_uint_36__34_.reader_string (SOURCE_FILE ("global-variable-declaration.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 151)), enumerator_5554.current_mInitPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 151)), enumerator_5554.current_mHasWriteAccess (HERE), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 150)) ;
        }
        enumerator_5554.gotoNextObject () ;
      }
      cEnumerator_allowedExceptionList enumerator_5915 (inObject.mAttribute_mAllowedExceptionList, kEnumeration_up) ;
      while (enumerator_5915.hasCurrentObject ()) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_5915.current_mExceptionName (HERE).mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioContext.mAttribute_mExceptionSetupRoutinePriorityMap.method_searchSetupKey (GALGAS_lstring::constructor_new (enumerator_5915.current_mExceptionPriority (HERE).mAttribute_uint_36__34_.reader_string (SOURCE_FILE ("global-variable-declaration.galgas", 159)), enumerator_5915.current_mExceptionPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 158)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_5915.current_mExceptionName (HERE).mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            ioArgument_ioContext.mAttribute_mExceptionLoopRoutinePriorityMap.method_searchLoopKey (GALGAS_lstring::constructor_new (enumerator_5915.current_mExceptionPriority (HERE).mAttribute_uint_36__34_.reader_string (SOURCE_FILE ("global-variable-declaration.galgas", 164)), enumerator_5915.current_mExceptionPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 163)) ;
          }else if (kBoolFalse == test_4) {
            GALGAS_location location_5 (enumerator_5915.current_mExceptionName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_5, GALGAS_string ("exception routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 168)) ;
          }
        }
        {
        var_allowedProcedureMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("exception ").add_operation (enumerator_5915.current_mExceptionName (HERE).reader_string (SOURCE_FILE ("global-variable-declaration.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 171)).add_operation (enumerator_5915.current_mExceptionPriority (HERE).mAttribute_uint_36__34_.reader_string (SOURCE_FILE ("global-variable-declaration.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 171)), enumerator_5915.current_mExceptionName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 171)), enumerator_5915.current_mHasWriteAccess (HERE), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 170)) ;
        }
        enumerator_5915.gotoNextObject () ;
      }
      cEnumerator_allowedProcList enumerator_6731 (inObject.mAttribute_mAllowedProcList, kEnumeration_up) ;
      while (enumerator_6731.hasCurrentObject ()) {
        GALGAS_string var_allowedProcMangledName = enumerator_6731.current_mProcName (HERE).mAttribute_string ;
        cEnumerator_procFormalArgumentList enumerator_6826 (enumerator_6731.current_mProcFormalArgumentList (HERE), kEnumeration_up) ;
        while (enumerator_6826.hasCurrentObject ()) {
          switch (enumerator_6826.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
          case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_input:
            {
              var_allowedProcMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 180)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_output:
            {
              var_allowedProcMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 181)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
            {
              var_allowedProcMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 182)) ;
            }
            break ;
          }
          var_allowedProcMangledName.dotAssign_operation (enumerator_6826.current_mSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 184))  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 184)) ;
          enumerator_6826.gotoNextObject () ;
        }
        GALGAS_lstring var_allowedProcMangledNameWithLocation = GALGAS_lstring::constructor_new (var_allowedProcMangledName, enumerator_6731.current_mProcName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 186)) ;
        GALGAS_modeMap var_procedureModeMap ;
        GALGAS_procedureSignature var_signature ;
        GALGAS_bool joker_7312 ; // Joker input parameter
        GALGAS_bool joker_7383 ; // Joker input parameter
        ioArgument_ioContext.mAttribute_mProcedureMap.method_searchKey (var_allowedProcMangledNameWithLocation, joker_7312, var_procedureModeMap, var_signature, joker_7383, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 187)) ;
        cEnumerator_modeMap enumerator_7425 (var_procedureModeMap, kEnumeration_up) ;
        while (enumerator_7425.hasCurrentObject ()) {
          var_executionModes.addAssign_operation (enumerator_7425.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 195)) ;
          enumerator_7425.gotoNextObject () ;
        }
        {
        var_allowedProcedureMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("proc ").add_operation (var_allowedProcMangledName, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 198)), enumerator_6731.current_mProcName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 198)), enumerator_6731.current_mHasWriteAccess (HERE), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 197)) ;
        }
        enumerator_6731.gotoNextObject () ;
      }
      {
      ioArgument_ioContext.mAttribute_mGlobalVariableMap.modifier_insertKey (inObject.mAttribute_mVarName, var_variableType, var_executionModes, var_allowedProcedureMap, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 202)) ;
      }
    }
    break ;
  case GALGAS_generalizedTypeEnumAST::kEnum_procType:
    {
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category Reader '@globalVariableMapIR-element implementationCodeGeneration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_implementationCodeGeneration (const GALGAS_globalVariableMapIR_2D_element & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  GALGAS_string var_initialValueString = categoryReader_mangledName (inObject.mAttribute_mInitialValue, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 254)) ;
  const enumGalgasBool test_0 = inObject.mAttribute_mInitialValue.reader_isLiteralUnsignedInteger (SOURCE_FILE ("global-variable-declaration.galgas", 255)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint_36__34_ var_value ;
    inObject.mAttribute_mInitialValue.method_literalUnsignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 256)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_value.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_initialValueString = GALGAS_string::makeEmptyString () ;
    }
  }
  result_outCode = GALGAS_string (filewrapperTemplate_globalVariableGenerationTemplate_implementation (inCompiler, inObject.mAttribute_lkey.mAttribute_string, inObject.mAttribute_mActualTypeName, inObject.mAttribute_mGenerateVolatile, var_initialValueString COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 261))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category Reader '@globalConstantMapIR-element headerCodeGeneration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_headerCodeGeneration (const GALGAS_globalConstantMapIR_2D_element & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_globalConstantGenerationTemplate_declaration (inCompiler, inObject.mAttribute_lkey.mAttribute_string, categoryReader_mangledName (inObject.mAttribute_mValueExpressionGeneration, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 146)) COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 144))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@newIntegerRepresentationDeclaration location'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_newIntegerRepresentationDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_newIntegerRepresentationDeclaration * object = (const cPtr_newIntegerRepresentationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newIntegerRepresentationDeclaration) ;
  result_outLocation = object->mAttribute_mBaseTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_newIntegerRepresentationDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_newIntegerRepresentationDeclaration.mSlotID,
                                categoryReader_newIntegerRepresentationDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_newIntegerRepresentationDeclaration_location (defineCategoryReader_newIntegerRepresentationDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@newIntegerRepresentationDeclaration enterInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_newIntegerRepresentationDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_newIntegerRepresentationDeclaration * object = (const cPtr_newIntegerRepresentationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newIntegerRepresentationDeclaration) ;
  {
  const GALGAS_newIntegerRepresentationDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (GALGAS_lstring::constructor_new (GALGAS_string ("basetype ").add_operation (object->mAttribute_mBaseTypeName.reader_string (SOURCE_FILE ("new-base-type.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 65)), object->mAttribute_mBaseTypeName.mAttribute_location  COMMA_SOURCE_FILE ("new-base-type.galgas", 65)), temp_0, inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 65)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_newIntegerRepresentationDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_newIntegerRepresentationDeclaration.mSlotID,
                                              categoryMethod_newIntegerRepresentationDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_newIntegerRepresentationDeclaration_enterInPrecedenceGraph (defineCategoryMethod_newIntegerRepresentationDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@newIntegerRepresentationDeclaration keyRepresentation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_newIntegerRepresentationDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_newIntegerRepresentationDeclaration * object = (const cPtr_newIntegerRepresentationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newIntegerRepresentationDeclaration) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (object->mAttribute_mBaseTypeName.reader_string (SOURCE_FILE ("new-base-type.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 71)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_newIntegerRepresentationDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_newIntegerRepresentationDeclaration.mSlotID,
                                         categoryReader_newIntegerRepresentationDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_newIntegerRepresentationDeclaration_keyRepresentation (defineCategoryReader_newIntegerRepresentationDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@newIntegerRepresentationDeclaration enterInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_newIntegerRepresentationDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                               const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                                               GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_newIntegerRepresentationDeclaration * object = (const cPtr_newIntegerRepresentationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newIntegerRepresentationDeclaration) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSize.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 8ULL))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSize.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 16ULL))) ;
  }
  GALGAS_bool test_1 = test_0 ;
  if (kBoolTrue == test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSize.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 32ULL))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSize.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 64ULL))) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mSize.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("Only 8, 16, 32 or 64 are accepted here")  COMMA_SOURCE_FILE ("new-base-type.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mTargetBaseTypeMap.modifier_insertKey (object->mAttribute_mBaseTypeName, object->mAttribute_mCType.mAttribute_string, object->mAttribute_mSize.mAttribute_uint_36__34_.reader_uint (inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 91)), object->mAttribute_mIsSigned, inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 88)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_newIntegerRepresentationDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_newIntegerRepresentationDeclaration.mSlotID,
                                      categoryMethod_newIntegerRepresentationDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_newIntegerRepresentationDeclaration_enterInContext (defineCategoryMethod_newIntegerRepresentationDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@newIntegerRepresentationDeclaration semanticAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_newIntegerRepresentationDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                 GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_newIntegerRepresentationDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_newIntegerRepresentationDeclaration.mSlotID,
                                        categoryMethod_newIntegerRepresentationDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_newIntegerRepresentationDeclaration_semanticAnalysis (defineCategoryMethod_newIntegerRepresentationDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category reader '@booleanDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_booleanDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryReader_booleanDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                categoryReader_booleanDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_booleanDeclaration_location (defineCategoryReader_booleanDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mBooleanTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 50)) ;
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
//                         Overriding category reader '@booleanDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_booleanDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (object->mAttribute_mBooleanTypeName.reader_string (SOURCE_FILE ("bool-type.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_booleanDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                         categoryReader_booleanDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_booleanDeclaration_keyRepresentation (defineCategoryReader_booleanDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@booleanDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_3144 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3144.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3144.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("bool-type.galgas", 72)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_3144.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("bool-type.galgas", 73)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }
    enumerator_3144.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mBooleanTypeName, GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("bool-type.galgas", 81)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 82)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 83)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 79)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.mAttribute_mBooleanType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("bool-type.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mBooleanTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("Boolean type already defined")  COMMA_SOURCE_FILE ("bool-type.galgas", 90)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mBooleanTypeName, var_boolType COMMA_SOURCE_FILE ("bool-type.galgas", 92)) ;
  }
  ioArgument_ioContext.mAttribute_mBooleanType = var_boolType ;
  {
  routine_enterBooleanOperators (object->mAttribute_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("bool-type.galgas", 95)) ;
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

static void categoryMethod_booleanDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  GALGAS_string var_cType = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_6400 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_6400.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_6400.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_cType.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_6400.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("base type already defined as '").add_operation (var_cType, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 164)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 164))  COMMA_SOURCE_FILE ("bool-type.galgas", 164)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_uint joker_6644 ; // Joker input parameter
        GALGAS_bool joker_6647 ; // Joker input parameter
        constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (enumerator_6400.current_mValue (HERE), var_cType, joker_6644, joker_6647, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 166)) ;
      }
    }
    enumerator_6400.gotoNextObject () ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mTypeMapIR.modifier_insertKey (object->mAttribute_mBooleanTypeName, GALGAS_booleanIR::constructor_new (object->mAttribute_mBooleanTypeName.mAttribute_string, var_cType  COMMA_SOURCE_FILE ("bool-type.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 170)) ;
  }
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
//                         Overriding category reader '@booleanIR headerCodeGenerationForType'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_booleanIR_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_booleanIR * object = (const cPtr_booleanIR *) inObject ;
  macroValidSharedObject (object, cPtr_booleanIR) ;
  result_outCode = GALGAS_string (filewrapperTemplate_booleanGenerationTemplate_declaration (inCompiler, object->mAttribute_mBooleanTypeName, object->mAttribute_mActualTypeName COMMA_SOURCE_FILE ("bool-type.galgas", 198))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_booleanIR_headerCodeGenerationForType (void) {
  enterCategoryReader_headerCodeGenerationForType (kTypeDescriptor_GALGAS_booleanIR.mSlotID,
                                                   categoryReader_booleanIR_headerCodeGenerationForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_booleanIR_headerCodeGenerationForType (defineCategoryReader_booleanIR_headerCodeGenerationForType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category reader '@modeDeclaration location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_modeDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryReader_modeDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                categoryReader_modeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_modeDeclaration_location (defineCategoryReader_modeDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mModeName, temp_0, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 49)) ;
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
//                           Overriding category reader '@modeDeclaration keyRepresentation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_modeDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  result_outRepresentation = GALGAS_string ("mode ").add_operation (object->mAttribute_mModeName.reader_string (SOURCE_FILE ("mode-declaration.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 55)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_modeDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                         categoryReader_modeDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_modeDeclaration_keyRepresentation (defineCategoryReader_modeDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@modeDeclaration enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                           const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  {
  ioArgument_ioContext.mAttribute_mModeMap.modifier_insertKey (object->mAttribute_mModeName, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 67)) ;
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
//                            Overriding category reader '@enumerationDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_enumerationDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryReader_enumerationDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                categoryReader_enumerationDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_enumerationDeclaration_location (defineCategoryReader_enumerationDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mEnumerationName, temp_0, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 61)) ;
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
//                       Overriding category reader '@enumerationDeclaration keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_enumerationDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumerationName.reader_string (SOURCE_FILE ("enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 67)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_enumerationDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                         categoryReader_enumerationDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_enumerationDeclaration_keyRepresentation (defineCategoryReader_enumerationDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@enumerationDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_3659 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3659.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3659.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("enumeration-declaration.galgas", 91)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_3659.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 92)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }
    enumerator_3659.gotoNextObject () ;
  }
  GALGAS_enumConstantMap var_enumConstantMap = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 97)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 98)) ;
  cEnumerator_lstringlist enumerator_3917 (object->mAttribute_mCaseNameList, kEnumeration_up) ;
  while (enumerator_3917.hasCurrentObject ()) {
    GALGAS_uint var_idx = var_enumConstantMap.reader_count (SOURCE_FILE ("enumeration-declaration.galgas", 100)) ;
    {
    var_enumConstantMap.modifier_insertKey (enumerator_3917.current_mValue (HERE), var_idx, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 101)) ;
    }
    {
    var_constructorMap.modifier_insertKey (enumerator_3917.current_mValue (HERE), GALGAS_string ("(").add_operation (function_mangledNameForType (object->mAttribute_mEnumerationName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)).add_operation (var_idx.reader_string (SOURCE_FILE ("enumeration-declaration.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)) ;
    }
    enumerator_3917.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mEnumerationName, GALGAS_typeKind::constructor_enumeration (var_enumConstantMap  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 106)), var_constructorMap, GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 108)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 104)) ;
  }
  {
  routine_enterEnumerationOperators (object->mAttribute_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 114)) ;
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

static void categoryMethod_enumerationDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_string var_cType = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_6483 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_6483.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_6483.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_cType.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_6483.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 167)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_bool var_isSigned ;
        GALGAS_uint joker_6727 ; // Joker input parameter
        constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (enumerator_6483.current_mValue (HERE), var_cType, joker_6727, var_isSigned, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 169)) ;
        const enumGalgasBool test_3 = var_isSigned.boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_string var_s = GALGAS_string ("an unsigned base type should be used here; possible values:") ;
          cEnumerator_targetBaseTypeMap enumerator_6924 (constinArgument_inContext.mAttribute_mTargetBaseTypeMap, kEnumeration_up) ;
          while (enumerator_6924.hasCurrentObject ()) {
            const enumGalgasBool test_4 = enumerator_6924.current_mIsSigned (HERE).operator_not (SOURCE_FILE ("enumeration-declaration.galgas", 173)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_s.dotAssign_operation (GALGAS_string ("\n"
                "- %").add_operation (enumerator_6924.current_lkey (HERE).reader_string (SOURCE_FILE ("enumeration-declaration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 174))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 174)) ;
            }
            enumerator_6924.gotoNextObject () ;
          }
          GALGAS_location location_5 (enumerator_6483.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, var_s  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 177)) ;
        }
      }
    }
    enumerator_6483.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_cType.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint joker_7223 ; // Joker input parameter
    GALGAS_bool joker_7226 ; // Joker input parameter
    constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (GALGAS_string ("size").reader_nowhere (SOURCE_FILE ("enumeration-declaration.galgas", 183)), var_cType, joker_7223, joker_7226, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 183)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mTypeMapIR.modifier_insertKey (object->mAttribute_mEnumerationName, GALGAS_enumerationIR::constructor_new (object->mAttribute_mEnumerationName.mAttribute_string, var_cType  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 186)) ;
  }
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
//                       Overriding category reader '@enumerationIR headerCodeGenerationForType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_enumerationIR_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_enumerationIR * object = (const cPtr_enumerationIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationIR) ;
  result_outCode = GALGAS_string (filewrapperTemplate_enumerationGenerationTemplate_declaration (inCompiler, object->mAttribute_mEnumerationName, object->mAttribute_mActualTypeName COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 214))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_enumerationIR_headerCodeGenerationForType (void) {
  enterCategoryReader_headerCodeGenerationForType (kTypeDescriptor_GALGAS_enumerationIR.mSlotID,
                                                   categoryReader_enumerationIR_headerCodeGenerationForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_enumerationIR_headerCodeGenerationForType (defineCategoryReader_enumerationIR_headerCodeGenerationForType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@globalConstantDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_globalConstantDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryReader_globalConstantDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                categoryReader_globalConstantDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_globalConstantDeclaration_location (defineCategoryReader_globalConstantDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 50)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mConstantName, object->mAttribute_mTypeName COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 51)) ;
  }
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), object->mAttribute_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 52)) ;
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
//                      Overriding category reader '@globalConstantDeclaration keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_globalConstantDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mAttribute_mConstantName.reader_string (SOURCE_FILE ("global-constant-declaration.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 58)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_globalConstantDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                         categoryReader_globalConstantDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_globalConstantDeclaration_keyRepresentation (defineCategoryReader_globalConstantDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@globalConstantDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                     const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_constantType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, var_constantType COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 79)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("global-constant-declaration.galgas", 81)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("global-constant-declaration.galgas", 82)) ;
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("global-constant-declaration.galgas", 83)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_resultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_string ("compiler").reader_nowhere (SOURCE_FILE ("global-constant-declaration.galgas", 85)), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("global-constant-declaration.galgas", 86)), var_constantType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-constant-declaration.galgas", 89)), GALGAS_bool (true), var_temporaries, ioArgument_ioGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, var_expressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 84)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList.reader_length (SOURCE_FILE ("global-constant-declaration.galgas", 98)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = categoryReader_isStatic (var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 98)).operator_not (SOURCE_FILE ("global-constant-declaration.galgas", 98)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mConstantName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 99)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mGlobalConstantMap.modifier_insertKey (object->mAttribute_mConstantName, var_expressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 102)) ;
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

static void categoryMethod_globalConstantDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_variableKindIR var_expressionGeneratedCode ;
  GALGAS_unifiedTypeMap_2D_proxy joker_5471 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mGlobalConstantMap.method_searchKey (object->mAttribute_mConstantName, joker_5471, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 118)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap.modifier_insertKey (object->mAttribute_mConstantName, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 123)) ;
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
//                              Overriding category reader '@integerDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_integerDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  result_outLocation = object->mAttribute_mIntegerTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_integerDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                categoryReader_integerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_integerDeclaration_location (defineCategoryReader_integerDeclaration_location, NULL) ;

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
  {
  const GALGAS_integerDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mIntegerTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 45)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mIntegerTypeName, GALGAS_lstring::constructor_new (GALGAS_string ("basetype ").add_operation (object->mAttribute_mBaseType.reader_string (SOURCE_FILE ("type-integer.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 46)), object->mAttribute_mBaseType.mAttribute_location  COMMA_SOURCE_FILE ("type-integer.galgas", 46)) COMMA_SOURCE_FILE ("type-integer.galgas", 46)) ;
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
//                         Overriding category reader '@integerDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_integerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (object->mAttribute_mIntegerTypeName.reader_string (SOURCE_FILE ("type-integer.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 52)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_integerDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                         categoryReader_integerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_integerDeclaration_keyRepresentation (defineCategoryReader_integerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@integerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  GALGAS_uint var_size ;
  GALGAS_bool var_isSigned ;
  GALGAS_string joker_3173 ; // Joker input parameter
  ioArgument_ioContext.mAttribute_mTargetBaseTypeMap.method_searchKey (object->mAttribute_mBaseType, joker_3173, var_size, var_isSigned, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 65)) ;
  GALGAS_sint_36__34_ var_min ;
  GALGAS_uint_36__34_ var_max ;
  const enumGalgasBool test_0 = var_isSigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_min = GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 71)) ;
      var_max = GALGAS_uint_36__34_ ((uint64_t) 127ULL) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_min = GALGAS_sint_36__34_ ((int64_t) 32768LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 74)) ;
        var_max = GALGAS_uint_36__34_ ((uint64_t) 32767ULL) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_min = GALGAS_sint::constructor_min (SOURCE_FILE ("type-integer.galgas", 77)).reader_sint_36__34_ (SOURCE_FILE ("type-integer.galgas", 77)) ;
          var_max = GALGAS_sint::constructor_max (SOURCE_FILE ("type-integer.galgas", 78)).reader_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_min = GALGAS_sint_36__34_::constructor_min (SOURCE_FILE ("type-integer.galgas", 80)) ;
            var_max = GALGAS_sint_36__34_::constructor_max (SOURCE_FILE ("type-integer.galgas", 81)).reader_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
          }else if (kBoolFalse == test_4) {
            GALGAS_location location_5 (object->mAttribute_mIntegerTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_5, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("type-integer.galgas", 83)) ;
            var_min.drop () ; // Release error dropped variable
            var_max.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_0) {
    var_min = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_max = GALGAS_uint_36__34_ ((uint64_t) 255ULL) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_max = GALGAS_uint_36__34_ ((uint64_t) 65535ULL) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_max = GALGAS_uint::constructor_max (SOURCE_FILE ("type-integer.galgas", 92)).reader_uint_36__34_ (SOURCE_FILE ("type-integer.galgas", 92)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
          if (kBoolTrue == test_9) {
            var_max = GALGAS_uint_36__34_::constructor_max (SOURCE_FILE ("type-integer.galgas", 94)) ;
          }else if (kBoolFalse == test_9) {
            GALGAS_location location_10 (object->mAttribute_mIntegerTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_10, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("type-integer.galgas", 96)) ;
            var_max.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 100)) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mIntegerTypeName, GALGAS_typeKind::constructor_integer (var_min, var_max, var_isSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 103)), var_size  COMMA_SOURCE_FILE ("type-integer.galgas", 103)), var_constructorMap, GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 105)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 101)) ;
  }
  {
  routine_enterIntegerOperators (object->mAttribute_mIntegerTypeName, var_isSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 111)) ;
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

static void categoryMethod_integerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  GALGAS_string var_cType ;
  GALGAS_uint joker_9223 ; // Joker input parameter
  GALGAS_bool joker_9226 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (object->mAttribute_mBaseType, var_cType, joker_9223, joker_9226, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 238)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mTypeMapIR.modifier_insertKey (object->mAttribute_mIntegerTypeName, GALGAS_integerIR::constructor_new (object->mAttribute_mIntegerTypeName.mAttribute_string, var_cType  COMMA_SOURCE_FILE ("type-integer.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 240)) ;
  }
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
//                         Overriding category reader '@integerIR headerCodeGenerationForType'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_integerIR_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_integerIR * object = (const cPtr_integerIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerIR) ;
  result_outCode = GALGAS_string (filewrapperTemplate_integerGenerationTemplate_declaration (inCompiler, object->mAttribute_mIntegerTypeName, object->mAttribute_mActualTypeName COMMA_SOURCE_FILE ("type-integer.galgas", 268))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_integerIR_headerCodeGenerationForType (void) {
  enterCategoryReader_headerCodeGenerationForType (kTypeDescriptor_GALGAS_integerIR.mSlotID,
                                                   categoryReader_integerIR_headerCodeGenerationForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_integerIR_headerCodeGenerationForType (defineCategoryReader_integerIR_headerCodeGenerationForType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category reader '@literalStringDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_literalStringDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryReader_literalStringDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                categoryReader_literalStringDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_literalStringDeclaration_location (defineCategoryReader_literalStringDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mLiteralStringTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
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
//                      Overriding category reader '@literalStringDeclaration keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_literalStringDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mAttribute_mLiteralStringTypeName.reader_string (SOURCE_FILE ("type-static-string.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 28)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_literalStringDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                         categoryReader_literalStringDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_literalStringDeclaration_keyRepresentation (defineCategoryReader_literalStringDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@literalStringDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                    const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mLiteralStringTypeName, GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("type-static-string.galgas", 43)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 44)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 45)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 41)) ;
  }
  {
  routine_enterStaticStringOperators (object->mAttribute_mLiteralStringTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 51)) ;
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

static void categoryMethod_literalStringDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                      const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mTypeMapIR.modifier_insertKey (object->mAttribute_mLiteralStringTypeName, GALGAS_literalStringTypeIR::constructor_new (object->mAttribute_mLiteralStringTypeName.mAttribute_string  COMMA_SOURCE_FILE ("type-static-string.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 118)) ;
  }
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
//                    Overriding category reader '@literalStringTypeIR headerCodeGenerationForType'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_literalStringTypeIR_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_literalStringTypeIR * object = (const cPtr_literalStringTypeIR *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringTypeIR) ;
  result_outCode = GALGAS_string (filewrapperTemplate_literalStringGenerationTemplate_declaration (inCompiler, object->mAttribute_mLiteralStringTypeName COMMA_SOURCE_FILE ("type-static-string.galgas", 144))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_literalStringTypeIR_headerCodeGenerationForType (void) {
  enterCategoryReader_headerCodeGenerationForType (kTypeDescriptor_GALGAS_literalStringTypeIR.mSlotID,
                                                   categoryReader_literalStringTypeIR_headerCodeGenerationForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_literalStringTypeIR_headerCodeGenerationForType (defineCategoryReader_literalStringTypeIR_headerCodeGenerationForType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category reader '@registerDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_registerDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryReader_registerDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                categoryReader_registerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_registerDeclaration_location (defineCategoryReader_registerDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mRegisterDeclarationList.reader_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 108)), temp_0, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 108)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mRegisterDeclarationList.reader_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 109)), object->mAttribute_mRegisterTypeName COMMA_SOURCE_FILE ("register-declaration.galgas", 109)) ;
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
//                         Overriding category reader '@registerDeclaration keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_registerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  result_outRepresentation = GALGAS_string ("register ").add_operation (object->mAttribute_mRegisterDeclarationList.reader_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 115)).reader_string (SOURCE_FILE ("register-declaration.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 115)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_registerDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                         categoryReader_registerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_registerDeclaration_keyRepresentation (defineCategoryReader_registerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@registerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                               const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, var_registerType COMMA_SOURCE_FILE ("register-declaration.galgas", 159)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_BoolTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, GALGAS_string ("Bool").reader_nowhere (SOURCE_FILE ("register-declaration.galgas", 160)), var_BoolTypeProxy COMMA_SOURCE_FILE ("register-declaration.galgas", 160)) ;
  }
  GALGAS_registerFieldMap var_registerFieldMap = GALGAS_registerFieldMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 162)) ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap = GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 163)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mRegisterBitSliceList.reader_length (SOURCE_FILE ("register-declaration.galgas", 164)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_registerBitSliceList enumerator_6668 (object->mAttribute_mRegisterBitSliceList, kEnumeration_down) ;
    while (enumerator_6668.hasCurrentObject ()) {
      switch (enumerator_6668.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_registerBitSlice::kNotBuilt:
        break ;
      case GALGAS_registerBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_registerBitSlice_unusedBits * extractPtr_6797 = (const cEnumAssociatedValues_registerBitSlice_unusedBits *) (enumerator_6668.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_luint_36__34_ extractedValue_count = extractPtr_6797->mAssociatedValue0 ;
          var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_uint_36__34_.reader_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 169)) ;
        }
        break ;
      case GALGAS_registerBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_registerBitSlice_namedBit * extractPtr_7812 = (const cEnumAssociatedValues_registerBitSlice_namedBit *) (enumerator_6668.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_7812->mAssociatedValue0 ;
          const GALGAS_luint_36__34_ extractedValue_count = extractPtr_7812->mAssociatedValue1 ;
          GALGAS_uint var_bitCount = extractedValue_count.mAttribute_uint_36__34_.reader_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 171)) ;
          {
          var_registerFieldMap.modifier_insertKey (extractedValue_name, var_shiftCount, var_bitCount, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 172)) ;
          }
          GALGAS_registerBitSliceAccessMap var_registerSubMap = GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 177)) ;
          {
          var_registerSubMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("shift"), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("register-declaration.galgas", 179)), GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string (">>")  COMMA_SOURCE_FILE ("register-declaration.galgas", 180)), GALGAS_variableKindIR::constructor_literalUnsignedInteger (var_shiftCount.reader_uint_36__34_ (SOURCE_FILE ("register-declaration.galgas", 181))  COMMA_SOURCE_FILE ("register-declaration.galgas", 181)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 182)), var_registerType, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 178)) ;
          }
          {
          var_registerSubMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("register-declaration.galgas", 186)), GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("!=")  COMMA_SOURCE_FILE ("register-declaration.galgas", 187)), GALGAS_variableKindIR::constructor_literalUnsignedInteger (GALGAS_uint_36__34_ ((uint64_t) 0ULL)  COMMA_SOURCE_FILE ("register-declaration.galgas", 188)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 189)), var_BoolTypeProxy, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 185)) ;
          }
          GALGAS_uint_36__34_ var_mask = GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("register-declaration.galgas", 192)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 192)).left_shift_operation (var_shiftCount COMMA_SOURCE_FILE ("register-declaration.galgas", 192)) ;
          {
          var_registerBitSliceMap.modifier_insertKey (extractedValue_name, GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("&")  COMMA_SOURCE_FILE ("register-declaration.galgas", 195)), GALGAS_variableKindIR::constructor_literalUnsignedInteger (var_mask  COMMA_SOURCE_FILE ("register-declaration.galgas", 196)), var_registerSubMap, var_registerType, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 193)) ;
          }
          var_shiftCount = var_shiftCount.add_operation (var_bitCount, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 200)) ;
        }
        break ;
      }
      enumerator_6668.gotoNextObject () ;
    }
  }
  cEnumerator_registerDeclarationList enumerator_7880 (object->mAttribute_mRegisterDeclarationList, kEnumeration_up) ;
  while (enumerator_7880.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7968 (enumerator_7880.current_mAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_7968.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_7968.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_7968.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("only @ro attribute (read only) is accepted here")  COMMA_SOURCE_FILE ("register-declaration.galgas", 210)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = var_isReadOnly.boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_7968.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("register-declaration.galgas", 212)) ;
        }else if (kBoolFalse == test_3) {
          var_isReadOnly = GALGAS_bool (true) ;
        }
      }
      enumerator_7968.gotoNextObject () ;
    }
    {
    ioArgument_ioContext.mAttribute_mRegisterMap.modifier_insertKey (enumerator_7880.current_mRegisterName (HERE), var_registerType, var_isReadOnly, var_registerBitSliceMap, var_registerFieldMap, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 217)) ;
    }
    enumerator_7880.gotoNextObject () ;
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
//                         Overriding category method '@registerDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 236)) ;
  switch (var_registerType.reader_kind (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 237)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      GALGAS_location location_0 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 238)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      GALGAS_location location_1 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 239)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_9925 = (const cEnumAssociatedValues_typeKind_integer *) (var_registerType.reader_kind (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 237)).unsafePointer ()) ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_9925->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_size = extractPtr_9925->mAssociatedValue3 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mRegisterBitSliceList.reader_length (SOURCE_FILE ("register-declaration.galgas", 241)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = extractedValue_unsigned.operator_not (SOURCE_FILE ("register-declaration.galgas", 242)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the register type should be unsigned in order to define bit slices")  COMMA_SOURCE_FILE ("register-declaration.galgas", 243)) ;
        }
        GALGAS_uint var_shiftCount = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_registerBitSliceList enumerator_9513 (object->mAttribute_mRegisterBitSliceList, kEnumeration_down) ;
        while (enumerator_9513.hasCurrentObject ()) {
          switch (enumerator_9513.current_mRegisterBitSlice (HERE).enumValue ()) {
          case GALGAS_registerBitSlice::kNotBuilt:
            break ;
          case GALGAS_registerBitSlice::kEnum_unusedBits:
            {
              const cEnumAssociatedValues_registerBitSlice_unusedBits * extractPtr_9648 = (const cEnumAssociatedValues_registerBitSlice_unusedBits *) (enumerator_9513.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
              const GALGAS_luint_36__34_ extractedValue_count = extractPtr_9648->mAssociatedValue0 ;
              var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_uint_36__34_.reader_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 249)) ;
            }
            break ;
          case GALGAS_registerBitSlice::kEnum_namedBit:
            {
              const cEnumAssociatedValues_registerBitSlice_namedBit * extractPtr_9747 = (const cEnumAssociatedValues_registerBitSlice_namedBit *) (enumerator_9513.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
              const GALGAS_luint_36__34_ extractedValue_count = extractPtr_9747->mAssociatedValue1 ;
              var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_uint_36__34_.reader_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 251)) ;
            }
            break ;
          }
          enumerator_9513.gotoNextObject () ;
        }
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, extractedValue_size.objectCompare (var_shiftCount)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount.reader_string (SOURCE_FILE ("register-declaration.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 255)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 255)).add_operation (extractedValue_size.reader_string (SOURCE_FILE ("register-declaration.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 255)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 255))  COMMA_SOURCE_FILE ("register-declaration.galgas", 255)) ;
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_7 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("a literal string type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 258)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_8 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_8, GALGAS_string ("a structure type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 259)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_9 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_9, GALGAS_string ("an enumeration type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 260)) ;
    }
    break ;
  }
  GALGAS_uint var_size ;
  GALGAS_bool var_isSigned ;
  GALGAS_string joker_10316 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (GALGAS_string ("size").reader_nowhere (SOURCE_FILE ("register-declaration.galgas", 263)), joker_10316, var_size, var_isSigned, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 263)) ;
  const enumGalgasBool test_10 = var_isSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("base type 'size' should be unsigned")  COMMA_SOURCE_FILE ("register-declaration.galgas", 265)) ;
  }
  GALGAS_uint_36__34_ var_maxAddress ;
  const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_maxAddress = GALGAS_uint_36__34_ ((uint64_t) 255ULL) ;
  }else if (kBoolFalse == test_12) {
    const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
    if (kBoolTrue == test_13) {
      var_maxAddress = GALGAS_uint_36__34_ ((uint64_t) 65535ULL) ;
    }else if (kBoolFalse == test_13) {
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_maxAddress = GALGAS_uint::constructor_max (SOURCE_FILE ("register-declaration.galgas", 273)).reader_uint_36__34_ (SOURCE_FILE ("register-declaration.galgas", 273)) ;
      }else if (kBoolFalse == test_14) {
        const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
        if (kBoolTrue == test_15) {
          var_maxAddress = GALGAS_uint_36__34_::constructor_max (SOURCE_FILE ("register-declaration.galgas", 275)) ;
        }else if (kBoolFalse == test_15) {
          GALGAS_location location_16 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_16, GALGAS_string ("base type 'size' has an invalid size")  COMMA_SOURCE_FILE ("register-declaration.galgas", 277)) ;
          var_maxAddress.drop () ; // Release error dropped variable
        }
      }
    }
  }
  cEnumerator_registerDeclarationList enumerator_10791 (object->mAttribute_mRegisterDeclarationList, kEnumeration_up) ;
  while (enumerator_10791.hasCurrentObject ()) {
    const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, enumerator_10791.current_mRegisterAddress (HERE).mAttribute_uint_36__34_.objectCompare (var_maxAddress)).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_location location_18 (enumerator_10791.current_mRegisterAddress (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_18, GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxAddress.reader_hexString (SOURCE_FILE ("register-declaration.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 281))  COMMA_SOURCE_FILE ("register-declaration.galgas", 281)) ;
    }
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mRegisterMap.modifier_insertKey (enumerator_10791.current_mRegisterName (HERE), object->mAttribute_mRegisterTypeName.mAttribute_string, enumerator_10791.current_mRegisterAddress (HERE).mAttribute_uint_36__34_, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 284)) ;
    }
    enumerator_10791.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                        categoryMethod_registerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerDeclaration_semanticAnalysis (defineCategoryMethod_registerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@conversionExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_conversionExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inConstantName,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_conversionExpressionAST * object = (const cPtr_conversionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_conversionExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 57)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_conversionExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_conversionExpressionAST.mSlotID,
                                                            categoryMethod_conversionExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_conversionExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_conversionExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@conversionExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_conversionExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                      const GALGAS_receiverType constinArgument_inReceiverType,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_stringset constinArgument_inModeSet,
                                                                      const GALGAS_bool constinArgument_inAllowExceptions,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                      GALGAS_variableKindIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_conversionExpressionAST * object = (const cPtr_conversionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_conversionExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_convertedExpressionType ;
  GALGAS_variableKindIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_convertedExpressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 81)) ;
  GALGAS_bool test_0 = constinArgument_inAllowExceptions.operator_not (SOURCE_FILE ("expression-conversion.galgas", 96)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = object->mAttribute_mSilently.operator_not (SOURCE_FILE ("expression-conversion.galgas", 96)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 97)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 97))  COMMA_SOURCE_FILE ("expression-conversion.galgas", 97)) ;
  }
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-conversion.galgas", 100)) ;
  const enumGalgasBool test_3 = outArgument_outExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 102)).reader_isInteger (SOURCE_FILE ("expression-conversion.galgas", 102)).operator_not (SOURCE_FILE ("expression-conversion.galgas", 102)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-conversion.galgas", 103)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = var_convertedExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 104)).reader_isInteger (SOURCE_FILE ("expression-conversion.galgas", 104)).operator_not (SOURCE_FILE ("expression-conversion.galgas", 104)).boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-conversion.galgas", 105)) ;
    }else if (kBoolFalse == test_5) {
      GALGAS_sint_36__34_ var_minSource ;
      GALGAS_uint_36__34_ var_maxSource ;
      GALGAS_bool joker_4722 ; // Joker input parameter
      GALGAS_uint joker_4734 ; // Joker input parameter
      var_convertedExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 107)).method_integer (var_minSource, var_maxSource, joker_4722, joker_4734, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 107)) ;
      GALGAS_sint_36__34_ var_minTarget ;
      GALGAS_uint_36__34_ var_maxTarget ;
      GALGAS_bool joker_4825 ; // Joker input parameter
      GALGAS_uint joker_4837 ; // Joker input parameter
      outArgument_outExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 108)).method_integer (var_minTarget, var_maxTarget, joker_4825, joker_4837, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 108)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget.objectCompare (var_minSource)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget.objectCompare (var_maxSource)) ;
      }
      GALGAS_bool var_alwaysPossible = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible.boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("useless explicit conversion")  COMMA_SOURCE_FILE ("expression-conversion.galgas", 111)) ;
      }
    }
  }
  {
  routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-conversion.galgas", 115)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_conversionInstructionIR::constructor_new (outArgument_outExpressionType, var_convertedExpressionType, outArgument_outResult, var_expressionResult, object->mAttribute_mSilently, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-conversion.galgas", 117))  COMMA_SOURCE_FILE ("expression-conversion.galgas", 117)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_conversionExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_conversionExpressionAST.mSlotID,
                                         categoryMethod_conversionExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_conversionExpressionAST_analyzeExpression (defineCategoryMethod_conversionExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@conversionInstructionIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_conversionInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_conversionInstructionIR * object = (const cPtr_conversionInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_conversionInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 145)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_conversionInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_conversionInstructionIR.mSlotID,
                                               categoryMethod_conversionInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_conversionInstructionIR_enterAccessibleEntities (defineCategoryMethod_conversionInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@conversionInstructionIR instructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_conversionInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_conversionInstructionIR * object = (const cPtr_conversionInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_conversionInstructionIR) ;
  GALGAS_bool test_0 = object->mAttribute_mSilently ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 152)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 152)).add_operation (categoryReader_mangledName (object->mAttribute_mTemporaryResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 152)) ;
    result_outCode.dotAssign_operation (GALGAS_string (" = ((").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 153)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 153)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 153)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 153))  COMMA_SOURCE_FILE ("expression-conversion.galgas", 153)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_string var_okVar = GALGAS_string ("ok").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 155)).reader_string (SOURCE_FILE ("expression-conversion.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 155)) ;
    GALGAS_sint_36__34_ var_minSource ;
    GALGAS_uint_36__34_ var_maxSource ;
    GALGAS_bool joker_7016 ; // Joker input parameter
    GALGAS_uint joker_7028 ; // Joker input parameter
    object->mAttribute_mConvertedExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 156)).method_integer (var_minSource, var_maxSource, joker_7016, joker_7028, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 156)) ;
    GALGAS_sint_36__34_ var_minTarget ;
    GALGAS_uint_36__34_ var_maxTarget ;
    GALGAS_bool joker_7111 ; // Joker input parameter
    GALGAS_uint joker_7123 ; // Joker input parameter
    object->mAttribute_mTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 157)).method_integer (var_minTarget, var_maxTarget, joker_7111, joker_7123, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 157)) ;
    result_outCode = GALGAS_string ("const bool ").add_operation (var_okVar, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 158)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 158)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_minTarget.objectCompare (var_minSource)).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outCode.dotAssign_operation (GALGAS_string ("(").add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 160)).add_operation (GALGAS_string (" >= "), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 160)).add_operation (var_minTarget.reader_string (SOURCE_FILE ("expression-conversion.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 160)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 160))  COMMA_SOURCE_FILE ("expression-conversion.galgas", 160)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_maxTarget.objectCompare (var_maxSource)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_minTarget.objectCompare (var_minSource)).boolEnum () ;
      if (kBoolTrue == test_4) {
        result_outCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("expression-conversion.galgas", 164)) ;
      }
      result_outCode.dotAssign_operation (GALGAS_string ("(").add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 166)).add_operation (GALGAS_string (" <= "), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 166)).add_operation (var_maxTarget.reader_string (SOURCE_FILE ("expression-conversion.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 166)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 166))  COMMA_SOURCE_FILE ("expression-conversion.galgas", 166)) ;
    }
    result_outCode.dotAssign_operation (GALGAS_string (" ;\n")  COMMA_SOURCE_FILE ("expression-conversion.galgas", 168)) ;
    result_outCode.dotAssign_operation (GALGAS_string ("if (!").add_operation (var_okVar, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 169)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 169))  COMMA_SOURCE_FILE ("expression-conversion.galgas", 169)) ;
    result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (5, ").add_operation (object->mAttribute_mLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 171)).reader_lastPathComponent (SOURCE_FILE ("expression-conversion.galgas", 171)).reader_utf_38_Representation (SOURCE_FILE ("expression-conversion.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 170)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 171)).add_operation (object->mAttribute_mLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 172)).reader_string (SOURCE_FILE ("expression-conversion.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 172)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 172))  COMMA_SOURCE_FILE ("expression-conversion.galgas", 170)) ;
    result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-conversion.galgas", 173)) ;
    result_outCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 174)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 174)).add_operation (categoryReader_mangledName (object->mAttribute_mTemporaryResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 174))  COMMA_SOURCE_FILE ("expression-conversion.galgas", 174)) ;
    result_outCode.dotAssign_operation (GALGAS_string (" = ((").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 175)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 175)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 175)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-conversion.galgas", 175))  COMMA_SOURCE_FILE ("expression-conversion.galgas", 175)) ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_conversionInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_conversionInstructionIR.mSlotID,
                                       categoryReader_conversionInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_conversionInstructionIR_instructionCode (defineCategoryReader_conversionInstructionIR_instructionCode, NULL) ;

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
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 331)) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 332)) ;
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
//                     Overriding category method '@infixOperatorExpressionAST analyzeExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                         const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                         const GALGAS_receiverType constinArgument_inReceiverType,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                                         const GALGAS_bool constinArgument_inAllowExceptions,
                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                         GALGAS_variableKindIR & outArgument_outResult,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftExpressionType ;
  GALGAS_variableKindIR var_leftResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_leftExpressionType, var_leftResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 372)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightExpressionType ;
  GALGAS_variableKindIR var_rightResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_leftExpressionType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_rightExpressionType, var_rightResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 387)) ;
  GALGAS_infixOperatorMap var_operatorMap ;
  GALGAS_infixOperatorIR var_infixOperatorIR ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_infixOperator::kNotBuilt:
    break ;
  case GALGAS_infixOperator::kEnum_equal:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mEqualOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("==")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 407)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mNonEqualOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("!=")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 410)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mStrictInfOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("<")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 413)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mInfEqualOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("<=")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 416)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mStrictSupOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string (">")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 419)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSupEqualOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string (">=")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 422)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("&")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 425)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanAnd:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mBooleanAndOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("&&")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 428)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("|")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 431)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanOrOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mBooleanOrOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("||")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 434)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("^")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 437)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mBooleanXorOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("^")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 440)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 442)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 442)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 443)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 443))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 443)) ;
      }
      var_operatorMap = constinArgument_inContext.mAttribute_mAddOperatorMap ;
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("+")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 447)) ;
      }else if (kBoolFalse == test_1) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixOvf (GALGAS_string ("__builtin_add_overflow"), GALGAS_uint ((uint32_t) 10U)  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 449)) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("+")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 453)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_2 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 455)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 455)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 456)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 456))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 456)) ;
      }
      var_operatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("-")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 460)) ;
      }else if (kBoolFalse == test_3) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixOvf (GALGAS_string ("__builtin_sub_overflow"), GALGAS_uint ((uint32_t) 11U)  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 462)) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("-")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 466)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_4 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 468)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 468)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 469)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 469))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 469)) ;
      }
      var_operatorMap = constinArgument_inContext.mAttribute_mMulOperatorMap ;
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("*")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 473)) ;
      }else if (kBoolFalse == test_5) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixOvf (GALGAS_string ("__builtin_mul_overflow"), GALGAS_uint ((uint32_t) 12U)  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 475)) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("*")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 479)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_6 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 481)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 481)).boolEnum () ;
      if (kBoolTrue == test_6) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 482)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 482))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 482)) ;
      }
      var_operatorMap = constinArgument_inContext.mAttribute_mDivOperatorMap ;
      const enumGalgasBool test_7 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("/")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 486)) ;
      }else if (kBoolFalse == test_7) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixUnsignedDivide (GALGAS_uint ((uint32_t) 13U)  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 488)) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("/")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 492)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_8 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 494)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 494)).boolEnum () ;
      if (kBoolTrue == test_8) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 495)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 495))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 495)) ;
      }
      var_operatorMap = constinArgument_inContext.mAttribute_mModOperatorMap ;
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("%")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 499)) ;
      }else if (kBoolFalse == test_9) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixModulo (GALGAS_uint ((uint32_t) 14U)  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 501)) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mModOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("%")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 505)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mLeftShiftOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string ("<<")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 508)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mRightShiftOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixNoOvf (GALGAS_string (">>")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 511)) ;
    }
    break ;
  }
  categoryMethod_checkWith (var_operatorMap, var_leftExpressionType, var_rightExpressionType, object->mAttribute_mOperatorLocation, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 513)) ;
  GALGAS_bool test_10 = var_leftResult.reader_isLiteralUnsignedInteger (SOURCE_FILE ("expression-infix-operators.galgas", 520)) ;
  if (kBoolTrue == test_10.boolEnum ()) {
    test_10 = var_rightResult.reader_isLiteralUnsignedInteger (SOURCE_FILE ("expression-infix-operators.galgas", 520)) ;
  }
  const enumGalgasBool test_11 = test_10.boolEnum () ;
  if (kBoolTrue == test_11) {
    GALGAS_uint_36__34_ var_leftValue ;
    var_leftResult.method_literalUnsignedInteger (var_leftValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 521)) ;
    GALGAS_uint_36__34_ var_rightValue ;
    var_rightResult.method_literalUnsignedInteger (var_rightValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 522)) ;
    GALGAS_uint_36__34_ var_result ;
    switch (object->mAttribute_mOp.enumValue ()) {
    case GALGAS_infixOperator::kNotBuilt:
      break ;
    case GALGAS_infixOperator::kEnum_equal:
      {
        var_result = GALGAS_bool (kIsEqual, var_leftValue.objectCompare (var_rightValue)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 525)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_nonEqual:
      {
        var_result = GALGAS_bool (kIsNotEqual, var_leftValue.objectCompare (var_rightValue)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 526)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_strictInf:
      {
        var_result = GALGAS_bool (kIsStrictInf, var_leftValue.objectCompare (var_rightValue)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 527)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_infEqual:
      {
        var_result = GALGAS_bool (kIsInfOrEqual, var_leftValue.objectCompare (var_rightValue)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 528)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_strictSup:
      {
        var_result = GALGAS_bool (kIsStrictSup, var_leftValue.objectCompare (var_rightValue)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 529)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_supEqual:
      {
        var_result = GALGAS_bool (kIsSupOrEqual, var_leftValue.objectCompare (var_rightValue)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 530)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_andOp:
      {
        var_result = var_leftValue.operator_and (var_rightValue COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 531)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_booleanAnd:
      {
        GALGAS_bool test_12 = GALGAS_bool (kIsNotEqual, var_leftValue.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))) ;
        if (kBoolTrue == test_12.boolEnum ()) {
          test_12 = GALGAS_bool (kIsNotEqual, var_rightValue.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))) ;
        }
        var_result = test_12.reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 532)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_orOp:
      {
        var_result = var_leftValue.operator_or (var_rightValue COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 533)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_booleanOrOp:
      {
        GALGAS_bool test_13 = GALGAS_bool (kIsNotEqual, var_leftValue.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))) ;
        if (kBoolTrue != test_13.boolEnum ()) {
          test_13 = GALGAS_bool (kIsNotEqual, var_rightValue.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))) ;
        }
        var_result = test_13.reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 534)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_xorOp:
    case GALGAS_infixOperator::kEnum_booleanXorOp:
      {
        var_result = var_leftValue.operator_xor (var_rightValue COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 535)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_addOp:
      {
        var_result = var_leftValue.add_operation_no_ovf (var_rightValue) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_addOpNoOvf:
      {
        var_result = var_leftValue.add_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 537)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_subOp:
      {
        var_result = var_leftValue.substract_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 538)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_subOpNoOvf:
      {
        var_result = var_leftValue.substract_operation_no_ovf (var_rightValue) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_mulOp:
      {
        var_result = var_leftValue.multiply_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 540)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_mulOpNoOvf:
      {
        var_result = var_leftValue.multiply_operation_no_ovf (var_rightValue) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_divOp:
      {
        var_result = var_leftValue.divide_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 542)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_divOpNoOvf:
      {
        var_result = var_leftValue.divide_operation_no_ovf (var_rightValue) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_modOp:
      {
        var_result = var_leftValue.modulo_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 544)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_modOpNoOvf:
      {
        var_result = var_leftValue.modulo_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 545)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_leftShiftOp:
      {
        var_result = var_leftValue.left_shift_operation (var_rightValue.reader_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 546)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 546)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_rightShiftOp:
      {
        var_result = var_leftValue.right_shift_operation (var_rightValue.reader_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 547)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 547)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (var_result  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 549)) ;
  }else if (kBoolFalse == test_11) {
    {
    routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 552)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_operatorInfixExpressionIR::constructor_new (outArgument_outExpressionType, outArgument_outResult, var_leftResult, var_infixOperatorIR, var_rightResult, object->mAttribute_mOperatorLocation  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 554))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 554)) ;
  }
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
//                       Overriding category reader '@operatorInfixExpressionIR instructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_operatorInfixExpressionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_operatorInfixExpressionIR * object = (const cPtr_operatorInfixExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorInfixExpressionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_infixOperatorIR::kNotBuilt:
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixNoOvf:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixNoOvf * extractPtr_20941 = (const cEnumAssociatedValues_infixOperatorIR_infixNoOvf *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_infixOperator = extractPtr_20941->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 594)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 594)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 594)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)).add_operation (extractedValue_infixOperator, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)) ;
    }
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixOvf:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixOvf * extractPtr_21589 = (const cEnumAssociatedValues_infixOperatorIR_infixOvf *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_builtinFunction = extractPtr_21589->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_code = extractPtr_21589->mAssociatedValue1 ;
      GALGAS_string var_ovfVar = GALGAS_string ("ovf").add_operation (object->mAttribute_mOperatorLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 597)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 597)) ;
      result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 598)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 598)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 598)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 598)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const bool ").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 599)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 599)).add_operation (extractedValue_builtinFunction, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 599)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 599)).add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 599)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 600)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 600)).add_operation (GALGAS_string (", &"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 601)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 602)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 602))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 599)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)).add_operation (object->mAttribute_mOperatorLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 605)).reader_lastPathComponent (SOURCE_FILE ("expression-infix-operators.galgas", 605)).reader_utf_38_Representation (SOURCE_FILE ("expression-infix-operators.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 605)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 605)).add_operation (object->mAttribute_mOperatorLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 606)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 606)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 606))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 607)) ;
    }
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixUnsignedDivide:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixUnsignedDivide * extractPtr_22093 = (const cEnumAssociatedValues_infixOperatorIR_infixUnsignedDivide *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_uint extractedValue_code = extractPtr_22093->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("if (0 == ").add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 609)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 609)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 610)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 610)).add_operation (object->mAttribute_mOperatorLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611)).reader_lastPathComponent (SOURCE_FILE ("expression-infix-operators.galgas", 611)).reader_utf_38_Representation (SOURCE_FILE ("expression-infix-operators.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611)).add_operation (object->mAttribute_mOperatorLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 610)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 613)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615)) ;
    }
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixModulo:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixModulo * extractPtr_22588 = (const cEnumAssociatedValues_infixOperatorIR_infixModulo *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_uint extractedValue_code = extractPtr_22588->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("if (0 == ").add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 617)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 617)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 617)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 618)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 618)).add_operation (object->mAttribute_mOperatorLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619)).reader_lastPathComponent (SOURCE_FILE ("expression-infix-operators.galgas", 619)).reader_utf_38_Representation (SOURCE_FILE ("expression-infix-operators.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619)).add_operation (object->mAttribute_mOperatorLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 618)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 621)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 622)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 622)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 622))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 622)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 623)).add_operation (GALGAS_string (" % "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 623)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 623)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 623))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 623)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_operatorInfixExpressionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_operatorInfixExpressionIR.mSlotID,
                                       categoryReader_operatorInfixExpressionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_operatorInfixExpressionIR_instructionCode (defineCategoryReader_operatorInfixExpressionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@operatorInfixExpressionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorInfixExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorInfixExpressionIR * object = (const cPtr_operatorInfixExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorInfixExpressionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mLeftOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 630)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mRighOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 631)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorInfixExpressionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_operatorInfixExpressionIR.mSlotID,
                                               categoryMethod_operatorInfixExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorInfixExpressionIR_enterAccessibleEntities (defineCategoryMethod_operatorInfixExpressionIR_enterAccessibleEntities, NULL) ;

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
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)) ;
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
//                     Overriding category method '@prefixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                          const GALGAS_receiverType constinArgument_inReceiverType,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                          GALGAS_variableKindIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_result ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_result, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 129)) ;
  GALGAS_prefixOperatorMap var_operatorMap ;
  GALGAS_prefixOperatorIR var_prefixOperatorIR ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mUnsignedComplementOperatorMap ;
      var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefix (GALGAS_string ("~")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 149)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mNotOperatorMap ;
      var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefix (GALGAS_string ("!")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 152)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefix (GALGAS_string ("-")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 155)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)) COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159)) ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefix (GALGAS_string ("-")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
      }else if (kBoolFalse == test_1) {
        var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefixMinusOvf (GALGAS_uint ((uint32_t) 3U)  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 165)) ;
      }
    }
    break ;
  }
  categoryMethod_checkWith (var_operatorMap, var_expressionType, object->mAttribute_mOperatorLocation, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 168)) ;
  const enumGalgasBool test_2 = var_result.reader_isLiteralSignedInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 174)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_sint_36__34_ var_value ;
    var_result.method_literalSignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 175)) ;
    GALGAS_sint_36__34_ var_result ;
    switch (object->mAttribute_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result = var_value.operator_unary_minus_no_ovf () ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 179)) ;
        var_result.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result = var_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 180)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result = GALGAS_sint_36__34_ ((int64_t) 1LL).operator_xor (var_value COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 181)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_variableKindIR::constructor_literalSignedInteger (var_result  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 183)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = var_result.reader_isLiteralUnsignedInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 184)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_uint_36__34_ var_value ;
      var_result.method_literalUnsignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 185)) ;
      switch (object->mAttribute_mOp.enumValue ()) {
      case GALGAS_prefixOperator::kNotBuilt:
        break ;
      case GALGAS_prefixOperator::kEnum_minusNoOvf:
      case GALGAS_prefixOperator::kEnum_minus:
        {
          GALGAS_sint_36__34_ var_signedValue = var_value.reader_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 188)) ;
          outArgument_outResult = GALGAS_variableKindIR::constructor_literalSignedInteger (var_signedValue.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189)) ;
        }
        break ;
      case GALGAS_prefixOperator::kEnum_notOperator:
        {
          outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (GALGAS_uint_36__34_ ((uint64_t) 1ULL).operator_xor (var_value COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 191))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 191)) ;
        }
        break ;
      case GALGAS_prefixOperator::kEnum_unsignedComplement:
        {
          outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (var_value.operator_tilde (SOURCE_FILE ("expression-prefix-operators.galgas", 193))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 193)) ;
        }
        break ;
      }
    }else if (kBoolFalse == test_3) {
      {
      routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 197)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_prefixOperatorExpressionIR::constructor_new (outArgument_outExpressionType, outArgument_outResult, var_result, var_prefixOperatorIR, object->mAttribute_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 199))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 199)) ;
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
//                      Overriding category reader '@prefixOperatorExpressionIR instructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_prefixOperatorExpressionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_prefixOperatorExpressionIR * object = (const cPtr_prefixOperatorExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_prefixOperatorIR::kNotBuilt:
    break ;
  case GALGAS_prefixOperatorIR::kEnum_prefix:
    {
      const cEnumAssociatedValues_prefixOperatorIR_prefix * extractPtr_9197 = (const cEnumAssociatedValues_prefixOperatorIR_prefix *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_prefixOperator = extractPtr_9197->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 235)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 235)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (extractedValue_prefixOperator, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 236)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 236)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 236)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 236))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 236)) ;
    }
    break ;
  case GALGAS_prefixOperatorIR::kEnum_prefixMinusOvf:
    {
      const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf * extractPtr_10165 = (const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_uint extractedValue_code = extractPtr_10165->mAssociatedValue0 ;
      GALGAS_sint_36__34_ var_minValue ;
      switch (object->mAttribute_mTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 239)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolean:
      case GALGAS_typeKind::kEnum_boolset:
      case GALGAS_typeKind::kEnum_literalString:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 241)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 243)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 245)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_9617 = (const cEnumAssociatedValues_typeKind_integer *) (object->mAttribute_mTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 239)).unsafePointer ()) ;
          const GALGAS_sint_36__34_ extractedValue_min = extractPtr_9617->mAssociatedValue0 ;
          var_minValue = extractedValue_min ;
        }
        break ;
      }
      GALGAS_string var_ovfVar = GALGAS_string ("ovf").add_operation (object->mAttribute_mOperatorLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 249)).reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 249)) ;
      result_outCode = GALGAS_string ("const bool ").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)).add_operation (var_minValue.reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 251)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 251))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 251)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 252)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 252)).add_operation (object->mAttribute_mOperatorLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 253)).reader_lastPathComponent (SOURCE_FILE ("expression-prefix-operators.galgas", 253)).reader_utf_38_Representation (SOURCE_FILE ("expression-prefix-operators.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 253)).add_operation (object->mAttribute_mOperatorLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254)).reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 252)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 255)) ;
      result_outCode.dotAssign_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 256)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 256)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 256)).add_operation (GALGAS_string (" = - "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 256)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 257)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 257))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 256)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_prefixOperatorExpressionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_prefixOperatorExpressionIR.mSlotID,
                                       categoryReader_prefixOperatorExpressionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_prefixOperatorExpressionIR_instructionCode (defineCategoryReader_prefixOperatorExpressionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@prefixOperatorExpressionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                               GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionIR * object = (const cPtr_prefixOperatorExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 264)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_prefixOperatorExpressionIR.mSlotID,
                                               categoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionIR_enterAccessibleEntities (defineCategoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
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
//                    Overriding category method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                            const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                            const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                            GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                            GALGAS_variableKindIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-literal-integer.galgas", 50)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 51)) ;
    outArgument_outExpressionType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    switch (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 53)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_3150 = (const cEnumAssociatedValues_typeKind_integer *) (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 53)).unsafePointer ()) ;
        const GALGAS_uint_36__34_ extractedValue_max = extractPtr_3150->mAssociatedValue1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mLiteralInteger.mAttribute_uint_36__34_.objectCompare (extractedValue_max)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("literal integer is > ").add_operation (constinArgument_inOptionalTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)).add_operation (GALGAS_string (" max value ("), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)).add_operation (extractedValue_max.reader_string (SOURCE_FILE ("expression-literal-integer.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)) ;
          outArgument_outExpressionType.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_2) {
          outArgument_outExpressionType = constinArgument_inOptionalTargetType ;
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_4 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an enumeration cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        GALGAS_location location_5 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a structure cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 64)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_6 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a boolean cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 66)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_7 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a boolset cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 68)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_8 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("a literal string cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 70)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    }
  }
  outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (object->mAttribute_mLiteralInteger.mAttribute_uint_36__34_  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 74)) ;
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
                                                                                              const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                              GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
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
//                    Overriding category method '@literalStringInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                           const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                           const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                           GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                           GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_string var_literalStringName ;
  const enumGalgasBool test_0 = ioArgument_ioGlobalLiteralStringMap.reader_hasKey (object->mAttribute_mLiteralString.mAttribute_string COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGlobalLiteralStringMap.method_searchKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 52)) ;
  }else if (kBoolFalse == test_0) {
    var_literalStringName = function_literalStringPrefix (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 54)).add_operation (ioArgument_ioGlobalLiteralStringMap.reader_count (SOURCE_FILE ("expression-literal-string.galgas", 54)).reader_string (SOURCE_FILE ("expression-literal-string.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 54)) ;
    {
    ioArgument_ioGlobalLiteralStringMap.modifier_insertKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 55)) ;
    }
  }
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)).reader_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)) ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalString (object->mAttribute_mLiteralString.mAttribute_string, var_literalStringName  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59)) ;
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
                                                                                               const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
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
//                    Overriding category method '@literalBooleanInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBooleanInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                            const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                            const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                            GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  outArgument_outExpressionType = constinArgument_inContext.mAttribute_mBooleanType ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (object->mAttribute_mValue  COMMA_SOURCE_FILE ("expression-true-false.galgas", 58)) ;
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
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mSourceVarName COMMA_SOURCE_FILE ("expression-var.galgas", 38)) ;
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
//                         Overriding category method '@varInExpressionAST analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                 const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                 const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                 GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_variableType ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_varAccess ;
  GALGAS_variableKindIR var_resultingVariable ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  {
  GALGAS_bool joker_3070 ; // Joker input parameter
  GALGAS_bool joker_3129 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadAccess (object->mAttribute_mSourceVarName, var_variableType, var_accessIsAllowed, var_varAccess, var_resultingVariable, joker_3070, var_registerBitSliceMap, joker_3129, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 60)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("expression-var.galgas", 70)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSourceVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("expression-var.galgas", 71)) ;
  }
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_variableType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 74)) ;
  cEnumerator_lstringlist enumerator_3473 (object->mAttribute_mFieldNameList, kEnumeration_up) ;
  while (enumerator_3473.hasCurrentObject ()) {
    GALGAS_infixOperatorIR var_accessOperator ;
    GALGAS_variableKindIR var_accessRightOperand ;
    GALGAS_registerBitSliceAccessMap var_submap ;
    GALGAS_unifiedTypeMap_2D_proxy var_newResultType ;
    var_registerBitSliceMap.method_searchKey (enumerator_3473.current_mValue (HERE), var_accessOperator, var_accessRightOperand, var_submap, var_newResultType, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 81)) ;
    GALGAS_variableKindIR var_newResultingVariable ;
    {
    routine_getNewTempVariable (ioArgument_ioTemporaries, var_newResultingVariable, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 89)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_operatorInfixExpressionIR::constructor_new (var_newResultType, var_newResultingVariable, var_resultingVariable, var_accessOperator, var_accessRightOperand, object->mAttribute_mSourceVarName.mAttribute_location  COMMA_SOURCE_FILE ("expression-var.galgas", 90))  COMMA_SOURCE_FILE ("expression-var.galgas", 90)) ;
    var_resultingVariable = var_newResultingVariable ;
    var_registerBitSliceMap = var_submap ;
    outArgument_outExpressionType = var_newResultType ;
    enumerator_3473.gotoNextObject () ;
  }
  outArgument_outResultValueName = var_resultingVariable ;
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

static void categoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                             const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                             GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
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
//                     Overriding category method '@functionCallInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                          const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                          GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallInExpressionAST * object = (const cPtr_functionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallInExpressionAST) ;
  GALGAS_modeMap var_functionModeSet ;
  GALGAS_funcSignature var_formalParameterList ;
  constinArgument_inContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionVarName, var_functionModeSet, var_formalParameterList, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 67)) ;
  GALGAS_string var_mangledName = object->mAttribute_mFunctionVarName.mAttribute_string ;
  cEnumerator_functionCallEffectiveParameterList enumerator_3377 (object->mAttribute_mParameterList, kEnumeration_up) ;
  while (enumerator_3377.hasCurrentObject ()) {
    var_mangledName.dotAssign_operation (GALGAS_string ("\?").add_operation (enumerator_3377.current (HERE).mAttribute_mSelector.reader_string (SOURCE_FILE ("expression-func-call.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 76)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 76))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 76)) ;
    enumerator_3377.gotoNextObject () ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_functionModeSet.reader_keySet (SOURCE_FILE ("expression-func-call.galgas", 81)), object->mAttribute_mFunctionVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 79)) ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addEdge (constinArgument_inRoutineNameForInvocationGraph, GALGAS_lstring::constructor_new (GALGAS_string ("func ").add_operation (var_mangledName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 87)), object->mAttribute_mFunctionVarName.mAttribute_location  COMMA_SOURCE_FILE ("expression-func-call.galgas", 87)) COMMA_SOURCE_FILE ("expression-func-call.galgas", 85)) ;
  }
  GALGAS_variableListIR var_variableList = GALGAS_variableListIR::constructor_emptyList (SOURCE_FILE ("expression-func-call.galgas", 90)) ;
  GALGAS_string var_s = function_mangledNameForFunction (object->mAttribute_mFunctionVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 92)).objectCompare (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 92)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this function declares ").add_operation (var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 93)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 93)).add_operation (GALGAS_string (" formal parameters, the call names "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 93)).add_operation (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 94)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 94)).add_operation (GALGAS_string (" effective arguments"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 94))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 93)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_funcSignature enumerator_4174 (var_formalParameterList, kEnumeration_up) ;
    cEnumerator_functionCallEffectiveParameterList enumerator_4200 (object->mAttribute_mParameterList, kEnumeration_up) ;
    while (enumerator_4174.hasCurrentObject () && enumerator_4200.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_4200.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (enumerator_4174.current (HERE).mAttribute_mFormalSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s = GALGAS_string ("!") ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_4174.current (HERE).mAttribute_mFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_s.dotAssign_operation (enumerator_4174.current (HERE).mAttribute_mFormalSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 101))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 101)) ;
        }
        GALGAS_location location_4 (enumerator_4200.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("required selector: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 103))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 103)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_argumentExpressionType ;
      GALGAS_variableKindIR var_resultValueName ;
      callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_4200.current (HERE).mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("expression-func-call.galgas", 107)), enumerator_4174.current (HERE).mAttribute_mArgumentType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_argumentExpressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 105)) ;
      var_variableList.addAssign_operation (var_resultValueName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 119)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 120)).objectCompare (enumerator_4174.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 120)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (enumerator_4200.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("the actual parameter has the ").add_operation (var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 121)).add_operation (GALGAS_string (", but the formal argument has the "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 121)).add_operation (enumerator_4174.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 122)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 122))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 121)) ;
      }
      if (enumerator_4174.hasNextObject () && enumerator_4200.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 125)) ;
      }
      enumerator_4174.gotoNextObject () ;
      enumerator_4200.gotoNextObject () ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 128)) ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 130)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (outArgument_outExpressionType, object->mAttribute_mFunctionVarName.mAttribute_string, outArgument_outResultValueName, var_variableList  COMMA_SOURCE_FILE ("expression-func-call.galgas", 132))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 132)) ;
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
//                            Overriding category reader '@functionCallIR instructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_functionCallIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 152)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 152)) ;
  result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTempConstantTarget, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 153)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 153))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 153)) ;
  result_outCode.dotAssign_operation (function_mangledNameForFunction (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 154)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 154))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 154)) ;
  cEnumerator_variableListIR enumerator_6389 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_6389.hasCurrentObject ()) {
    result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_6389.current_mVar (HERE), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 156))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 156)) ;
    if (enumerator_6389.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 157)) ;
    }
    enumerator_6389.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 159)) ;
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
  ioArgument_ioAccessibleEntities.mAttribute_mFunctionSet.addAssign_operation (object->mAttribute_mFunctionName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 165)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTempConstantTarget, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 166)) ;
  cEnumerator_variableListIR enumerator_6866 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_6866.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_6866.current_mVar (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 168)) ;
    enumerator_6866.gotoNextObject () ;
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
//         Overriding category method '@registerConstantInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                 const GALGAS_lstring constinArgument_inConstantName,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantInExpressionAST * object = (const cPtr_registerConstantInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantInExpressionAST) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mRegisterName COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 53)) ;
  }
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

static void categoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                   const GALGAS_lstring constinArgument_inConstantName,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerExpInExpressionAST * object = (const cPtr_registerIntegerExpInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerExpInExpressionAST) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mRegisterName COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 62)) ;
  }
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
//                   Overriding category method '@registerConstantInExpressionAST analyzeExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerConstantInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                              const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                              const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                              const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                              GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                              GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                              GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantInExpressionAST * object = (const cPtr_registerConstantInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantInExpressionAST) ;
  GALGAS_bool var_readOnly ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_registerFieldMap var_registerFieldMap ;
  constinArgument_inContext.mAttribute_mRegisterMap.method_searchKey (object->mAttribute_mRegisterName, outArgument_outExpressionType, var_readOnly, var_registerBitSliceMap, var_registerFieldMap, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 84)) ;
  GALGAS_uint var_bitIndex ;
  GALGAS_uint var_bitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_bitIndex, var_bitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 92)) ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)).left_shift_operation (var_bitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)) ;
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
                                                                                const GALGAS_receiverType constinArgument_inReceiverType,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                                const GALGAS_stringset constinArgument_inModeSet,
                                                                                const GALGAS_bool constinArgument_inAllowExceptions,
                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                                GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerExpInExpressionAST * object = (const cPtr_registerIntegerExpInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerExpInExpressionAST) ;
  GALGAS_bool var_readOnly ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_registerFieldMap var_registerFieldMap ;
  constinArgument_inContext.mAttribute_mRegisterMap.method_searchKey (object->mAttribute_mRegisterName, outArgument_outExpressionType, var_readOnly, var_registerBitSliceMap, var_registerFieldMap, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 118)) ;
  GALGAS_uint var_fieldBitIndex ;
  GALGAS_uint var_fieldBitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_fieldBitIndex, var_fieldBitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 126)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_fieldBitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFieldName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this field is not an integer field")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 133)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 136)) ;
  switch (var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_boolean:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 157)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8338 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)).unsafePointer ()) ;
      const GALGAS_sint_36__34_ extractedValue_min = extractPtr_8338->mAssociatedValue0 ;
      const GALGAS_uint_36__34_ extractedValue_max = extractPtr_8338->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8338->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_expressionBitCount = extractPtr_8338->mAssociatedValue3 ;
      const enumGalgasBool test_2 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 161)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 162)) ;
        outArgument_outResultValueName.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = var_expressionResult.reader_isLiteralSignedInteger (SOURCE_FILE ("expression-cst-registre.galgas", 163)).boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164)) ;
          outArgument_outResultValueName.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = var_expressionResult.reader_isLiteralString (SOURCE_FILE ("expression-cst-registre.galgas", 165)).boolEnum () ;
          if (kBoolTrue == test_4) {
            inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)) ;
            outArgument_outResultValueName.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = var_expressionResult.reader_isLiteralUnsignedInteger (SOURCE_FILE ("expression-cst-registre.galgas", 167)).boolEnum () ;
            if (kBoolTrue == test_5) {
              GALGAS_uint_36__34_ var_value ;
              var_expressionResult.method_literalUnsignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 168)) ;
              const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (var_value.left_shift_operation (var_fieldBitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)) ;
              }else if (kBoolFalse == test_6) {
                inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("static unsigned integer expression overflow: maximum value is ").add_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)).reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 172)) ;
                outArgument_outResultValueName.drop () ; // Release error dropped variable
              }
            }else if (kBoolFalse == test_5) {
              GALGAS_bool var_assertGenerated = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount)) ;
              GALGAS_bool test_7 = var_assertGenerated ;
              if (kBoolTrue == test_7.boolEnum ()) {
                test_7 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) ;
              }
              const enumGalgasBool test_8 = test_7.boolEnum () ;
              if (kBoolTrue == test_8) {
                inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 179)) ;
              }
              {
              routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 182)) ;
              }
              ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_registerIntegerConstantInExpressionIR::constructor_new (object->mAttribute_mExpressionLocation, var_expressionResult, GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)), var_fieldBitIndex, outArgument_outResultValueName, outArgument_outExpressionType, var_assertGenerated.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 190))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)) ;
            }
          }
        }
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
//                 Overriding category reader '@registerIntegerConstantInExpressionIR instructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_registerIntegerConstantInExpressionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_registerIntegerConstantInExpressionIR * object = (const cPtr_registerIntegerConstantInExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerConstantInExpressionIR) ;
  const enumGalgasBool test_0 = object->mAttribute_mNoCheck.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)).add_operation (GALGAS_string (" = (("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)).add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (object->mAttribute_mMaxBound.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)) ;
    }else if (kBoolFalse == test_1) {
      result_outCode = GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).add_operation (object->mAttribute_mMaxBound.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (4, ").add_operation (object->mAttribute_mInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).reader_lastPathComponent (SOURCE_FILE ("expression-cst-registre.galgas", 223)).reader_utf_38_Representation (SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 222)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (object->mAttribute_mInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 222)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 225)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)) ;
    }
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_registerIntegerConstantInExpressionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                       categoryReader_registerIntegerConstantInExpressionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_registerIntegerConstantInExpressionIR_instructionCode (defineCategoryReader_registerIntegerConstantInExpressionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@registerIntegerConstantInExpressionIR enterAccessibleEntities'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerConstantInExpressionIR * object = (const cPtr_registerIntegerConstantInExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerConstantInExpressionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mExpressionValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)) ;
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
//                              Overriding category method '@checkInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_checkInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 48)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 52)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionType, var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 49)) ;
  const enumGalgasBool test_0 = var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 64)).reader_isBoolean (SOURCE_FILE ("directive-check.galgas", 64)).operator_not (SOURCE_FILE ("directive-check.galgas", 64)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("directive-check.galgas", 65)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 68)).operator_not (SOURCE_FILE ("directive-check.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction")  COMMA_SOURCE_FILE ("directive-check.galgas", 69)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_uint_36__34_ var_value ;
    var_expressionValueName.method_literalUnsignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 71)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_value.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("check expression value is false")  COMMA_SOURCE_FILE ("directive-check.galgas", 73)) ;
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
//                             Overriding category method '@incDecInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                         const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                         GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                         GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_variableCName ;
  GALGAS_variableKindIR var_variable ;
  {
  GALGAS_bool joker_3697_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3697_2 ; // Joker input parameter
  GALGAS_bool joker_3697_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mVarName, var_type, var_accessIsAllowed, var_variableCName, var_variable, joker_3697_3, joker_3697_2, joker_3697_1, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 89)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 97)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inContext.mAttribute_mTypeNameSetForIncDec.reader_hasKey (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102)).add_operation (GALGAS_string (" type does not handle incrementation/decrementation operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102)) ;
  }
  GALGAS_sint_36__34_ var_min ;
  GALGAS_uint_36__34_ var_max ;
  switch (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 106)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_4 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 108)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_5 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 110)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_6 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 112)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_4364 = (const cEnumAssociatedValues_typeKind_integer *) (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 106)).unsafePointer ()) ;
      const GALGAS_sint_36__34_ extractedValue_kMin = extractPtr_4364->mAssociatedValue0 ;
      const GALGAS_uint_36__34_ extractedValue_kMax = extractPtr_4364->mAssociatedValue1 ;
      var_min = extractedValue_kMin ;
      var_max = extractedValue_kMax ;
    }
    break ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
    }
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      const enumGalgasBool test_7 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 121)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 121)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)) ;
      }
    }
    break ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_incDecInstructionIR::constructor_new (var_min, var_max, object->mAttribute_mKind, var_variable, object->mAttribute_mVarName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                               categoryMethod_incDecInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_analyze (defineCategoryMethod_incDecInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@incDecInstructionIR instructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_incDecInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_incDecInstructionIR * object = (const cPtr_incDecInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionIR) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
    {
      result_outCode = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 153)).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)).add_operation (object->mAttribute_mMax.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (1, ").add_operation (object->mAttribute_mVariableLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 156)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 155)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 155)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 158)) ;
      }
      result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      result_outCode = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 163)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)).add_operation (object->mAttribute_mMin.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (2, ").add_operation (object->mAttribute_mVariableLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 166)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 166)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 166)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)) ;
      }
      result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_incDecInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_incDecInstructionIR.mSlotID,
                                       categoryReader_incDecInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_incDecInstructionIR_instructionCode (defineCategoryReader_incDecInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@incDecInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionIR * object = (const cPtr_incDecInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 181)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_incDecInstructionIR.mSlotID,
                                               categoryMethod_incDecInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionIR_enterAccessibleEntities (defineCategoryMethod_incDecInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModes,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 78)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionResultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModes, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 82)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 97)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType = var_expressionType ;
  }
  {
  routine_checkAssignmentCompatibility (var_expressionType, var_targetType, object->mAttribute_mVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 100)) ;
  }
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 106)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 111)), var_targetVar, var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 113)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 114)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 107)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varDeclarationInstructionWithSimpleAssignmentIR::constructor_new (var_targetType, var_targetVar, var_expressionResultValueName  COMMA_SOURCE_FILE ("instruction-var.galgas", 118))  COMMA_SOURCE_FILE ("instruction-var.galgas", 118)) ;
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
                                                      const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset /* constinArgument_inModes */,
                                                      const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                      GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 140)) ;
  {
  ioArgument_ioVariableMap.modifier_insertUndefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), var_targetVar, var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 147)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 148)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 141)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varDeclarationIR::constructor_new (var_targetType, var_targetVar  COMMA_SOURCE_FILE ("instruction-var.galgas", 152))  COMMA_SOURCE_FILE ("instruction-var.galgas", 152)) ;
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
//            Overriding category reader '@varDeclarationInstructionWithSimpleAssignmentIR instructionCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * object = (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionWithSimpleAssignmentIR) ;
  result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)) ;
  result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mSourceVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174))  COMMA_SOURCE_FILE ("instruction-var.galgas", 174)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR.mSlotID,
                                       categoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode (defineCategoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@varDeclarationInstructionWithSimpleAssignmentIR enterAccessibleEntities'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * object = (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionWithSimpleAssignmentIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 182)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR.mSlotID,
                                               categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category reader '@varDeclarationIR instructionCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_varDeclarationIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_varDeclarationIR * object = (const cPtr_varDeclarationIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationIR) ;
  result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 198)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 198)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 198)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 198)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_varDeclarationIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_varDeclarationIR.mSlotID,
                                       categoryReader_varDeclarationIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_varDeclarationIR_instructionCode (defineCategoryReader_varDeclarationIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@varDeclarationIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationIR * object = (const cPtr_varDeclarationIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 204)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_varDeclarationIR.mSlotID,
                                               categoryMethod_varDeclarationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationIR_enterAccessibleEntities (defineCategoryMethod_varDeclarationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@letInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModeSet,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 78)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_variableKindIR var_resultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_inferredType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 82)) ;
  GALGAS_variableKindIR var_targetConstant = GALGAS_variableKindIR::constructor_localConstant (object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-let.galgas", 97)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVarName, var_inferredType, GALGAS_bool (true), function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 102)), var_targetConstant, var_inferredType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-let.galgas", 105)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_letInstructionWithAssignmentIR::constructor_new (var_inferredType, var_targetConstant, var_resultValueName  COMMA_SOURCE_FILE ("instruction-let.galgas", 109))  COMMA_SOURCE_FILE ("instruction-let.galgas", 109)) ;
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
//                    Overriding category reader '@letInstructionWithAssignmentIR instructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_letInstructionWithAssignmentIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_letInstructionWithAssignmentIR * object = (const cPtr_letInstructionWithAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 129)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 129)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetConstantIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 129)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 130)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 131)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 132)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_letInstructionWithAssignmentIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_letInstructionWithAssignmentIR.mSlotID,
                                       categoryReader_letInstructionWithAssignmentIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_letInstructionWithAssignmentIR_instructionCode (defineCategoryReader_letInstructionWithAssignmentIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@letInstructionWithAssignmentIR enterAccessibleEntities'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentIR * object = (const cPtr_letInstructionWithAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetConstantIR, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 138)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceIR, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 139)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_letInstructionWithAssignmentIR.mSlotID,
                                               categoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentIR_enterAccessibleEntities (defineCategoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@assignmentInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                             const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                             const GALGAS_receiverType constinArgument_inReceiverType,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_stringset constinArgument_inModeSet,
                                                             const GALGAS_bool constinArgument_inAllowExceptions,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_bool joker_2383_6 ; // Joker input parameter
  GALGAS_string joker_2383_5 ; // Joker input parameter
  GALGAS_variableKindIR joker_2383_4 ; // Joker input parameter
  GALGAS_bool joker_2383_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2383_2 ; // Joker input parameter
  GALGAS_bool joker_2383_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2383_6, joker_2383_5, joker_2383_4, joker_2383_3, joker_2383_2, joker_2383_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 48)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 54)) ;
  {
  routine_checkAssignmentCompatibility (var_expressionType, var_targetType, object->mAttribute_mTargetVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 68)) ;
  }
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3162 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3268_2 ; // Joker input parameter
  GALGAS_bool joker_3268_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVarName, joker_3162, var_accessIsAllowed, var_targetVar, var_targetVariableKind, var_isCopiable, joker_3268_2, joker_3268_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 74)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 83)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 84)) ;
  }
  const enumGalgasBool test_2 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 86)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-assignment.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 87)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 87))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 87)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assignmentInstructionIR::constructor_new (var_targetVariableKind, var_targetType, var_sourceValueName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
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
//                        Overriding category reader '@assignmentInstructionIR instructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_assignmentInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_assignmentInstructionIR * object = (const cPtr_assignmentInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionIR) ;
  result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_assignmentInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_assignmentInstructionIR.mSlotID,
                                       categoryReader_assignmentInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_assignmentInstructionIR_instructionCode (defineCategoryReader_assignmentInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@assignmentInstructionIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionIR * object = (const cPtr_assignmentInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assignmentInstructionIR.mSlotID,
                                               categoryMethod_assignmentInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionIR_enterAccessibleEntities (defineCategoryMethod_assignmentInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@assertInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                         const GALGAS_receiverType constinArgument_inReceiverType,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool constinArgument_inAllowExceptions,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)) COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 51)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 55)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionType, var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 52)) ;
  const enumGalgasBool test_1 = var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 67)).reader_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 67)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 67)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 68)) ;
  }
  const enumGalgasBool test_2 = categoryReader_isStatic (var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 71)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 72)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mAttribute_mAssertInstructionLocation, var_instructionGenerationList, var_expressionValueName  COMMA_SOURCE_FILE ("instruction-assert.galgas", 76))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 76)) ;
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
//                          Overriding category reader '@assertInstructionIR instructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_assertInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  result_outCode = categoryReader_instructionListCode (object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 97)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("if (!").add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (20").add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).reader_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 100)).reader_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)).reader_string (SOURCE_FILE ("instruction-assert.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 102)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_assertInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                       categoryReader_assertInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_assertInstructionIR_instructionCode (defineCategoryReader_assertInstructionIR_instructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mExpressionValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
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
//                              Overriding category method '@throwInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionAST * object = (const cPtr_throwInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 45)) COMMA_SOURCE_FILE ("instruction-throw.galgas", 45)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-throw.galgas", 49)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_result ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inContext.mAttribute_mExceptionCodeType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_unusedInstructionListIR, var_expressionType, var_result, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 50)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 65)).objectCompare (constinArgument_inContext.mAttribute_mExceptionCodeType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 65)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression type is ").add_operation (var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)).add_operation (GALGAS_string (", required type is "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)).add_operation (constinArgument_inContext.mAttribute_mExceptionCodeType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 66)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR.reader_length (SOURCE_FILE ("instruction-throw.galgas", 70)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = categoryReader_isStatic (var_result, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 70)).operator_not (SOURCE_FILE ("instruction-throw.galgas", 70)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression cannot be statically computed")  COMMA_SOURCE_FILE ("instruction-throw.galgas", 71)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-throw.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_throwInstructionIR::constructor_new (object->mAttribute_mThrowLocation, var_result  COMMA_SOURCE_FILE ("instruction-throw.galgas", 75))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 75)) ;
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
//                          Overriding category reader '@throwInstructionIR instructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_throwInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_throwInstructionIR * object = (const cPtr_throwInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionIR) ;
  result_outCode = GALGAS_string ("raise_exception (").add_operation (categoryReader_mangledName (object->mAttribute_mCode, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).reader_lastPathComponent (SOURCE_FILE ("instruction-throw.galgas", 95)).reader_utf_38_Representation (SOURCE_FILE ("instruction-throw.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 96)).reader_string (SOURCE_FILE ("instruction-throw.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 96)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 96)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_throwInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                       categoryReader_throwInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_throwInstructionIR_instructionCode (defineCategoryReader_throwInstructionIR_instructionCode, NULL) ;

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
//                         Overriding category method '@operatorAssignInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                 const GALGAS_receiverType constinArgument_inReceiverType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_stringset constinArgument_inModeSet,
                                                                 const GALGAS_bool constinArgument_inAllowExceptions,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionAST * object = (const cPtr_operatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_bool joker_2891_6 ; // Joker input parameter
  GALGAS_string joker_2891_5 ; // Joker input parameter
  GALGAS_variableKindIR joker_2891_4 ; // Joker input parameter
  GALGAS_bool joker_2891_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2891_2 ; // Joker input parameter
  GALGAS_bool joker_2891_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2891_6, joker_2891_5, joker_2891_4, joker_2891_3, joker_2891_2, joker_2891_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 68)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightExpressionType ;
  GALGAS_variableKindIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_rightExpressionType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 74)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)).objectCompare (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("source expression type is '").add_operation (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)).add_operation (GALGAS_string ("', and is not compatible with target type '"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 91)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 91))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)) ;
  }
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3792 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3898_2 ; // Joker input parameter
  GALGAS_bool joker_3898_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVarName, joker_3792, var_accessIsAllowed, var_targetVar, var_targetVariableKind, var_isCopiable, joker_3898_2, joker_3898_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 94)) ;
  }
  const enumGalgasBool test_2 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 104)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap ;
  GALGAS_string var_generatedOperator ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
      var_generatedOperator = GALGAS_string ("&=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
      var_generatedOperator = GALGAS_string ("|=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
      var_generatedOperator = GALGAS_string ("^=") ;
    }
    break ;
  }
  GALGAS_unifiedTypeMap_2D_proxy joker_4588 ; // Joker input parameter
  categoryMethod_checkWith (var_operatorMap, var_targetType, var_rightExpressionType, object->mAttribute_mTargetVarName.mAttribute_location, joker_4588, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 120)) ;
  const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-operator-assign.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_operatorAssignInstructionIR::constructor_new (var_targetVariableKind, var_targetType, object->mAttribute_mOperator, var_sourceValueName  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130)) ;
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
//                      Overriding category reader '@operatorAssignInstructionIR instructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_operatorAssignInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_operatorAssignInstructionIR * object = (const cPtr_operatorAssignInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)).add_operation (GALGAS_string (" |= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (GALGAS_string (" &= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)).add_operation (GALGAS_string (" ^= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_operatorAssignInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_operatorAssignInstructionIR.mSlotID,
                                       categoryReader_operatorAssignInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_operatorAssignInstructionIR_instructionCode (defineCategoryReader_operatorAssignInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@operatorAssignInstructionIR enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionIR * object = (const cPtr_operatorAssignInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 165)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 166)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorAssignInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_operatorAssignInstructionIR.mSlotID,
                                               categoryMethod_operatorAssignInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorAssignInstructionIR_enterAccessibleEntities (defineCategoryMethod_operatorAssignInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@ifInstructionAST analyze'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                     const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                     const GALGAS_receiverType constinArgument_inReceiverType,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     const GALGAS_stringset constinArgument_inModeSet,
                                                     const GALGAS_bool constinArgument_inAllowExceptions,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_variableKindIR var_testResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 84)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_testExpressionType, var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 81)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 96)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 96)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 97)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 97))  COMMA_SOURCE_FILE ("instruction-if.galgas", 97)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-if.galgas", 100)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 102)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 104)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfThenInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_thenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 118)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfElseInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_elseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 119)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 131)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult, var_thenInstructionGenerationList, var_elseInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-if.galgas", 133))  COMMA_SOURCE_FILE ("instruction-if.galgas", 133)) ;
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
//                            Overriding category reader '@ifInstructionIR instructionCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ifInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  result_outCode = GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 153)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 153)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mThenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 154))  COMMA_SOURCE_FILE ("instruction-if.galgas", 154)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionGenerationList.reader_length (SOURCE_FILE ("instruction-if.galgas", 155)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 156)) ;
    result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mElseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 157))  COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
  }
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ifInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                       categoryReader_ifInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ifInstructionIR_instructionCode (defineCategoryReader_ifInstructionIR_instructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 165)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 167)) ;
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
//                            Overriding category method '@procCallInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                           const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                           const GALGAS_receiverType constinArgument_inReceiverType,
                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                           const GALGAS_stringset constinArgument_inModeSet,
                                                           const GALGAS_bool constinArgument_inAllowExceptions,
                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                           GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_string var_procMangledName = object->mAttribute_mProcRoutineName.mAttribute_string ;
  cEnumerator_procEffectiveParameterListAST enumerator_4012 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4012.hasCurrentObject ()) {
    switch (enumerator_4012.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 99)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 103)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_4012.current_mSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105)) ;
    enumerator_4012.gotoNextObject () ;
  }
  GALGAS_modeMap var_procedureModeMap ;
  GALGAS_procedureSignature var_procSignature ;
  GALGAS_bool joker_4405 ; // Joker input parameter
  GALGAS_bool joker_4481 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 109)), joker_4405, var_procedureModeMap, var_procSignature, joker_4481, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 108)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addEdge (constinArgument_inRoutineNameForInvocationGraph, GALGAS_lstring::constructor_new (GALGAS_string ("proc ").add_operation (var_procMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)), object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 116)) ;
  }
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 121)) ;
  GALGAS_procCallEffectiveParameterListIR var_procCallEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 122)) ;
  cEnumerator_procedureSignature enumerator_4857 (var_procSignature, kEnumeration_up) ;
  cEnumerator_procEffectiveParameterListAST enumerator_4888 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4857.hasCurrentObject () && enumerator_4888.hasCurrentObject ()) {
    switch (enumerator_4888.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_5707 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_4888.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5707->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_isCopiable ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_registerBitSliceAccessMap joker_5163 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_variableAccess, var_parameterAccess, var_isCopiable, joker_5163, var_canBeUsedAsInputParameter, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)) ;
        }
        const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 136)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 137)) ;
        }
        const enumGalgasBool test_2 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used as input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 140)) ;
        }
        const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 142)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (extractedValue_name.reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4888.current_mEffectiveParameterKind (HERE), enumerator_4888.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 146)), enumerator_4888.current_mSelector (HERE), var_type, var_parameterAccess  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 146)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_6652 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_4888.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_6652->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_6652->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
        GALGAS_variableKindIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, enumerator_4857.current_mType (HERE), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
        {
        routine_checkAssignmentCompatibility (var_expressionType, enumerator_4857.current_mType (HERE), extractedValue_endOfExp, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 162)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4888.current_mEffectiveParameterKind (HERE), enumerator_4888.current_mSelector (HERE), enumerator_4857.current_mType (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 168)), enumerator_4888.current_mSelector (HERE), enumerator_4857.current_mType (HERE), var_expressionResult  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_7326 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_4888.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7326->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_bool joker_6874_2 ; // Joker input parameter
        GALGAS_registerBitSliceAccessMap joker_6874_1 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_variableAccess, var_parameterAccess, joker_6874_2, joker_6874_1, var_canBeUsedAsInputParameter, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 170)) ;
        }
        const enumGalgasBool test_6 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 179)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("this variable cannot be used as output/input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 180)) ;
        }
        const enumGalgasBool test_8 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 182)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_location location_9 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 183)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4888.current_mEffectiveParameterKind (HERE), enumerator_4888.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 185)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 186)), enumerator_4888.current_mSelector (HERE), var_type, var_parameterAccess  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 186)) ;
      }
      break ;
    }
    enumerator_4857.gotoNextObject () ;
    enumerator_4888.gotoNextObject () ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_procedureModeMap.reader_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 192)), object->mAttribute_mProcRoutineName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 190)) ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 195)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 195)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mProcRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this proc requires ").add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 196)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 197)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 197))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)) ;
  }else if (kBoolFalse == test_10) {
    cEnumerator_procedureSignature enumerator_7745 (var_procSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_7774 (var_parameterList, kEnumeration_up) ;
    while (enumerator_7745.hasCurrentObject () && enumerator_7774.hasCurrentObject ()) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_7745.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)).objectCompare (enumerator_7774.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_7774.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_7774.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)).add_operation (enumerator_7745.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_7745.current_mFormalArgumentPassingMode (HERE), enumerator_7745.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 204)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_7774.current_mEffectiveParameterPassingMode (HERE), enumerator_7774.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 205)) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_location location_15 (enumerator_7774.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_15, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207)) ;
      }
      enumerator_7745.gotoNextObject () ;
      enumerator_7774.gotoNextObject () ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (object->mAttribute_mProcRoutineName.mAttribute_string, var_procCallEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 212))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 212)) ;
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
//                         Overriding category reader '@procCallInstructionIR instructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_procCallInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  result_outCode = function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_9918 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_9918.hasCurrentObject ()) {
    switch (enumerator_9918.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        result_outCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_9918.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_9918.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 253))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 253)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        result_outCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_9918.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 255)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 255))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 255)) ;
      }
      break ;
    }
    if (enumerator_9918.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 258)) ;
    }
    enumerator_9918.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 260)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_procCallInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                       categoryReader_procCallInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_procCallInstructionIR_instructionCode (defineCategoryReader_procCallInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@procCallInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mProcedureSet.addAssign_operation (object->mAttribute_mProcName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 266)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_10543 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_10543.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_10543.current_mParameter (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 268)) ;
    enumerator_10543.gotoNextObject () ;
  }
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
//                              Overriding category method '@whileInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 56)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_variableKindIR var_testValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 60)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_testInstructionGenerationList, var_testExpressionType, var_testValueName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 57)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 72)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 73)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 73))  COMMA_SOURCE_FILE ("instruction-while.galgas", 73)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_testValueName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-while.galgas", 76)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 79)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 80)) ;
  }
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 81)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 96)), var_testInstructionGenerationList, var_testValueName, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-while.galgas", 95))  COMMA_SOURCE_FILE ("instruction-while.galgas", 95)) ;
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
//                          Overriding category reader '@whileInstructionIR instructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_whileInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  result_outCode = GALGAS_string ("LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 117)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 117)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mTestInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 118))  COMMA_SOURCE_FILE ("instruction-while.galgas", 118)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 119)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 119))  COMMA_SOURCE_FILE ("instruction-while.galgas", 119)) ;
  {
  result_outCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 120)) ;
  }
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 121))  COMMA_SOURCE_FILE ("instruction-while.galgas", 121)) ;
  {
  result_outCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)) ;
  }
  result_outCode.dotAssign_operation (GALGAS_string ("    goto LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 123)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 123))  COMMA_SOURCE_FILE ("instruction-while.galgas", 123)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  }\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 124)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 125)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_whileInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                       categoryReader_whileInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_whileInstructionIR_instructionCode (defineCategoryReader_whileInstructionIR_instructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 131)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestExpression, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 132)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 133)) ;
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
//                             Overriding category method '@foreverInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreverInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                          const GALGAS_receiverType constinArgument_inReceiverType,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreverInstructionAST * object = (const cPtr_foreverInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionAST) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 49)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-forever.galgas", 50)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 51)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 63)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_foreverInstructionGeneration::constructor_new (var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-forever.galgas", 65))  COMMA_SOURCE_FILE ("instruction-forever.galgas", 65)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreverInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_foreverInstructionAST.mSlotID,
                               categoryMethod_foreverInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreverInstructionAST_analyze (defineCategoryMethod_foreverInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@foreverInstructionGeneration instructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_foreverInstructionGeneration_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_foreverInstructionGeneration * object = (const cPtr_foreverInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionGeneration) ;
  result_outCode = GALGAS_string ("while (1) {\n") ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 82))  COMMA_SOURCE_FILE ("instruction-forever.galgas", 82)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-forever.galgas", 83)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_foreverInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_foreverInstructionGeneration.mSlotID,
                                       categoryReader_foreverInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_foreverInstructionGeneration_instructionCode (defineCategoryReader_foreverInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@foreverInstructionGeneration enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreverInstructionGeneration_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreverInstructionGeneration * object = (const cPtr_foreverInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionGeneration) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 89)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreverInstructionGeneration_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_foreverInstructionGeneration.mSlotID,
                                               categoryMethod_foreverInstructionGeneration_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreverInstructionGeneration_enterAccessibleEntities (defineCategoryMethod_foreverInstructionGeneration_enterAccessibleEntities, NULL) ;

