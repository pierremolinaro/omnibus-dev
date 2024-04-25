#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single::GALGAS_controlRegisterGroupKindAST_2D_single (void) :
mProperty_registerGroupBaseAddress () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single::~ GALGAS_controlRegisterGroupKindAST_2D_single (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single GALGAS_controlRegisterGroupKindAST_2D_single::init_21_ (const GALGAS_lbigint & in_registerGroupBaseAddress,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST_2D_single result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_registerGroupBaseAddress = in_registerGroupBaseAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupKindAST_2D_single::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single::GALGAS_controlRegisterGroupKindAST_2D_single (const GALGAS_lbigint & inOperand0) :
mProperty_registerGroupBaseAddress (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single GALGAS_controlRegisterGroupKindAST_2D_single::class_func_new (const GALGAS_lbigint & in_registerGroupBaseAddress,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST_2D_single result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_registerGroupBaseAddress = in_registerGroupBaseAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupKindAST_2D_single::isValid (void) const {
  return mProperty_registerGroupBaseAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupKindAST_2D_single::drop (void) {
  mProperty_registerGroupBaseAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupKindAST_2D_single::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterGroupKindAST-single:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_registerGroupBaseAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupKindAST-single generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2D_single ("controlRegisterGroupKindAST-single",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupKindAST_2D_single::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2D_single ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupKindAST_2D_single::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupKindAST_2D_single (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single GALGAS_controlRegisterGroupKindAST_2D_single::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST_2D_single result ;
  const GALGAS_controlRegisterGroupKindAST_2D_single * p = (const GALGAS_controlRegisterGroupKindAST_2D_single *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupKindAST_2D_single *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST-single", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterGroupKindAST_2D_single_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single_3F_::GALGAS_controlRegisterGroupKindAST_2D_single_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single_3F_::GALGAS_controlRegisterGroupKindAST_2D_single_3F_ (const GALGAS_controlRegisterGroupKindAST_2D_single & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single_3F_ GALGAS_controlRegisterGroupKindAST_2D_single_3F_::init_nil (void) {
  GALGAS_controlRegisterGroupKindAST_2D_single_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupKindAST_2D_single_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupKindAST_2D_single_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupKindAST_2D_single_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_controlRegisterGroupKindAST_2D_single () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupKindAST_2D_single_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupKindAST-single? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2D_single_3F_ ("controlRegisterGroupKindAST-single?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupKindAST_2D_single_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2D_single_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupKindAST_2D_single_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupKindAST_2D_single_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST_2D_single_3F_ GALGAS_controlRegisterGroupKindAST_2D_single_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST_2D_single_3F_ result ;
  const GALGAS_controlRegisterGroupKindAST_2D_single_3F_ * p = (const GALGAS_controlRegisterGroupKindAST_2D_single_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupKindAST_2D_single_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST-single?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element::GALGAS_registerGroupListAST_2D_element (void) :
mProperty_mRegisterGroupName (),
mProperty_mControlRegisterGroupKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element::~ GALGAS_registerGroupListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                             const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mControlRegisterGroupKind = in_mControlRegisterGroupKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element::GALGAS_registerGroupListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_controlRegisterGroupKindAST & inOperand1) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mControlRegisterGroupKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::class_func_new (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                               const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mControlRegisterGroupKind = in_mControlRegisterGroupKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerGroupListAST_2D_element::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mControlRegisterGroupKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST_2D_element::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mControlRegisterGroupKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerGroupListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterGroupKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerGroupListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ("registerGroupListAST-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerGroupListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerGroupListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  const GALGAS_registerGroupListAST_2D_element * p = (const GALGAS_registerGroupListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerGroupListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element::GALGAS_controlRegisterUserAccesMapAST_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element::~ GALGAS_controlRegisterUserAccesMapAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element::GALGAS_controlRegisterUserAccesMapAST_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterUserAccesMapAST_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterUserAccesMapAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterUserAccesMapAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ("controlRegisterUserAccesMapAST-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterUserAccesMapAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterUserAccesMapAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterUserAccesMapAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  const GALGAS_controlRegisterUserAccesMapAST_2D_element * p = (const GALGAS_controlRegisterUserAccesMapAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterUserAccesMapAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterUserAccesMapAST_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ (const GALGAS_controlRegisterUserAccesMapAST_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::init_nil (void) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_controlRegisterUserAccesMapAST_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterUserAccesMapAST-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ ("controlRegisterUserAccesMapAST-element?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ result ;
  const GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ * p = (const GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (void) :
mProperty_lkey (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element::~ GALGAS_controlRegisterFieldMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_uint & in_mBitIndex,
                                                                                                       const GALGAS_uint & in_mBitCount,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_uint & in_mBitIndex,
                                                                                                     const GALGAS_uint & in_mBitCount,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterFieldMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterFieldMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterFieldMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ("controlRegisterFieldMap-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  const GALGAS_controlRegisterFieldMap_2D_element * p = (const GALGAS_controlRegisterFieldMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterFieldMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element_3F_::GALGAS_controlRegisterFieldMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element_3F_::GALGAS_controlRegisterFieldMap_2D_element_3F_ (const GALGAS_controlRegisterFieldMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element_3F_ GALGAS_controlRegisterFieldMap_2D_element_3F_::init_nil (void) {
  GALGAS_controlRegisterFieldMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterFieldMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterFieldMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_controlRegisterFieldMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterFieldMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element_3F_ ("controlRegisterFieldMap-element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterFieldMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element_3F_ GALGAS_controlRegisterFieldMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element_3F_ result ;
  const GALGAS_controlRegisterFieldMap_2D_element_3F_ * p = (const GALGAS_controlRegisterFieldMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterFieldMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAccessOperator (),
mProperty_mAccessRightOperand (),
mProperty_mResultType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element::~ GALGAS_sliceMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                             const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                                                             const GALGAS_bigint & in_mAccessRightOperand,
                                                                             const GALGAS_omnibusType & in_mResultType,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessOperator = in_mAccessOperator ;
  result.mProperty_mAccessRightOperand = in_mAccessRightOperand ;
  result.mProperty_mResultType = in_mResultType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                        const GALGAS_bigint & inOperand2,
                                                        const GALGAS_omnibusType & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mAccessOperator (inOperand1),
mProperty_mAccessRightOperand (inOperand2),
mProperty_mResultType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                       const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                                                       const GALGAS_bigint & in_mAccessRightOperand,
                                                                       const GALGAS_omnibusType & in_mResultType,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessOperator = in_mAccessOperator ;
  result.mProperty_mAccessRightOperand = in_mAccessRightOperand ;
  result.mProperty_mResultType = in_mResultType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mResultType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessOperator.drop () ;
  mProperty_mAccessRightOperand.drop () ;
  mProperty_mResultType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAccessOperator.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAccessRightOperand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceMap_2D_element ("sliceMap-element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  const GALGAS_sliceMap_2D_element * p = (const GALGAS_sliceMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @sliceMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element_3F_::GALGAS_sliceMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element_3F_::GALGAS_sliceMap_2D_element_3F_ (const GALGAS_sliceMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element_3F_ GALGAS_sliceMap_2D_element_3F_::init_nil (void) {
  GALGAS_sliceMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_sliceMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element_3F_::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceMap_2D_element_3F_ ("sliceMap-element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element_3F_ GALGAS_sliceMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element_3F_ result ;
  const GALGAS_sliceMap_2D_element_3F_ * p = (const GALGAS_sliceMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mIsReadOnly (),
mProperty_mUserAccess (),
mProperty_mRegisterFieldAccessMap (),
mProperty_mRegisterFieldMap (),
mProperty_mAddressOffset (),
mProperty_mControlRegisterFieldList (),
mProperty_mRegisterBitCount (),
mProperty_mArraySize (),
mProperty_mElementArraySize () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element::~ GALGAS_controlRegisterMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::init_21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                             const GALGAS_omnibusType & in_mType,
                                                                                                                             const GALGAS_bool & in_mIsReadOnly,
                                                                                                                             const GALGAS_bool & in_mUserAccess,
                                                                                                                             const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                                                                                             const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                                                                             const GALGAS_bigint & in_mAddressOffset,
                                                                                                                             const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                                                                             const GALGAS_uint & in_mRegisterBitCount,
                                                                                                                             const GALGAS_uint & in_mArraySize,
                                                                                                                             const GALGAS_uint & in_mElementArraySize,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mUserAccess = in_mUserAccess ;
  result.mProperty_mRegisterFieldAccessMap = in_mRegisterFieldAccessMap ;
  result.mProperty_mRegisterFieldMap = in_mRegisterFieldMap ;
  result.mProperty_mAddressOffset = in_mAddressOffset ;
  result.mProperty_mControlRegisterFieldList = in_mControlRegisterFieldList ;
  result.mProperty_mRegisterBitCount = in_mRegisterBitCount ;
  result.mProperty_mArraySize = in_mArraySize ;
  result.mProperty_mElementArraySize = in_mElementArraySize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_omnibusType & inOperand1,
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
mProperty_mUserAccess (inOperand3),
mProperty_mRegisterFieldAccessMap (inOperand4),
mProperty_mRegisterFieldMap (inOperand5),
mProperty_mAddressOffset (inOperand6),
mProperty_mControlRegisterFieldList (inOperand7),
mProperty_mRegisterBitCount (inOperand8),
mProperty_mArraySize (inOperand9),
mProperty_mElementArraySize (inOperand10) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_omnibusType & in_mType,
                                                                                           const GALGAS_bool & in_mIsReadOnly,
                                                                                           const GALGAS_bool & in_mUserAccess,
                                                                                           const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                                                           const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                                           const GALGAS_bigint & in_mAddressOffset,
                                                                                           const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                                           const GALGAS_uint & in_mRegisterBitCount,
                                                                                           const GALGAS_uint & in_mArraySize,
                                                                                           const GALGAS_uint & in_mElementArraySize,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mUserAccess = in_mUserAccess ;
  result.mProperty_mRegisterFieldAccessMap = in_mRegisterFieldAccessMap ;
  result.mProperty_mRegisterFieldMap = in_mRegisterFieldMap ;
  result.mProperty_mAddressOffset = in_mAddressOffset ;
  result.mProperty_mControlRegisterFieldList = in_mControlRegisterFieldList ;
  result.mProperty_mRegisterBitCount = in_mRegisterBitCount ;
  result.mProperty_mArraySize = in_mArraySize ;
  result.mProperty_mElementArraySize = in_mElementArraySize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mUserAccess.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddressOffset.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mUserAccess.drop () ;
  mProperty_mRegisterFieldAccessMap.drop () ;
  mProperty_mRegisterFieldMap.drop () ;
  mProperty_mAddressOffset.drop () ;
  mProperty_mControlRegisterFieldList.drop () ;
  mProperty_mRegisterBitCount.drop () ;
  mProperty_mArraySize.drop () ;
  mProperty_mElementArraySize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUserAccess.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterFieldMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAddressOffset.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterFieldList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterBitCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArraySize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mElementArraySize.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ("controlRegisterMap-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  const GALGAS_controlRegisterMap_2D_element * p = (const GALGAS_controlRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element_3F_::GALGAS_controlRegisterMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element_3F_::GALGAS_controlRegisterMap_2D_element_3F_ (const GALGAS_controlRegisterMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element_3F_ GALGAS_controlRegisterMap_2D_element_3F_::init_nil (void) {
  GALGAS_controlRegisterMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_controlRegisterMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterMap_2D_element_3F_ ("controlRegisterMap-element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element_3F_ GALGAS_controlRegisterMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element_3F_ result ;
  const GALGAS_controlRegisterMap_2D_element_3F_ * p = (const GALGAS_controlRegisterMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element::GALGAS_controlRegisterGroupMap_2D_element (void) :
mProperty_lkey (),
mProperty_mGroupKind (),
mProperty_mControlRegisterMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element::~ GALGAS_controlRegisterGroupMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_registerGroupKind & in_mGroupKind,
                                                                                                       const GALGAS_controlRegisterMap & in_mControlRegisterMap,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGroupKind = in_mGroupKind ;
  result.mProperty_mControlRegisterMap = in_mControlRegisterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element::GALGAS_controlRegisterGroupMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_registerGroupKind & inOperand1,
                                                                                      const GALGAS_controlRegisterMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mGroupKind (inOperand1),
mProperty_mControlRegisterMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_registerGroupKind & in_mGroupKind,
                                                                                                     const GALGAS_controlRegisterMap & in_mControlRegisterMap,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGroupKind = in_mGroupKind ;
  result.mProperty_mControlRegisterMap = in_mControlRegisterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGroupKind.isValid () && mProperty_mControlRegisterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGroupKind.drop () ;
  mProperty_mControlRegisterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterGroupMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ("controlRegisterGroupMap-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  const GALGAS_controlRegisterGroupMap_2D_element * p = (const GALGAS_controlRegisterGroupMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterGroupMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element_3F_::GALGAS_controlRegisterGroupMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element_3F_::GALGAS_controlRegisterGroupMap_2D_element_3F_ (const GALGAS_controlRegisterGroupMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element_3F_ GALGAS_controlRegisterGroupMap_2D_element_3F_::init_nil (void) {
  GALGAS_controlRegisterGroupMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_controlRegisterGroupMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element_3F_ ("controlRegisterGroupMap-element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element_3F_ GALGAS_controlRegisterGroupMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element_3F_ result ;
  const GALGAS_controlRegisterGroupMap_2D_element_3F_ * p = (const GALGAS_controlRegisterGroupMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element::GALGAS_globalSyncInstanceMap_2D_element (void) :
mProperty_lkey (),
mProperty_type (),
mProperty_initialValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element::~ GALGAS_globalSyncInstanceMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element GALGAS_globalSyncInstanceMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_omnibusType & in_type,
                                                                                                   const GALGAS_objectIR & in_initialValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_type = in_type ;
  result.mProperty_initialValue = in_initialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element::GALGAS_globalSyncInstanceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_omnibusType & inOperand1,
                                                                                  const GALGAS_objectIR & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_type (inOperand1),
mProperty_initialValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element GALGAS_globalSyncInstanceMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_omnibusType & in_type,
                                                                                                 const GALGAS_objectIR & in_initialValue,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_type = in_type ;
  result.mProperty_initialValue = in_initialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_initialValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_type.drop () ;
  mProperty_initialValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalSyncInstanceMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_initialValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalSyncInstanceMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element ("globalSyncInstanceMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element GALGAS_globalSyncInstanceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap_2D_element result ;
  const GALGAS_globalSyncInstanceMap_2D_element * p = (const GALGAS_globalSyncInstanceMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalSyncInstanceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @globalSyncInstanceMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element_3F_::GALGAS_globalSyncInstanceMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element_3F_::GALGAS_globalSyncInstanceMap_2D_element_3F_ (const GALGAS_globalSyncInstanceMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element_3F_ GALGAS_globalSyncInstanceMap_2D_element_3F_::init_nil (void) {
  GALGAS_globalSyncInstanceMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_globalSyncInstanceMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalSyncInstanceMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element_3F_ ("globalSyncInstanceMap-element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element_3F_ GALGAS_globalSyncInstanceMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap_2D_element_3F_ result ;
  const GALGAS_globalSyncInstanceMap_2D_element_3F_ * p = (const GALGAS_globalSyncInstanceMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalSyncInstanceMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @globalSyncInstanceMapIR_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element_3F_::GALGAS_globalSyncInstanceMapIR_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element_3F_::GALGAS_globalSyncInstanceMapIR_2D_element_3F_ (const GALGAS_globalSyncInstanceMapIR_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element_3F_ GALGAS_globalSyncInstanceMapIR_2D_element_3F_::init_nil (void) {
  GALGAS_globalSyncInstanceMapIR_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMapIR_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMapIR_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_globalSyncInstanceMapIR_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR_2D_element_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalSyncInstanceMapIR-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element_3F_ ("globalSyncInstanceMapIR-element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMapIR_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMapIR_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMapIR_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element_3F_ GALGAS_globalSyncInstanceMapIR_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR_2D_element_3F_ result ;
  const GALGAS_globalSyncInstanceMapIR_2D_element_3F_ * p = (const GALGAS_globalSyncInstanceMapIR_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalSyncInstanceMapIR_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element::GALGAS_driverDeclarationListAST_2D_element (void) :
mProperty_mDriver () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element::~ GALGAS_driverDeclarationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element GALGAS_driverDeclarationListAST_2D_element::init_21_ (const GALGAS_driverDeclarationAST & in_mDriver,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriver = in_mDriver ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element::GALGAS_driverDeclarationListAST_2D_element (const GALGAS_driverDeclarationAST & inOperand0) :
mProperty_mDriver (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element GALGAS_driverDeclarationListAST_2D_element::class_func_new (const GALGAS_driverDeclarationAST & in_mDriver,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriver = in_mDriver ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mDriver.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST_2D_element::drop (void) {
  mProperty_mDriver.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverDeclarationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDriver.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverDeclarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2D_element ("driverDeclarationListAST-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element GALGAS_driverDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST_2D_element result ;
  const GALGAS_driverDeclarationListAST_2D_element * p = (const GALGAS_driverDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element::GALGAS_driverInstanciationArgumentListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element::~ GALGAS_driverInstanciationArgumentListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element GALGAS_driverInstanciationArgumentListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mSelector,
                                                                                                                         const GALGAS_expressionAST & in_mExpression,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element::GALGAS_driverInstanciationArgumentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element GALGAS_driverInstanciationArgumentListAST_2D_element::class_func_new (const GALGAS_lstring & in_mSelector,
                                                                                                                           const GALGAS_expressionAST & in_mExpression,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST_2D_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverInstanciationArgumentListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationArgumentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2D_element ("driverInstanciationArgumentListAST-element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element GALGAS_driverInstanciationArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST_2D_element result ;
  const GALGAS_driverInstanciationArgumentListAST_2D_element * p = (const GALGAS_driverInstanciationArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element::GALGAS_driverInstanciationListAST_2D_element (void) :
mProperty_mDriverName (),
mProperty_mDriverInstanciationArgumentList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element::~ GALGAS_driverInstanciationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element GALGAS_driverInstanciationListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mDriverName,
                                                                                                         const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverInstanciationArgumentList = in_mDriverInstanciationArgumentList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element::GALGAS_driverInstanciationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_driverInstanciationArgumentListAST & inOperand1) :
mProperty_mDriverName (inOperand0),
mProperty_mDriverInstanciationArgumentList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element GALGAS_driverInstanciationListAST_2D_element::class_func_new (const GALGAS_lstring & in_mDriverName,
                                                                                                           const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverInstanciationArgumentList = in_mDriverInstanciationArgumentList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationListAST_2D_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverInstanciationArgumentList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST_2D_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mDriverInstanciationArgumentList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverInstanciationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverInstanciationArgumentList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2D_element ("driverInstanciationListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element GALGAS_driverInstanciationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST_2D_element result ;
  const GALGAS_driverInstanciationListAST_2D_element * p = (const GALGAS_driverInstanciationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element::GALGAS_driverInstanciationArgumentMap_2D_element (void) :
mProperty_lkey (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element::~ GALGAS_driverInstanciationArgumentMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element GALGAS_driverInstanciationArgumentMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                 const GALGAS_expressionAST & in_mExpression,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element::GALGAS_driverInstanciationArgumentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_expressionAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element GALGAS_driverInstanciationArgumentMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   const GALGAS_expressionAST & in_mExpression,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverInstanciationArgumentMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationArgumentMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2D_element ("driverInstanciationArgumentMap-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element GALGAS_driverInstanciationArgumentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap_2D_element result ;
  const GALGAS_driverInstanciationArgumentMap_2D_element * p = (const GALGAS_driverInstanciationArgumentMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationArgumentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @driverInstanciationArgumentMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element_3F_::GALGAS_driverInstanciationArgumentMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element_3F_::GALGAS_driverInstanciationArgumentMap_2D_element_3F_ (const GALGAS_driverInstanciationArgumentMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element_3F_ GALGAS_driverInstanciationArgumentMap_2D_element_3F_::init_nil (void) {
  GALGAS_driverInstanciationArgumentMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_driverInstanciationArgumentMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationArgumentMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2D_element_3F_ ("driverInstanciationArgumentMap-element?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element_3F_ GALGAS_driverInstanciationArgumentMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap_2D_element_3F_ result ;
  const GALGAS_driverInstanciationArgumentMap_2D_element_3F_ * p = (const GALGAS_driverInstanciationArgumentMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationArgumentMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element::GALGAS_instanciedDriverMap_2D_element (void) :
mProperty_lkey (),
mProperty_mDriverInstanciationArgumentMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element::~ GALGAS_instanciedDriverMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element GALGAS_instanciedDriverMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDriverInstanciationArgumentMap = in_mDriverInstanciationArgumentMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element::GALGAS_instanciedDriverMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_driverInstanciationArgumentMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDriverInstanciationArgumentMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element GALGAS_instanciedDriverMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDriverInstanciationArgumentMap = in_mDriverInstanciationArgumentMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_instanciedDriverMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDriverInstanciationArgumentMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDriverInstanciationArgumentMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @instanciedDriverMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverInstanciationArgumentMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instanciedDriverMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element ("instanciedDriverMap-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instanciedDriverMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instanciedDriverMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedDriverMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element GALGAS_instanciedDriverMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap_2D_element result ;
  const GALGAS_instanciedDriverMap_2D_element * p = (const GALGAS_instanciedDriverMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instanciedDriverMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @instanciedDriverMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element_3F_::GALGAS_instanciedDriverMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element_3F_::GALGAS_instanciedDriverMap_2D_element_3F_ (const GALGAS_instanciedDriverMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element_3F_ GALGAS_instanciedDriverMap_2D_element_3F_::init_nil (void) {
  GALGAS_instanciedDriverMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_instanciedDriverMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_instanciedDriverMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_instanciedDriverMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element_3F_::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instanciedDriverMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element_3F_ ("instanciedDriverMap-element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instanciedDriverMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instanciedDriverMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedDriverMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element_3F_ GALGAS_instanciedDriverMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap_2D_element_3F_ result ;
  const GALGAS_instanciedDriverMap_2D_element_3F_ * p = (const GALGAS_instanciedDriverMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instanciedDriverMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType::GALGAS_staticListPropertyTypeAST_2D_valueType (void) :
mProperty_type () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType::~ GALGAS_staticListPropertyTypeAST_2D_valueType (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType GALGAS_staticListPropertyTypeAST_2D_valueType::init_21_ (const GALGAS_lstring & in_type,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST_2D_valueType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_valueType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType::GALGAS_staticListPropertyTypeAST_2D_valueType (const GALGAS_lstring & inOperand0) :
mProperty_type (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType GALGAS_staticListPropertyTypeAST_2D_valueType::class_func_new (const GALGAS_lstring & in_type,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST_2D_valueType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyTypeAST_2D_valueType::isValid (void) const {
  return mProperty_type.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_valueType::drop (void) {
  mProperty_type.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_valueType::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListPropertyTypeAST-valueType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListPropertyTypeAST-valueType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2D_valueType ("staticListPropertyTypeAST-valueType",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyTypeAST_2D_valueType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2D_valueType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyTypeAST_2D_valueType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyTypeAST_2D_valueType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType GALGAS_staticListPropertyTypeAST_2D_valueType::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST_2D_valueType result ;
  const GALGAS_staticListPropertyTypeAST_2D_valueType * p = (const GALGAS_staticListPropertyTypeAST_2D_valueType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListPropertyTypeAST_2D_valueType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST-valueType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @staticListPropertyTypeAST_2D_valueType_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ (const GALGAS_staticListPropertyTypeAST_2D_valueType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::init_nil (void) {
  GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_staticListPropertyTypeAST_2D_valueType () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListPropertyTypeAST-valueType? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ ("staticListPropertyTypeAST-valueType?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ GALGAS_staticListPropertyTypeAST_2D_valueType_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ result ;
  const GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ * p = (const GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListPropertyTypeAST_2D_valueType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST-valueType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function::GALGAS_staticListPropertyTypeAST_2D_function (void) :
mProperty_mode (),
mProperty_formalArgs (),
mProperty_returnType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function::~ GALGAS_staticListPropertyTypeAST_2D_function (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function GALGAS_staticListPropertyTypeAST_2D_function::init_21__21__21_ (const GALGAS_mode & in_mode,
                                                                                                             const GALGAS_routineFormalArgumentListAST & in_formalArgs,
                                                                                                             const GALGAS_lstring & in_returnType,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST_2D_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_formalArgs = in_formalArgs ;
  result.mProperty_returnType = in_returnType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_function::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function::GALGAS_staticListPropertyTypeAST_2D_function (const GALGAS_mode & inOperand0,
                                                                                            const GALGAS_routineFormalArgumentListAST & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2) :
mProperty_mode (inOperand0),
mProperty_formalArgs (inOperand1),
mProperty_returnType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function GALGAS_staticListPropertyTypeAST_2D_function::class_func_new (const GALGAS_mode & in_mode,
                                                                                                           const GALGAS_routineFormalArgumentListAST & in_formalArgs,
                                                                                                           const GALGAS_lstring & in_returnType,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST_2D_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_formalArgs = in_formalArgs ;
  result.mProperty_returnType = in_returnType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyTypeAST_2D_function::isValid (void) const {
  return mProperty_mode.isValid () && mProperty_formalArgs.isValid () && mProperty_returnType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_function::drop (void) {
  mProperty_mode.drop () ;
  mProperty_formalArgs.drop () ;
  mProperty_returnType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_function::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListPropertyTypeAST-function:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_formalArgs.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_returnType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListPropertyTypeAST-function generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2D_function ("staticListPropertyTypeAST-function",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyTypeAST_2D_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2D_function ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyTypeAST_2D_function::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyTypeAST_2D_function (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function GALGAS_staticListPropertyTypeAST_2D_function::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST_2D_function result ;
  const GALGAS_staticListPropertyTypeAST_2D_function * p = (const GALGAS_staticListPropertyTypeAST_2D_function *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListPropertyTypeAST_2D_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST-function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @staticListPropertyTypeAST_2D_function_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function_3F_::GALGAS_staticListPropertyTypeAST_2D_function_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function_3F_::GALGAS_staticListPropertyTypeAST_2D_function_3F_ (const GALGAS_staticListPropertyTypeAST_2D_function & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function_3F_ GALGAS_staticListPropertyTypeAST_2D_function_3F_::init_nil (void) {
  GALGAS_staticListPropertyTypeAST_2D_function_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyTypeAST_2D_function_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyTypeAST_2D_function_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_function_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_staticListPropertyTypeAST_2D_function () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST_2D_function_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListPropertyTypeAST-function? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2D_function_3F_ ("staticListPropertyTypeAST-function?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyTypeAST_2D_function_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2D_function_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyTypeAST_2D_function_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyTypeAST_2D_function_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST_2D_function_3F_ GALGAS_staticListPropertyTypeAST_2D_function_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST_2D_function_3F_ result ;
  const GALGAS_staticListPropertyTypeAST_2D_function_3F_ * p = (const GALGAS_staticListPropertyTypeAST_2D_function_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListPropertyTypeAST_2D_function_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST-function?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element::GALGAS_staticListPropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element::~ GALGAS_staticListPropertyListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element GALGAS_staticListPropertyListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mPropertyName,
                                                                                                       const GALGAS_staticListPropertyTypeAST & in_mPropertyType,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element::GALGAS_staticListPropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_staticListPropertyTypeAST & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element GALGAS_staticListPropertyListAST_2D_element::class_func_new (const GALGAS_lstring & in_mPropertyName,
                                                                                                         const GALGAS_staticListPropertyTypeAST & in_mPropertyType,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListPropertyListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListPropertyListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyListAST_2D_element ("staticListPropertyListAST-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element GALGAS_staticListPropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST_2D_element result ;
  const GALGAS_staticListPropertyListAST_2D_element * p = (const GALGAS_staticListPropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListPropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function::GALGAS_extendStaticListExpressionAST_2D_function (void) :
mProperty_functionName (),
mProperty_formalArgs () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function::~ GALGAS_extendStaticListExpressionAST_2D_function (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function GALGAS_extendStaticListExpressionAST_2D_function::init_21__21_ (const GALGAS_lstring & in_functionName,
                                                                                                                 const GALGAS_routineFormalArgumentListAST & in_formalArgs,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST_2D_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_functionName = in_functionName ;
  result.mProperty_formalArgs = in_formalArgs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST_2D_function::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function::GALGAS_extendStaticListExpressionAST_2D_function (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_routineFormalArgumentListAST & inOperand1) :
mProperty_functionName (inOperand0),
mProperty_formalArgs (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function GALGAS_extendStaticListExpressionAST_2D_function::class_func_new (const GALGAS_lstring & in_functionName,
                                                                                                                   const GALGAS_routineFormalArgumentListAST & in_formalArgs,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST_2D_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_functionName = in_functionName ;
  result.mProperty_formalArgs = in_formalArgs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extendStaticListExpressionAST_2D_function::isValid (void) const {
  return mProperty_functionName.isValid () && mProperty_formalArgs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST_2D_function::drop (void) {
  mProperty_functionName.drop () ;
  mProperty_formalArgs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST_2D_function::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extendStaticListExpressionAST-function:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_functionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_formalArgs.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendStaticListExpressionAST-function generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2D_function ("extendStaticListExpressionAST-function",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendStaticListExpressionAST_2D_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2D_function ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendStaticListExpressionAST_2D_function::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListExpressionAST_2D_function (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function GALGAS_extendStaticListExpressionAST_2D_function::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST_2D_function result ;
  const GALGAS_extendStaticListExpressionAST_2D_function * p = (const GALGAS_extendStaticListExpressionAST_2D_function *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendStaticListExpressionAST_2D_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST-function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @extendStaticListExpressionAST_2D_function_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function_3F_::GALGAS_extendStaticListExpressionAST_2D_function_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function_3F_::GALGAS_extendStaticListExpressionAST_2D_function_3F_ (const GALGAS_extendStaticListExpressionAST_2D_function & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function_3F_ GALGAS_extendStaticListExpressionAST_2D_function_3F_::init_nil (void) {
  GALGAS_extendStaticListExpressionAST_2D_function_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extendStaticListExpressionAST_2D_function_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extendStaticListExpressionAST_2D_function_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST_2D_function_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_extendStaticListExpressionAST_2D_function () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST_2D_function_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendStaticListExpressionAST-function? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2D_function_3F_ ("extendStaticListExpressionAST-function?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendStaticListExpressionAST_2D_function_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2D_function_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendStaticListExpressionAST_2D_function_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListExpressionAST_2D_function_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST_2D_function_3F_ GALGAS_extendStaticListExpressionAST_2D_function_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST_2D_function_3F_ result ;
  const GALGAS_extendStaticListExpressionAST_2D_function_3F_ * p = (const GALGAS_extendStaticListExpressionAST_2D_function_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendStaticListExpressionAST_2D_function_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST-function?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (void) :
mProperty_lkey (),
mProperty_mStaticListPropertyList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element::~ GALGAS_staticlistMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                               const GALGAS_propertyList & in_mStaticListPropertyList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mStaticListPropertyList = in_mStaticListPropertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_propertyList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mStaticListPropertyList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                 const GALGAS_propertyList & in_mStaticListPropertyList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mStaticListPropertyList = in_mStaticListPropertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticlistMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStaticListPropertyList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mStaticListPropertyList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticlistMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticListPropertyList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticlistMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap_2D_element ("staticlistMap-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticlistMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticlistMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element result ;
  const GALGAS_staticlistMap_2D_element * p = (const GALGAS_staticlistMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticlistMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @staticlistMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element_3F_::GALGAS_staticlistMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element_3F_::GALGAS_staticlistMap_2D_element_3F_ (const GALGAS_staticlistMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element_3F_ GALGAS_staticlistMap_2D_element_3F_::init_nil (void) {
  GALGAS_staticlistMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticlistMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticlistMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_staticlistMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap_2D_element_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticlistMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap_2D_element_3F_ ("staticlistMap-element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticlistMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticlistMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element_3F_ GALGAS_staticlistMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element_3F_ result ;
  const GALGAS_staticlistMap_2D_element_3F_ * p = (const GALGAS_staticlistMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticlistMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element::GALGAS_staticListInitializationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInitializationList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element::~ GALGAS_staticListInitializationMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element GALGAS_staticListInitializationMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                           const GALGAS_stringlist & in_mInitializationList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitializationList = in_mInitializationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element::GALGAS_staticListInitializationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_stringlist & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitializationList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element GALGAS_staticListInitializationMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                             const GALGAS_stringlist & in_mInitializationList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitializationList = in_mInitializationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInitializationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitializationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitializationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListInitializationMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitializationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListInitializationMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element ("staticListInitializationMap-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInitializationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInitializationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInitializationMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element GALGAS_staticListInitializationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap_2D_element result ;
  const GALGAS_staticListInitializationMap_2D_element * p = (const GALGAS_staticListInitializationMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListInitializationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @staticListInitializationMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element_3F_::GALGAS_staticListInitializationMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element_3F_::GALGAS_staticListInitializationMap_2D_element_3F_ (const GALGAS_staticListInitializationMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element_3F_ GALGAS_staticListInitializationMap_2D_element_3F_::init_nil (void) {
  GALGAS_staticListInitializationMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInitializationMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInitializationMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_staticListInitializationMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap_2D_element_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListInitializationMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element_3F_ ("staticListInitializationMap-element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInitializationMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInitializationMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInitializationMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element_3F_ GALGAS_staticListInitializationMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap_2D_element_3F_ result ;
  const GALGAS_staticListInitializationMap_2D_element_3F_ * p = (const GALGAS_staticListInitializationMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListInitializationMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element::GALGAS_staticListInvokedFunctionSetMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInvokedFunctionSet () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element::~ GALGAS_staticListInvokedFunctionSetMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element GALGAS_staticListInvokedFunctionSetMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                   const GALGAS_stringset & in_mInvokedFunctionSet,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element::GALGAS_staticListInvokedFunctionSetMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_stringset & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInvokedFunctionSet (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element GALGAS_staticListInvokedFunctionSetMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                     const GALGAS_stringset & in_mInvokedFunctionSet,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInvokedFunctionSetMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInvokedFunctionSet.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInvokedFunctionSet.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap_2D_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListInvokedFunctionSetMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListInvokedFunctionSetMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element ("staticListInvokedFunctionSetMap-element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInvokedFunctionSetMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInvokedFunctionSetMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInvokedFunctionSetMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element GALGAS_staticListInvokedFunctionSetMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap_2D_element result ;
  const GALGAS_staticListInvokedFunctionSetMap_2D_element * p = (const GALGAS_staticListInvokedFunctionSetMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListInvokedFunctionSetMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @staticListInvokedFunctionSetMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ (const GALGAS_staticListInvokedFunctionSetMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::init_nil (void) {
  GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_staticListInvokedFunctionSetMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListInvokedFunctionSetMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ ("staticListInvokedFunctionSetMap-element?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ result ;
  const GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ * p = (const GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListInvokedFunctionSetMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element::GALGAS_taskListAST_2D_element (void) :
mProperty_mTaskName (),
mProperty_mLowerPriorityTaskList (),
mProperty_mStackSize (),
mProperty_mTaskSetupListAST (),
mProperty_mTaskActivateListAST (),
mProperty_mTaskDeactivateListAST (),
mProperty_mGuardedCommandList (),
mProperty_mEndOfTaskDeclaration (),
mProperty_mAutoStart () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element::~ GALGAS_taskListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_taskListAST_2D_element GALGAS_taskListAST_2D_element::init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mTaskName,
                                                                                                       const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                                                                                       const GALGAS_lbigint & in_mStackSize,
                                                                                                       const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                                       const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                                       const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                                       const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                                                       const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                                                       const GALGAS_bool & in_mAutoStart,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mLowerPriorityTaskList = in_mLowerPriorityTaskList ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mTaskSetupListAST = in_mTaskSetupListAST ;
  result.mProperty_mTaskActivateListAST = in_mTaskActivateListAST ;
  result.mProperty_mTaskDeactivateListAST = in_mTaskDeactivateListAST ;
  result.mProperty_mGuardedCommandList = in_mGuardedCommandList ;
  result.mProperty_mEndOfTaskDeclaration = in_mEndOfTaskDeclaration ;
  result.mProperty_mAutoStart = in_mAutoStart ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element::GALGAS_taskListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstringlist & inOperand1,
                                                              const GALGAS_lbigint & inOperand2,
                                                              const GALGAS_taskSetupListAST & inOperand3,
                                                              const GALGAS_taskSetupListAST & inOperand4,
                                                              const GALGAS_taskSetupListAST & inOperand5,
                                                              const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                              const GALGAS_location & inOperand7,
                                                              const GALGAS_bool & inOperand8) :
mProperty_mTaskName (inOperand0),
mProperty_mLowerPriorityTaskList (inOperand1),
mProperty_mStackSize (inOperand2),
mProperty_mTaskSetupListAST (inOperand3),
mProperty_mTaskActivateListAST (inOperand4),
mProperty_mTaskDeactivateListAST (inOperand5),
mProperty_mGuardedCommandList (inOperand6),
mProperty_mEndOfTaskDeclaration (inOperand7),
mProperty_mAutoStart (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element GALGAS_taskListAST_2D_element::class_func_new (const GALGAS_lstring & in_mTaskName,
                                                                             const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                                                             const GALGAS_lbigint & in_mStackSize,
                                                                             const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                             const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                             const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                             const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                             const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                             const GALGAS_bool & in_mAutoStart,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mLowerPriorityTaskList = in_mLowerPriorityTaskList ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mTaskSetupListAST = in_mTaskSetupListAST ;
  result.mProperty_mTaskActivateListAST = in_mTaskActivateListAST ;
  result.mProperty_mTaskDeactivateListAST = in_mTaskDeactivateListAST ;
  result.mProperty_mGuardedCommandList = in_mGuardedCommandList ;
  result.mProperty_mEndOfTaskDeclaration = in_mEndOfTaskDeclaration ;
  result.mProperty_mAutoStart = in_mAutoStart ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskListAST_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mLowerPriorityTaskList.isValid () && mProperty_mStackSize.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mTaskActivateListAST.isValid () && mProperty_mTaskDeactivateListAST.isValid () && mProperty_mGuardedCommandList.isValid () && mProperty_mEndOfTaskDeclaration.isValid () && mProperty_mAutoStart.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST_2D_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mLowerPriorityTaskList.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mTaskSetupListAST.drop () ;
  mProperty_mTaskActivateListAST.drop () ;
  mProperty_mTaskDeactivateListAST.drop () ;
  mProperty_mGuardedCommandList.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
  mProperty_mAutoStart.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST_2D_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLowerPriorityTaskList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskSetupListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskActivateListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskDeactivateListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGuardedCommandList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoStart.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskListAST_2D_element ("taskListAST-element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element GALGAS_taskListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskListAST_2D_element result ;
  const GALGAS_taskListAST_2D_element * p = (const GALGAS_taskListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element::GALGAS_taskSetupListAST_2D_element (void) :
mProperty_mName (),
mProperty_mDependanceList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element::~ GALGAS_taskSetupListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element GALGAS_taskSetupListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mName,
                                                                                     const GALGAS_lstringlist & in_mDependanceList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskSetupListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mDependanceList = in_mDependanceList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element::GALGAS_taskSetupListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstringlist & inOperand1) :
mProperty_mName (inOperand0),
mProperty_mDependanceList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element GALGAS_taskSetupListAST_2D_element::class_func_new (const GALGAS_lstring & in_mName,
                                                                                       const GALGAS_lstringlist & in_mDependanceList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskSetupListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mDependanceList = in_mDependanceList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskSetupListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mDependanceList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mDependanceList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskSetupListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDependanceList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskSetupListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupListAST_2D_element ("taskSetupListAST-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskSetupListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskSetupListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element GALGAS_taskSetupListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST_2D_element result ;
  const GALGAS_taskSetupListAST_2D_element * p = (const GALGAS_taskSetupListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskSetupListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTaskType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element::~ GALGAS_taskMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                   const GALGAS_omnibusType & in_mTaskType,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTaskType = in_mTaskType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_omnibusType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTaskType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                     const GALGAS_omnibusType & in_mTaskType,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTaskType = in_mTaskType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap_2D_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap_2D_element ("taskMap-element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  const GALGAS_taskMap_2D_element * p = (const GALGAS_taskMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @taskMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element_3F_::GALGAS_taskMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element_3F_::GALGAS_taskMap_2D_element_3F_ (const GALGAS_taskMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element_3F_ GALGAS_taskMap_2D_element_3F_::init_nil (void) {
  GALGAS_taskMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_taskMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap_2D_element_3F_::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap_2D_element_3F_ ("taskMap-element?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element_3F_ GALGAS_taskMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element_3F_ result ;
  const GALGAS_taskMap_2D_element_3F_ * p = (const GALGAS_taskMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mTaskType (),
mProperty_mPriority (),
mProperty_mStackSize (),
mProperty_mSetupOrderedList (),
mProperty_mActivateOrderedList (),
mProperty_mDeactivateOrderedList (),
mProperty_mTaskNameStringIndex (),
mProperty_mActivate () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element::~ GALGAS_taskMapIR_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_omnibusType & in_mTaskType,
                                                                                                   const GALGAS_uint & in_mPriority,
                                                                                                   const GALGAS_bigint & in_mStackSize,
                                                                                                   const GALGAS_stringlist & in_mSetupOrderedList,
                                                                                                   const GALGAS_stringlist & in_mActivateOrderedList,
                                                                                                   const GALGAS_stringlist & in_mDeactivateOrderedList,
                                                                                                   const GALGAS_uint & in_mTaskNameStringIndex,
                                                                                                   const GALGAS_bool & in_mActivate,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTaskType = in_mTaskType ;
  result.mProperty_mPriority = in_mPriority ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mSetupOrderedList = in_mSetupOrderedList ;
  result.mProperty_mActivateOrderedList = in_mActivateOrderedList ;
  result.mProperty_mDeactivateOrderedList = in_mDeactivateOrderedList ;
  result.mProperty_mTaskNameStringIndex = in_mTaskNameStringIndex ;
  result.mProperty_mActivate = in_mActivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_omnibusType & inOperand1,
                                                          const GALGAS_uint & inOperand2,
                                                          const GALGAS_bigint & inOperand3,
                                                          const GALGAS_stringlist & inOperand4,
                                                          const GALGAS_stringlist & inOperand5,
                                                          const GALGAS_stringlist & inOperand6,
                                                          const GALGAS_uint & inOperand7,
                                                          const GALGAS_bool & inOperand8) :
mProperty_lkey (inOperand0),
mProperty_mTaskType (inOperand1),
mProperty_mPriority (inOperand2),
mProperty_mStackSize (inOperand3),
mProperty_mSetupOrderedList (inOperand4),
mProperty_mActivateOrderedList (inOperand5),
mProperty_mDeactivateOrderedList (inOperand6),
mProperty_mTaskNameStringIndex (inOperand7),
mProperty_mActivate (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                         const GALGAS_omnibusType & in_mTaskType,
                                                                         const GALGAS_uint & in_mPriority,
                                                                         const GALGAS_bigint & in_mStackSize,
                                                                         const GALGAS_stringlist & in_mSetupOrderedList,
                                                                         const GALGAS_stringlist & in_mActivateOrderedList,
                                                                         const GALGAS_stringlist & in_mDeactivateOrderedList,
                                                                         const GALGAS_uint & in_mTaskNameStringIndex,
                                                                         const GALGAS_bool & in_mActivate,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTaskType = in_mTaskType ;
  result.mProperty_mPriority = in_mPriority ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mSetupOrderedList = in_mSetupOrderedList ;
  result.mProperty_mActivateOrderedList = in_mActivateOrderedList ;
  result.mProperty_mDeactivateOrderedList = in_mDeactivateOrderedList ;
  result.mProperty_mTaskNameStringIndex = in_mTaskNameStringIndex ;
  result.mProperty_mActivate = in_mActivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mSetupOrderedList.isValid () && mProperty_mActivateOrderedList.isValid () && mProperty_mDeactivateOrderedList.isValid () && mProperty_mTaskNameStringIndex.isValid () && mProperty_mActivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskType.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mSetupOrderedList.drop () ;
  mProperty_mActivateOrderedList.drop () ;
  mProperty_mDeactivateOrderedList.drop () ;
  mProperty_mTaskNameStringIndex.drop () ;
  mProperty_mActivate.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR_2D_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskMapIR-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSetupOrderedList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActivateOrderedList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeactivateOrderedList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskNameStringIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActivate.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskMapIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR_2D_element ("taskMapIR-element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  const GALGAS_taskMapIR_2D_element * p = (const GALGAS_taskMapIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @taskMapIR_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element_3F_::GALGAS_taskMapIR_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element_3F_::GALGAS_taskMapIR_2D_element_3F_ (const GALGAS_taskMapIR_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element_3F_ GALGAS_taskMapIR_2D_element_3F_::init_nil (void) {
  GALGAS_taskMapIR_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMapIR_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMapIR_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_taskMapIR_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR_2D_element_3F_::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskMapIR-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR_2D_element_3F_ ("taskMapIR-element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMapIR_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMapIR_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element_3F_ GALGAS_taskMapIR_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element_3F_ result ;
  const GALGAS_taskMapIR_2D_element_3F_ * p = (const GALGAS_taskMapIR_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskMapIR_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element::GALGAS_routineMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mSignature (),
mProperty_mReturnTypeProxy (),
mProperty_mModeDictionary (),
mProperty_mIsExported (),
mProperty_mFunctionMode () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element::~ GALGAS_routineMapForContext_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element GALGAS_routineMapForContext_2D_element::init_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                 const GALGAS_bool & in_mIsPublic,
                                                                                                                 const GALGAS_routineTypedSignature & in_mSignature,
                                                                                                                 const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                                                 const GALGAS_routineLLVMNameDict & in_mModeDictionary,
                                                                                                                 const GALGAS_bool & in_mIsExported,
                                                                                                                 const GALGAS_mode & in_mFunctionMode,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapForContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsPublic = in_mIsPublic ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
  result.mProperty_mModeDictionary = in_mModeDictionary ;
  result.mProperty_mIsExported = in_mIsExported ;
  result.mProperty_mFunctionMode = in_mFunctionMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element::GALGAS_routineMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_bool & inOperand1,
                                                                                const GALGAS_routineTypedSignature & inOperand2,
                                                                                const GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                const GALGAS_routineLLVMNameDict & inOperand4,
                                                                                const GALGAS_bool & inOperand5,
                                                                                const GALGAS_mode & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mReturnTypeProxy (inOperand3),
mProperty_mModeDictionary (inOperand4),
mProperty_mIsExported (inOperand5),
mProperty_mFunctionMode (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element GALGAS_routineMapForContext_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_bool & in_mIsPublic,
                                                                                               const GALGAS_routineTypedSignature & in_mSignature,
                                                                                               const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                               const GALGAS_routineLLVMNameDict & in_mModeDictionary,
                                                                                               const GALGAS_bool & in_mIsExported,
                                                                                               const GALGAS_mode & in_mFunctionMode,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapForContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsPublic = in_mIsPublic ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
  result.mProperty_mModeDictionary = in_mModeDictionary ;
  result.mProperty_mIsExported = in_mIsExported ;
  result.mProperty_mFunctionMode = in_mFunctionMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () && mProperty_mReturnTypeProxy.isValid () && mProperty_mModeDictionary.isValid () && mProperty_mIsExported.isValid () && mProperty_mFunctionMode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mReturnTypeProxy.drop () ;
  mProperty_mModeDictionary.drop () ;
  mProperty_mIsExported.drop () ;
  mProperty_mFunctionMode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMapForContext-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mModeDictionary.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsExported.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionMode.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineMapForContext-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext_2D_element ("routineMapForContext-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element GALGAS_routineMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext_2D_element result ;
  const GALGAS_routineMapForContext_2D_element * p = (const GALGAS_routineMapForContext_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @routineMapForContext_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element_3F_::GALGAS_routineMapForContext_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element_3F_::GALGAS_routineMapForContext_2D_element_3F_ (const GALGAS_routineMapForContext_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element_3F_ GALGAS_routineMapForContext_2D_element_3F_::init_nil (void) {
  GALGAS_routineMapForContext_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineMapForContext_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineMapForContext_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_routineMapForContext_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext_2D_element_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineMapForContext-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext_2D_element_3F_ ("routineMapForContext-element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMapForContext_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMapForContext_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapForContext_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element_3F_ GALGAS_routineMapForContext_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext_2D_element_3F_ result ;
  const GALGAS_routineMapForContext_2D_element_3F_ * p = (const GALGAS_routineMapForContext_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineMapForContext_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element::GALGAS_requiredFunctionDeclarationListAST_2D_element (void) :
mProperty_mName (),
mProperty_mExecutionMode (),
mProperty_mIsExported (),
mProperty_mFormalArgumentList (),
mProperty_mEndOfProcLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element::~ GALGAS_requiredFunctionDeclarationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element GALGAS_requiredFunctionDeclarationListAST_2D_element::init_21__21__21__21__21_ (const GALGAS_lstring & in_mName,
                                                                                                                                     const GALGAS_mode & in_mExecutionMode,
                                                                                                                                     const GALGAS_bool & in_mIsExported,
                                                                                                                                     const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                                                     const GALGAS_location & in_mEndOfProcLocation,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_requiredFunctionDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mExecutionMode = in_mExecutionMode ;
  result.mProperty_mIsExported = in_mIsExported ;
  result.mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  result.mProperty_mEndOfProcLocation = in_mEndOfProcLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element::GALGAS_requiredFunctionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_mode & inOperand1,
                                                                                                            const GALGAS_bool & inOperand2,
                                                                                                            const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                            const GALGAS_location & inOperand4) :
mProperty_mName (inOperand0),
mProperty_mExecutionMode (inOperand1),
mProperty_mIsExported (inOperand2),
mProperty_mFormalArgumentList (inOperand3),
mProperty_mEndOfProcLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element GALGAS_requiredFunctionDeclarationListAST_2D_element::class_func_new (const GALGAS_lstring & in_mName,
                                                                                                                           const GALGAS_mode & in_mExecutionMode,
                                                                                                                           const GALGAS_bool & in_mIsExported,
                                                                                                                           const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                                           const GALGAS_location & in_mEndOfProcLocation,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_requiredFunctionDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mExecutionMode = in_mExecutionMode ;
  result.mProperty_mIsExported = in_mIsExported ;
  result.mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  result.mProperty_mEndOfProcLocation = in_mEndOfProcLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_requiredFunctionDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mExecutionMode.isValid () && mProperty_mIsExported.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mExecutionMode.drop () ;
  mProperty_mIsExported.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST_2D_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @requiredFunctionDeclarationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExecutionMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsExported.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @requiredFunctionDeclarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2D_element ("requiredFunctionDeclarationListAST-element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_requiredFunctionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_requiredFunctionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredFunctionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element GALGAS_requiredFunctionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_requiredFunctionDeclarationListAST_2D_element result ;
  const GALGAS_requiredFunctionDeclarationListAST_2D_element * p = (const GALGAS_requiredFunctionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_requiredFunctionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredFunctionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @externProcedureMapIR_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element_3F_::GALGAS_externProcedureMapIR_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element_3F_::GALGAS_externProcedureMapIR_2D_element_3F_ (const GALGAS_externProcedureMapIR_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element_3F_ GALGAS_externProcedureMapIR_2D_element_3F_::init_nil (void) {
  GALGAS_externProcedureMapIR_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_externProcedureMapIR_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_externProcedureMapIR_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_externProcedureMapIR_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR_2D_element_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externProcedureMapIR-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element_3F_ ("externProcedureMapIR-element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externProcedureMapIR_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element_3F_ GALGAS_externProcedureMapIR_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR_2D_element_3F_ result ;
  const GALGAS_externProcedureMapIR_2D_element_3F_ * p = (const GALGAS_externProcedureMapIR_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externProcedureMapIR_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mSelfType (),
mProperty_mDriverName (),
mProperty_mMode () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element::~ GALGAS_interruptMapIR_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_omnibusType & in_mSelfType,
                                                                                         const GALGAS_string & in_mDriverName,
                                                                                         const GALGAS_mode & in_mMode,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSelfType = in_mSelfType ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mMode = in_mMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_omnibusType & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_mode & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mSelfType (inOperand1),
mProperty_mDriverName (inOperand2),
mProperty_mMode (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_omnibusType & in_mSelfType,
                                                                                   const GALGAS_string & in_mDriverName,
                                                                                   const GALGAS_mode & in_mMode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSelfType = in_mSelfType ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mMode = in_mMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_interruptMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSelfType.isValid () && mProperty_mDriverName.isValid () && mProperty_mMode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSelfType.drop () ;
  mProperty_mDriverName.drop () ;
  mProperty_mMode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @interruptMapIR-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelfType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @interruptMapIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR_2D_element ("interruptMapIR-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_interruptMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_interruptMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  const GALGAS_interruptMapIR_2D_element * p = (const GALGAS_interruptMapIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_interruptMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @interruptMapIR_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element_3F_::GALGAS_interruptMapIR_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element_3F_::GALGAS_interruptMapIR_2D_element_3F_ (const GALGAS_interruptMapIR_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element_3F_ GALGAS_interruptMapIR_2D_element_3F_::init_nil (void) {
  GALGAS_interruptMapIR_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_interruptMapIR_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_interruptMapIR_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_interruptMapIR_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR_2D_element_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @interruptMapIR-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR_2D_element_3F_ ("interruptMapIR-element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_interruptMapIR_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_interruptMapIR_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element_3F_ GALGAS_interruptMapIR_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element_3F_ result ;
  const GALGAS_interruptMapIR_2D_element_3F_ * p = (const GALGAS_interruptMapIR_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_interruptMapIR_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard::GALGAS_guardKind_2D_convenienceGuard (void) :
mProperty_base () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard::~ GALGAS_guardKind_2D_convenienceGuard (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard GALGAS_guardKind_2D_convenienceGuard::init_21_ (const GALGAS_callInstructionAST & in_base,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardKind_2D_convenienceGuard result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_base = in_base ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardKind_2D_convenienceGuard::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard::GALGAS_guardKind_2D_convenienceGuard (const GALGAS_callInstructionAST & inOperand0) :
mProperty_base (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard GALGAS_guardKind_2D_convenienceGuard::class_func_new (const GALGAS_callInstructionAST & in_base,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardKind_2D_convenienceGuard result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_base = in_base ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardKind_2D_convenienceGuard::isValid (void) const {
  return mProperty_base.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardKind_2D_convenienceGuard::drop (void) {
  mProperty_base.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardKind_2D_convenienceGuard::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardKind-convenienceGuard:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_base.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardKind-convenienceGuard generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKind_2D_convenienceGuard ("guardKind-convenienceGuard",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardKind_2D_convenienceGuard::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind_2D_convenienceGuard ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardKind_2D_convenienceGuard::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKind_2D_convenienceGuard (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard GALGAS_guardKind_2D_convenienceGuard::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardKind_2D_convenienceGuard result ;
  const GALGAS_guardKind_2D_convenienceGuard * p = (const GALGAS_guardKind_2D_convenienceGuard *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardKind_2D_convenienceGuard *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind-convenienceGuard", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @guardKind_2D_convenienceGuard_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard_3F_::GALGAS_guardKind_2D_convenienceGuard_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard_3F_::GALGAS_guardKind_2D_convenienceGuard_3F_ (const GALGAS_guardKind_2D_convenienceGuard & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard_3F_ GALGAS_guardKind_2D_convenienceGuard_3F_::init_nil (void) {
  GALGAS_guardKind_2D_convenienceGuard_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardKind_2D_convenienceGuard_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardKind_2D_convenienceGuard_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardKind_2D_convenienceGuard_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_guardKind_2D_convenienceGuard () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardKind_2D_convenienceGuard_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardKind-convenienceGuard? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKind_2D_convenienceGuard_3F_ ("guardKind-convenienceGuard?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardKind_2D_convenienceGuard_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind_2D_convenienceGuard_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardKind_2D_convenienceGuard_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKind_2D_convenienceGuard_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardKind_2D_convenienceGuard_3F_ GALGAS_guardKind_2D_convenienceGuard_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardKind_2D_convenienceGuard_3F_ result ;
  const GALGAS_guardKind_2D_convenienceGuard_3F_ * p = (const GALGAS_guardKind_2D_convenienceGuard_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardKind_2D_convenienceGuard_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind-convenienceGuard?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mSignature (),
mProperty_mUserRoutineLLVMName (),
mProperty_mImplementationRoutineLLVMName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element::~ GALGAS_guardMapForContext_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::init_21__21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_bool & in_mIsPublic,
                                                                                                     const GALGAS_routineTypedSignature & in_mSignature,
                                                                                                     const GALGAS_lstring & in_mUserRoutineLLVMName,
                                                                                                     const GALGAS_lstring & in_mImplementationRoutineLLVMName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsPublic = in_mIsPublic ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mUserRoutineLLVMName = in_mUserRoutineLLVMName ;
  result.mProperty_mImplementationRoutineLLVMName = in_mImplementationRoutineLLVMName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_routineTypedSignature & inOperand2,
                                                                            const GALGAS_lstring & inOperand3,
                                                                            const GALGAS_lstring & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mUserRoutineLLVMName (inOperand3),
mProperty_mImplementationRoutineLLVMName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_bool & in_mIsPublic,
                                                                                           const GALGAS_routineTypedSignature & in_mSignature,
                                                                                           const GALGAS_lstring & in_mUserRoutineLLVMName,
                                                                                           const GALGAS_lstring & in_mImplementationRoutineLLVMName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsPublic = in_mIsPublic ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mUserRoutineLLVMName = in_mUserRoutineLLVMName ;
  result.mProperty_mImplementationRoutineLLVMName = in_mImplementationRoutineLLVMName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () && mProperty_mUserRoutineLLVMName.isValid () && mProperty_mImplementationRoutineLLVMName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mUserRoutineLLVMName.drop () ;
  mProperty_mImplementationRoutineLLVMName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardMapForContext-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUserRoutineLLVMName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImplementationRoutineLLVMName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardMapForContext-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext_2D_element ("guardMapForContext-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  const GALGAS_guardMapForContext_2D_element * p = (const GALGAS_guardMapForContext_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @guardMapForContext_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element_3F_::GALGAS_guardMapForContext_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element_3F_::GALGAS_guardMapForContext_2D_element_3F_ (const GALGAS_guardMapForContext_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element_3F_ GALGAS_guardMapForContext_2D_element_3F_::init_nil (void) {
  GALGAS_guardMapForContext_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardMapForContext_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardMapForContext_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_guardMapForContext_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext_2D_element_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardMapForContext-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext_2D_element_3F_ ("guardMapForContext-element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardMapForContext_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardMapForContext_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element_3F_ GALGAS_guardMapForContext_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element_3F_ result ;
  const GALGAS_guardMapForContext_2D_element_3F_ * p = (const GALGAS_guardMapForContext_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardMapForContext_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element::GALGAS_routineFormalArgumentListAST_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element::~ GALGAS_routineFormalArgumentListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element GALGAS_routineFormalArgumentListAST_2D_element::init_21__21__21__21_ (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                                     const GALGAS_lstring & in_mSelector,
                                                                                                                     const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                                     const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element::GALGAS_routineFormalArgumentListAST_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_lstring & inOperand3) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element GALGAS_routineFormalArgumentListAST_2D_element::class_func_new (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                               const GALGAS_lstring & in_mSelector,
                                                                                                               const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                               const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineFormalArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineFormalArgumentListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineFormalArgumentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2D_element ("routineFormalArgumentListAST-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineFormalArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element GALGAS_routineFormalArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST_2D_element result ;
  const GALGAS_routineFormalArgumentListAST_2D_element * p = (const GALGAS_routineFormalArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineFormalArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mTypeProxy (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element::~ GALGAS_routineTypedSignature_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element GALGAS_routineTypedSignature_2D_element::init_21__21__21__21_ (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                       const GALGAS_lstring & in_mSelector,
                                                                                                       const GALGAS_unifiedTypeMapEntry & in_mTypeProxy,
                                                                                                       const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mTypeProxy = in_mTypeProxy ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                  const GALGAS_lstring & inOperand3) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mTypeProxy (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element GALGAS_routineTypedSignature_2D_element::class_func_new (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                 const GALGAS_lstring & in_mSelector,
                                                                                                 const GALGAS_unifiedTypeMapEntry & in_mTypeProxy,
                                                                                                 const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mTypeProxy = in_mTypeProxy ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineTypedSignature_2D_element::objectCompare (const GALGAS_routineTypedSignature_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTypeProxy.objectCompare (inOperand.mProperty_mTypeProxy) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineTypedSignature_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mTypeProxy.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mTypeProxy.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineTypedSignature-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineTypedSignature-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ("routineTypedSignature-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineTypedSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineTypedSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element GALGAS_routineTypedSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature_2D_element result ;
  const GALGAS_routineTypedSignature_2D_element * p = (const GALGAS_routineTypedSignature_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineTypedSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element::GALGAS_routineFormalArgumentListIR_2D_element (void) :
mProperty_mFormalArgumentKind (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element::~ GALGAS_routineFormalArgumentListIR_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element GALGAS_routineFormalArgumentListIR_2D_element::init_21__21__21_ (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                               const GALGAS_omnibusType & in_mFormalArgumentType,
                                                                                                               const GALGAS_string & in_mFormalArgumentName,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentKind = in_mFormalArgumentKind ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element::GALGAS_routineFormalArgumentListIR_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                              const GALGAS_omnibusType & inOperand1,
                                                                                              const GALGAS_string & inOperand2) :
mProperty_mFormalArgumentKind (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element GALGAS_routineFormalArgumentListIR_2D_element::class_func_new (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                             const GALGAS_omnibusType & in_mFormalArgumentType,
                                                                                                             const GALGAS_string & in_mFormalArgumentName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentKind = in_mFormalArgumentKind ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineFormalArgumentListIR_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentKind.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR_2D_element::drop (void) {
  mProperty_mFormalArgumentKind.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineFormalArgumentListIR-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalArgumentKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineFormalArgumentListIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ("routineFormalArgumentListIR-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineFormalArgumentListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element GALGAS_routineFormalArgumentListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR_2D_element result ;
  const GALGAS_routineFormalArgumentListIR_2D_element * p = (const GALGAS_routineFormalArgumentListIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineFormalArgumentListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (void) :
mProperty_mVarLLVMName (),
mProperty_mLLVMType (),
mProperty_mFormalInputArgument () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element::~ GALGAS_allocaList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::init_21__21__21_ (const GALGAS_string & in_mVarLLVMName,
                                                                             const GALGAS_omnibusType & in_mLLVMType,
                                                                             const GALGAS_bool & in_mFormalInputArgument,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mVarLLVMName = in_mVarLLVMName ;
  result.mProperty_mLLVMType = in_mLLVMType ;
  result.mProperty_mFormalInputArgument = in_mFormalInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (const GALGAS_string & inOperand0,
                                                            const GALGAS_omnibusType & inOperand1,
                                                            const GALGAS_bool & inOperand2) :
mProperty_mVarLLVMName (inOperand0),
mProperty_mLLVMType (inOperand1),
mProperty_mFormalInputArgument (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::class_func_new (const GALGAS_string & in_mVarLLVMName,
                                                                           const GALGAS_omnibusType & in_mLLVMType,
                                                                           const GALGAS_bool & in_mFormalInputArgument,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mVarLLVMName = in_mVarLLVMName ;
  result.mProperty_mLLVMType = in_mLLVMType ;
  result.mProperty_mFormalInputArgument = in_mFormalInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_allocaList_2D_element::isValid (void) const {
  return mProperty_mVarLLVMName.isValid () && mProperty_mLLVMType.isValid () && mProperty_mFormalInputArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList_2D_element::drop (void) {
  mProperty_mVarLLVMName.drop () ;
  mProperty_mLLVMType.drop () ;
  mProperty_mFormalInputArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList_2D_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @allocaList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mVarLLVMName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLLVMType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @allocaList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList_2D_element ("allocaList-element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_allocaList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_allocaList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  const GALGAS_allocaList_2D_element * p = (const GALGAS_allocaList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_allocaList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element::~ GALGAS_panicRoutinePriorityMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_panicRoutinePriorityMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @panicRoutinePriorityMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicRoutinePriorityMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ("panicRoutinePriorityMap-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  const GALGAS_panicRoutinePriorityMap_2D_element * p = (const GALGAS_panicRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @panicRoutinePriorityMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element_3F_::GALGAS_panicRoutinePriorityMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element_3F_::GALGAS_panicRoutinePriorityMap_2D_element_3F_ (const GALGAS_panicRoutinePriorityMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element_3F_ GALGAS_panicRoutinePriorityMap_2D_element_3F_::init_nil (void) {
  GALGAS_panicRoutinePriorityMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_panicRoutinePriorityMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_panicRoutinePriorityMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_panicRoutinePriorityMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap_2D_element_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicRoutinePriorityMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element_3F_ ("panicRoutinePriorityMap-element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element_3F_ GALGAS_panicRoutinePriorityMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element_3F_ result ;
  const GALGAS_panicRoutinePriorityMap_2D_element_3F_ * p = (const GALGAS_panicRoutinePriorityMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicRoutinePriorityMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element::GALGAS_implicitConversionToBooleanMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConverter () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element::~ GALGAS_implicitConversionToBooleanMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element GALGAS_implicitConversionToBooleanMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                 const GALGAS_abstractImplicitConverterToBoolean & in_mConverter,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implicitConversionToBooleanMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConverter = in_mConverter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element::GALGAS_implicitConversionToBooleanMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_abstractImplicitConverterToBoolean & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConverter (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element GALGAS_implicitConversionToBooleanMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   const GALGAS_abstractImplicitConverterToBoolean & in_mConverter,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implicitConversionToBooleanMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConverter = in_mConverter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_implicitConversionToBooleanMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConverter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConverter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @implicitConversionToBooleanMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConverter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @implicitConversionToBooleanMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2D_element ("implicitConversionToBooleanMap-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implicitConversionToBooleanMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implicitConversionToBooleanMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicitConversionToBooleanMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element GALGAS_implicitConversionToBooleanMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_implicitConversionToBooleanMap_2D_element result ;
  const GALGAS_implicitConversionToBooleanMap_2D_element * p = (const GALGAS_implicitConversionToBooleanMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_implicitConversionToBooleanMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitConversionToBooleanMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @implicitConversionToBooleanMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element_3F_::GALGAS_implicitConversionToBooleanMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element_3F_::GALGAS_implicitConversionToBooleanMap_2D_element_3F_ (const GALGAS_implicitConversionToBooleanMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element_3F_ GALGAS_implicitConversionToBooleanMap_2D_element_3F_::init_nil (void) {
  GALGAS_implicitConversionToBooleanMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_implicitConversionToBooleanMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_implicitConversionToBooleanMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_implicitConversionToBooleanMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap_2D_element_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @implicitConversionToBooleanMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2D_element_3F_ ("implicitConversionToBooleanMap-element?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implicitConversionToBooleanMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implicitConversionToBooleanMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicitConversionToBooleanMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element_3F_ GALGAS_implicitConversionToBooleanMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implicitConversionToBooleanMap_2D_element_3F_ result ;
  const GALGAS_implicitConversionToBooleanMap_2D_element_3F_ * p = (const GALGAS_implicitConversionToBooleanMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_implicitConversionToBooleanMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitConversionToBooleanMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element::GALGAS_integerSliceFieldListAST_2D_element (void) :
mProperty_mSliceWidth (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element::~ GALGAS_integerSliceFieldListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element GALGAS_integerSliceFieldListAST_2D_element::init_21__21__21_ (const GALGAS_lstring & in_mSliceWidth,
                                                                                                         const GALGAS_expressionAST & in_mExpression,
                                                                                                         const GALGAS_location & in_mExpressionLocation,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceWidth = in_mSliceWidth ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mExpressionLocation = in_mExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element::GALGAS_integerSliceFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_expressionAST & inOperand1,
                                                                                        const GALGAS_location & inOperand2) :
mProperty_mSliceWidth (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element GALGAS_integerSliceFieldListAST_2D_element::class_func_new (const GALGAS_lstring & in_mSliceWidth,
                                                                                                       const GALGAS_expressionAST & in_mExpression,
                                                                                                       const GALGAS_location & in_mExpressionLocation,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceWidth = in_mSliceWidth ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mExpressionLocation = in_mExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_integerSliceFieldListAST_2D_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST_2D_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @integerSliceFieldListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSliceWidth.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @integerSliceFieldListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ("integerSliceFieldListAST-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerSliceFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerSliceFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element GALGAS_integerSliceFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST_2D_element result ;
  const GALGAS_integerSliceFieldListAST_2D_element * p = (const GALGAS_integerSliceFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerSliceFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (void) :
mProperty_mFieldName (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element::~ GALGAS_registerIntegerFieldListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::init_21__21__21_ (const GALGAS_lstring & in_mFieldName,
                                                                                                               const GALGAS_expressionAST & in_mExpression,
                                                                                                               const GALGAS_location & in_mExpressionLocation,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFieldName = in_mFieldName ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mExpressionLocation = in_mExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_expressionAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2) :
mProperty_mFieldName (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::class_func_new (const GALGAS_lstring & in_mFieldName,
                                                                                                             const GALGAS_expressionAST & in_mExpression,
                                                                                                             const GALGAS_location & in_mExpressionLocation,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFieldName = in_mFieldName ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mExpressionLocation = in_mExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerIntegerFieldListAST_2D_element::isValid (void) const {
  return mProperty_mFieldName.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST_2D_element::drop (void) {
  mProperty_mFieldName.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerIntegerFieldListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFieldName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerIntegerFieldListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ("registerIntegerFieldListAST-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerIntegerFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  const GALGAS_registerIntegerFieldListAST_2D_element * p = (const GALGAS_registerIntegerFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerIntegerFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property::GALGAS_primaryInExpressionAccessAST_2D_property (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property::~ GALGAS_primaryInExpressionAccessAST_2D_property (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property GALGAS_primaryInExpressionAccessAST_2D_property::init_21_ (const GALGAS_lstring & in_name,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_property::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property::GALGAS_primaryInExpressionAccessAST_2D_property (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property GALGAS_primaryInExpressionAccessAST_2D_property::class_func_new (const GALGAS_lstring & in_name,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST_2D_property::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_property::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_property::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @primaryInExpressionAccessAST-property:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAccessAST-property generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_property ("primaryInExpressionAccessAST-property",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessAST_2D_property::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_property ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAccessAST_2D_property::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessAST_2D_property (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property GALGAS_primaryInExpressionAccessAST_2D_property::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_property result ;
  const GALGAS_primaryInExpressionAccessAST_2D_property * p = (const GALGAS_primaryInExpressionAccessAST_2D_property *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAccessAST_2D_property *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST-property", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @primaryInExpressionAccessAST_2D_property_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property_3F_::GALGAS_primaryInExpressionAccessAST_2D_property_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property_3F_::GALGAS_primaryInExpressionAccessAST_2D_property_3F_ (const GALGAS_primaryInExpressionAccessAST_2D_property & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property_3F_ GALGAS_primaryInExpressionAccessAST_2D_property_3F_::init_nil (void) {
  GALGAS_primaryInExpressionAccessAST_2D_property_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST_2D_property_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST_2D_property_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_property_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_primaryInExpressionAccessAST_2D_property () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_property_3F_::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAccessAST-property? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_property_3F_ ("primaryInExpressionAccessAST-property?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessAST_2D_property_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_property_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAccessAST_2D_property_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessAST_2D_property_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_property_3F_ GALGAS_primaryInExpressionAccessAST_2D_property_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_property_3F_ result ;
  const GALGAS_primaryInExpressionAccessAST_2D_property_3F_ * p = (const GALGAS_primaryInExpressionAccessAST_2D_property_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAccessAST_2D_property_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST-property?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice::GALGAS_primaryInExpressionAccessAST_2D_integerSlice (void) :
mProperty_low (),
mProperty_high () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice::~ GALGAS_primaryInExpressionAccessAST_2D_integerSlice (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice GALGAS_primaryInExpressionAccessAST_2D_integerSlice::init_21__21_ (const GALGAS_lbigint & in_low,
                                                                                                                       const GALGAS_lbigint & in_high,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_integerSlice result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_low = in_low ;
  result.mProperty_high = in_high ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_integerSlice::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice::GALGAS_primaryInExpressionAccessAST_2D_integerSlice (const GALGAS_lbigint & inOperand0,
                                                                                                          const GALGAS_lbigint & inOperand1) :
mProperty_low (inOperand0),
mProperty_high (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice GALGAS_primaryInExpressionAccessAST_2D_integerSlice::class_func_new (const GALGAS_lbigint & in_low,
                                                                                                                         const GALGAS_lbigint & in_high,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_integerSlice result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_low = in_low ;
  result.mProperty_high = in_high ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST_2D_integerSlice::isValid (void) const {
  return mProperty_low.isValid () && mProperty_high.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_integerSlice::drop (void) {
  mProperty_low.drop () ;
  mProperty_high.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_integerSlice::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @primaryInExpressionAccessAST-integerSlice:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_low.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_high.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAccessAST-integerSlice generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_integerSlice ("primaryInExpressionAccessAST-integerSlice",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessAST_2D_integerSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_integerSlice ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAccessAST_2D_integerSlice::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessAST_2D_integerSlice (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice GALGAS_primaryInExpressionAccessAST_2D_integerSlice::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_integerSlice result ;
  const GALGAS_primaryInExpressionAccessAST_2D_integerSlice * p = (const GALGAS_primaryInExpressionAccessAST_2D_integerSlice *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAccessAST_2D_integerSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST-integerSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @primaryInExpressionAccessAST_2D_integerSlice_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ (const GALGAS_primaryInExpressionAccessAST_2D_integerSlice & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::init_nil (void) {
  GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_primaryInExpressionAccessAST_2D_integerSlice () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAccessAST-integerSlice? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ ("primaryInExpressionAccessAST-integerSlice?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ result ;
  const GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ * p = (const GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST-integerSlice?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall::GALGAS_primaryInExpressionAccessAST_2D_funcCall (void) :
mProperty_methodName (),
mProperty_arguments (),
mProperty_endOfArguments () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall::~ GALGAS_primaryInExpressionAccessAST_2D_funcCall (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall GALGAS_primaryInExpressionAccessAST_2D_funcCall::init_21__21__21_ (const GALGAS_lstring & in_methodName,
                                                                                                                   const GALGAS_effectiveArgumentListAST & in_arguments,
                                                                                                                   const GALGAS_location & in_endOfArguments,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_funcCall result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_methodName = in_methodName ;
  result.mProperty_arguments = in_arguments ;
  result.mProperty_endOfArguments = in_endOfArguments ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_funcCall::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall::GALGAS_primaryInExpressionAccessAST_2D_funcCall (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_effectiveArgumentListAST & inOperand1,
                                                                                                  const GALGAS_location & inOperand2) :
mProperty_methodName (inOperand0),
mProperty_arguments (inOperand1),
mProperty_endOfArguments (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall GALGAS_primaryInExpressionAccessAST_2D_funcCall::class_func_new (const GALGAS_lstring & in_methodName,
                                                                                                                 const GALGAS_effectiveArgumentListAST & in_arguments,
                                                                                                                 const GALGAS_location & in_endOfArguments,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_funcCall result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_methodName = in_methodName ;
  result.mProperty_arguments = in_arguments ;
  result.mProperty_endOfArguments = in_endOfArguments ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST_2D_funcCall::isValid (void) const {
  return mProperty_methodName.isValid () && mProperty_arguments.isValid () && mProperty_endOfArguments.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_funcCall::drop (void) {
  mProperty_methodName.drop () ;
  mProperty_arguments.drop () ;
  mProperty_endOfArguments.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_funcCall::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @primaryInExpressionAccessAST-funcCall:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_methodName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_arguments.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfArguments.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAccessAST-funcCall generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_funcCall ("primaryInExpressionAccessAST-funcCall",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessAST_2D_funcCall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_funcCall ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAccessAST_2D_funcCall::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessAST_2D_funcCall (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall GALGAS_primaryInExpressionAccessAST_2D_funcCall::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_funcCall result ;
  const GALGAS_primaryInExpressionAccessAST_2D_funcCall * p = (const GALGAS_primaryInExpressionAccessAST_2D_funcCall *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAccessAST_2D_funcCall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST-funcCall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @primaryInExpressionAccessAST_2D_funcCall_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ (const GALGAS_primaryInExpressionAccessAST_2D_funcCall & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::init_nil (void) {
  GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_primaryInExpressionAccessAST_2D_funcCall () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAccessAST-funcCall? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ ("primaryInExpressionAccessAST-funcCall?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ result ;
  const GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ * p = (const GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST-funcCall?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element::~ GALGAS_functionCallEffectiveParameterListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mSelector,
                                                                                                                               const GALGAS_expressionAST & in_mExpression,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::class_func_new (const GALGAS_lstring & in_mSelector,
                                                                                                                                 const GALGAS_expressionAST & in_mExpression,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_functionCallEffectiveParameterListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST_2D_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @functionCallEffectiveParameterListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @functionCallEffectiveParameterListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ("functionCallEffectiveParameterListAST-element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  const GALGAS_functionCallEffectiveParameterListAST_2D_element * p = (const GALGAS_functionCallEffectiveParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionCallEffectiveParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mResultType (),
mProperty_mOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_omnibusType & in_mResultType,
                                                                                         const GALGAS_omnibusInfixOperatorUsage & in_mOperatorUsage,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mResultType = in_mResultType ;
  result.mProperty_mOperatorUsage = in_mOperatorUsage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_omnibusType & inOperand1,
                                                                        const GALGAS_omnibusInfixOperatorUsage & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultType (inOperand1),
mProperty_mOperatorUsage (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                       const GALGAS_omnibusType & in_mResultType,
                                                                                       const GALGAS_omnibusInfixOperatorUsage & in_mOperatorUsage,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mResultType = in_mResultType ;
  result.mProperty_mOperatorUsage = in_mOperatorUsage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperatorUsage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @infixOperatorMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOperatorUsage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @infixOperatorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ("infixOperatorMap-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_infixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_infixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  const GALGAS_infixOperatorMap_2D_element * p = (const GALGAS_infixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_infixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @infixOperatorMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element_3F_::GALGAS_infixOperatorMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element_3F_::GALGAS_infixOperatorMap_2D_element_3F_ (const GALGAS_infixOperatorMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element_3F_ GALGAS_infixOperatorMap_2D_element_3F_::init_nil (void) {
  GALGAS_infixOperatorMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_infixOperatorMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_infixOperatorMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_infixOperatorMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap_2D_element_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @infixOperatorMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap_2D_element_3F_ ("infixOperatorMap-element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_infixOperatorMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_infixOperatorMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element_3F_ GALGAS_infixOperatorMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element_3F_ result ;
  const GALGAS_infixOperatorMap_2D_element_3F_ * p = (const GALGAS_infixOperatorMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_infixOperatorMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mReceiverType (),
mProperty_mResultType (),
mProperty_mOperator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element::~ GALGAS_prefixOperatorMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_omnibusType & in_mReceiverType,
                                                                                               const GALGAS_omnibusType & in_mResultType,
                                                                                               const GALGAS_prefixOperatorUsage & in_mOperator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mReceiverType = in_mReceiverType ;
  result.mProperty_mResultType = in_mResultType ;
  result.mProperty_mOperator = in_mOperator ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_omnibusType & inOperand1,
                                                                          const GALGAS_omnibusType & inOperand2,
                                                                          const GALGAS_prefixOperatorUsage & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mReceiverType (inOperand1),
mProperty_mResultType (inOperand2),
mProperty_mOperator (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_omnibusType & in_mReceiverType,
                                                                                         const GALGAS_omnibusType & in_mResultType,
                                                                                         const GALGAS_prefixOperatorUsage & in_mOperator,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mReceiverType = in_mReceiverType ;
  result.mProperty_mResultType = in_mResultType ;
  result.mProperty_mOperator = in_mOperator ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prefixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReceiverType.isValid () && mProperty_mResultType.isValid () && mProperty_mOperator.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mReceiverType.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperator.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @prefixOperatorMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReceiverType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOperator.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ("prefixOperatorMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  const GALGAS_prefixOperatorMap_2D_element * p = (const GALGAS_prefixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @prefixOperatorMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element_3F_::GALGAS_prefixOperatorMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element_3F_::GALGAS_prefixOperatorMap_2D_element_3F_ (const GALGAS_prefixOperatorMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element_3F_ GALGAS_prefixOperatorMap_2D_element_3F_::init_nil (void) {
  GALGAS_prefixOperatorMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prefixOperatorMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prefixOperatorMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_prefixOperatorMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap_2D_element_3F_::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element_3F_ ("prefixOperatorMap-element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element_3F_ GALGAS_prefixOperatorMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element_3F_ result ;
  const GALGAS_prefixOperatorMap_2D_element_3F_ * p = (const GALGAS_prefixOperatorMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element::GALGAS_sliceAssignmentListAST_2D_element (void) :
mProperty_mSliceWidth (),
mProperty_mSliceKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element::~ GALGAS_sliceAssignmentListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element GALGAS_sliceAssignmentListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mSliceWidth,
                                                                                                 const GALGAS_sliceTargetAST & in_mSliceKind,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceWidth = in_mSliceWidth ;
  result.mProperty_mSliceKind = in_mSliceKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element::GALGAS_sliceAssignmentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_sliceTargetAST & inOperand1) :
mProperty_mSliceWidth (inOperand0),
mProperty_mSliceKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element GALGAS_sliceAssignmentListAST_2D_element::class_func_new (const GALGAS_lstring & in_mSliceWidth,
                                                                                                   const GALGAS_sliceTargetAST & in_mSliceKind,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceWidth = in_mSliceWidth ;
  result.mProperty_mSliceKind = in_mSliceKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceAssignmentListAST_2D_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mSliceKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST_2D_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mSliceKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceAssignmentListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSliceWidth.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSliceKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ("sliceAssignmentListAST-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceAssignmentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceAssignmentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element GALGAS_sliceAssignmentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST_2D_element result ;
  const GALGAS_sliceAssignmentListAST_2D_element * p = (const GALGAS_sliceAssignmentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceAssignmentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration::GALGAS_sliceTargetAST_2D_varDeclaration (void) :
mProperty_varName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration::~ GALGAS_sliceTargetAST_2D_varDeclaration (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration GALGAS_sliceTargetAST_2D_varDeclaration::init_21_ (const GALGAS_lstring & in_varName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_varDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_varName = in_varName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_varDeclaration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration::GALGAS_sliceTargetAST_2D_varDeclaration (const GALGAS_lstring & inOperand0) :
mProperty_varName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration GALGAS_sliceTargetAST_2D_varDeclaration::class_func_new (const GALGAS_lstring & in_varName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_varDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_varName = in_varName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST_2D_varDeclaration::isValid (void) const {
  return mProperty_varName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_varDeclaration::drop (void) {
  mProperty_varName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_varDeclaration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceTargetAST-varDeclaration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_varName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceTargetAST-varDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_varDeclaration ("sliceTargetAST-varDeclaration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceTargetAST_2D_varDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2D_varDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceTargetAST_2D_varDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceTargetAST_2D_varDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration GALGAS_sliceTargetAST_2D_varDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_varDeclaration result ;
  const GALGAS_sliceTargetAST_2D_varDeclaration * p = (const GALGAS_sliceTargetAST_2D_varDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceTargetAST_2D_varDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST-varDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @sliceTargetAST_2D_varDeclaration_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration_3F_::GALGAS_sliceTargetAST_2D_varDeclaration_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration_3F_::GALGAS_sliceTargetAST_2D_varDeclaration_3F_ (const GALGAS_sliceTargetAST_2D_varDeclaration & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration_3F_ GALGAS_sliceTargetAST_2D_varDeclaration_3F_::init_nil (void) {
  GALGAS_sliceTargetAST_2D_varDeclaration_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST_2D_varDeclaration_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST_2D_varDeclaration_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_varDeclaration_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_sliceTargetAST_2D_varDeclaration () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_varDeclaration_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceTargetAST-varDeclaration? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_varDeclaration_3F_ ("sliceTargetAST-varDeclaration?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceTargetAST_2D_varDeclaration_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2D_varDeclaration_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceTargetAST_2D_varDeclaration_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceTargetAST_2D_varDeclaration_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration_3F_ GALGAS_sliceTargetAST_2D_varDeclaration_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_varDeclaration_3F_ result ;
  const GALGAS_sliceTargetAST_2D_varDeclaration_3F_ * p = (const GALGAS_sliceTargetAST_2D_varDeclaration_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceTargetAST_2D_varDeclaration_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST-varDeclaration?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration::GALGAS_sliceTargetAST_2D_letDeclaration (void) :
mProperty_letName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration::~ GALGAS_sliceTargetAST_2D_letDeclaration (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration GALGAS_sliceTargetAST_2D_letDeclaration::init_21_ (const GALGAS_lstring & in_letName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_letDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_letName = in_letName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_letDeclaration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration::GALGAS_sliceTargetAST_2D_letDeclaration (const GALGAS_lstring & inOperand0) :
mProperty_letName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration GALGAS_sliceTargetAST_2D_letDeclaration::class_func_new (const GALGAS_lstring & in_letName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_letDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_letName = in_letName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST_2D_letDeclaration::isValid (void) const {
  return mProperty_letName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_letDeclaration::drop (void) {
  mProperty_letName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_letDeclaration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceTargetAST-letDeclaration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_letName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceTargetAST-letDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_letDeclaration ("sliceTargetAST-letDeclaration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceTargetAST_2D_letDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2D_letDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceTargetAST_2D_letDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceTargetAST_2D_letDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration GALGAS_sliceTargetAST_2D_letDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_letDeclaration result ;
  const GALGAS_sliceTargetAST_2D_letDeclaration * p = (const GALGAS_sliceTargetAST_2D_letDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceTargetAST_2D_letDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST-letDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @sliceTargetAST_2D_letDeclaration_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration_3F_::GALGAS_sliceTargetAST_2D_letDeclaration_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration_3F_::GALGAS_sliceTargetAST_2D_letDeclaration_3F_ (const GALGAS_sliceTargetAST_2D_letDeclaration & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration_3F_ GALGAS_sliceTargetAST_2D_letDeclaration_3F_::init_nil (void) {
  GALGAS_sliceTargetAST_2D_letDeclaration_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST_2D_letDeclaration_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST_2D_letDeclaration_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_letDeclaration_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_sliceTargetAST_2D_letDeclaration () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_letDeclaration_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceTargetAST-letDeclaration? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_letDeclaration_3F_ ("sliceTargetAST-letDeclaration?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceTargetAST_2D_letDeclaration_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2D_letDeclaration_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceTargetAST_2D_letDeclaration_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceTargetAST_2D_letDeclaration_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration_3F_ GALGAS_sliceTargetAST_2D_letDeclaration_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_letDeclaration_3F_ result ;
  const GALGAS_sliceTargetAST_2D_letDeclaration_3F_ * p = (const GALGAS_sliceTargetAST_2D_letDeclaration_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceTargetAST_2D_letDeclaration_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST-letDeclaration?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue::GALGAS_sliceTargetAST_2D_lValue (void) :
mProperty_target () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue::~ GALGAS_sliceTargetAST_2D_lValue (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue GALGAS_sliceTargetAST_2D_lValue::init_21_ (const GALGAS_LValueAST & in_target,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_lValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_target = in_target ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_lValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue::GALGAS_sliceTargetAST_2D_lValue (const GALGAS_LValueAST & inOperand0) :
mProperty_target (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue GALGAS_sliceTargetAST_2D_lValue::class_func_new (const GALGAS_LValueAST & in_target,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_lValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_target = in_target ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST_2D_lValue::isValid (void) const {
  return mProperty_target.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_lValue::drop (void) {
  mProperty_target.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_lValue::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceTargetAST-lValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_target.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceTargetAST-lValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_lValue ("sliceTargetAST-lValue",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceTargetAST_2D_lValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2D_lValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceTargetAST_2D_lValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceTargetAST_2D_lValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue GALGAS_sliceTargetAST_2D_lValue::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_lValue result ;
  const GALGAS_sliceTargetAST_2D_lValue * p = (const GALGAS_sliceTargetAST_2D_lValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceTargetAST_2D_lValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST-lValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @sliceTargetAST_2D_lValue_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue_3F_::GALGAS_sliceTargetAST_2D_lValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue_3F_::GALGAS_sliceTargetAST_2D_lValue_3F_ (const GALGAS_sliceTargetAST_2D_lValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue_3F_ GALGAS_sliceTargetAST_2D_lValue_3F_::init_nil (void) {
  GALGAS_sliceTargetAST_2D_lValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST_2D_lValue_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceTargetAST_2D_lValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_lValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_sliceTargetAST_2D_lValue () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST_2D_lValue_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceTargetAST-lValue? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_lValue_3F_ ("sliceTargetAST-lValue?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceTargetAST_2D_lValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2D_lValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceTargetAST_2D_lValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceTargetAST_2D_lValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue_3F_ GALGAS_sliceTargetAST_2D_lValue_3F_::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST_2D_lValue_3F_ result ;
  const GALGAS_sliceTargetAST_2D_lValue_3F_ * p = (const GALGAS_sliceTargetAST_2D_lValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceTargetAST_2D_lValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST-lValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (void) :
mProperty_mEffectiveParameterPassingMode (),
mProperty_mSelector (),
mProperty_mParameterType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element::~ GALGAS_procEffectiveParameterList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::init_21__21__21_ (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                                             const GALGAS_lstring & in_mSelector,
                                                                                                             const GALGAS_omnibusType & in_mParameterType,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEffectiveParameterPassingMode = in_mEffectiveParameterPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mParameterType = in_mParameterType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_omnibusType & inOperand2) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mParameterType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::class_func_new (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                                           const GALGAS_lstring & in_mSelector,
                                                                                                           const GALGAS_omnibusType & in_mParameterType,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEffectiveParameterPassingMode = in_mEffectiveParameterPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mParameterType = in_mParameterType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_procEffectiveParameterList_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mParameterType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList_2D_element::drop (void) {
  mProperty_mEffectiveParameterPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mParameterType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @procEffectiveParameterList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procEffectiveParameterList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ("procEffectiveParameterList-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  const GALGAS_procEffectiveParameterList_2D_element * p = (const GALGAS_procEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property::GALGAS_accessInAssignmentAST_2D_property (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property::~ GALGAS_accessInAssignmentAST_2D_property (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property GALGAS_accessInAssignmentAST_2D_property::init_21_ (const GALGAS_lstring & in_name,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST_2D_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST_2D_property::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property::GALGAS_accessInAssignmentAST_2D_property (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property GALGAS_accessInAssignmentAST_2D_property::class_func_new (const GALGAS_lstring & in_name,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST_2D_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_accessInAssignmentAST_2D_property::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST_2D_property::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST_2D_property::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @accessInAssignmentAST-property:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @accessInAssignmentAST-property generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2D_property ("accessInAssignmentAST-property",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_accessInAssignmentAST_2D_property::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST_2D_property ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_accessInAssignmentAST_2D_property::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentAST_2D_property (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property GALGAS_accessInAssignmentAST_2D_property::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST_2D_property result ;
  const GALGAS_accessInAssignmentAST_2D_property * p = (const GALGAS_accessInAssignmentAST_2D_property *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_accessInAssignmentAST_2D_property *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST-property", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @accessInAssignmentAST_2D_property_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property_3F_::GALGAS_accessInAssignmentAST_2D_property_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property_3F_::GALGAS_accessInAssignmentAST_2D_property_3F_ (const GALGAS_accessInAssignmentAST_2D_property & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property_3F_ GALGAS_accessInAssignmentAST_2D_property_3F_::init_nil (void) {
  GALGAS_accessInAssignmentAST_2D_property_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_accessInAssignmentAST_2D_property_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_accessInAssignmentAST_2D_property_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST_2D_property_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_accessInAssignmentAST_2D_property () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST_2D_property_3F_::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @accessInAssignmentAST-property? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2D_property_3F_ ("accessInAssignmentAST-property?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_accessInAssignmentAST_2D_property_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST_2D_property_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_accessInAssignmentAST_2D_property_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentAST_2D_property_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property_3F_ GALGAS_accessInAssignmentAST_2D_property_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST_2D_property_3F_ result ;
  const GALGAS_accessInAssignmentAST_2D_property_3F_ * p = (const GALGAS_accessInAssignmentAST_2D_property_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_accessInAssignmentAST_2D_property_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST-property?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property::GALGAS_LValueOperandAST_2D_property (void) :
mProperty_name (),
mProperty_next () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property::~ GALGAS_LValueOperandAST_2D_property (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property GALGAS_LValueOperandAST_2D_property::init_21__21_ (const GALGAS_lstring & in_name,
                                                                                       const GALGAS_LValueOperandAST & in_next,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueOperandAST_2D_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_next = in_next ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST_2D_property::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property::GALGAS_LValueOperandAST_2D_property (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_LValueOperandAST & inOperand1) :
mProperty_name (inOperand0),
mProperty_next (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property GALGAS_LValueOperandAST_2D_property::class_func_new (const GALGAS_lstring & in_name,
                                                                                         const GALGAS_LValueOperandAST & in_next,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueOperandAST_2D_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_next = in_next ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_LValueOperandAST_2D_property::objectCompare (const GALGAS_LValueOperandAST_2D_property & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_next.objectCompare (inOperand.mProperty_next) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_LValueOperandAST_2D_property::isValid (void) const {
  return mProperty_name.isValid () && mProperty_next.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST_2D_property::drop (void) {
  mProperty_name.drop () ;
  mProperty_next.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST_2D_property::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @LValueOperandAST-property:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_next.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @LValueOperandAST-property generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueOperandAST_2D_property ("LValueOperandAST-property",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_LValueOperandAST_2D_property::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST_2D_property ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_LValueOperandAST_2D_property::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueOperandAST_2D_property (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property GALGAS_LValueOperandAST_2D_property::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_LValueOperandAST_2D_property result ;
  const GALGAS_LValueOperandAST_2D_property * p = (const GALGAS_LValueOperandAST_2D_property *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_LValueOperandAST_2D_property *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST-property", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @LValueOperandAST_2D_property_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property_3F_::GALGAS_LValueOperandAST_2D_property_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property_3F_::GALGAS_LValueOperandAST_2D_property_3F_ (const GALGAS_LValueOperandAST_2D_property & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property_3F_ GALGAS_LValueOperandAST_2D_property_3F_::init_nil (void) {
  GALGAS_LValueOperandAST_2D_property_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_LValueOperandAST_2D_property_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_LValueOperandAST_2D_property_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST_2D_property_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_LValueOperandAST_2D_property () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST_2D_property_3F_::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @LValueOperandAST-property? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueOperandAST_2D_property_3F_ ("LValueOperandAST-property?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_LValueOperandAST_2D_property_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST_2D_property_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_LValueOperandAST_2D_property_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueOperandAST_2D_property_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property_3F_ GALGAS_LValueOperandAST_2D_property_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_LValueOperandAST_2D_property_3F_ result ;
  const GALGAS_LValueOperandAST_2D_property_3F_ * p = (const GALGAS_LValueOperandAST_2D_property_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_LValueOperandAST_2D_property_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST-property?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input::GALGAS_effectiveArgumentPassingModeAST_2D_input (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input::~ GALGAS_effectiveArgumentPassingModeAST_2D_input (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input GALGAS_effectiveArgumentPassingModeAST_2D_input::init_21_ (const GALGAS_lstring & in_name,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_input result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_input::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input::GALGAS_effectiveArgumentPassingModeAST_2D_input (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input GALGAS_effectiveArgumentPassingModeAST_2D_input::class_func_new (const GALGAS_lstring & in_name,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_input result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_input::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_input::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_input::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentPassingModeAST-input:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST-input generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_input ("effectiveArgumentPassingModeAST-input",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST_2D_input::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_input ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST_2D_input::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST_2D_input (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input GALGAS_effectiveArgumentPassingModeAST_2D_input::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_input result ;
  const GALGAS_effectiveArgumentPassingModeAST_2D_input * p = (const GALGAS_effectiveArgumentPassingModeAST_2D_input *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST_2D_input *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST-input", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @effectiveArgumentPassingModeAST_2D_input_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ (const GALGAS_effectiveArgumentPassingModeAST_2D_input & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::init_nil (void) {
  GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_effectiveArgumentPassingModeAST_2D_input () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST-input? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ ("effectiveArgumentPassingModeAST-input?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ result ;
  const GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ * p = (const GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST-input?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType (void) :
mProperty_constant (),
mProperty_typeName (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::~ GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::init_21__21__21_ (const GALGAS_bool & in_constant,
                                                                                                                                   const GALGAS_lstring & in_typeName,
                                                                                                                                   const GALGAS_lstring & in_name,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constant = in_constant ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType (const GALGAS_bool & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_lstring & inOperand2) :
mProperty_constant (inOperand0),
mProperty_typeName (inOperand1),
mProperty_name (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::class_func_new (const GALGAS_bool & in_constant,
                                                                                                                                 const GALGAS_lstring & in_typeName,
                                                                                                                                 const GALGAS_lstring & in_name,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constant = in_constant ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::isValid (void) const {
  return mProperty_constant.isValid () && mProperty_typeName.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::drop (void) {
  mProperty_constant.drop () ;
  mProperty_typeName.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentPassingModeAST-inputWithType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_constant.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST-inputWithType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType ("effectiveArgumentPassingModeAST-inputWithType",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType result ;
  const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType * p = (const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST-inputWithType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @effectiveArgumentPassingModeAST_2D_inputWithType_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ (const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::init_nil (void) {
  GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST-inputWithType? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ ("effectiveArgumentPassingModeAST-inputWithType?",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ result ;
  const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ * p = (const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST-inputWithType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::GALGAS_effectiveArgumentPassingModeAST_2D_outputInput (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::~ GALGAS_effectiveArgumentPassingModeAST_2D_outputInput (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::init_21_ (const GALGAS_lstring & in_name,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInput result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::GALGAS_effectiveArgumentPassingModeAST_2D_outputInput (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::class_func_new (const GALGAS_lstring & in_name,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInput result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentPassingModeAST-outputInput:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST-outputInput generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInput ("effectiveArgumentPassingModeAST-outputInput",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInput ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST_2D_outputInput (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput GALGAS_effectiveArgumentPassingModeAST_2D_outputInput::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInput result ;
  const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput * p = (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST-outputInput", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @effectiveArgumentPassingModeAST_2D_outputInput_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::init_nil (void) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_effectiveArgumentPassingModeAST_2D_outputInput () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST-outputInput? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ ("effectiveArgumentPassingModeAST-outputInput?",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ result ;
  const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ * p = (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST-outputInput?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::~ GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::init_21_ (const GALGAS_lstring & in_name,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::class_func_new (const GALGAS_lstring & in_name,
                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::description (String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentPassingModeAST-outputInputSelfVariable:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST-outputInputSelfVariable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable ("effectiveArgumentPassingModeAST-outputInputSelfVariable",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable result ;
  const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable * p = (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST-outputInputSelfVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::init_nil (void) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::description (String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST-outputInputSelfVariable? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ ("effectiveArgumentPassingModeAST-outputInputSelfVariable?",
                                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ result ;
  const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ * p = (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST-outputInputSelfVariable?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (void) :
mProperty_mEffectiveParameterKind (),
mProperty_mSelector () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element::~ GALGAS_effectiveArgumentListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::init_21__21_ (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                                     const GALGAS_lstring & in_mSelector,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEffectiveParameterKind = in_mEffectiveParameterKind ;
  result.mProperty_mSelector = in_mSelector ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1) :
mProperty_mEffectiveParameterKind (inOperand0),
mProperty_mSelector (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::class_func_new (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                                       const GALGAS_lstring & in_mSelector,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEffectiveParameterKind = in_mEffectiveParameterKind ;
  result.mProperty_mSelector = in_mSelector ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterKind.isValid () && mProperty_mSelector.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST_2D_element::drop (void) {
  mProperty_mEffectiveParameterKind.drop () ;
  mProperty_mSelector.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEffectiveParameterKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ("effectiveArgumentListAST-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  const GALGAS_effectiveArgumentListAST_2D_element * p = (const GALGAS_effectiveArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_reference::GALGAS_objectIR_2D_reference (void) :
mProperty_type (),
mProperty_llvmName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_reference::~ GALGAS_objectIR_2D_reference (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_reference GALGAS_objectIR_2D_reference::init_21__21_ (const GALGAS_omnibusType & in_type,
                                                                         const GALGAS_string & in_llvmName,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_reference result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_reference::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_reference::GALGAS_objectIR_2D_reference (const GALGAS_omnibusType & inOperand0,
                                                            const GALGAS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_reference GALGAS_objectIR_2D_reference::class_func_new (const GALGAS_omnibusType & in_type,
                                                                           const GALGAS_string & in_llvmName,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_reference result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_reference::objectCompare (const GALGAS_objectIR_2D_reference & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_llvmName.objectCompare (inOperand.mProperty_llvmName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_reference::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_reference::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_reference::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-reference:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_llvmName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-reference generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_reference ("objectIR-reference",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_reference::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_reference ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_reference::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_reference (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_reference GALGAS_objectIR_2D_reference::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_reference result ;
  const GALGAS_objectIR_2D_reference * p = (const GALGAS_objectIR_2D_reference *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_reference *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-reference", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_reference_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_reference_3F_::GALGAS_objectIR_2D_reference_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_reference_3F_::GALGAS_objectIR_2D_reference_3F_ (const GALGAS_objectIR_2D_reference & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_reference_3F_ GALGAS_objectIR_2D_reference_3F_::init_nil (void) {
  GALGAS_objectIR_2D_reference_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_reference_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_reference_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_reference_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_reference () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_reference_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-reference? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_reference_3F_ ("objectIR-reference?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_reference_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_reference_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_reference_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_reference_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_reference_3F_ GALGAS_objectIR_2D_reference_3F_::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_reference_3F_ result ;
  const GALGAS_objectIR_2D_reference_3F_ * p = (const GALGAS_objectIR_2D_reference_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_reference_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-reference?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_null::GALGAS_objectIR_2D_null (void) :
mProperty_type () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_null::~ GALGAS_objectIR_2D_null (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_null GALGAS_objectIR_2D_null::init_21_ (const GALGAS_omnibusType & in_type,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_null result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_null::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_null::GALGAS_objectIR_2D_null (const GALGAS_omnibusType & inOperand0) :
mProperty_type (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_null GALGAS_objectIR_2D_null::class_func_new (const GALGAS_omnibusType & in_type,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_null result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_null::objectCompare (const GALGAS_objectIR_2D_null & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_null::isValid (void) const {
  return mProperty_type.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_null::drop (void) {
  mProperty_type.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_null::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-null:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-null generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_null ("objectIR-null",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_null::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_null ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_null::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_null (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_null GALGAS_objectIR_2D_null::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_null result ;
  const GALGAS_objectIR_2D_null * p = (const GALGAS_objectIR_2D_null *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_null *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-null", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_null_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_null_3F_::GALGAS_objectIR_2D_null_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_null_3F_::GALGAS_objectIR_2D_null_3F_ (const GALGAS_objectIR_2D_null & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_null_3F_ GALGAS_objectIR_2D_null_3F_::init_nil (void) {
  GALGAS_objectIR_2D_null_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_null_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_null_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_null_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_null () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_null_3F_::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-null? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_null_3F_ ("objectIR-null?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_null_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_null_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_null_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_null_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_null_3F_ GALGAS_objectIR_2D_null_3F_::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_null_3F_ result ;
  const GALGAS_objectIR_2D_null_3F_ * p = (const GALGAS_objectIR_2D_null_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_null_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-null?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue::GALGAS_objectIR_2D_llvmNamedValue (void) :
mProperty_type (),
mProperty_llvmName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue::~ GALGAS_objectIR_2D_llvmNamedValue (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue GALGAS_objectIR_2D_llvmNamedValue::init_21__21_ (const GALGAS_omnibusType & in_type,
                                                                                   const GALGAS_string & in_llvmName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmNamedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmNamedValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue::GALGAS_objectIR_2D_llvmNamedValue (const GALGAS_omnibusType & inOperand0,
                                                                      const GALGAS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue GALGAS_objectIR_2D_llvmNamedValue::class_func_new (const GALGAS_omnibusType & in_type,
                                                                                     const GALGAS_string & in_llvmName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmNamedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_llvmNamedValue::objectCompare (const GALGAS_objectIR_2D_llvmNamedValue & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_llvmName.objectCompare (inOperand.mProperty_llvmName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmNamedValue::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmNamedValue::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmNamedValue::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-llvmNamedValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_llvmName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmNamedValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmNamedValue ("objectIR-llvmNamedValue",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmNamedValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmNamedValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmNamedValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmNamedValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue GALGAS_objectIR_2D_llvmNamedValue::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmNamedValue result ;
  const GALGAS_objectIR_2D_llvmNamedValue * p = (const GALGAS_objectIR_2D_llvmNamedValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmNamedValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmNamedValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_llvmNamedValue_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue_3F_::GALGAS_objectIR_2D_llvmNamedValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue_3F_::GALGAS_objectIR_2D_llvmNamedValue_3F_ (const GALGAS_objectIR_2D_llvmNamedValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue_3F_ GALGAS_objectIR_2D_llvmNamedValue_3F_::init_nil (void) {
  GALGAS_objectIR_2D_llvmNamedValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmNamedValue_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmNamedValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmNamedValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_llvmNamedValue () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmNamedValue_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmNamedValue? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmNamedValue_3F_ ("objectIR-llvmNamedValue?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmNamedValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmNamedValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmNamedValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmNamedValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmNamedValue_3F_ GALGAS_objectIR_2D_llvmNamedValue_3F_::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmNamedValue_3F_ result ;
  const GALGAS_objectIR_2D_llvmNamedValue_3F_ * p = (const GALGAS_objectIR_2D_llvmNamedValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmNamedValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmNamedValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger::GALGAS_objectIR_2D_literalInteger (void) :
mProperty_type (),
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger::~ GALGAS_objectIR_2D_literalInteger (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger GALGAS_objectIR_2D_literalInteger::init_21__21_ (const GALGAS_omnibusType & in_type,
                                                                                   const GALGAS_bigint & in_value,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_literalInteger result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_literalInteger::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger::GALGAS_objectIR_2D_literalInteger (const GALGAS_omnibusType & inOperand0,
                                                                      const GALGAS_bigint & inOperand1) :
mProperty_type (inOperand0),
mProperty_value (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger GALGAS_objectIR_2D_literalInteger::class_func_new (const GALGAS_omnibusType & in_type,
                                                                                     const GALGAS_bigint & in_value,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_literalInteger result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_literalInteger::objectCompare (const GALGAS_objectIR_2D_literalInteger & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_value.objectCompare (inOperand.mProperty_value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_literalInteger::isValid (void) const {
  return mProperty_type.isValid () && mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_literalInteger::drop (void) {
  mProperty_type.drop () ;
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_literalInteger::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-literalInteger:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-literalInteger generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_literalInteger ("objectIR-literalInteger",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_literalInteger::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_literalInteger ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_literalInteger::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_literalInteger (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger GALGAS_objectIR_2D_literalInteger::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_literalInteger result ;
  const GALGAS_objectIR_2D_literalInteger * p = (const GALGAS_objectIR_2D_literalInteger *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_literalInteger *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-literalInteger", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_literalInteger_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger_3F_::GALGAS_objectIR_2D_literalInteger_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger_3F_::GALGAS_objectIR_2D_literalInteger_3F_ (const GALGAS_objectIR_2D_literalInteger & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger_3F_ GALGAS_objectIR_2D_literalInteger_3F_::init_nil (void) {
  GALGAS_objectIR_2D_literalInteger_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_literalInteger_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_literalInteger_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_literalInteger_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_literalInteger () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_literalInteger_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-literalInteger? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_literalInteger_3F_ ("objectIR-literalInteger?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_literalInteger_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_literalInteger_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_literalInteger_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_literalInteger_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_literalInteger_3F_ GALGAS_objectIR_2D_literalInteger_3F_::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_literalInteger_3F_ result ;
  const GALGAS_objectIR_2D_literalInteger_3F_ * p = (const GALGAS_objectIR_2D_literalInteger_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_literalInteger_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-literalInteger?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue::GALGAS_objectIR_2D_llvmStructureValue (void) :
mProperty_type (),
mProperty_values () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue::~ GALGAS_objectIR_2D_llvmStructureValue (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue GALGAS_objectIR_2D_llvmStructureValue::init_21__21_ (const GALGAS_omnibusType & in_type,
                                                                                           const GALGAS_sortedOperandIRList & in_values,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmStructureValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmStructureValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue::GALGAS_objectIR_2D_llvmStructureValue (const GALGAS_omnibusType & inOperand0,
                                                                              const GALGAS_sortedOperandIRList & inOperand1) :
mProperty_type (inOperand0),
mProperty_values (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue GALGAS_objectIR_2D_llvmStructureValue::class_func_new (const GALGAS_omnibusType & in_type,
                                                                                             const GALGAS_sortedOperandIRList & in_values,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmStructureValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_llvmStructureValue::objectCompare (const GALGAS_objectIR_2D_llvmStructureValue & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_values.objectCompare (inOperand.mProperty_values) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmStructureValue::isValid (void) const {
  return mProperty_type.isValid () && mProperty_values.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmStructureValue::drop (void) {
  mProperty_type.drop () ;
  mProperty_values.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmStructureValue::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-llvmStructureValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_values.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmStructureValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmStructureValue ("objectIR-llvmStructureValue",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmStructureValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmStructureValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmStructureValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmStructureValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue GALGAS_objectIR_2D_llvmStructureValue::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmStructureValue result ;
  const GALGAS_objectIR_2D_llvmStructureValue * p = (const GALGAS_objectIR_2D_llvmStructureValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmStructureValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmStructureValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_llvmStructureValue_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue_3F_::GALGAS_objectIR_2D_llvmStructureValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue_3F_::GALGAS_objectIR_2D_llvmStructureValue_3F_ (const GALGAS_objectIR_2D_llvmStructureValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue_3F_ GALGAS_objectIR_2D_llvmStructureValue_3F_::init_nil (void) {
  GALGAS_objectIR_2D_llvmStructureValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmStructureValue_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmStructureValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmStructureValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_llvmStructureValue () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmStructureValue_3F_::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmStructureValue? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmStructureValue_3F_ ("objectIR-llvmStructureValue?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmStructureValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmStructureValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmStructureValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmStructureValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmStructureValue_3F_ GALGAS_objectIR_2D_llvmStructureValue_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmStructureValue_3F_ result ;
  const GALGAS_objectIR_2D_llvmStructureValue_3F_ * p = (const GALGAS_objectIR_2D_llvmStructureValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmStructureValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmStructureValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_zero::GALGAS_objectIR_2D_zero (void) :
mProperty_type () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_zero::~ GALGAS_objectIR_2D_zero (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_zero GALGAS_objectIR_2D_zero::init_21_ (const GALGAS_omnibusType & in_type,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_zero result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_zero::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_zero::GALGAS_objectIR_2D_zero (const GALGAS_omnibusType & inOperand0) :
mProperty_type (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_zero GALGAS_objectIR_2D_zero::class_func_new (const GALGAS_omnibusType & in_type,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_zero result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_zero::objectCompare (const GALGAS_objectIR_2D_zero & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_zero::isValid (void) const {
  return mProperty_type.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_zero::drop (void) {
  mProperty_type.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_zero::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-zero:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-zero generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_zero ("objectIR-zero",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_zero::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_zero ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_zero::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_zero (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_zero GALGAS_objectIR_2D_zero::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_zero result ;
  const GALGAS_objectIR_2D_zero * p = (const GALGAS_objectIR_2D_zero *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_zero *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-zero", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_zero_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_zero_3F_::GALGAS_objectIR_2D_zero_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_zero_3F_::GALGAS_objectIR_2D_zero_3F_ (const GALGAS_objectIR_2D_zero & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_zero_3F_ GALGAS_objectIR_2D_zero_3F_::init_nil (void) {
  GALGAS_objectIR_2D_zero_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_zero_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_zero_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_zero_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_zero () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_zero_3F_::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-zero? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_zero_3F_ ("objectIR-zero?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_zero_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_zero_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_zero_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_zero_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_zero_3F_ GALGAS_objectIR_2D_zero_3F_::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_zero_3F_ result ;
  const GALGAS_objectIR_2D_zero_3F_ * p = (const GALGAS_objectIR_2D_zero_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_zero_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-zero?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues::GALGAS_objectIR_2D_llvmArrayStaticValues (void) :
mProperty_type (),
mProperty_values (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues::~ GALGAS_objectIR_2D_llvmArrayStaticValues (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues GALGAS_objectIR_2D_llvmArrayStaticValues::init_21__21__21_ (const GALGAS_omnibusType & in_type,
                                                                                                     const GALGAS_operandIRList & in_values,
                                                                                                     const GALGAS_uint & in_index,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayStaticValues result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayStaticValues::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues::GALGAS_objectIR_2D_llvmArrayStaticValues (const GALGAS_omnibusType & inOperand0,
                                                                                    const GALGAS_operandIRList & inOperand1,
                                                                                    const GALGAS_uint & inOperand2) :
mProperty_type (inOperand0),
mProperty_values (inOperand1),
mProperty_index (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues GALGAS_objectIR_2D_llvmArrayStaticValues::class_func_new (const GALGAS_omnibusType & in_type,
                                                                                                   const GALGAS_operandIRList & in_values,
                                                                                                   const GALGAS_uint & in_index,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayStaticValues result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_llvmArrayStaticValues::objectCompare (const GALGAS_objectIR_2D_llvmArrayStaticValues & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_values.objectCompare (inOperand.mProperty_values) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_index.objectCompare (inOperand.mProperty_index) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayStaticValues::isValid (void) const {
  return mProperty_type.isValid () && mProperty_values.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayStaticValues::drop (void) {
  mProperty_type.drop () ;
  mProperty_values.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayStaticValues::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-llvmArrayStaticValues:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_values.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_index.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmArrayStaticValues generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayStaticValues ("objectIR-llvmArrayStaticValues",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmArrayStaticValues::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayStaticValues ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmArrayStaticValues::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmArrayStaticValues (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues GALGAS_objectIR_2D_llvmArrayStaticValues::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayStaticValues result ;
  const GALGAS_objectIR_2D_llvmArrayStaticValues * p = (const GALGAS_objectIR_2D_llvmArrayStaticValues *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmArrayStaticValues *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmArrayStaticValues", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_llvmArrayStaticValues_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ (const GALGAS_objectIR_2D_llvmArrayStaticValues & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::init_nil (void) {
  GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_llvmArrayStaticValues () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmArrayStaticValues? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ ("objectIR-llvmArrayStaticValues?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ GALGAS_objectIR_2D_llvmArrayStaticValues_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ result ;
  const GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ * p = (const GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmArrayStaticValues_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmArrayStaticValues?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues::GALGAS_objectIR_2D_llvmArrayDynamicValues (void) :
mProperty_type (),
mProperty_values () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues::~ GALGAS_objectIR_2D_llvmArrayDynamicValues (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues GALGAS_objectIR_2D_llvmArrayDynamicValues::init_21__21_ (const GALGAS_omnibusType & in_type,
                                                                                                   const GALGAS_operandIRList & in_values,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayDynamicValues result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayDynamicValues::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues::GALGAS_objectIR_2D_llvmArrayDynamicValues (const GALGAS_omnibusType & inOperand0,
                                                                                      const GALGAS_operandIRList & inOperand1) :
mProperty_type (inOperand0),
mProperty_values (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues GALGAS_objectIR_2D_llvmArrayDynamicValues::class_func_new (const GALGAS_omnibusType & in_type,
                                                                                                     const GALGAS_operandIRList & in_values,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayDynamicValues result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_llvmArrayDynamicValues::objectCompare (const GALGAS_objectIR_2D_llvmArrayDynamicValues & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_values.objectCompare (inOperand.mProperty_values) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayDynamicValues::isValid (void) const {
  return mProperty_type.isValid () && mProperty_values.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayDynamicValues::drop (void) {
  mProperty_type.drop () ;
  mProperty_values.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayDynamicValues::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-llvmArrayDynamicValues:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_values.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmArrayDynamicValues generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayDynamicValues ("objectIR-llvmArrayDynamicValues",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmArrayDynamicValues::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayDynamicValues ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmArrayDynamicValues::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmArrayDynamicValues (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues GALGAS_objectIR_2D_llvmArrayDynamicValues::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayDynamicValues result ;
  const GALGAS_objectIR_2D_llvmArrayDynamicValues * p = (const GALGAS_objectIR_2D_llvmArrayDynamicValues *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmArrayDynamicValues *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmArrayDynamicValues", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_llvmArrayDynamicValues_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ (const GALGAS_objectIR_2D_llvmArrayDynamicValues & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::init_nil (void) {
  GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_llvmArrayDynamicValues () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmArrayDynamicValues? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ ("objectIR-llvmArrayDynamicValues?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ result ;
  const GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ * p = (const GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmArrayDynamicValues_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmArrayDynamicValues?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue (void) :
mProperty_type (),
mProperty_arraySize (),
mProperty_value (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::~ GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::init_21__21__21__21_ (const GALGAS_omnibusType & in_type,
                                                                                                                       const GALGAS_uint & in_arraySize,
                                                                                                                       const GALGAS_objectIR & in_value,
                                                                                                                       const GALGAS_uint & in_index,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_value = in_value ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue (const GALGAS_omnibusType & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                  const GALGAS_objectIR & inOperand2,
                                                                                                  const GALGAS_uint & inOperand3) :
mProperty_type (inOperand0),
mProperty_arraySize (inOperand1),
mProperty_value (inOperand2),
mProperty_index (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::class_func_new (const GALGAS_omnibusType & in_type,
                                                                                                                 const GALGAS_uint & in_arraySize,
                                                                                                                 const GALGAS_objectIR & in_value,
                                                                                                                 const GALGAS_uint & in_index,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_value = in_value ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::objectCompare (const GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_arraySize.objectCompare (inOperand.mProperty_arraySize) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_value.objectCompare (inOperand.mProperty_value) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_index.objectCompare (inOperand.mProperty_index) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::isValid (void) const {
  return mProperty_type.isValid () && mProperty_arraySize.isValid () && mProperty_value.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::drop (void) {
  mProperty_type.drop () ;
  mProperty_arraySize.drop () ;
  mProperty_value.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-llvmArrayRepeatedStaticValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_arraySize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_value.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_index.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmArrayRepeatedStaticValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue ("objectIR-llvmArrayRepeatedStaticValue",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue result ;
  const GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue * p = (const GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmArrayRepeatedStaticValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_llvmArrayRepeatedStaticValue_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ (const GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::init_nil (void) {
  GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmArrayRepeatedStaticValue? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ ("objectIR-llvmArrayRepeatedStaticValue?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ result ;
  const GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ * p = (const GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmArrayRepeatedStaticValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmArrayRepeatedStaticValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue (void) :
mProperty_type (),
mProperty_arraySize (),
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::~ GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::init_21__21__21_ (const GALGAS_omnibusType & in_type,
                                                                                                                     const GALGAS_uint & in_arraySize,
                                                                                                                     const GALGAS_objectIR & in_value,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue (const GALGAS_omnibusType & inOperand0,
                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                    const GALGAS_objectIR & inOperand2) :
mProperty_type (inOperand0),
mProperty_arraySize (inOperand1),
mProperty_value (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::class_func_new (const GALGAS_omnibusType & in_type,
                                                                                                                   const GALGAS_uint & in_arraySize,
                                                                                                                   const GALGAS_objectIR & in_value,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::objectCompare (const GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_arraySize.objectCompare (inOperand.mProperty_arraySize) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_value.objectCompare (inOperand.mProperty_value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::isValid (void) const {
  return mProperty_type.isValid () && mProperty_arraySize.isValid () && mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::drop (void) {
  mProperty_type.drop () ;
  mProperty_arraySize.drop () ;
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR-llvmArrayRepeatedDynamicValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_arraySize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmArrayRepeatedDynamicValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue ("objectIR-llvmArrayRepeatedDynamicValue",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue result ;
  const GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue * p = (const GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmArrayRepeatedDynamicValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @objectIR_2D_llvmArrayRepeatedDynamicValue_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ (const GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::init_nil (void) {
  GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR-llvmArrayRepeatedDynamicValue? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ ("objectIR-llvmArrayRepeatedDynamicValue?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ result ;
  const GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ * p = (const GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR_2D_llvmArrayRepeatedDynamicValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR-llvmArrayRepeatedDynamicValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element::GALGAS_controlRegisterGroupArrayList_2D_element (void) :
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element::~ GALGAS_controlRegisterGroupArrayList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::init_21__21_ (const GALGAS_lstring & in_mGroupName,
                                                                                                               const GALGAS_lbigintlist & in_mBaseAddresses,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mBaseAddresses = in_mBaseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element::GALGAS_controlRegisterGroupArrayList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lbigintlist & inOperand1) :
mProperty_mGroupName (inOperand0),
mProperty_mBaseAddresses (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::class_func_new (const GALGAS_lstring & in_mGroupName,
                                                                                                                 const GALGAS_lbigintlist & in_mBaseAddresses,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mBaseAddresses = in_mBaseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupArrayList_2D_element::isValid (void) const {
  return mProperty_mGroupName.isValid () && mProperty_mBaseAddresses.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList_2D_element::drop (void) {
  mProperty_mGroupName.drop () ;
  mProperty_mBaseAddresses.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterGroupArrayList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBaseAddresses.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupArrayList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ("controlRegisterGroupArrayList-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupArrayList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupArrayList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupArrayList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList_2D_element result ;
  const GALGAS_controlRegisterGroupArrayList_2D_element * p = (const GALGAS_controlRegisterGroupArrayList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupArrayList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element::GALGAS_routineListIR_2D_element (void) :
mProperty_mRoutine () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element::~ GALGAS_routineListIR_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineListIR_2D_element GALGAS_routineListIR_2D_element::init_21_ (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineListIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutine = in_mRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element::GALGAS_routineListIR_2D_element (const GALGAS_abstractRoutineIR & inOperand0) :
mProperty_mRoutine (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element GALGAS_routineListIR_2D_element::class_func_new (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineListIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutine = in_mRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineListIR_2D_element::isValid (void) const {
  return mProperty_mRoutine.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR_2D_element::drop (void) {
  mProperty_mRoutine.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineListIR-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutine.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineListIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR_2D_element ("routineListIR-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineListIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineListIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element GALGAS_routineListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR_2D_element result ;
  const GALGAS_routineListIR_2D_element * p = (const GALGAS_routineListIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element::GALGAS_routineAccessibilityIR_2D_element (void) :
mProperty_mRoutine (),
mProperty_mAccessibleRoutineSet () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element::~ GALGAS_routineAccessibilityIR_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element GALGAS_routineAccessibilityIR_2D_element::init_21__21_ (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                                                                 const GALGAS_stringset & in_mAccessibleRoutineSet,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutine = in_mRoutine ;
  result.mProperty_mAccessibleRoutineSet = in_mAccessibleRoutineSet ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element::GALGAS_routineAccessibilityIR_2D_element (const GALGAS_abstractRoutineIR & inOperand0,
                                                                                    const GALGAS_stringset & inOperand1) :
mProperty_mRoutine (inOperand0),
mProperty_mAccessibleRoutineSet (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element GALGAS_routineAccessibilityIR_2D_element::class_func_new (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                                                                   const GALGAS_stringset & in_mAccessibleRoutineSet,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutine = in_mRoutine ;
  result.mProperty_mAccessibleRoutineSet = in_mAccessibleRoutineSet ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineAccessibilityIR_2D_element::isValid (void) const {
  return mProperty_mRoutine.isValid () && mProperty_mAccessibleRoutineSet.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR_2D_element::drop (void) {
  mProperty_mRoutine.drop () ;
  mProperty_mAccessibleRoutineSet.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineAccessibilityIR-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutine.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAccessibleRoutineSet.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineAccessibilityIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ("routineAccessibilityIR-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineAccessibilityIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineAccessibilityIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineAccessibilityIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element GALGAS_routineAccessibilityIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR_2D_element result ;
  const GALGAS_routineAccessibilityIR_2D_element * p = (const GALGAS_routineAccessibilityIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineAccessibilityIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAccessibilityIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element::GALGAS_ctCheckMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element::~ GALGAS_ctCheckMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element GALGAS_ctCheckMap_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctCheckMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element::GALGAS_ctCheckMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element GALGAS_ctCheckMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctCheckMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ctCheckMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap_2D_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ctCheckMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctCheckMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctCheckMap_2D_element ("ctCheckMap-element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctCheckMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctCheckMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctCheckMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element GALGAS_ctCheckMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctCheckMap_2D_element result ;
  const GALGAS_ctCheckMap_2D_element * p = (const GALGAS_ctCheckMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctCheckMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctCheckMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @ctCheckMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element_3F_::GALGAS_ctCheckMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element_3F_::GALGAS_ctCheckMap_2D_element_3F_ (const GALGAS_ctCheckMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element_3F_ GALGAS_ctCheckMap_2D_element_3F_::init_nil (void) {
  GALGAS_ctCheckMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ctCheckMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ctCheckMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_ctCheckMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap_2D_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctCheckMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctCheckMap_2D_element_3F_ ("ctCheckMap-element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctCheckMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctCheckMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctCheckMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element_3F_ GALGAS_ctCheckMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ctCheckMap_2D_element_3F_ result ;
  const GALGAS_ctCheckMap_2D_element_3F_ * p = (const GALGAS_ctCheckMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctCheckMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctCheckMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element::GALGAS_ctMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element::~ GALGAS_ctMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ctMap_2D_element GALGAS_ctMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                               const GALGAS_bigint & in_mValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element::GALGAS_ctMap_2D_element (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_bigint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element GALGAS_ctMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                 const GALGAS_bigint & in_mValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ctMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap_2D_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ctMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctMap_2D_element ("ctMap-element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element GALGAS_ctMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ctMap_2D_element result ;
  const GALGAS_ctMap_2D_element * p = (const GALGAS_ctMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @ctMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element_3F_::GALGAS_ctMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element_3F_::GALGAS_ctMap_2D_element_3F_ (const GALGAS_ctMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element_3F_ GALGAS_ctMap_2D_element_3F_::init_nil (void) {
  GALGAS_ctMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ctMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ctMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_ctMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap_2D_element_3F_::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctMap_2D_element_3F_ ("ctMap-element?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element_3F_ GALGAS_ctMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ctMap_2D_element_3F_ result ;
  const GALGAS_ctMap_2D_element_3F_ * p = (const GALGAS_ctMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant::GALGAS_genericFormalParameter_2D_constant (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant::~ GALGAS_genericFormalParameter_2D_constant (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant GALGAS_genericFormalParameter_2D_constant::init_21_ (const GALGAS_lstring & in_name,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericFormalParameter_2D_constant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_constant::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant::GALGAS_genericFormalParameter_2D_constant (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant GALGAS_genericFormalParameter_2D_constant::class_func_new (const GALGAS_lstring & in_name,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericFormalParameter_2D_constant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_genericFormalParameter_2D_constant::objectCompare (const GALGAS_genericFormalParameter_2D_constant & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_genericFormalParameter_2D_constant::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_constant::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_constant::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericFormalParameter-constant:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @genericFormalParameter-constant generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameter_2D_constant ("genericFormalParameter-constant",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericFormalParameter_2D_constant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter_2D_constant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericFormalParameter_2D_constant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericFormalParameter_2D_constant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant GALGAS_genericFormalParameter_2D_constant::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameter_2D_constant result ;
  const GALGAS_genericFormalParameter_2D_constant * p = (const GALGAS_genericFormalParameter_2D_constant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericFormalParameter_2D_constant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter-constant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @genericFormalParameter_2D_constant_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant_3F_::GALGAS_genericFormalParameter_2D_constant_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant_3F_::GALGAS_genericFormalParameter_2D_constant_3F_ (const GALGAS_genericFormalParameter_2D_constant & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant_3F_ GALGAS_genericFormalParameter_2D_constant_3F_::init_nil (void) {
  GALGAS_genericFormalParameter_2D_constant_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_genericFormalParameter_2D_constant_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_genericFormalParameter_2D_constant_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_constant_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_genericFormalParameter_2D_constant () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_constant_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @genericFormalParameter-constant? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameter_2D_constant_3F_ ("genericFormalParameter-constant?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericFormalParameter_2D_constant_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter_2D_constant_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericFormalParameter_2D_constant_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericFormalParameter_2D_constant_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant_3F_ GALGAS_genericFormalParameter_2D_constant_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameter_2D_constant_3F_ result ;
  const GALGAS_genericFormalParameter_2D_constant_3F_ * p = (const GALGAS_genericFormalParameter_2D_constant_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericFormalParameter_2D_constant_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter-constant?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type::GALGAS_genericFormalParameter_2D_type (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type::~ GALGAS_genericFormalParameter_2D_type (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type GALGAS_genericFormalParameter_2D_type::init_21_ (const GALGAS_lstring & in_name,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericFormalParameter_2D_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_type::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type::GALGAS_genericFormalParameter_2D_type (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type GALGAS_genericFormalParameter_2D_type::class_func_new (const GALGAS_lstring & in_name,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericFormalParameter_2D_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_genericFormalParameter_2D_type::objectCompare (const GALGAS_genericFormalParameter_2D_type & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_genericFormalParameter_2D_type::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_type::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_type::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericFormalParameter-type:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @genericFormalParameter-type generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameter_2D_type ("genericFormalParameter-type",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericFormalParameter_2D_type::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter_2D_type ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericFormalParameter_2D_type::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericFormalParameter_2D_type (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type GALGAS_genericFormalParameter_2D_type::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameter_2D_type result ;
  const GALGAS_genericFormalParameter_2D_type * p = (const GALGAS_genericFormalParameter_2D_type *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericFormalParameter_2D_type *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter-type", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @genericFormalParameter_2D_type_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type_3F_::GALGAS_genericFormalParameter_2D_type_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type_3F_::GALGAS_genericFormalParameter_2D_type_3F_ (const GALGAS_genericFormalParameter_2D_type & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type_3F_ GALGAS_genericFormalParameter_2D_type_3F_::init_nil (void) {
  GALGAS_genericFormalParameter_2D_type_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_genericFormalParameter_2D_type_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_genericFormalParameter_2D_type_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_type_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_genericFormalParameter_2D_type () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter_2D_type_3F_::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @genericFormalParameter-type? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameter_2D_type_3F_ ("genericFormalParameter-type?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericFormalParameter_2D_type_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter_2D_type_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericFormalParameter_2D_type_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericFormalParameter_2D_type_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type_3F_ GALGAS_genericFormalParameter_2D_type_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameter_2D_type_3F_ result ;
  const GALGAS_genericFormalParameter_2D_type_3F_ * p = (const GALGAS_genericFormalParameter_2D_type_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericFormalParameter_2D_type_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter-type?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable::GALGAS_llvmStringDefinitionElement_2D_variable (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable::~ GALGAS_llvmStringDefinitionElement_2D_variable (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable GALGAS_llvmStringDefinitionElement_2D_variable::init_21_ (const GALGAS_lstring & in_name,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement_2D_variable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_variable::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable::GALGAS_llvmStringDefinitionElement_2D_variable (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable GALGAS_llvmStringDefinitionElement_2D_variable::class_func_new (const GALGAS_lstring & in_name,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement_2D_variable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmStringDefinitionElement_2D_variable::objectCompare (const GALGAS_llvmStringDefinitionElement_2D_variable & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmStringDefinitionElement_2D_variable::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_variable::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_variable::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmStringDefinitionElement-variable:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmStringDefinitionElement-variable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2D_variable ("llvmStringDefinitionElement-variable",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmStringDefinitionElement_2D_variable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2D_variable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmStringDefinitionElement_2D_variable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmStringDefinitionElement_2D_variable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable GALGAS_llvmStringDefinitionElement_2D_variable::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement_2D_variable result ;
  const GALGAS_llvmStringDefinitionElement_2D_variable * p = (const GALGAS_llvmStringDefinitionElement_2D_variable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmStringDefinitionElement_2D_variable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement-variable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @llvmStringDefinitionElement_2D_variable_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable_3F_::GALGAS_llvmStringDefinitionElement_2D_variable_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable_3F_::GALGAS_llvmStringDefinitionElement_2D_variable_3F_ (const GALGAS_llvmStringDefinitionElement_2D_variable & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable_3F_ GALGAS_llvmStringDefinitionElement_2D_variable_3F_::init_nil (void) {
  GALGAS_llvmStringDefinitionElement_2D_variable_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmStringDefinitionElement_2D_variable_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmStringDefinitionElement_2D_variable_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_variable_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_llvmStringDefinitionElement_2D_variable () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_variable_3F_::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmStringDefinitionElement-variable? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2D_variable_3F_ ("llvmStringDefinitionElement-variable?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmStringDefinitionElement_2D_variable_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2D_variable_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmStringDefinitionElement_2D_variable_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmStringDefinitionElement_2D_variable_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable_3F_ GALGAS_llvmStringDefinitionElement_2D_variable_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement_2D_variable_3F_ result ;
  const GALGAS_llvmStringDefinitionElement_2D_variable_3F_ * p = (const GALGAS_llvmStringDefinitionElement_2D_variable_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmStringDefinitionElement_2D_variable_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement-variable?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string::GALGAS_llvmStringDefinitionElement_2D_string (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string::~ GALGAS_llvmStringDefinitionElement_2D_string (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string GALGAS_llvmStringDefinitionElement_2D_string::init_21_ (const GALGAS_lstring & in_value,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement_2D_string result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_string::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string::GALGAS_llvmStringDefinitionElement_2D_string (const GALGAS_lstring & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string GALGAS_llvmStringDefinitionElement_2D_string::class_func_new (const GALGAS_lstring & in_value,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement_2D_string result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmStringDefinitionElement_2D_string::objectCompare (const GALGAS_llvmStringDefinitionElement_2D_string & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_value.objectCompare (inOperand.mProperty_value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmStringDefinitionElement_2D_string::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_string::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_string::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmStringDefinitionElement-string:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmStringDefinitionElement-string generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2D_string ("llvmStringDefinitionElement-string",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmStringDefinitionElement_2D_string::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2D_string ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmStringDefinitionElement_2D_string::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmStringDefinitionElement_2D_string (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string GALGAS_llvmStringDefinitionElement_2D_string::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement_2D_string result ;
  const GALGAS_llvmStringDefinitionElement_2D_string * p = (const GALGAS_llvmStringDefinitionElement_2D_string *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmStringDefinitionElement_2D_string *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement-string", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @llvmStringDefinitionElement_2D_string_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string_3F_::GALGAS_llvmStringDefinitionElement_2D_string_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string_3F_::GALGAS_llvmStringDefinitionElement_2D_string_3F_ (const GALGAS_llvmStringDefinitionElement_2D_string & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string_3F_ GALGAS_llvmStringDefinitionElement_2D_string_3F_::init_nil (void) {
  GALGAS_llvmStringDefinitionElement_2D_string_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmStringDefinitionElement_2D_string_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmStringDefinitionElement_2D_string_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_string_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_llvmStringDefinitionElement_2D_string () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement_2D_string_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmStringDefinitionElement-string? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2D_string_3F_ ("llvmStringDefinitionElement-string?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmStringDefinitionElement_2D_string_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2D_string_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmStringDefinitionElement_2D_string_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmStringDefinitionElement_2D_string_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string_3F_ GALGAS_llvmStringDefinitionElement_2D_string_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement_2D_string_3F_ result ;
  const GALGAS_llvmStringDefinitionElement_2D_string_3F_ * p = (const GALGAS_llvmStringDefinitionElement_2D_string_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmStringDefinitionElement_2D_string_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement-string?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element::GALGAS_assignmentOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element::~ GALGAS_assignmentOperatorMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element GALGAS_assignmentOperatorMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOperatorUsage = in_mOperatorUsage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element::GALGAS_assignmentOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_abstractAssignmentOperatorUsage & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mOperatorUsage (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element GALGAS_assignmentOperatorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOperatorUsage = in_mOperatorUsage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_assignmentOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOperatorUsage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @assignmentOperatorMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOperatorUsage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentOperatorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ("assignmentOperatorMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element GALGAS_assignmentOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element result ;
  const GALGAS_assignmentOperatorMap_2D_element * p = (const GALGAS_assignmentOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @assignmentOperatorMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element_3F_::GALGAS_assignmentOperatorMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element_3F_::GALGAS_assignmentOperatorMap_2D_element_3F_ (const GALGAS_assignmentOperatorMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element_3F_ GALGAS_assignmentOperatorMap_2D_element_3F_::init_nil (void) {
  GALGAS_assignmentOperatorMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_assignmentOperatorMap_2D_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_assignmentOperatorMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_assignmentOperatorMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap_2D_element_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentOperatorMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element_3F_ ("assignmentOperatorMap-element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentOperatorMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentOperatorMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentOperatorMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element_3F_ GALGAS_assignmentOperatorMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element_3F_ result ;
  const GALGAS_assignmentOperatorMap_2D_element_3F_ * p = (const GALGAS_assignmentOperatorMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentOperatorMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol::GALGAS_llvmGenerationInstructionElement_2D_symbol (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol::~ GALGAS_llvmGenerationInstructionElement_2D_symbol (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol GALGAS_llvmGenerationInstructionElement_2D_symbol::init_21_ (const GALGAS_lstring & in_name,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement_2D_symbol result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_symbol::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol::GALGAS_llvmGenerationInstructionElement_2D_symbol (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol GALGAS_llvmGenerationInstructionElement_2D_symbol::class_func_new (const GALGAS_lstring & in_name,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement_2D_symbol result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmGenerationInstructionElement_2D_symbol::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_symbol::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_symbol::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmGenerationInstructionElement-symbol:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionElement-symbol generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2D_symbol ("llvmGenerationInstructionElement-symbol",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstructionElement_2D_symbol::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2D_symbol ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstructionElement_2D_symbol::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstructionElement_2D_symbol (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol GALGAS_llvmGenerationInstructionElement_2D_symbol::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement_2D_symbol result ;
  const GALGAS_llvmGenerationInstructionElement_2D_symbol * p = (const GALGAS_llvmGenerationInstructionElement_2D_symbol *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenerationInstructionElement_2D_symbol *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement-symbol", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @llvmGenerationInstructionElement_2D_symbol_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ (const GALGAS_llvmGenerationInstructionElement_2D_symbol & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::init_nil (void) {
  GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_llvmGenerationInstructionElement_2D_symbol () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionElement-symbol? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ ("llvmGenerationInstructionElement-symbol?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ result ;
  const GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ * p = (const GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement-symbol?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type::GALGAS_llvmGenerationInstructionElement_2D_type (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type::~ GALGAS_llvmGenerationInstructionElement_2D_type (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type GALGAS_llvmGenerationInstructionElement_2D_type::init_21_ (const GALGAS_lstring & in_name,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement_2D_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_type::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type::GALGAS_llvmGenerationInstructionElement_2D_type (const GALGAS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type GALGAS_llvmGenerationInstructionElement_2D_type::class_func_new (const GALGAS_lstring & in_name,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement_2D_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmGenerationInstructionElement_2D_type::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_type::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_type::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmGenerationInstructionElement-type:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionElement-type generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2D_type ("llvmGenerationInstructionElement-type",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstructionElement_2D_type::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2D_type ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstructionElement_2D_type::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstructionElement_2D_type (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type GALGAS_llvmGenerationInstructionElement_2D_type::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement_2D_type result ;
  const GALGAS_llvmGenerationInstructionElement_2D_type * p = (const GALGAS_llvmGenerationInstructionElement_2D_type *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenerationInstructionElement_2D_type *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement-type", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @llvmGenerationInstructionElement_2D_type_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type_3F_::GALGAS_llvmGenerationInstructionElement_2D_type_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type_3F_::GALGAS_llvmGenerationInstructionElement_2D_type_3F_ (const GALGAS_llvmGenerationInstructionElement_2D_type & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type_3F_ GALGAS_llvmGenerationInstructionElement_2D_type_3F_::init_nil (void) {
  GALGAS_llvmGenerationInstructionElement_2D_type_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmGenerationInstructionElement_2D_type_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_llvmGenerationInstructionElement_2D_type_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_type_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_llvmGenerationInstructionElement_2D_type () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement_2D_type_3F_::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionElement-type? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2D_type_3F_ ("llvmGenerationInstructionElement-type?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstructionElement_2D_type_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2D_type_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstructionElement_2D_type_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstructionElement_2D_type_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type_3F_ GALGAS_llvmGenerationInstructionElement_2D_type_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement_2D_type_3F_ result ;
  const GALGAS_llvmGenerationInstructionElement_2D_type_3F_ * p = (const GALGAS_llvmGenerationInstructionElement_2D_type_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenerationInstructionElement_2D_type_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement-type?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element::GALGAS_assignmentGenerationVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element::~ GALGAS_assignmentGenerationVarMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_string & in_mValue,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element::GALGAS_assignmentGenerationVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                           const GALGAS_string & in_mValue,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_assignmentGenerationVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @assignmentGenerationVarMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentGenerationVarMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ("assignmentGenerationVarMap-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentGenerationVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentGenerationVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentGenerationVarMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap_2D_element result ;
  const GALGAS_assignmentGenerationVarMap_2D_element * p = (const GALGAS_assignmentGenerationVarMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentGenerationVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

