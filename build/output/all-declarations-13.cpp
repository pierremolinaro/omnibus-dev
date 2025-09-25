#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element::GGS_propertyList_2E_element (void) :
mProperty_mPropertyName (),
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element::GGS_propertyList_2E_element (const GGS_propertyList_2E_element & inSource) :
mProperty_mPropertyName (inSource.mProperty_mPropertyName),
mProperty_mType (inSource.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element & GGS_propertyList_2E_element::operator = (const GGS_propertyList_2E_element & inSource) {
  mProperty_mPropertyName = inSource.mProperty_mPropertyName ;
  mProperty_mType = inSource.mProperty_mType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyList_2E_element GGS_propertyList_2E_element::init_21__21_ (const GGS_string & in_mPropertyName,
                                                                       const GGS_omnibusType & in_mType,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element::GGS_propertyList_2E_element (const GGS_string & inOperand0,
                                                          const GGS_omnibusType & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element GGS_propertyList_2E_element::class_func_new (const GGS_string & in_mPropertyName,
                                                                         const GGS_omnibusType & in_mType,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyList_2E_element::objectCompare (const GGS_propertyList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyList_2E_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList_2E_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyList_2E_element ("propertyList.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element GGS_propertyList_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_propertyList_2E_element result ;
  const GGS_propertyList_2E_element * p = (const GGS_propertyList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element::GGS_controlRegisterNameListAST_2E_element (void) :
mProperty_mRegisterName (),
mProperty_mControlRegisterKind (),
mProperty_mIsReadOnly (),
mProperty_mRegisterOffset (),
mProperty_mRegisterOffsetLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element::GGS_controlRegisterNameListAST_2E_element (const GGS_controlRegisterNameListAST_2E_element & inSource) :
mProperty_mRegisterName (inSource.mProperty_mRegisterName),
mProperty_mControlRegisterKind (inSource.mProperty_mControlRegisterKind),
mProperty_mIsReadOnly (inSource.mProperty_mIsReadOnly),
mProperty_mRegisterOffset (inSource.mProperty_mRegisterOffset),
mProperty_mRegisterOffsetLocation (inSource.mProperty_mRegisterOffsetLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element & GGS_controlRegisterNameListAST_2E_element::operator = (const GGS_controlRegisterNameListAST_2E_element & inSource) {
  mProperty_mRegisterName = inSource.mProperty_mRegisterName ;
  mProperty_mControlRegisterKind = inSource.mProperty_mControlRegisterKind ;
  mProperty_mIsReadOnly = inSource.mProperty_mIsReadOnly ;
  mProperty_mRegisterOffset = inSource.mProperty_mRegisterOffset ;
  mProperty_mRegisterOffsetLocation = inSource.mProperty_mRegisterOffsetLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element GGS_controlRegisterNameListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mRegisterName,
                                                                                                               const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                                                                               const GGS_bool & in_mIsReadOnly,
                                                                                                               const GGS_expressionAST & in_mRegisterOffset,
                                                                                                               const GGS_location & in_mRegisterOffsetLocation,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterNameListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mControlRegisterKind = in_mControlRegisterKind ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mRegisterOffset = in_mRegisterOffset ;
  result.mProperty_mRegisterOffsetLocation = in_mRegisterOffsetLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element::GGS_controlRegisterNameListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_controlRegisterKind & inOperand1,
                                                                                      const GGS_bool & inOperand2,
                                                                                      const GGS_expressionAST & inOperand3,
                                                                                      const GGS_location & inOperand4) :
mProperty_mRegisterName (inOperand0),
mProperty_mControlRegisterKind (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mRegisterOffset (inOperand3),
mProperty_mRegisterOffsetLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element GGS_controlRegisterNameListAST_2E_element::class_func_new (const GGS_lstring & in_mRegisterName,
                                                                                                     const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                                                                     const GGS_bool & in_mIsReadOnly,
                                                                                                     const GGS_expressionAST & in_mRegisterOffset,
                                                                                                     const GGS_location & in_mRegisterOffsetLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterNameListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mControlRegisterKind = in_mControlRegisterKind ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mRegisterOffset = in_mRegisterOffset ;
  result.mProperty_mRegisterOffsetLocation = in_mRegisterOffsetLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterNameListAST_2E_element::isValid (void) const {
  return mProperty_mRegisterName.isValid () && mProperty_mControlRegisterKind.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mRegisterOffset.isValid () && mProperty_mRegisterOffsetLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST_2E_element::drop (void) {
  mProperty_mRegisterName.drop () ;
  mProperty_mControlRegisterKind.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mRegisterOffset.drop () ;
  mProperty_mRegisterOffsetLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterNameListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterOffset.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterOffsetLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterNameListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST_2E_element ("controlRegisterNameListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterNameListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterNameListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterNameListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element GGS_controlRegisterNameListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterNameListAST_2E_element result ;
  const GGS_controlRegisterNameListAST_2E_element * p = (const GGS_controlRegisterNameListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterNameListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits::GGS_controlRegisterBitSlice_2E_unusedBits (void) :
mProperty_count () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits::GGS_controlRegisterBitSlice_2E_unusedBits (const GGS_controlRegisterBitSlice_2E_unusedBits & inSource) :
mProperty_count (inSource.mProperty_count) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits & GGS_controlRegisterBitSlice_2E_unusedBits::operator = (const GGS_controlRegisterBitSlice_2E_unusedBits & inSource) {
  mProperty_count = inSource.mProperty_count ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits GGS_controlRegisterBitSlice_2E_unusedBits::init_21_ (const GGS_lbigint & in_count,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_unusedBits result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_count = in_count ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_unusedBits::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits::GGS_controlRegisterBitSlice_2E_unusedBits (const GGS_lbigint & inOperand0) :
mProperty_count (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits GGS_controlRegisterBitSlice_2E_unusedBits::class_func_new (const GGS_lbigint & in_count,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_unusedBits result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_count = in_count ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterBitSlice_2E_unusedBits::isValid (void) const {
  return mProperty_count.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_unusedBits::drop (void) {
  mProperty_count.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_unusedBits::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterBitSlice.unusedBits:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_count.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterBitSlice.unusedBits generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_unusedBits ("controlRegisterBitSlice.unusedBits",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterBitSlice_2E_unusedBits::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_unusedBits ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSlice_2E_unusedBits::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSlice_2E_unusedBits (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits GGS_controlRegisterBitSlice_2E_unusedBits::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_unusedBits result ;
  const GGS_controlRegisterBitSlice_2E_unusedBits * p = (const GGS_controlRegisterBitSlice_2E_unusedBits *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSlice_2E_unusedBits *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice.unusedBits", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterBitSlice_2E_unusedBits_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits_3F_::GGS_controlRegisterBitSlice_2E_unusedBits_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits_3F_::GGS_controlRegisterBitSlice_2E_unusedBits_3F_ (const GGS_controlRegisterBitSlice_2E_unusedBits & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits_3F_ GGS_controlRegisterBitSlice_2E_unusedBits_3F_::init_nil (void) {
  GGS_controlRegisterBitSlice_2E_unusedBits_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterBitSlice_2E_unusedBits_3F_::isValid (void) const {
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

bool GGS_controlRegisterBitSlice_2E_unusedBits_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_unusedBits_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterBitSlice_2E_unusedBits () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_unusedBits_3F_::description (String & ioString,
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
//     @controlRegisterBitSlice.unusedBits? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_unusedBits_3F_ ("controlRegisterBitSlice.unusedBits?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterBitSlice_2E_unusedBits_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_unusedBits_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSlice_2E_unusedBits_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSlice_2E_unusedBits_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits_3F_ GGS_controlRegisterBitSlice_2E_unusedBits_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_unusedBits_3F_ result ;
  const GGS_controlRegisterBitSlice_2E_unusedBits_3F_ * p = (const GGS_controlRegisterBitSlice_2E_unusedBits_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSlice_2E_unusedBits_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice.unusedBits?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit::GGS_controlRegisterBitSlice_2E_namedBit (void) :
mProperty_name (),
mProperty_count () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit::GGS_controlRegisterBitSlice_2E_namedBit (const GGS_controlRegisterBitSlice_2E_namedBit & inSource) :
mProperty_name (inSource.mProperty_name),
mProperty_count (inSource.mProperty_count) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit & GGS_controlRegisterBitSlice_2E_namedBit::operator = (const GGS_controlRegisterBitSlice_2E_namedBit & inSource) {
  mProperty_name = inSource.mProperty_name ;
  mProperty_count = inSource.mProperty_count ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit GGS_controlRegisterBitSlice_2E_namedBit::init_21__21_ (const GGS_lstring & in_name,
                                                                                               const GGS_lbigint & in_count,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_namedBit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_count = in_count ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit::GGS_controlRegisterBitSlice_2E_namedBit (const GGS_lstring & inOperand0,
                                                                                  const GGS_lbigint & inOperand1) :
mProperty_name (inOperand0),
mProperty_count (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit GGS_controlRegisterBitSlice_2E_namedBit::class_func_new (const GGS_lstring & in_name,
                                                                                                 const GGS_lbigint & in_count,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_namedBit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_count = in_count ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterBitSlice_2E_namedBit::isValid (void) const {
  return mProperty_name.isValid () && mProperty_count.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit::drop (void) {
  mProperty_name.drop () ;
  mProperty_count.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterBitSlice.namedBit:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_count.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterBitSlice.namedBit generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit ("controlRegisterBitSlice.namedBit",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterBitSlice_2E_namedBit::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSlice_2E_namedBit::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSlice_2E_namedBit (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit GGS_controlRegisterBitSlice_2E_namedBit::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_namedBit result ;
  const GGS_controlRegisterBitSlice_2E_namedBit * p = (const GGS_controlRegisterBitSlice_2E_namedBit *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSlice_2E_namedBit *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice.namedBit", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterBitSlice_2E_namedBit_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit_3F_::GGS_controlRegisterBitSlice_2E_namedBit_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit_3F_::GGS_controlRegisterBitSlice_2E_namedBit_3F_ (const GGS_controlRegisterBitSlice_2E_namedBit & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit_3F_ GGS_controlRegisterBitSlice_2E_namedBit_3F_::init_nil (void) {
  GGS_controlRegisterBitSlice_2E_namedBit_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterBitSlice_2E_namedBit_3F_::isValid (void) const {
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

bool GGS_controlRegisterBitSlice_2E_namedBit_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterBitSlice_2E_namedBit () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit_3F_::description (String & ioString,
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
//     @controlRegisterBitSlice.namedBit? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit_3F_ ("controlRegisterBitSlice.namedBit?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterBitSlice_2E_namedBit_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSlice_2E_namedBit_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSlice_2E_namedBit_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit_3F_ GGS_controlRegisterBitSlice_2E_namedBit_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_namedBit_3F_ result ;
  const GGS_controlRegisterBitSlice_2E_namedBit_3F_ * p = (const GGS_controlRegisterBitSlice_2E_namedBit_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSlice_2E_namedBit_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice.namedBit?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single::GGS_controlRegisterGroupKindAST_2E_single (void) :
mProperty_registerGroupBaseAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single::GGS_controlRegisterGroupKindAST_2E_single (const GGS_controlRegisterGroupKindAST_2E_single & inSource) :
mProperty_registerGroupBaseAddress (inSource.mProperty_registerGroupBaseAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single & GGS_controlRegisterGroupKindAST_2E_single::operator = (const GGS_controlRegisterGroupKindAST_2E_single & inSource) {
  mProperty_registerGroupBaseAddress = inSource.mProperty_registerGroupBaseAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single GGS_controlRegisterGroupKindAST_2E_single::init_21_ (const GGS_lbigint & in_registerGroupBaseAddress,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_single result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_registerGroupBaseAddress = in_registerGroupBaseAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_single::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single::GGS_controlRegisterGroupKindAST_2E_single (const GGS_lbigint & inOperand0) :
mProperty_registerGroupBaseAddress (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single GGS_controlRegisterGroupKindAST_2E_single::class_func_new (const GGS_lbigint & in_registerGroupBaseAddress,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_single result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_registerGroupBaseAddress = in_registerGroupBaseAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupKindAST_2E_single::isValid (void) const {
  return mProperty_registerGroupBaseAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_single::drop (void) {
  mProperty_registerGroupBaseAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_single::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterGroupKindAST.single:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_registerGroupBaseAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterGroupKindAST.single generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_single ("controlRegisterGroupKindAST.single",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupKindAST_2E_single::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_single ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupKindAST_2E_single::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupKindAST_2E_single (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single GGS_controlRegisterGroupKindAST_2E_single::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_single result ;
  const GGS_controlRegisterGroupKindAST_2E_single * p = (const GGS_controlRegisterGroupKindAST_2E_single *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupKindAST_2E_single *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST.single", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterGroupKindAST_2E_single_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single_3F_::GGS_controlRegisterGroupKindAST_2E_single_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single_3F_::GGS_controlRegisterGroupKindAST_2E_single_3F_ (const GGS_controlRegisterGroupKindAST_2E_single & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single_3F_ GGS_controlRegisterGroupKindAST_2E_single_3F_::init_nil (void) {
  GGS_controlRegisterGroupKindAST_2E_single_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupKindAST_2E_single_3F_::isValid (void) const {
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

bool GGS_controlRegisterGroupKindAST_2E_single_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_single_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterGroupKindAST_2E_single () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_single_3F_::description (String & ioString,
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
//     @controlRegisterGroupKindAST.single? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_single_3F_ ("controlRegisterGroupKindAST.single?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupKindAST_2E_single_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_single_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupKindAST_2E_single_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupKindAST_2E_single_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single_3F_ GGS_controlRegisterGroupKindAST_2E_single_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_single_3F_ result ;
  const GGS_controlRegisterGroupKindAST_2E_single_3F_ * p = (const GGS_controlRegisterGroupKindAST_2E_single_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupKindAST_2E_single_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST.single?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element::GGS_registerGroupListAST_2E_element (void) :
mProperty_mRegisterGroupName (),
mProperty_mControlRegisterGroupKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element::GGS_registerGroupListAST_2E_element (const GGS_registerGroupListAST_2E_element & inSource) :
mProperty_mRegisterGroupName (inSource.mProperty_mRegisterGroupName),
mProperty_mControlRegisterGroupKind (inSource.mProperty_mControlRegisterGroupKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element & GGS_registerGroupListAST_2E_element::operator = (const GGS_registerGroupListAST_2E_element & inSource) {
  mProperty_mRegisterGroupName = inSource.mProperty_mRegisterGroupName ;
  mProperty_mControlRegisterGroupKind = inSource.mProperty_mControlRegisterGroupKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerGroupListAST_2E_element GGS_registerGroupListAST_2E_element::init_21__21_ (const GGS_lstring & in_mRegisterGroupName,
                                                                                       const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mControlRegisterGroupKind = in_mControlRegisterGroupKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element::GGS_registerGroupListAST_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_controlRegisterGroupKindAST & inOperand1) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mControlRegisterGroupKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element GGS_registerGroupListAST_2E_element::class_func_new (const GGS_lstring & in_mRegisterGroupName,
                                                                                         const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mControlRegisterGroupKind = in_mControlRegisterGroupKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupListAST_2E_element::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mControlRegisterGroupKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST_2E_element::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mControlRegisterGroupKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerGroupListAST.element:") ;
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
//     @registerGroupListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupListAST_2E_element ("registerGroupListAST.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element GGS_registerGroupListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerGroupListAST_2E_element result ;
  const GGS_registerGroupListAST_2E_element * p = (const GGS_registerGroupListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element::GGS_controlRegisterUserAccesMapAST_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element::GGS_controlRegisterUserAccesMapAST_2E_element (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element & GGS_controlRegisterUserAccesMapAST_2E_element::operator = (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element GGS_controlRegisterUserAccesMapAST_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element::GGS_controlRegisterUserAccesMapAST_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element GGS_controlRegisterUserAccesMapAST_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterUserAccesMapAST_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterUserAccesMapAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterUserAccesMapAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element ("controlRegisterUserAccesMapAST.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterUserAccesMapAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterUserAccesMapAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterUserAccesMapAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element GGS_controlRegisterUserAccesMapAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST_2E_element result ;
  const GGS_controlRegisterUserAccesMapAST_2E_element * p = (const GGS_controlRegisterUserAccesMapAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterUserAccesMapAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterUserAccesMapAST_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element_3F_::GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element_3F_::GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element_3F_ GGS_controlRegisterUserAccesMapAST_2E_element_3F_::init_nil (void) {
  GGS_controlRegisterUserAccesMapAST_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterUserAccesMapAST_2E_element_3F_::isValid (void) const {
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

bool GGS_controlRegisterUserAccesMapAST_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterUserAccesMapAST_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element_3F_::description (String & ioString,
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
//     @controlRegisterUserAccesMapAST.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element_3F_ ("controlRegisterUserAccesMapAST.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterUserAccesMapAST_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterUserAccesMapAST_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element_3F_ GGS_controlRegisterUserAccesMapAST_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST_2E_element_3F_ result ;
  const GGS_controlRegisterUserAccesMapAST_2E_element_3F_ * p = (const GGS_controlRegisterUserAccesMapAST_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterUserAccesMapAST_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element::GGS_controlRegisterFieldMap_2E_element (void) :
mProperty_lkey (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element::GGS_controlRegisterFieldMap_2E_element (const GGS_controlRegisterFieldMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mBitIndex (inSource.mProperty_mBitIndex),
mProperty_mBitCount (inSource.mProperty_mBitCount) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element & GGS_controlRegisterFieldMap_2E_element::operator = (const GGS_controlRegisterFieldMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mBitIndex = inSource.mProperty_mBitIndex ;
  mProperty_mBitCount = inSource.mProperty_mBitCount ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element GGS_controlRegisterFieldMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                 const GGS_uint & in_mBitIndex,
                                                                                                 const GGS_uint & in_mBitCount,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element::GGS_controlRegisterFieldMap_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_uint & inOperand1,
                                                                                const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element GGS_controlRegisterFieldMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                               const GGS_uint & in_mBitIndex,
                                                                                               const GGS_uint & in_mBitCount,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterFieldMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterFieldMap.element:") ;
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
//     @controlRegisterFieldMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element ("controlRegisterFieldMap.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterFieldMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterFieldMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterFieldMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element GGS_controlRegisterFieldMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap_2E_element result ;
  const GGS_controlRegisterFieldMap_2E_element * p = (const GGS_controlRegisterFieldMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterFieldMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterFieldMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element_3F_::GGS_controlRegisterFieldMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element_3F_::GGS_controlRegisterFieldMap_2E_element_3F_ (const GGS_controlRegisterFieldMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element_3F_ GGS_controlRegisterFieldMap_2E_element_3F_::init_nil (void) {
  GGS_controlRegisterFieldMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterFieldMap_2E_element_3F_::isValid (void) const {
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

bool GGS_controlRegisterFieldMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterFieldMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element_3F_::description (String & ioString,
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
//     @controlRegisterFieldMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element_3F_ ("controlRegisterFieldMap.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterFieldMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterFieldMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterFieldMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element_3F_ GGS_controlRegisterFieldMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap_2E_element_3F_ result ;
  const GGS_controlRegisterFieldMap_2E_element_3F_ * p = (const GGS_controlRegisterFieldMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterFieldMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element::GGS_sliceMap_2E_element (void) :
mProperty_lkey (),
mProperty_mAccessOperator (),
mProperty_mAccessRightOperand (),
mProperty_mResultType () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element::GGS_sliceMap_2E_element (const GGS_sliceMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mAccessOperator (inSource.mProperty_mAccessOperator),
mProperty_mAccessRightOperand (inSource.mProperty_mAccessRightOperand),
mProperty_mResultType (inSource.mProperty_mResultType) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element & GGS_sliceMap_2E_element::operator = (const GGS_sliceMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mAccessOperator = inSource.mProperty_mAccessOperator ;
  mProperty_mAccessRightOperand = inSource.mProperty_mAccessRightOperand ;
  mProperty_mResultType = inSource.mProperty_mResultType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sliceMap_2E_element GGS_sliceMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                       const GGS_llvmBinaryOperation & in_mAccessOperator,
                                                                       const GGS_bigint & in_mAccessRightOperand,
                                                                       const GGS_omnibusType & in_mResultType,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessOperator = in_mAccessOperator ;
  result.mProperty_mAccessRightOperand = in_mAccessRightOperand ;
  result.mProperty_mResultType = in_mResultType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element::GGS_sliceMap_2E_element (const GGS_lstring & inOperand0,
                                                  const GGS_llvmBinaryOperation & inOperand1,
                                                  const GGS_bigint & inOperand2,
                                                  const GGS_omnibusType & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mAccessOperator (inOperand1),
mProperty_mAccessRightOperand (inOperand2),
mProperty_mResultType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element GGS_sliceMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                 const GGS_llvmBinaryOperation & in_mAccessOperator,
                                                                 const GGS_bigint & in_mAccessRightOperand,
                                                                 const GGS_omnibusType & in_mResultType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessOperator = in_mAccessOperator ;
  result.mProperty_mAccessRightOperand = in_mAccessRightOperand ;
  result.mProperty_mResultType = in_mResultType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mResultType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessOperator.drop () ;
  mProperty_mAccessRightOperand.drop () ;
  mProperty_mResultType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceMap.element:") ;
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
//     @sliceMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceMap_2E_element ("sliceMap.element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element GGS_sliceMap_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_sliceMap_2E_element result ;
  const GGS_sliceMap_2E_element * p = (const GGS_sliceMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @sliceMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element_3F_::GGS_sliceMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element_3F_::GGS_sliceMap_2E_element_3F_ (const GGS_sliceMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element_3F_ GGS_sliceMap_2E_element_3F_::init_nil (void) {
  GGS_sliceMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceMap_2E_element_3F_::isValid (void) const {
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

bool GGS_sliceMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_sliceMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap_2E_element_3F_::description (String & ioString,
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
//     @sliceMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceMap_2E_element_3F_ ("sliceMap.element?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element_3F_ GGS_sliceMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_sliceMap_2E_element_3F_ result ;
  const GGS_sliceMap_2E_element_3F_ * p = (const GGS_sliceMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element::GGS_controlRegisterMap_2E_element (void) :
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

GGS_controlRegisterMap_2E_element::GGS_controlRegisterMap_2E_element (const GGS_controlRegisterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mType (inSource.mProperty_mType),
mProperty_mIsReadOnly (inSource.mProperty_mIsReadOnly),
mProperty_mUserAccess (inSource.mProperty_mUserAccess),
mProperty_mRegisterFieldAccessMap (inSource.mProperty_mRegisterFieldAccessMap),
mProperty_mRegisterFieldMap (inSource.mProperty_mRegisterFieldMap),
mProperty_mAddressOffset (inSource.mProperty_mAddressOffset),
mProperty_mControlRegisterFieldList (inSource.mProperty_mControlRegisterFieldList),
mProperty_mRegisterBitCount (inSource.mProperty_mRegisterBitCount),
mProperty_mArraySize (inSource.mProperty_mArraySize),
mProperty_mElementArraySize (inSource.mProperty_mElementArraySize) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element & GGS_controlRegisterMap_2E_element::operator = (const GGS_controlRegisterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mIsReadOnly = inSource.mProperty_mIsReadOnly ;
  mProperty_mUserAccess = inSource.mProperty_mUserAccess ;
  mProperty_mRegisterFieldAccessMap = inSource.mProperty_mRegisterFieldAccessMap ;
  mProperty_mRegisterFieldMap = inSource.mProperty_mRegisterFieldMap ;
  mProperty_mAddressOffset = inSource.mProperty_mAddressOffset ;
  mProperty_mControlRegisterFieldList = inSource.mProperty_mControlRegisterFieldList ;
  mProperty_mRegisterBitCount = inSource.mProperty_mRegisterBitCount ;
  mProperty_mArraySize = inSource.mProperty_mArraySize ;
  mProperty_mElementArraySize = inSource.mProperty_mElementArraySize ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterMap_2E_element GGS_controlRegisterMap_2E_element::init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                       const GGS_omnibusType & in_mType,
                                                                                                                       const GGS_bool & in_mIsReadOnly,
                                                                                                                       const GGS_bool & in_mUserAccess,
                                                                                                                       const GGS_sliceMap & in_mRegisterFieldAccessMap,
                                                                                                                       const GGS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                                                                       const GGS_bigint & in_mAddressOffset,
                                                                                                                       const GGS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                                                                       const GGS_uint & in_mRegisterBitCount,
                                                                                                                       const GGS_uint & in_mArraySize,
                                                                                                                       const GGS_uint & in_mElementArraySize,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterMap_2E_element result ;
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

void GGS_controlRegisterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element::GGS_controlRegisterMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_omnibusType & inOperand1,
                                                                      const GGS_bool & inOperand2,
                                                                      const GGS_bool & inOperand3,
                                                                      const GGS_sliceMap & inOperand4,
                                                                      const GGS_controlRegisterFieldMap & inOperand5,
                                                                      const GGS_bigint & inOperand6,
                                                                      const GGS_controlRegisterFieldList & inOperand7,
                                                                      const GGS_uint & inOperand8,
                                                                      const GGS_uint & inOperand9,
                                                                      const GGS_uint & inOperand10) :
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

GGS_controlRegisterMap_2E_element GGS_controlRegisterMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                     const GGS_omnibusType & in_mType,
                                                                                     const GGS_bool & in_mIsReadOnly,
                                                                                     const GGS_bool & in_mUserAccess,
                                                                                     const GGS_sliceMap & in_mRegisterFieldAccessMap,
                                                                                     const GGS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                                     const GGS_bigint & in_mAddressOffset,
                                                                                     const GGS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                                     const GGS_uint & in_mRegisterBitCount,
                                                                                     const GGS_uint & in_mArraySize,
                                                                                     const GGS_uint & in_mElementArraySize,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterMap_2E_element result ;
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

bool GGS_controlRegisterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mUserAccess.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddressOffset.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap_2E_element::drop (void) {
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

void GGS_controlRegisterMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterMap.element:") ;
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
//     @controlRegisterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap_2E_element ("controlRegisterMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element GGS_controlRegisterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterMap_2E_element result ;
  const GGS_controlRegisterMap_2E_element * p = (const GGS_controlRegisterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element_3F_::GGS_controlRegisterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element_3F_::GGS_controlRegisterMap_2E_element_3F_ (const GGS_controlRegisterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element_3F_ GGS_controlRegisterMap_2E_element_3F_::init_nil (void) {
  GGS_controlRegisterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_controlRegisterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap_2E_element_3F_::description (String & ioString,
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
//     @controlRegisterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap_2E_element_3F_ ("controlRegisterMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element_3F_ GGS_controlRegisterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_controlRegisterMap_2E_element_3F_ result ;
  const GGS_controlRegisterMap_2E_element_3F_ * p = (const GGS_controlRegisterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element::GGS_controlRegisterGroupMap_2E_element (void) :
mProperty_lkey (),
mProperty_mGroupKind (),
mProperty_mControlRegisterMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element::GGS_controlRegisterGroupMap_2E_element (const GGS_controlRegisterGroupMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mGroupKind (inSource.mProperty_mGroupKind),
mProperty_mControlRegisterMap (inSource.mProperty_mControlRegisterMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element & GGS_controlRegisterGroupMap_2E_element::operator = (const GGS_controlRegisterGroupMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mGroupKind = inSource.mProperty_mGroupKind ;
  mProperty_mControlRegisterMap = inSource.mProperty_mControlRegisterMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element GGS_controlRegisterGroupMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                 const GGS_registerGroupKind & in_mGroupKind,
                                                                                                 const GGS_controlRegisterMap & in_mControlRegisterMap,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGroupKind = in_mGroupKind ;
  result.mProperty_mControlRegisterMap = in_mControlRegisterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element::GGS_controlRegisterGroupMap_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_registerGroupKind & inOperand1,
                                                                                const GGS_controlRegisterMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mGroupKind (inOperand1),
mProperty_mControlRegisterMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element GGS_controlRegisterGroupMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                               const GGS_registerGroupKind & in_mGroupKind,
                                                                                               const GGS_controlRegisterMap & in_mControlRegisterMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGroupKind = in_mGroupKind ;
  result.mProperty_mControlRegisterMap = in_mControlRegisterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGroupKind.isValid () && mProperty_mControlRegisterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGroupKind.drop () ;
  mProperty_mControlRegisterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterGroupMap.element:") ;
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
//     @controlRegisterGroupMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2E_element ("controlRegisterGroupMap.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element GGS_controlRegisterGroupMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap_2E_element result ;
  const GGS_controlRegisterGroupMap_2E_element * p = (const GGS_controlRegisterGroupMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterGroupMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element_3F_::GGS_controlRegisterGroupMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element_3F_::GGS_controlRegisterGroupMap_2E_element_3F_ (const GGS_controlRegisterGroupMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element_3F_ GGS_controlRegisterGroupMap_2E_element_3F_::init_nil (void) {
  GGS_controlRegisterGroupMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupMap_2E_element_3F_::isValid (void) const {
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

bool GGS_controlRegisterGroupMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterGroupMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap_2E_element_3F_::description (String & ioString,
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
//     @controlRegisterGroupMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2E_element_3F_ ("controlRegisterGroupMap.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element_3F_ GGS_controlRegisterGroupMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap_2E_element_3F_ result ;
  const GGS_controlRegisterGroupMap_2E_element_3F_ * p = (const GGS_controlRegisterGroupMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element::GGS_globalSyncInstanceMap_2E_element (void) :
mProperty_lkey (),
mProperty_type (),
mProperty_initialValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element::GGS_globalSyncInstanceMap_2E_element (const GGS_globalSyncInstanceMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_type (inSource.mProperty_type),
mProperty_initialValue (inSource.mProperty_initialValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element & GGS_globalSyncInstanceMap_2E_element::operator = (const GGS_globalSyncInstanceMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_type = inSource.mProperty_type ;
  mProperty_initialValue = inSource.mProperty_initialValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element GGS_globalSyncInstanceMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_omnibusType & in_type,
                                                                                             const GGS_objectIR & in_initialValue,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_type = in_type ;
  result.mProperty_initialValue = in_initialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element::GGS_globalSyncInstanceMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_omnibusType & inOperand1,
                                                                            const GGS_objectIR & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_type (inOperand1),
mProperty_initialValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element GGS_globalSyncInstanceMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                           const GGS_omnibusType & in_type,
                                                                                           const GGS_objectIR & in_initialValue,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_type = in_type ;
  result.mProperty_initialValue = in_initialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalSyncInstanceMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_initialValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_type.drop () ;
  mProperty_initialValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalSyncInstanceMap.element:") ;
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
//     @globalSyncInstanceMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element ("globalSyncInstanceMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalSyncInstanceMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalSyncInstanceMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalSyncInstanceMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element GGS_globalSyncInstanceMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap_2E_element result ;
  const GGS_globalSyncInstanceMap_2E_element * p = (const GGS_globalSyncInstanceMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalSyncInstanceMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @globalSyncInstanceMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element_3F_::GGS_globalSyncInstanceMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element_3F_::GGS_globalSyncInstanceMap_2E_element_3F_ (const GGS_globalSyncInstanceMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element_3F_ GGS_globalSyncInstanceMap_2E_element_3F_::init_nil (void) {
  GGS_globalSyncInstanceMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalSyncInstanceMap_2E_element_3F_::isValid (void) const {
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

bool GGS_globalSyncInstanceMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_globalSyncInstanceMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap_2E_element_3F_::description (String & ioString,
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
//     @globalSyncInstanceMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element_3F_ ("globalSyncInstanceMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalSyncInstanceMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalSyncInstanceMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalSyncInstanceMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element_3F_ GGS_globalSyncInstanceMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap_2E_element_3F_ result ;
  const GGS_globalSyncInstanceMap_2E_element_3F_ * p = (const GGS_globalSyncInstanceMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalSyncInstanceMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @globalSyncInstanceMapIR_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element_3F_::GGS_globalSyncInstanceMapIR_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element_3F_::GGS_globalSyncInstanceMapIR_2E_element_3F_ (const GGS_globalSyncInstanceMapIR_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element_3F_ GGS_globalSyncInstanceMapIR_2E_element_3F_::init_nil (void) {
  GGS_globalSyncInstanceMapIR_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalSyncInstanceMapIR_2E_element_3F_::isValid (void) const {
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

bool GGS_globalSyncInstanceMapIR_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_globalSyncInstanceMapIR_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR_2E_element_3F_::description (String & ioString,
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
//     @globalSyncInstanceMapIR.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element_3F_ ("globalSyncInstanceMapIR.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalSyncInstanceMapIR_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalSyncInstanceMapIR_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalSyncInstanceMapIR_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element_3F_ GGS_globalSyncInstanceMapIR_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR_2E_element_3F_ result ;
  const GGS_globalSyncInstanceMapIR_2E_element_3F_ * p = (const GGS_globalSyncInstanceMapIR_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalSyncInstanceMapIR_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element::GGS_driverDeclarationListAST_2E_element (void) :
mProperty_mDriver () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element::GGS_driverDeclarationListAST_2E_element (const GGS_driverDeclarationListAST_2E_element & inSource) :
mProperty_mDriver (inSource.mProperty_mDriver) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element & GGS_driverDeclarationListAST_2E_element::operator = (const GGS_driverDeclarationListAST_2E_element & inSource) {
  mProperty_mDriver = inSource.mProperty_mDriver ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element GGS_driverDeclarationListAST_2E_element::init_21_ (const GGS_driverDeclarationAST & in_mDriver,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriver = in_mDriver ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element::GGS_driverDeclarationListAST_2E_element (const GGS_driverDeclarationAST & inOperand0) :
mProperty_mDriver (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element GGS_driverDeclarationListAST_2E_element::class_func_new (const GGS_driverDeclarationAST & in_mDriver,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriver = in_mDriver ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mDriver.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST_2E_element::drop (void) {
  mProperty_mDriver.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDriver.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @driverDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2E_element ("driverDeclarationListAST.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element GGS_driverDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_driverDeclarationListAST_2E_element result ;
  const GGS_driverDeclarationListAST_2E_element * p = (const GGS_driverDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element::GGS_driverInstanciationArgumentListAST_2E_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element::GGS_driverInstanciationArgumentListAST_2E_element (const GGS_driverInstanciationArgumentListAST_2E_element & inSource) :
mProperty_mSelector (inSource.mProperty_mSelector),
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element & GGS_driverInstanciationArgumentListAST_2E_element::operator = (const GGS_driverInstanciationArgumentListAST_2E_element & inSource) {
  mProperty_mSelector = inSource.mProperty_mSelector ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element GGS_driverInstanciationArgumentListAST_2E_element::init_21__21_ (const GGS_lstring & in_mSelector,
                                                                                                                   const GGS_expressionAST & in_mExpression,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element::GGS_driverInstanciationArgumentListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                      const GGS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element GGS_driverInstanciationArgumentListAST_2E_element::class_func_new (const GGS_lstring & in_mSelector,
                                                                                                                     const GGS_expressionAST & in_mExpression,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverInstanciationArgumentListAST_2E_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST_2E_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverInstanciationArgumentListAST.element:") ;
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
//     @driverInstanciationArgumentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2E_element ("driverInstanciationArgumentListAST.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverInstanciationArgumentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverInstanciationArgumentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverInstanciationArgumentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element GGS_driverInstanciationArgumentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentListAST_2E_element result ;
  const GGS_driverInstanciationArgumentListAST_2E_element * p = (const GGS_driverInstanciationArgumentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverInstanciationArgumentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element::GGS_driverInstanciationListAST_2E_element (void) :
mProperty_mDriverName (),
mProperty_mDriverInstanciationArgumentList () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element::GGS_driverInstanciationListAST_2E_element (const GGS_driverInstanciationListAST_2E_element & inSource) :
mProperty_mDriverName (inSource.mProperty_mDriverName),
mProperty_mDriverInstanciationArgumentList (inSource.mProperty_mDriverInstanciationArgumentList) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element & GGS_driverInstanciationListAST_2E_element::operator = (const GGS_driverInstanciationListAST_2E_element & inSource) {
  mProperty_mDriverName = inSource.mProperty_mDriverName ;
  mProperty_mDriverInstanciationArgumentList = inSource.mProperty_mDriverInstanciationArgumentList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element GGS_driverInstanciationListAST_2E_element::init_21__21_ (const GGS_lstring & in_mDriverName,
                                                                                                   const GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverInstanciationArgumentList = in_mDriverInstanciationArgumentList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element::GGS_driverInstanciationListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_driverInstanciationArgumentListAST & inOperand1) :
mProperty_mDriverName (inOperand0),
mProperty_mDriverInstanciationArgumentList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element GGS_driverInstanciationListAST_2E_element::class_func_new (const GGS_lstring & in_mDriverName,
                                                                                                     const GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverInstanciationArgumentList = in_mDriverInstanciationArgumentList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverInstanciationListAST_2E_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverInstanciationArgumentList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST_2E_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mDriverInstanciationArgumentList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverInstanciationListAST.element:") ;
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
//     @driverInstanciationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2E_element ("driverInstanciationListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverInstanciationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverInstanciationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverInstanciationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element GGS_driverInstanciationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationListAST_2E_element result ;
  const GGS_driverInstanciationListAST_2E_element * p = (const GGS_driverInstanciationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverInstanciationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element::GGS_driverInstanciationArgumentMap_2E_element (void) :
mProperty_lkey (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element::GGS_driverInstanciationArgumentMap_2E_element (const GGS_driverInstanciationArgumentMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element & GGS_driverInstanciationArgumentMap_2E_element::operator = (const GGS_driverInstanciationArgumentMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element GGS_driverInstanciationArgumentMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                           const GGS_expressionAST & in_mExpression,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element::GGS_driverInstanciationArgumentMap_2E_element (const GGS_lstring & inOperand0,
                                                                                              const GGS_expressionAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element GGS_driverInstanciationArgumentMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                             const GGS_expressionAST & in_mExpression,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverInstanciationArgumentMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverInstanciationArgumentMap.element:") ;
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
//     @driverInstanciationArgumentMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2E_element ("driverInstanciationArgumentMap.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverInstanciationArgumentMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverInstanciationArgumentMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverInstanciationArgumentMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element GGS_driverInstanciationArgumentMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap_2E_element result ;
  const GGS_driverInstanciationArgumentMap_2E_element * p = (const GGS_driverInstanciationArgumentMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverInstanciationArgumentMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @driverInstanciationArgumentMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element_3F_::GGS_driverInstanciationArgumentMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element_3F_::GGS_driverInstanciationArgumentMap_2E_element_3F_ (const GGS_driverInstanciationArgumentMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element_3F_ GGS_driverInstanciationArgumentMap_2E_element_3F_::init_nil (void) {
  GGS_driverInstanciationArgumentMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverInstanciationArgumentMap_2E_element_3F_::isValid (void) const {
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

bool GGS_driverInstanciationArgumentMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_driverInstanciationArgumentMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap_2E_element_3F_::description (String & ioString,
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
//     @driverInstanciationArgumentMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2E_element_3F_ ("driverInstanciationArgumentMap.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverInstanciationArgumentMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverInstanciationArgumentMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverInstanciationArgumentMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element_3F_ GGS_driverInstanciationArgumentMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap_2E_element_3F_ result ;
  const GGS_driverInstanciationArgumentMap_2E_element_3F_ * p = (const GGS_driverInstanciationArgumentMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverInstanciationArgumentMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element::GGS_instanciedDriverMap_2E_element (void) :
mProperty_lkey (),
mProperty_mDriverInstanciationArgumentMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element::GGS_instanciedDriverMap_2E_element (const GGS_instanciedDriverMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mDriverInstanciationArgumentMap (inSource.mProperty_mDriverInstanciationArgumentMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element & GGS_instanciedDriverMap_2E_element::operator = (const GGS_instanciedDriverMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mDriverInstanciationArgumentMap = inSource.mProperty_mDriverInstanciationArgumentMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element GGS_instanciedDriverMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                     const GGS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instanciedDriverMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDriverInstanciationArgumentMap = in_mDriverInstanciationArgumentMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element::GGS_instanciedDriverMap_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_driverInstanciationArgumentMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDriverInstanciationArgumentMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element GGS_instanciedDriverMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                       const GGS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instanciedDriverMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDriverInstanciationArgumentMap = in_mDriverInstanciationArgumentMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanciedDriverMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDriverInstanciationArgumentMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDriverInstanciationArgumentMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @instanciedDriverMap.element:") ;
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
//     @instanciedDriverMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2E_element ("instanciedDriverMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instanciedDriverMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instanciedDriverMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instanciedDriverMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element GGS_instanciedDriverMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_instanciedDriverMap_2E_element result ;
  const GGS_instanciedDriverMap_2E_element * p = (const GGS_instanciedDriverMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instanciedDriverMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @instanciedDriverMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element_3F_::GGS_instanciedDriverMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element_3F_::GGS_instanciedDriverMap_2E_element_3F_ (const GGS_instanciedDriverMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element_3F_ GGS_instanciedDriverMap_2E_element_3F_::init_nil (void) {
  GGS_instanciedDriverMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanciedDriverMap_2E_element_3F_::isValid (void) const {
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

bool GGS_instanciedDriverMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_instanciedDriverMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap_2E_element_3F_::description (String & ioString,
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
//     @instanciedDriverMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2E_element_3F_ ("instanciedDriverMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instanciedDriverMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instanciedDriverMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instanciedDriverMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element_3F_ GGS_instanciedDriverMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_instanciedDriverMap_2E_element_3F_ result ;
  const GGS_instanciedDriverMap_2E_element_3F_ * p = (const GGS_instanciedDriverMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instanciedDriverMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType::GGS_staticListPropertyTypeAST_2E_valueType (void) :
mProperty_type () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType::GGS_staticListPropertyTypeAST_2E_valueType (const GGS_staticListPropertyTypeAST_2E_valueType & inSource) :
mProperty_type (inSource.mProperty_type) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType & GGS_staticListPropertyTypeAST_2E_valueType::operator = (const GGS_staticListPropertyTypeAST_2E_valueType & inSource) {
  mProperty_type = inSource.mProperty_type ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType GGS_staticListPropertyTypeAST_2E_valueType::init_21_ (const GGS_lstring & in_type,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST_2E_valueType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_valueType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType::GGS_staticListPropertyTypeAST_2E_valueType (const GGS_lstring & inOperand0) :
mProperty_type (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType GGS_staticListPropertyTypeAST_2E_valueType::class_func_new (const GGS_lstring & in_type,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST_2E_valueType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListPropertyTypeAST_2E_valueType::isValid (void) const {
  return mProperty_type.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_valueType::drop (void) {
  mProperty_type.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_valueType::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListPropertyTypeAST.valueType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @staticListPropertyTypeAST.valueType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_valueType ("staticListPropertyTypeAST.valueType",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListPropertyTypeAST_2E_valueType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_valueType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListPropertyTypeAST_2E_valueType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListPropertyTypeAST_2E_valueType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType GGS_staticListPropertyTypeAST_2E_valueType::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST_2E_valueType result ;
  const GGS_staticListPropertyTypeAST_2E_valueType * p = (const GGS_staticListPropertyTypeAST_2E_valueType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListPropertyTypeAST_2E_valueType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST.valueType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @staticListPropertyTypeAST_2E_valueType_3F_
//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType_3F_::GGS_staticListPropertyTypeAST_2E_valueType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType_3F_::GGS_staticListPropertyTypeAST_2E_valueType_3F_ (const GGS_staticListPropertyTypeAST_2E_valueType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType_3F_ GGS_staticListPropertyTypeAST_2E_valueType_3F_::init_nil (void) {
  GGS_staticListPropertyTypeAST_2E_valueType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListPropertyTypeAST_2E_valueType_3F_::isValid (void) const {
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

bool GGS_staticListPropertyTypeAST_2E_valueType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_valueType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_staticListPropertyTypeAST_2E_valueType () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_valueType_3F_::description (String & ioString,
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
//     @staticListPropertyTypeAST.valueType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_valueType_3F_ ("staticListPropertyTypeAST.valueType?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListPropertyTypeAST_2E_valueType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_valueType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListPropertyTypeAST_2E_valueType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListPropertyTypeAST_2E_valueType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType_3F_ GGS_staticListPropertyTypeAST_2E_valueType_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST_2E_valueType_3F_ result ;
  const GGS_staticListPropertyTypeAST_2E_valueType_3F_ * p = (const GGS_staticListPropertyTypeAST_2E_valueType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListPropertyTypeAST_2E_valueType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST.valueType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function::GGS_staticListPropertyTypeAST_2E_function (void) :
mProperty_mode (),
mProperty_formalArgs (),
mProperty_returnType () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function::GGS_staticListPropertyTypeAST_2E_function (const GGS_staticListPropertyTypeAST_2E_function & inSource) :
mProperty_mode (inSource.mProperty_mode),
mProperty_formalArgs (inSource.mProperty_formalArgs),
mProperty_returnType (inSource.mProperty_returnType) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function & GGS_staticListPropertyTypeAST_2E_function::operator = (const GGS_staticListPropertyTypeAST_2E_function & inSource) {
  mProperty_mode = inSource.mProperty_mode ;
  mProperty_formalArgs = inSource.mProperty_formalArgs ;
  mProperty_returnType = inSource.mProperty_returnType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function GGS_staticListPropertyTypeAST_2E_function::init_21__21__21_ (const GGS_mode & in_mode,
                                                                                                       const GGS_routineFormalArgumentListAST & in_formalArgs,
                                                                                                       const GGS_lstring & in_returnType,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST_2E_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_formalArgs = in_formalArgs ;
  result.mProperty_returnType = in_returnType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_function::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function::GGS_staticListPropertyTypeAST_2E_function (const GGS_mode & inOperand0,
                                                                                      const GGS_routineFormalArgumentListAST & inOperand1,
                                                                                      const GGS_lstring & inOperand2) :
mProperty_mode (inOperand0),
mProperty_formalArgs (inOperand1),
mProperty_returnType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function GGS_staticListPropertyTypeAST_2E_function::class_func_new (const GGS_mode & in_mode,
                                                                                                     const GGS_routineFormalArgumentListAST & in_formalArgs,
                                                                                                     const GGS_lstring & in_returnType,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST_2E_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_formalArgs = in_formalArgs ;
  result.mProperty_returnType = in_returnType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListPropertyTypeAST_2E_function::isValid (void) const {
  return mProperty_mode.isValid () && mProperty_formalArgs.isValid () && mProperty_returnType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_function::drop (void) {
  mProperty_mode.drop () ;
  mProperty_formalArgs.drop () ;
  mProperty_returnType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_function::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListPropertyTypeAST.function:") ;
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
//     @staticListPropertyTypeAST.function generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_function ("staticListPropertyTypeAST.function",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListPropertyTypeAST_2E_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_function ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListPropertyTypeAST_2E_function::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListPropertyTypeAST_2E_function (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function GGS_staticListPropertyTypeAST_2E_function::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST_2E_function result ;
  const GGS_staticListPropertyTypeAST_2E_function * p = (const GGS_staticListPropertyTypeAST_2E_function *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListPropertyTypeAST_2E_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST.function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @staticListPropertyTypeAST_2E_function_3F_
//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function_3F_::GGS_staticListPropertyTypeAST_2E_function_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function_3F_::GGS_staticListPropertyTypeAST_2E_function_3F_ (const GGS_staticListPropertyTypeAST_2E_function & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function_3F_ GGS_staticListPropertyTypeAST_2E_function_3F_::init_nil (void) {
  GGS_staticListPropertyTypeAST_2E_function_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListPropertyTypeAST_2E_function_3F_::isValid (void) const {
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

bool GGS_staticListPropertyTypeAST_2E_function_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_function_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_staticListPropertyTypeAST_2E_function () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST_2E_function_3F_::description (String & ioString,
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
//     @staticListPropertyTypeAST.function? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_function_3F_ ("staticListPropertyTypeAST.function?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListPropertyTypeAST_2E_function_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_function_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListPropertyTypeAST_2E_function_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListPropertyTypeAST_2E_function_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function_3F_ GGS_staticListPropertyTypeAST_2E_function_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST_2E_function_3F_ result ;
  const GGS_staticListPropertyTypeAST_2E_function_3F_ * p = (const GGS_staticListPropertyTypeAST_2E_function_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListPropertyTypeAST_2E_function_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST.function?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element::GGS_staticListPropertyListAST_2E_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element::GGS_staticListPropertyListAST_2E_element (const GGS_staticListPropertyListAST_2E_element & inSource) :
mProperty_mPropertyName (inSource.mProperty_mPropertyName),
mProperty_mPropertyType (inSource.mProperty_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element & GGS_staticListPropertyListAST_2E_element::operator = (const GGS_staticListPropertyListAST_2E_element & inSource) {
  mProperty_mPropertyName = inSource.mProperty_mPropertyName ;
  mProperty_mPropertyType = inSource.mProperty_mPropertyType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element GGS_staticListPropertyListAST_2E_element::init_21__21_ (const GGS_lstring & in_mPropertyName,
                                                                                                 const GGS_staticListPropertyTypeAST & in_mPropertyType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element::GGS_staticListPropertyListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_staticListPropertyTypeAST & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element GGS_staticListPropertyListAST_2E_element::class_func_new (const GGS_lstring & in_mPropertyName,
                                                                                                   const GGS_staticListPropertyTypeAST & in_mPropertyType,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListPropertyListAST_2E_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST_2E_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListPropertyListAST.element:") ;
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
//     @staticListPropertyListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyListAST_2E_element ("staticListPropertyListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListPropertyListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListPropertyListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListPropertyListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element GGS_staticListPropertyListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyListAST_2E_element result ;
  const GGS_staticListPropertyListAST_2E_element * p = (const GGS_staticListPropertyListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListPropertyListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function::GGS_extendStaticListExpressionAST_2E_function (void) :
mProperty_functionName (),
mProperty_formalArgs () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function::GGS_extendStaticListExpressionAST_2E_function (const GGS_extendStaticListExpressionAST_2E_function & inSource) :
mProperty_functionName (inSource.mProperty_functionName),
mProperty_formalArgs (inSource.mProperty_formalArgs) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function & GGS_extendStaticListExpressionAST_2E_function::operator = (const GGS_extendStaticListExpressionAST_2E_function & inSource) {
  mProperty_functionName = inSource.mProperty_functionName ;
  mProperty_formalArgs = inSource.mProperty_formalArgs ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function GGS_extendStaticListExpressionAST_2E_function::init_21__21_ (const GGS_lstring & in_functionName,
                                                                                                           const GGS_routineFormalArgumentListAST & in_formalArgs,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_functionName = in_functionName ;
  result.mProperty_formalArgs = in_formalArgs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_function::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function::GGS_extendStaticListExpressionAST_2E_function (const GGS_lstring & inOperand0,
                                                                                              const GGS_routineFormalArgumentListAST & inOperand1) :
mProperty_functionName (inOperand0),
mProperty_formalArgs (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function GGS_extendStaticListExpressionAST_2E_function::class_func_new (const GGS_lstring & in_functionName,
                                                                                                             const GGS_routineFormalArgumentListAST & in_formalArgs,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_functionName = in_functionName ;
  result.mProperty_formalArgs = in_formalArgs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticListExpressionAST_2E_function::isValid (void) const {
  return mProperty_functionName.isValid () && mProperty_formalArgs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_function::drop (void) {
  mProperty_functionName.drop () ;
  mProperty_formalArgs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_function::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extendStaticListExpressionAST.function:") ;
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
//     @extendStaticListExpressionAST.function generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_function ("extendStaticListExpressionAST.function",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticListExpressionAST_2E_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_function ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListExpressionAST_2E_function::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListExpressionAST_2E_function (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function GGS_extendStaticListExpressionAST_2E_function::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_function result ;
  const GGS_extendStaticListExpressionAST_2E_function * p = (const GGS_extendStaticListExpressionAST_2E_function *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListExpressionAST_2E_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST.function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extendStaticListExpressionAST_2E_function_3F_
//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function_3F_::GGS_extendStaticListExpressionAST_2E_function_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function_3F_::GGS_extendStaticListExpressionAST_2E_function_3F_ (const GGS_extendStaticListExpressionAST_2E_function & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function_3F_ GGS_extendStaticListExpressionAST_2E_function_3F_::init_nil (void) {
  GGS_extendStaticListExpressionAST_2E_function_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticListExpressionAST_2E_function_3F_::isValid (void) const {
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

bool GGS_extendStaticListExpressionAST_2E_function_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_function_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extendStaticListExpressionAST_2E_function () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_function_3F_::description (String & ioString,
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
//     @extendStaticListExpressionAST.function? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_function_3F_ ("extendStaticListExpressionAST.function?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticListExpressionAST_2E_function_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_function_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListExpressionAST_2E_function_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListExpressionAST_2E_function_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function_3F_ GGS_extendStaticListExpressionAST_2E_function_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_function_3F_ result ;
  const GGS_extendStaticListExpressionAST_2E_function_3F_ * p = (const GGS_extendStaticListExpressionAST_2E_function_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListExpressionAST_2E_function_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST.function?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element::GGS_staticlistMap_2E_element (void) :
mProperty_lkey (),
mProperty_mStaticListPropertyList () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element::GGS_staticlistMap_2E_element (const GGS_staticlistMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mStaticListPropertyList (inSource.mProperty_mStaticListPropertyList) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element & GGS_staticlistMap_2E_element::operator = (const GGS_staticlistMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mStaticListPropertyList = inSource.mProperty_mStaticListPropertyList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticlistMap_2E_element GGS_staticlistMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                         const GGS_propertyList & in_mStaticListPropertyList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticlistMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mStaticListPropertyList = in_mStaticListPropertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element::GGS_staticlistMap_2E_element (const GGS_lstring & inOperand0,
                                                            const GGS_propertyList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mStaticListPropertyList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element GGS_staticlistMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                           const GGS_propertyList & in_mStaticListPropertyList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticlistMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mStaticListPropertyList = in_mStaticListPropertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticlistMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStaticListPropertyList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mStaticListPropertyList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticlistMap.element:") ;
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
//     @staticlistMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticlistMap_2E_element ("staticlistMap.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticlistMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticlistMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticlistMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element GGS_staticlistMap_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_staticlistMap_2E_element result ;
  const GGS_staticlistMap_2E_element * p = (const GGS_staticlistMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticlistMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @staticlistMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element_3F_::GGS_staticlistMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element_3F_::GGS_staticlistMap_2E_element_3F_ (const GGS_staticlistMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element_3F_ GGS_staticlistMap_2E_element_3F_::init_nil (void) {
  GGS_staticlistMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticlistMap_2E_element_3F_::isValid (void) const {
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

bool GGS_staticlistMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_staticlistMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap_2E_element_3F_::description (String & ioString,
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
//     @staticlistMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticlistMap_2E_element_3F_ ("staticlistMap.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticlistMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticlistMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticlistMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element_3F_ GGS_staticlistMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_staticlistMap_2E_element_3F_ result ;
  const GGS_staticlistMap_2E_element_3F_ * p = (const GGS_staticlistMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticlistMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element::GGS_staticListInitializationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInitializationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element::GGS_staticListInitializationMap_2E_element (const GGS_staticListInitializationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInitializationList (inSource.mProperty_mInitializationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element & GGS_staticListInitializationMap_2E_element::operator = (const GGS_staticListInitializationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInitializationList = inSource.mProperty_mInitializationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element GGS_staticListInitializationMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                     const GGS_stringlist & in_mInitializationList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListInitializationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitializationList = in_mInitializationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element::GGS_staticListInitializationMap_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_stringlist & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitializationList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element GGS_staticListInitializationMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                       const GGS_stringlist & in_mInitializationList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListInitializationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitializationList = in_mInitializationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListInitializationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitializationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitializationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListInitializationMap.element:") ;
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
//     @staticListInitializationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2E_element ("staticListInitializationMap.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListInitializationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListInitializationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListInitializationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element GGS_staticListInitializationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_staticListInitializationMap_2E_element result ;
  const GGS_staticListInitializationMap_2E_element * p = (const GGS_staticListInitializationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListInitializationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @staticListInitializationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element_3F_::GGS_staticListInitializationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element_3F_::GGS_staticListInitializationMap_2E_element_3F_ (const GGS_staticListInitializationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element_3F_ GGS_staticListInitializationMap_2E_element_3F_::init_nil (void) {
  GGS_staticListInitializationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListInitializationMap_2E_element_3F_::isValid (void) const {
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

bool GGS_staticListInitializationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_staticListInitializationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap_2E_element_3F_::description (String & ioString,
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
//     @staticListInitializationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2E_element_3F_ ("staticListInitializationMap.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListInitializationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListInitializationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListInitializationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element_3F_ GGS_staticListInitializationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_staticListInitializationMap_2E_element_3F_ result ;
  const GGS_staticListInitializationMap_2E_element_3F_ * p = (const GGS_staticListInitializationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListInitializationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element::GGS_staticListInvokedFunctionSetMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInvokedFunctionSet () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element::GGS_staticListInvokedFunctionSetMap_2E_element (const GGS_staticListInvokedFunctionSetMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInvokedFunctionSet (inSource.mProperty_mInvokedFunctionSet) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element & GGS_staticListInvokedFunctionSetMap_2E_element::operator = (const GGS_staticListInvokedFunctionSetMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInvokedFunctionSet = inSource.mProperty_mInvokedFunctionSet ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element GGS_staticListInvokedFunctionSetMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                             const GGS_stringset & in_mInvokedFunctionSet,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element::GGS_staticListInvokedFunctionSetMap_2E_element (const GGS_lstring & inOperand0,
                                                                                                const GGS_stringset & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInvokedFunctionSet (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element GGS_staticListInvokedFunctionSetMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                               const GGS_stringset & in_mInvokedFunctionSet,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListInvokedFunctionSetMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInvokedFunctionSet.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInvokedFunctionSet.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListInvokedFunctionSetMap.element:") ;
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
//     @staticListInvokedFunctionSetMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2E_element ("staticListInvokedFunctionSetMap.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListInvokedFunctionSetMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListInvokedFunctionSetMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListInvokedFunctionSetMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element GGS_staticListInvokedFunctionSetMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap_2E_element result ;
  const GGS_staticListInvokedFunctionSetMap_2E_element * p = (const GGS_staticListInvokedFunctionSetMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListInvokedFunctionSetMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @staticListInvokedFunctionSetMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element_3F_::GGS_staticListInvokedFunctionSetMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element_3F_::GGS_staticListInvokedFunctionSetMap_2E_element_3F_ (const GGS_staticListInvokedFunctionSetMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element_3F_ GGS_staticListInvokedFunctionSetMap_2E_element_3F_::init_nil (void) {
  GGS_staticListInvokedFunctionSetMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListInvokedFunctionSetMap_2E_element_3F_::isValid (void) const {
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

bool GGS_staticListInvokedFunctionSetMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_staticListInvokedFunctionSetMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap_2E_element_3F_::description (String & ioString,
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
//     @staticListInvokedFunctionSetMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2E_element_3F_ ("staticListInvokedFunctionSetMap.element?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListInvokedFunctionSetMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListInvokedFunctionSetMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListInvokedFunctionSetMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element_3F_ GGS_staticListInvokedFunctionSetMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap_2E_element_3F_ result ;
  const GGS_staticListInvokedFunctionSetMap_2E_element_3F_ * p = (const GGS_staticListInvokedFunctionSetMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListInvokedFunctionSetMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST_2E_element::GGS_taskListAST_2E_element (void) :
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

GGS_taskListAST_2E_element::GGS_taskListAST_2E_element (const GGS_taskListAST_2E_element & inSource) :
mProperty_mTaskName (inSource.mProperty_mTaskName),
mProperty_mLowerPriorityTaskList (inSource.mProperty_mLowerPriorityTaskList),
mProperty_mStackSize (inSource.mProperty_mStackSize),
mProperty_mTaskSetupListAST (inSource.mProperty_mTaskSetupListAST),
mProperty_mTaskActivateListAST (inSource.mProperty_mTaskActivateListAST),
mProperty_mTaskDeactivateListAST (inSource.mProperty_mTaskDeactivateListAST),
mProperty_mGuardedCommandList (inSource.mProperty_mGuardedCommandList),
mProperty_mEndOfTaskDeclaration (inSource.mProperty_mEndOfTaskDeclaration),
mProperty_mAutoStart (inSource.mProperty_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST_2E_element & GGS_taskListAST_2E_element::operator = (const GGS_taskListAST_2E_element & inSource) {
  mProperty_mTaskName = inSource.mProperty_mTaskName ;
  mProperty_mLowerPriorityTaskList = inSource.mProperty_mLowerPriorityTaskList ;
  mProperty_mStackSize = inSource.mProperty_mStackSize ;
  mProperty_mTaskSetupListAST = inSource.mProperty_mTaskSetupListAST ;
  mProperty_mTaskActivateListAST = inSource.mProperty_mTaskActivateListAST ;
  mProperty_mTaskDeactivateListAST = inSource.mProperty_mTaskDeactivateListAST ;
  mProperty_mGuardedCommandList = inSource.mProperty_mGuardedCommandList ;
  mProperty_mEndOfTaskDeclaration = inSource.mProperty_mEndOfTaskDeclaration ;
  mProperty_mAutoStart = inSource.mProperty_mAutoStart ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_taskListAST_2E_element GGS_taskListAST_2E_element::init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mTaskName,
                                                                                                 const GGS_lstringlist & in_mLowerPriorityTaskList,
                                                                                                 const GGS_lbigint & in_mStackSize,
                                                                                                 const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                                 const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                                 const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                                 const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                                                 const GGS_location & in_mEndOfTaskDeclaration,
                                                                                                 const GGS_bool & in_mAutoStart,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskListAST_2E_element result ;
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

void GGS_taskListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST_2E_element::GGS_taskListAST_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_lstringlist & inOperand1,
                                                        const GGS_lbigint & inOperand2,
                                                        const GGS_taskSetupListAST & inOperand3,
                                                        const GGS_taskSetupListAST & inOperand4,
                                                        const GGS_taskSetupListAST & inOperand5,
                                                        const GGS_syncInstructionBranchListAST & inOperand6,
                                                        const GGS_location & inOperand7,
                                                        const GGS_bool & inOperand8) :
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

GGS_taskListAST_2E_element GGS_taskListAST_2E_element::class_func_new (const GGS_lstring & in_mTaskName,
                                                                       const GGS_lstringlist & in_mLowerPriorityTaskList,
                                                                       const GGS_lbigint & in_mStackSize,
                                                                       const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                       const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                       const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                       const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                       const GGS_location & in_mEndOfTaskDeclaration,
                                                                       const GGS_bool & in_mAutoStart,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskListAST_2E_element result ;
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

bool GGS_taskListAST_2E_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mLowerPriorityTaskList.isValid () && mProperty_mStackSize.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mTaskActivateListAST.isValid () && mProperty_mTaskDeactivateListAST.isValid () && mProperty_mGuardedCommandList.isValid () && mProperty_mEndOfTaskDeclaration.isValid () && mProperty_mAutoStart.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST_2E_element::drop (void) {
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

void GGS_taskListAST_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskListAST.element:") ;
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
//     @taskListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskListAST_2E_element ("taskListAST.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST_2E_element GGS_taskListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_taskListAST_2E_element result ;
  const GGS_taskListAST_2E_element * p = (const GGS_taskListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element::GGS_taskSetupListAST_2E_element (void) :
mProperty_mName (),
mProperty_mDependanceList () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element::GGS_taskSetupListAST_2E_element (const GGS_taskSetupListAST_2E_element & inSource) :
mProperty_mName (inSource.mProperty_mName),
mProperty_mDependanceList (inSource.mProperty_mDependanceList) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element & GGS_taskSetupListAST_2E_element::operator = (const GGS_taskSetupListAST_2E_element & inSource) {
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mDependanceList = inSource.mProperty_mDependanceList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_taskSetupListAST_2E_element GGS_taskSetupListAST_2E_element::init_21__21_ (const GGS_lstring & in_mName,
                                                                               const GGS_lstringlist & in_mDependanceList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskSetupListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mDependanceList = in_mDependanceList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element::GGS_taskSetupListAST_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_lstringlist & inOperand1) :
mProperty_mName (inOperand0),
mProperty_mDependanceList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element GGS_taskSetupListAST_2E_element::class_func_new (const GGS_lstring & in_mName,
                                                                                 const GGS_lstringlist & in_mDependanceList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskSetupListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mDependanceList = in_mDependanceList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_taskSetupListAST_2E_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mDependanceList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST_2E_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mDependanceList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskSetupListAST.element:") ;
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
//     @taskSetupListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupListAST_2E_element ("taskSetupListAST.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskSetupListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSetupListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSetupListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element GGS_taskSetupListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_taskSetupListAST_2E_element result ;
  const GGS_taskSetupListAST_2E_element * p = (const GGS_taskSetupListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSetupListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element::GGS_taskMap_2E_element (void) :
mProperty_lkey (),
mProperty_mTaskType () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element::GGS_taskMap_2E_element (const GGS_taskMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mTaskType (inSource.mProperty_mTaskType) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element & GGS_taskMap_2E_element::operator = (const GGS_taskMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mTaskType = inSource.mProperty_mTaskType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_taskMap_2E_element GGS_taskMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                             const GGS_omnibusType & in_mTaskType,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTaskType = in_mTaskType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element::GGS_taskMap_2E_element (const GGS_lstring & inOperand0,
                                                const GGS_omnibusType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTaskType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element GGS_taskMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                               const GGS_omnibusType & in_mTaskType,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTaskType = in_mTaskType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_taskMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap_2E_element::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskMap.element:") ;
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
//     @taskMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMap_2E_element ("taskMap.element",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element GGS_taskMap_2E_element::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_taskMap_2E_element result ;
  const GGS_taskMap_2E_element * p = (const GGS_taskMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @taskMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element_3F_::GGS_taskMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element_3F_::GGS_taskMap_2E_element_3F_ (const GGS_taskMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element_3F_ GGS_taskMap_2E_element_3F_::init_nil (void) {
  GGS_taskMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_taskMap_2E_element_3F_::isValid (void) const {
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

bool GGS_taskMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_taskMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap_2E_element_3F_::description (String & ioString,
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
//     @taskMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMap_2E_element_3F_ ("taskMap.element?",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element_3F_ GGS_taskMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_taskMap_2E_element_3F_ result ;
  const GGS_taskMap_2E_element_3F_ * p = (const GGS_taskMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element::GGS_taskMapIR_2E_element (void) :
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

GGS_taskMapIR_2E_element::GGS_taskMapIR_2E_element (const GGS_taskMapIR_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mTaskType (inSource.mProperty_mTaskType),
mProperty_mPriority (inSource.mProperty_mPriority),
mProperty_mStackSize (inSource.mProperty_mStackSize),
mProperty_mSetupOrderedList (inSource.mProperty_mSetupOrderedList),
mProperty_mActivateOrderedList (inSource.mProperty_mActivateOrderedList),
mProperty_mDeactivateOrderedList (inSource.mProperty_mDeactivateOrderedList),
mProperty_mTaskNameStringIndex (inSource.mProperty_mTaskNameStringIndex),
mProperty_mActivate (inSource.mProperty_mActivate) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element & GGS_taskMapIR_2E_element::operator = (const GGS_taskMapIR_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mTaskType = inSource.mProperty_mTaskType ;
  mProperty_mPriority = inSource.mProperty_mPriority ;
  mProperty_mStackSize = inSource.mProperty_mStackSize ;
  mProperty_mSetupOrderedList = inSource.mProperty_mSetupOrderedList ;
  mProperty_mActivateOrderedList = inSource.mProperty_mActivateOrderedList ;
  mProperty_mDeactivateOrderedList = inSource.mProperty_mDeactivateOrderedList ;
  mProperty_mTaskNameStringIndex = inSource.mProperty_mTaskNameStringIndex ;
  mProperty_mActivate = inSource.mProperty_mActivate ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_taskMapIR_2E_element GGS_taskMapIR_2E_element::init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_omnibusType & in_mTaskType,
                                                                                             const GGS_uint & in_mPriority,
                                                                                             const GGS_bigint & in_mStackSize,
                                                                                             const GGS_stringlist & in_mSetupOrderedList,
                                                                                             const GGS_stringlist & in_mActivateOrderedList,
                                                                                             const GGS_stringlist & in_mDeactivateOrderedList,
                                                                                             const GGS_uint & in_mTaskNameStringIndex,
                                                                                             const GGS_bool & in_mActivate,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskMapIR_2E_element result ;
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

void GGS_taskMapIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element::GGS_taskMapIR_2E_element (const GGS_lstring & inOperand0,
                                                    const GGS_omnibusType & inOperand1,
                                                    const GGS_uint & inOperand2,
                                                    const GGS_bigint & inOperand3,
                                                    const GGS_stringlist & inOperand4,
                                                    const GGS_stringlist & inOperand5,
                                                    const GGS_stringlist & inOperand6,
                                                    const GGS_uint & inOperand7,
                                                    const GGS_bool & inOperand8) :
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

GGS_taskMapIR_2E_element GGS_taskMapIR_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                   const GGS_omnibusType & in_mTaskType,
                                                                   const GGS_uint & in_mPriority,
                                                                   const GGS_bigint & in_mStackSize,
                                                                   const GGS_stringlist & in_mSetupOrderedList,
                                                                   const GGS_stringlist & in_mActivateOrderedList,
                                                                   const GGS_stringlist & in_mDeactivateOrderedList,
                                                                   const GGS_uint & in_mTaskNameStringIndex,
                                                                   const GGS_bool & in_mActivate,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskMapIR_2E_element result ;
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

bool GGS_taskMapIR_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mSetupOrderedList.isValid () && mProperty_mActivateOrderedList.isValid () && mProperty_mDeactivateOrderedList.isValid () && mProperty_mTaskNameStringIndex.isValid () && mProperty_mActivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR_2E_element::drop (void) {
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

void GGS_taskMapIR_2E_element::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskMapIR.element:") ;
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
//     @taskMapIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMapIR_2E_element ("taskMapIR.element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskMapIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskMapIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskMapIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element GGS_taskMapIR_2E_element::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_taskMapIR_2E_element result ;
  const GGS_taskMapIR_2E_element * p = (const GGS_taskMapIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskMapIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @taskMapIR_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element_3F_::GGS_taskMapIR_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element_3F_::GGS_taskMapIR_2E_element_3F_ (const GGS_taskMapIR_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element_3F_ GGS_taskMapIR_2E_element_3F_::init_nil (void) {
  GGS_taskMapIR_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_taskMapIR_2E_element_3F_::isValid (void) const {
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

bool GGS_taskMapIR_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_taskMapIR_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR_2E_element_3F_::description (String & ioString,
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
//     @taskMapIR.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMapIR_2E_element_3F_ ("taskMapIR.element?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskMapIR_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskMapIR_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskMapIR_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element_3F_ GGS_taskMapIR_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_taskMapIR_2E_element_3F_ result ;
  const GGS_taskMapIR_2E_element_3F_ * p = (const GGS_taskMapIR_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskMapIR_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element::GGS_routineMapForContext_2E_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mSignature (),
mProperty_mReturnTypeProxy (),
mProperty_mModeDictionary (),
mProperty_mIsExported (),
mProperty_mFunctionMode () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element::GGS_routineMapForContext_2E_element (const GGS_routineMapForContext_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIsPublic (inSource.mProperty_mIsPublic),
mProperty_mSignature (inSource.mProperty_mSignature),
mProperty_mReturnTypeProxy (inSource.mProperty_mReturnTypeProxy),
mProperty_mModeDictionary (inSource.mProperty_mModeDictionary),
mProperty_mIsExported (inSource.mProperty_mIsExported),
mProperty_mFunctionMode (inSource.mProperty_mFunctionMode) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element & GGS_routineMapForContext_2E_element::operator = (const GGS_routineMapForContext_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIsPublic = inSource.mProperty_mIsPublic ;
  mProperty_mSignature = inSource.mProperty_mSignature ;
  mProperty_mReturnTypeProxy = inSource.mProperty_mReturnTypeProxy ;
  mProperty_mModeDictionary = inSource.mProperty_mModeDictionary ;
  mProperty_mIsExported = inSource.mProperty_mIsExported ;
  mProperty_mFunctionMode = inSource.mProperty_mFunctionMode ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineMapForContext_2E_element GGS_routineMapForContext_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                           const GGS_bool & in_mIsPublic,
                                                                                                           const GGS_routineTypedSignature & in_mSignature,
                                                                                                           const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                                           const GGS_routineLLVMNameDict & in_mModeDictionary,
                                                                                                           const GGS_bool & in_mIsExported,
                                                                                                           const GGS_mode & in_mFunctionMode,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMapForContext_2E_element result ;
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

void GGS_routineMapForContext_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element::GGS_routineMapForContext_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_bool & inOperand1,
                                                                          const GGS_routineTypedSignature & inOperand2,
                                                                          const GGS_unifiedTypeMapEntry & inOperand3,
                                                                          const GGS_routineLLVMNameDict & inOperand4,
                                                                          const GGS_bool & inOperand5,
                                                                          const GGS_mode & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mReturnTypeProxy (inOperand3),
mProperty_mModeDictionary (inOperand4),
mProperty_mIsExported (inOperand5),
mProperty_mFunctionMode (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element GGS_routineMapForContext_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                         const GGS_bool & in_mIsPublic,
                                                                                         const GGS_routineTypedSignature & in_mSignature,
                                                                                         const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                         const GGS_routineLLVMNameDict & in_mModeDictionary,
                                                                                         const GGS_bool & in_mIsExported,
                                                                                         const GGS_mode & in_mFunctionMode,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMapForContext_2E_element result ;
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

bool GGS_routineMapForContext_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () && mProperty_mReturnTypeProxy.isValid () && mProperty_mModeDictionary.isValid () && mProperty_mIsExported.isValid () && mProperty_mFunctionMode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mReturnTypeProxy.drop () ;
  mProperty_mModeDictionary.drop () ;
  mProperty_mIsExported.drop () ;
  mProperty_mFunctionMode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMapForContext.element:") ;
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
//     @routineMapForContext.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMapForContext_2E_element ("routineMapForContext.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMapForContext_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMapForContext_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMapForContext_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element GGS_routineMapForContext_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_routineMapForContext_2E_element result ;
  const GGS_routineMapForContext_2E_element * p = (const GGS_routineMapForContext_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMapForContext_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineMapForContext_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element_3F_::GGS_routineMapForContext_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element_3F_::GGS_routineMapForContext_2E_element_3F_ (const GGS_routineMapForContext_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element_3F_ GGS_routineMapForContext_2E_element_3F_::init_nil (void) {
  GGS_routineMapForContext_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMapForContext_2E_element_3F_::isValid (void) const {
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

bool GGS_routineMapForContext_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineMapForContext_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext_2E_element_3F_::description (String & ioString,
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
//     @routineMapForContext.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMapForContext_2E_element_3F_ ("routineMapForContext.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMapForContext_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMapForContext_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMapForContext_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element_3F_ GGS_routineMapForContext_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_routineMapForContext_2E_element_3F_ result ;
  const GGS_routineMapForContext_2E_element_3F_ * p = (const GGS_routineMapForContext_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMapForContext_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST_2E_element::GGS_requiredFunctionDeclarationListAST_2E_element (void) :
mProperty_mName (),
mProperty_mExecutionMode (),
mProperty_mIsExported (),
mProperty_mFormalArgumentList (),
mProperty_mEndOfProcLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST_2E_element::GGS_requiredFunctionDeclarationListAST_2E_element (const GGS_requiredFunctionDeclarationListAST_2E_element & inSource) :
mProperty_mName (inSource.mProperty_mName),
mProperty_mExecutionMode (inSource.mProperty_mExecutionMode),
mProperty_mIsExported (inSource.mProperty_mIsExported),
mProperty_mFormalArgumentList (inSource.mProperty_mFormalArgumentList),
mProperty_mEndOfProcLocation (inSource.mProperty_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST_2E_element & GGS_requiredFunctionDeclarationListAST_2E_element::operator = (const GGS_requiredFunctionDeclarationListAST_2E_element & inSource) {
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mExecutionMode = inSource.mProperty_mExecutionMode ;
  mProperty_mIsExported = inSource.mProperty_mIsExported ;
  mProperty_mFormalArgumentList = inSource.mProperty_mFormalArgumentList ;
  mProperty_mEndOfProcLocation = inSource.mProperty_mEndOfProcLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST_2E_element GGS_requiredFunctionDeclarationListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mName,
                                                                                                                               const GGS_mode & in_mExecutionMode,
                                                                                                                               const GGS_bool & in_mIsExported,
                                                                                                                               const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                                               const GGS_location & in_mEndOfProcLocation,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_requiredFunctionDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mExecutionMode = in_mExecutionMode ;
  result.mProperty_mIsExported = in_mIsExported ;
  result.mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  result.mProperty_mEndOfProcLocation = in_mEndOfProcLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST_2E_element::GGS_requiredFunctionDeclarationListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                      const GGS_mode & inOperand1,
                                                                                                      const GGS_bool & inOperand2,
                                                                                                      const GGS_routineFormalArgumentListAST & inOperand3,
                                                                                                      const GGS_location & inOperand4) :
mProperty_mName (inOperand0),
mProperty_mExecutionMode (inOperand1),
mProperty_mIsExported (inOperand2),
mProperty_mFormalArgumentList (inOperand3),
mProperty_mEndOfProcLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST_2E_element GGS_requiredFunctionDeclarationListAST_2E_element::class_func_new (const GGS_lstring & in_mName,
                                                                                                                     const GGS_mode & in_mExecutionMode,
                                                                                                                     const GGS_bool & in_mIsExported,
                                                                                                                     const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                                     const GGS_location & in_mEndOfProcLocation,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_requiredFunctionDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mExecutionMode = in_mExecutionMode ;
  result.mProperty_mIsExported = in_mIsExported ;
  result.mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  result.mProperty_mEndOfProcLocation = in_mEndOfProcLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_requiredFunctionDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mExecutionMode.isValid () && mProperty_mIsExported.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST_2E_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mExecutionMode.drop () ;
  mProperty_mIsExported.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @requiredFunctionDeclarationListAST.element:") ;
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
//     @requiredFunctionDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2E_element ("requiredFunctionDeclarationListAST.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_requiredFunctionDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_requiredFunctionDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_requiredFunctionDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST_2E_element GGS_requiredFunctionDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_requiredFunctionDeclarationListAST_2E_element result ;
  const GGS_requiredFunctionDeclarationListAST_2E_element * p = (const GGS_requiredFunctionDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_requiredFunctionDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredFunctionDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @externProcedureMapIR_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element_3F_::GGS_externProcedureMapIR_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element_3F_::GGS_externProcedureMapIR_2E_element_3F_ (const GGS_externProcedureMapIR_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element_3F_ GGS_externProcedureMapIR_2E_element_3F_::init_nil (void) {
  GGS_externProcedureMapIR_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externProcedureMapIR_2E_element_3F_::isValid (void) const {
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

bool GGS_externProcedureMapIR_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_externProcedureMapIR_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR_2E_element_3F_::description (String & ioString,
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
//     @externProcedureMapIR.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element_3F_ ("externProcedureMapIR.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externProcedureMapIR_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externProcedureMapIR_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externProcedureMapIR_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element_3F_ GGS_externProcedureMapIR_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_externProcedureMapIR_2E_element_3F_ result ;
  const GGS_externProcedureMapIR_2E_element_3F_ * p = (const GGS_externProcedureMapIR_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externProcedureMapIR_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element::GGS_interruptMapIR_2E_element (void) :
mProperty_lkey (),
mProperty_mSelfType (),
mProperty_mDriverName (),
mProperty_mMode () {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element::GGS_interruptMapIR_2E_element (const GGS_interruptMapIR_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mSelfType (inSource.mProperty_mSelfType),
mProperty_mDriverName (inSource.mProperty_mDriverName),
mProperty_mMode (inSource.mProperty_mMode) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element & GGS_interruptMapIR_2E_element::operator = (const GGS_interruptMapIR_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mSelfType = inSource.mProperty_mSelfType ;
  mProperty_mDriverName = inSource.mProperty_mDriverName ;
  mProperty_mMode = inSource.mProperty_mMode ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_interruptMapIR_2E_element GGS_interruptMapIR_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_omnibusType & in_mSelfType,
                                                                                   const GGS_string & in_mDriverName,
                                                                                   const GGS_mode & in_mMode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_interruptMapIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSelfType = in_mSelfType ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mMode = in_mMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element::GGS_interruptMapIR_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_omnibusType & inOperand1,
                                                              const GGS_string & inOperand2,
                                                              const GGS_mode & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mSelfType (inOperand1),
mProperty_mDriverName (inOperand2),
mProperty_mMode (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element GGS_interruptMapIR_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                             const GGS_omnibusType & in_mSelfType,
                                                                             const GGS_string & in_mDriverName,
                                                                             const GGS_mode & in_mMode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_interruptMapIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSelfType = in_mSelfType ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mMode = in_mMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_interruptMapIR_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSelfType.isValid () && mProperty_mDriverName.isValid () && mProperty_mMode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSelfType.drop () ;
  mProperty_mDriverName.drop () ;
  mProperty_mMode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @interruptMapIR.element:") ;
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
//     @interruptMapIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptMapIR_2E_element ("interruptMapIR.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_interruptMapIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptMapIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptMapIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element GGS_interruptMapIR_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR_2E_element result ;
  const GGS_interruptMapIR_2E_element * p = (const GGS_interruptMapIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptMapIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @interruptMapIR_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element_3F_::GGS_interruptMapIR_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element_3F_::GGS_interruptMapIR_2E_element_3F_ (const GGS_interruptMapIR_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element_3F_ GGS_interruptMapIR_2E_element_3F_::init_nil (void) {
  GGS_interruptMapIR_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_interruptMapIR_2E_element_3F_::isValid (void) const {
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

bool GGS_interruptMapIR_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_interruptMapIR_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR_2E_element_3F_::description (String & ioString,
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
//     @interruptMapIR.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptMapIR_2E_element_3F_ ("interruptMapIR.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_interruptMapIR_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptMapIR_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptMapIR_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element_3F_ GGS_interruptMapIR_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR_2E_element_3F_ result ;
  const GGS_interruptMapIR_2E_element_3F_ * p = (const GGS_interruptMapIR_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptMapIR_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard::GGS_guardKind_2E_convenienceGuard (void) :
mProperty_base () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard::GGS_guardKind_2E_convenienceGuard (const GGS_guardKind_2E_convenienceGuard & inSource) :
mProperty_base (inSource.mProperty_base) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard & GGS_guardKind_2E_convenienceGuard::operator = (const GGS_guardKind_2E_convenienceGuard & inSource) {
  mProperty_base = inSource.mProperty_base ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard GGS_guardKind_2E_convenienceGuard::init_21_ (const GGS_callInstructionAST & in_base,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardKind_2E_convenienceGuard result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_base = in_base ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind_2E_convenienceGuard::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard::GGS_guardKind_2E_convenienceGuard (const GGS_callInstructionAST & inOperand0) :
mProperty_base (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard GGS_guardKind_2E_convenienceGuard::class_func_new (const GGS_callInstructionAST & in_base,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardKind_2E_convenienceGuard result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_base = in_base ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardKind_2E_convenienceGuard::isValid (void) const {
  return mProperty_base.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind_2E_convenienceGuard::drop (void) {
  mProperty_base.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind_2E_convenienceGuard::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardKind.convenienceGuard:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_base.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guardKind.convenienceGuard generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard ("guardKind.convenienceGuard",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardKind_2E_convenienceGuard::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardKind_2E_convenienceGuard::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardKind_2E_convenienceGuard (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard GGS_guardKind_2E_convenienceGuard::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_guardKind_2E_convenienceGuard result ;
  const GGS_guardKind_2E_convenienceGuard * p = (const GGS_guardKind_2E_convenienceGuard *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardKind_2E_convenienceGuard *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind.convenienceGuard", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @guardKind_2E_convenienceGuard_3F_
//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard_3F_::GGS_guardKind_2E_convenienceGuard_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard_3F_::GGS_guardKind_2E_convenienceGuard_3F_ (const GGS_guardKind_2E_convenienceGuard & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard_3F_ GGS_guardKind_2E_convenienceGuard_3F_::init_nil (void) {
  GGS_guardKind_2E_convenienceGuard_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardKind_2E_convenienceGuard_3F_::isValid (void) const {
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

bool GGS_guardKind_2E_convenienceGuard_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind_2E_convenienceGuard_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_guardKind_2E_convenienceGuard () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind_2E_convenienceGuard_3F_::description (String & ioString,
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
//     @guardKind.convenienceGuard? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard_3F_ ("guardKind.convenienceGuard?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardKind_2E_convenienceGuard_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardKind_2E_convenienceGuard_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardKind_2E_convenienceGuard_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard_3F_ GGS_guardKind_2E_convenienceGuard_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_guardKind_2E_convenienceGuard_3F_ result ;
  const GGS_guardKind_2E_convenienceGuard_3F_ * p = (const GGS_guardKind_2E_convenienceGuard_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardKind_2E_convenienceGuard_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind.convenienceGuard?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element::GGS_guardMapForContext_2E_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mSignature (),
mProperty_mUserRoutineLLVMName (),
mProperty_mImplementationRoutineLLVMName () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element::GGS_guardMapForContext_2E_element (const GGS_guardMapForContext_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIsPublic (inSource.mProperty_mIsPublic),
mProperty_mSignature (inSource.mProperty_mSignature),
mProperty_mUserRoutineLLVMName (inSource.mProperty_mUserRoutineLLVMName),
mProperty_mImplementationRoutineLLVMName (inSource.mProperty_mImplementationRoutineLLVMName) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element & GGS_guardMapForContext_2E_element::operator = (const GGS_guardMapForContext_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIsPublic = inSource.mProperty_mIsPublic ;
  mProperty_mSignature = inSource.mProperty_mSignature ;
  mProperty_mUserRoutineLLVMName = inSource.mProperty_mUserRoutineLLVMName ;
  mProperty_mImplementationRoutineLLVMName = inSource.mProperty_mImplementationRoutineLLVMName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guardMapForContext_2E_element GGS_guardMapForContext_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_bool & in_mIsPublic,
                                                                                               const GGS_routineTypedSignature & in_mSignature,
                                                                                               const GGS_lstring & in_mUserRoutineLLVMName,
                                                                                               const GGS_lstring & in_mImplementationRoutineLLVMName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardMapForContext_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsPublic = in_mIsPublic ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mUserRoutineLLVMName = in_mUserRoutineLLVMName ;
  result.mProperty_mImplementationRoutineLLVMName = in_mImplementationRoutineLLVMName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element::GGS_guardMapForContext_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_bool & inOperand1,
                                                                      const GGS_routineTypedSignature & inOperand2,
                                                                      const GGS_lstring & inOperand3,
                                                                      const GGS_lstring & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mUserRoutineLLVMName (inOperand3),
mProperty_mImplementationRoutineLLVMName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element GGS_guardMapForContext_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                     const GGS_bool & in_mIsPublic,
                                                                                     const GGS_routineTypedSignature & in_mSignature,
                                                                                     const GGS_lstring & in_mUserRoutineLLVMName,
                                                                                     const GGS_lstring & in_mImplementationRoutineLLVMName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardMapForContext_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsPublic = in_mIsPublic ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mUserRoutineLLVMName = in_mUserRoutineLLVMName ;
  result.mProperty_mImplementationRoutineLLVMName = in_mImplementationRoutineLLVMName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardMapForContext_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () && mProperty_mUserRoutineLLVMName.isValid () && mProperty_mImplementationRoutineLLVMName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mUserRoutineLLVMName.drop () ;
  mProperty_mImplementationRoutineLLVMName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardMapForContext.element:") ;
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
//     @guardMapForContext.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardMapForContext_2E_element ("guardMapForContext.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardMapForContext_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardMapForContext_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardMapForContext_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element GGS_guardMapForContext_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_guardMapForContext_2E_element result ;
  const GGS_guardMapForContext_2E_element * p = (const GGS_guardMapForContext_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardMapForContext_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @guardMapForContext_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element_3F_::GGS_guardMapForContext_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element_3F_::GGS_guardMapForContext_2E_element_3F_ (const GGS_guardMapForContext_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element_3F_ GGS_guardMapForContext_2E_element_3F_::init_nil (void) {
  GGS_guardMapForContext_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardMapForContext_2E_element_3F_::isValid (void) const {
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

bool GGS_guardMapForContext_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_guardMapForContext_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext_2E_element_3F_::description (String & ioString,
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
//     @guardMapForContext.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardMapForContext_2E_element_3F_ ("guardMapForContext.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardMapForContext_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardMapForContext_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardMapForContext_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element_3F_ GGS_guardMapForContext_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_guardMapForContext_2E_element_3F_ result ;
  const GGS_guardMapForContext_2E_element_3F_ * p = (const GGS_guardMapForContext_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardMapForContext_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element::GGS_routineFormalArgumentListAST_2E_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element::GGS_routineFormalArgumentListAST_2E_element (const GGS_routineFormalArgumentListAST_2E_element & inSource) :
mProperty_mFormalArgumentPassingMode (inSource.mProperty_mFormalArgumentPassingMode),
mProperty_mSelector (inSource.mProperty_mSelector),
mProperty_mFormalArgumentTypeName (inSource.mProperty_mFormalArgumentTypeName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element & GGS_routineFormalArgumentListAST_2E_element::operator = (const GGS_routineFormalArgumentListAST_2E_element & inSource) {
  mProperty_mFormalArgumentPassingMode = inSource.mProperty_mFormalArgumentPassingMode ;
  mProperty_mSelector = inSource.mProperty_mSelector ;
  mProperty_mFormalArgumentTypeName = inSource.mProperty_mFormalArgumentTypeName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                               const GGS_lstring & in_mSelector,
                                                                                                               const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                               const GGS_lstring & in_mFormalArgumentName,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element::GGS_routineFormalArgumentListAST_2E_element (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                          const GGS_lstring & inOperand1,
                                                                                          const GGS_lstring & inOperand2,
                                                                                          const GGS_lstring & inOperand3) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element GGS_routineFormalArgumentListAST_2E_element::class_func_new (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                         const GGS_lstring & in_mSelector,
                                                                                                         const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                         const GGS_lstring & in_mFormalArgumentName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineFormalArgumentListAST_2E_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST_2E_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineFormalArgumentListAST.element:") ;
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
//     @routineFormalArgumentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2E_element ("routineFormalArgumentListAST.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineFormalArgumentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineFormalArgumentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineFormalArgumentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element GGS_routineFormalArgumentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_routineFormalArgumentListAST_2E_element result ;
  const GGS_routineFormalArgumentListAST_2E_element * p = (const GGS_routineFormalArgumentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineFormalArgumentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element::GGS_routineTypedSignature_2E_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mTypeProxy (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element::GGS_routineTypedSignature_2E_element (const GGS_routineTypedSignature_2E_element & inSource) :
mProperty_mFormalArgumentPassingMode (inSource.mProperty_mFormalArgumentPassingMode),
mProperty_mSelector (inSource.mProperty_mSelector),
mProperty_mTypeProxy (inSource.mProperty_mTypeProxy),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element & GGS_routineTypedSignature_2E_element::operator = (const GGS_routineTypedSignature_2E_element & inSource) {
  mProperty_mFormalArgumentPassingMode = inSource.mProperty_mFormalArgumentPassingMode ;
  mProperty_mSelector = inSource.mProperty_mSelector ;
  mProperty_mTypeProxy = inSource.mProperty_mTypeProxy ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineTypedSignature_2E_element GGS_routineTypedSignature_2E_element::init_21__21__21__21_ (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                 const GGS_lstring & in_mSelector,
                                                                                                 const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                                                                 const GGS_lstring & in_mFormalArgumentName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mTypeProxy = in_mTypeProxy ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element::GGS_routineTypedSignature_2E_element (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                            const GGS_lstring & inOperand1,
                                                                            const GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const GGS_lstring & inOperand3) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mTypeProxy (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element GGS_routineTypedSignature_2E_element::class_func_new (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                           const GGS_lstring & in_mSelector,
                                                                                           const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                                                           const GGS_lstring & in_mFormalArgumentName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mTypeProxy = in_mTypeProxy ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineTypedSignature_2E_element::objectCompare (const GGS_routineTypedSignature_2E_element & inOperand) const {
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

bool GGS_routineTypedSignature_2E_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mTypeProxy.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature_2E_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mTypeProxy.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineTypedSignature.element:") ;
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
//     @routineTypedSignature.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineTypedSignature_2E_element ("routineTypedSignature.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineTypedSignature_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineTypedSignature_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineTypedSignature_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element GGS_routineTypedSignature_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_routineTypedSignature_2E_element result ;
  const GGS_routineTypedSignature_2E_element * p = (const GGS_routineTypedSignature_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineTypedSignature_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element::GGS_routineFormalArgumentListIR_2E_element (void) :
mProperty_mFormalArgumentKind (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element::GGS_routineFormalArgumentListIR_2E_element (const GGS_routineFormalArgumentListIR_2E_element & inSource) :
mProperty_mFormalArgumentKind (inSource.mProperty_mFormalArgumentKind),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element & GGS_routineFormalArgumentListIR_2E_element::operator = (const GGS_routineFormalArgumentListIR_2E_element & inSource) {
  mProperty_mFormalArgumentKind = inSource.mProperty_mFormalArgumentKind ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element GGS_routineFormalArgumentListIR_2E_element::init_21__21__21_ (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                         const GGS_omnibusType & in_mFormalArgumentType,
                                                                                                         const GGS_string & in_mFormalArgumentName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentKind = in_mFormalArgumentKind ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element::GGS_routineFormalArgumentListIR_2E_element (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                        const GGS_omnibusType & inOperand1,
                                                                                        const GGS_string & inOperand2) :
mProperty_mFormalArgumentKind (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element GGS_routineFormalArgumentListIR_2E_element::class_func_new (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                       const GGS_omnibusType & in_mFormalArgumentType,
                                                                                                       const GGS_string & in_mFormalArgumentName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentKind = in_mFormalArgumentKind ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineFormalArgumentListIR_2E_element::isValid (void) const {
  return mProperty_mFormalArgumentKind.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR_2E_element::drop (void) {
  mProperty_mFormalArgumentKind.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineFormalArgumentListIR.element:") ;
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
//     @routineFormalArgumentListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2E_element ("routineFormalArgumentListIR.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineFormalArgumentListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineFormalArgumentListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineFormalArgumentListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element GGS_routineFormalArgumentListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR_2E_element result ;
  const GGS_routineFormalArgumentListIR_2E_element * p = (const GGS_routineFormalArgumentListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineFormalArgumentListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element::GGS_allocaList_2E_element (void) :
mProperty_mVarLLVMName (),
mProperty_mLLVMType (),
mProperty_mFormalInputArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element::GGS_allocaList_2E_element (const GGS_allocaList_2E_element & inSource) :
mProperty_mVarLLVMName (inSource.mProperty_mVarLLVMName),
mProperty_mLLVMType (inSource.mProperty_mLLVMType),
mProperty_mFormalInputArgument (inSource.mProperty_mFormalInputArgument) {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element & GGS_allocaList_2E_element::operator = (const GGS_allocaList_2E_element & inSource) {
  mProperty_mVarLLVMName = inSource.mProperty_mVarLLVMName ;
  mProperty_mLLVMType = inSource.mProperty_mLLVMType ;
  mProperty_mFormalInputArgument = inSource.mProperty_mFormalInputArgument ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_allocaList_2E_element GGS_allocaList_2E_element::init_21__21__21_ (const GGS_string & in_mVarLLVMName,
                                                                       const GGS_omnibusType & in_mLLVMType,
                                                                       const GGS_bool & in_mFormalInputArgument,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_allocaList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mVarLLVMName = in_mVarLLVMName ;
  result.mProperty_mLLVMType = in_mLLVMType ;
  result.mProperty_mFormalInputArgument = in_mFormalInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element::GGS_allocaList_2E_element (const GGS_string & inOperand0,
                                                      const GGS_omnibusType & inOperand1,
                                                      const GGS_bool & inOperand2) :
mProperty_mVarLLVMName (inOperand0),
mProperty_mLLVMType (inOperand1),
mProperty_mFormalInputArgument (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element GGS_allocaList_2E_element::class_func_new (const GGS_string & in_mVarLLVMName,
                                                                     const GGS_omnibusType & in_mLLVMType,
                                                                     const GGS_bool & in_mFormalInputArgument,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_allocaList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mVarLLVMName = in_mVarLLVMName ;
  result.mProperty_mLLVMType = in_mLLVMType ;
  result.mProperty_mFormalInputArgument = in_mFormalInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_allocaList_2E_element::isValid (void) const {
  return mProperty_mVarLLVMName.isValid () && mProperty_mLLVMType.isValid () && mProperty_mFormalInputArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList_2E_element::drop (void) {
  mProperty_mVarLLVMName.drop () ;
  mProperty_mLLVMType.drop () ;
  mProperty_mFormalInputArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @allocaList.element:") ;
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
//     @allocaList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_allocaList_2E_element ("allocaList.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_allocaList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_allocaList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_allocaList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element GGS_allocaList_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_allocaList_2E_element result ;
  const GGS_allocaList_2E_element * p = (const GGS_allocaList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_allocaList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element::GGS_panicRoutinePriorityMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element::GGS_panicRoutinePriorityMap_2E_element (const GGS_panicRoutinePriorityMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element & GGS_panicRoutinePriorityMap_2E_element::operator = (const GGS_panicRoutinePriorityMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element GGS_panicRoutinePriorityMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_panicRoutinePriorityMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element::GGS_panicRoutinePriorityMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element GGS_panicRoutinePriorityMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_panicRoutinePriorityMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_panicRoutinePriorityMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @panicRoutinePriorityMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @panicRoutinePriorityMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2E_element ("panicRoutinePriorityMap.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicRoutinePriorityMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicRoutinePriorityMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicRoutinePriorityMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element GGS_panicRoutinePriorityMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_panicRoutinePriorityMap_2E_element result ;
  const GGS_panicRoutinePriorityMap_2E_element * p = (const GGS_panicRoutinePriorityMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicRoutinePriorityMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @panicRoutinePriorityMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element_3F_::GGS_panicRoutinePriorityMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element_3F_::GGS_panicRoutinePriorityMap_2E_element_3F_ (const GGS_panicRoutinePriorityMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element_3F_ GGS_panicRoutinePriorityMap_2E_element_3F_::init_nil (void) {
  GGS_panicRoutinePriorityMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_panicRoutinePriorityMap_2E_element_3F_::isValid (void) const {
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

bool GGS_panicRoutinePriorityMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_panicRoutinePriorityMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap_2E_element_3F_::description (String & ioString,
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
//     @panicRoutinePriorityMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2E_element_3F_ ("panicRoutinePriorityMap.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicRoutinePriorityMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicRoutinePriorityMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicRoutinePriorityMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element_3F_ GGS_panicRoutinePriorityMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_panicRoutinePriorityMap_2E_element_3F_ result ;
  const GGS_panicRoutinePriorityMap_2E_element_3F_ * p = (const GGS_panicRoutinePriorityMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicRoutinePriorityMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element::GGS_implicitConversionToBooleanMap_2E_element (void) :
mProperty_lkey (),
mProperty_mConverter () {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element::GGS_implicitConversionToBooleanMap_2E_element (const GGS_implicitConversionToBooleanMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mConverter (inSource.mProperty_mConverter) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element & GGS_implicitConversionToBooleanMap_2E_element::operator = (const GGS_implicitConversionToBooleanMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mConverter = inSource.mProperty_mConverter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element GGS_implicitConversionToBooleanMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                           const GGS_abstractImplicitConverterToBoolean & in_mConverter,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConverter = in_mConverter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element::GGS_implicitConversionToBooleanMap_2E_element (const GGS_lstring & inOperand0,
                                                                                              const GGS_abstractImplicitConverterToBoolean & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConverter (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element GGS_implicitConversionToBooleanMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                             const GGS_abstractImplicitConverterToBoolean & in_mConverter,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConverter = in_mConverter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_implicitConversionToBooleanMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConverter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConverter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @implicitConversionToBooleanMap.element:") ;
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
//     @implicitConversionToBooleanMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2E_element ("implicitConversionToBooleanMap.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitConversionToBooleanMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitConversionToBooleanMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitConversionToBooleanMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element GGS_implicitConversionToBooleanMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap_2E_element result ;
  const GGS_implicitConversionToBooleanMap_2E_element * p = (const GGS_implicitConversionToBooleanMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitConversionToBooleanMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitConversionToBooleanMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @implicitConversionToBooleanMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element_3F_::GGS_implicitConversionToBooleanMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element_3F_::GGS_implicitConversionToBooleanMap_2E_element_3F_ (const GGS_implicitConversionToBooleanMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element_3F_ GGS_implicitConversionToBooleanMap_2E_element_3F_::init_nil (void) {
  GGS_implicitConversionToBooleanMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_implicitConversionToBooleanMap_2E_element_3F_::isValid (void) const {
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

bool GGS_implicitConversionToBooleanMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_implicitConversionToBooleanMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap_2E_element_3F_::description (String & ioString,
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
//     @implicitConversionToBooleanMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2E_element_3F_ ("implicitConversionToBooleanMap.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitConversionToBooleanMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitConversionToBooleanMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitConversionToBooleanMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element_3F_ GGS_implicitConversionToBooleanMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap_2E_element_3F_ result ;
  const GGS_implicitConversionToBooleanMap_2E_element_3F_ * p = (const GGS_implicitConversionToBooleanMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitConversionToBooleanMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitConversionToBooleanMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element::GGS_integerSliceFieldListAST_2E_element (void) :
mProperty_mSliceWidth (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element::GGS_integerSliceFieldListAST_2E_element (const GGS_integerSliceFieldListAST_2E_element & inSource) :
mProperty_mSliceWidth (inSource.mProperty_mSliceWidth),
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mExpressionLocation (inSource.mProperty_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element & GGS_integerSliceFieldListAST_2E_element::operator = (const GGS_integerSliceFieldListAST_2E_element & inSource) {
  mProperty_mSliceWidth = inSource.mProperty_mSliceWidth ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mExpressionLocation = inSource.mProperty_mExpressionLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element GGS_integerSliceFieldListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mSliceWidth,
                                                                                                   const GGS_expressionAST & in_mExpression,
                                                                                                   const GGS_location & in_mExpressionLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_integerSliceFieldListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceWidth = in_mSliceWidth ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mExpressionLocation = in_mExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element::GGS_integerSliceFieldListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_expressionAST & inOperand1,
                                                                                  const GGS_location & inOperand2) :
mProperty_mSliceWidth (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element GGS_integerSliceFieldListAST_2E_element::class_func_new (const GGS_lstring & in_mSliceWidth,
                                                                                                 const GGS_expressionAST & in_mExpression,
                                                                                                 const GGS_location & in_mExpressionLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_integerSliceFieldListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceWidth = in_mSliceWidth ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mExpressionLocation = in_mExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_integerSliceFieldListAST_2E_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST_2E_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @integerSliceFieldListAST.element:") ;
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
//     @integerSliceFieldListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2E_element ("integerSliceFieldListAST.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerSliceFieldListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceFieldListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerSliceFieldListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerSliceFieldListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element GGS_integerSliceFieldListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_integerSliceFieldListAST_2E_element result ;
  const GGS_integerSliceFieldListAST_2E_element * p = (const GGS_integerSliceFieldListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerSliceFieldListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceFieldListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST_2E_element::GGS_registerIntegerFieldListAST_2E_element (void) :
mProperty_mFieldName (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST_2E_element::GGS_registerIntegerFieldListAST_2E_element (const GGS_registerIntegerFieldListAST_2E_element & inSource) :
mProperty_mFieldName (inSource.mProperty_mFieldName),
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mExpressionLocation (inSource.mProperty_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST_2E_element & GGS_registerIntegerFieldListAST_2E_element::operator = (const GGS_registerIntegerFieldListAST_2E_element & inSource) {
  mProperty_mFieldName = inSource.mProperty_mFieldName ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mExpressionLocation = inSource.mProperty_mExpressionLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerIntegerFieldListAST_2E_element GGS_registerIntegerFieldListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mFieldName,
                                                                                                         const GGS_expressionAST & in_mExpression,
                                                                                                         const GGS_location & in_mExpressionLocation,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerIntegerFieldListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFieldName = in_mFieldName ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mExpressionLocation = in_mExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST_2E_element::GGS_registerIntegerFieldListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_expressionAST & inOperand1,
                                                                                        const GGS_location & inOperand2) :
mProperty_mFieldName (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST_2E_element GGS_registerIntegerFieldListAST_2E_element::class_func_new (const GGS_lstring & in_mFieldName,
                                                                                                       const GGS_expressionAST & in_mExpression,
                                                                                                       const GGS_location & in_mExpressionLocation,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerIntegerFieldListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFieldName = in_mFieldName ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mExpressionLocation = in_mExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerIntegerFieldListAST_2E_element::isValid (void) const {
  return mProperty_mFieldName.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST_2E_element::drop (void) {
  mProperty_mFieldName.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerIntegerFieldListAST.element:") ;
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
//     @registerIntegerFieldListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2E_element ("registerIntegerFieldListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerIntegerFieldListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerIntegerFieldListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerIntegerFieldListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST_2E_element GGS_registerIntegerFieldListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_registerIntegerFieldListAST_2E_element result ;
  const GGS_registerIntegerFieldListAST_2E_element * p = (const GGS_registerIntegerFieldListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerIntegerFieldListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property::GGS_primaryInExpressionAccessAST_2E_property (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property::GGS_primaryInExpressionAccessAST_2E_property (const GGS_primaryInExpressionAccessAST_2E_property & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property & GGS_primaryInExpressionAccessAST_2E_property::operator = (const GGS_primaryInExpressionAccessAST_2E_property & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property GGS_primaryInExpressionAccessAST_2E_property::init_21_ (const GGS_lstring & in_name,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_property::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property::GGS_primaryInExpressionAccessAST_2E_property (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property GGS_primaryInExpressionAccessAST_2E_property::class_func_new (const GGS_lstring & in_name,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primaryInExpressionAccessAST_2E_property::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_property::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_property::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @primaryInExpressionAccessAST.property:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @primaryInExpressionAccessAST.property generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property ("primaryInExpressionAccessAST.property",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessAST_2E_property::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessAST_2E_property::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessAST_2E_property (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property GGS_primaryInExpressionAccessAST_2E_property::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_property result ;
  const GGS_primaryInExpressionAccessAST_2E_property * p = (const GGS_primaryInExpressionAccessAST_2E_property *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessAST_2E_property *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST.property", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @primaryInExpressionAccessAST_2E_property_3F_
//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property_3F_::GGS_primaryInExpressionAccessAST_2E_property_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property_3F_::GGS_primaryInExpressionAccessAST_2E_property_3F_ (const GGS_primaryInExpressionAccessAST_2E_property & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property_3F_ GGS_primaryInExpressionAccessAST_2E_property_3F_::init_nil (void) {
  GGS_primaryInExpressionAccessAST_2E_property_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primaryInExpressionAccessAST_2E_property_3F_::isValid (void) const {
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

bool GGS_primaryInExpressionAccessAST_2E_property_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_property_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_primaryInExpressionAccessAST_2E_property () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_property_3F_::description (String & ioString,
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
//     @primaryInExpressionAccessAST.property? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property_3F_ ("primaryInExpressionAccessAST.property?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessAST_2E_property_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessAST_2E_property_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessAST_2E_property_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property_3F_ GGS_primaryInExpressionAccessAST_2E_property_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_property_3F_ result ;
  const GGS_primaryInExpressionAccessAST_2E_property_3F_ * p = (const GGS_primaryInExpressionAccessAST_2E_property_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessAST_2E_property_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST.property?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice::GGS_primaryInExpressionAccessAST_2E_integerSlice (void) :
mProperty_low (),
mProperty_high () {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice::GGS_primaryInExpressionAccessAST_2E_integerSlice (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inSource) :
mProperty_low (inSource.mProperty_low),
mProperty_high (inSource.mProperty_high) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice & GGS_primaryInExpressionAccessAST_2E_integerSlice::operator = (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inSource) {
  mProperty_low = inSource.mProperty_low ;
  mProperty_high = inSource.mProperty_high ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice GGS_primaryInExpressionAccessAST_2E_integerSlice::init_21__21_ (const GGS_lbigint & in_low,
                                                                                                                 const GGS_lbigint & in_high,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_integerSlice result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_low = in_low ;
  result.mProperty_high = in_high ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_integerSlice::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice::GGS_primaryInExpressionAccessAST_2E_integerSlice (const GGS_lbigint & inOperand0,
                                                                                                    const GGS_lbigint & inOperand1) :
mProperty_low (inOperand0),
mProperty_high (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice GGS_primaryInExpressionAccessAST_2E_integerSlice::class_func_new (const GGS_lbigint & in_low,
                                                                                                                   const GGS_lbigint & in_high,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_integerSlice result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_low = in_low ;
  result.mProperty_high = in_high ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primaryInExpressionAccessAST_2E_integerSlice::isValid (void) const {
  return mProperty_low.isValid () && mProperty_high.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_integerSlice::drop (void) {
  mProperty_low.drop () ;
  mProperty_high.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_integerSlice::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @primaryInExpressionAccessAST.integerSlice:") ;
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
//     @primaryInExpressionAccessAST.integerSlice generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice ("primaryInExpressionAccessAST.integerSlice",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessAST_2E_integerSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessAST_2E_integerSlice::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessAST_2E_integerSlice (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice GGS_primaryInExpressionAccessAST_2E_integerSlice::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_integerSlice result ;
  const GGS_primaryInExpressionAccessAST_2E_integerSlice * p = (const GGS_primaryInExpressionAccessAST_2E_integerSlice *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessAST_2E_integerSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST.integerSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @primaryInExpressionAccessAST_2E_integerSlice_3F_
//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::init_nil (void) {
  GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::isValid (void) const {
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

bool GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_primaryInExpressionAccessAST_2E_integerSlice () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::description (String & ioString,
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
//     @primaryInExpressionAccessAST.integerSlice? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice_3F_ ("primaryInExpressionAccessAST.integerSlice?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ result ;
  const GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ * p = (const GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST.integerSlice?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall::GGS_primaryInExpressionAccessAST_2E_funcCall (void) :
mProperty_methodName (),
mProperty_arguments (),
mProperty_endOfArguments () {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall::GGS_primaryInExpressionAccessAST_2E_funcCall (const GGS_primaryInExpressionAccessAST_2E_funcCall & inSource) :
mProperty_methodName (inSource.mProperty_methodName),
mProperty_arguments (inSource.mProperty_arguments),
mProperty_endOfArguments (inSource.mProperty_endOfArguments) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall & GGS_primaryInExpressionAccessAST_2E_funcCall::operator = (const GGS_primaryInExpressionAccessAST_2E_funcCall & inSource) {
  mProperty_methodName = inSource.mProperty_methodName ;
  mProperty_arguments = inSource.mProperty_arguments ;
  mProperty_endOfArguments = inSource.mProperty_endOfArguments ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall GGS_primaryInExpressionAccessAST_2E_funcCall::init_21__21__21_ (const GGS_lstring & in_methodName,
                                                                                                             const GGS_effectiveArgumentListAST & in_arguments,
                                                                                                             const GGS_location & in_endOfArguments,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_funcCall result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_methodName = in_methodName ;
  result.mProperty_arguments = in_arguments ;
  result.mProperty_endOfArguments = in_endOfArguments ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_funcCall::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall::GGS_primaryInExpressionAccessAST_2E_funcCall (const GGS_lstring & inOperand0,
                                                                                            const GGS_effectiveArgumentListAST & inOperand1,
                                                                                            const GGS_location & inOperand2) :
mProperty_methodName (inOperand0),
mProperty_arguments (inOperand1),
mProperty_endOfArguments (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall GGS_primaryInExpressionAccessAST_2E_funcCall::class_func_new (const GGS_lstring & in_methodName,
                                                                                                           const GGS_effectiveArgumentListAST & in_arguments,
                                                                                                           const GGS_location & in_endOfArguments,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_funcCall result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_methodName = in_methodName ;
  result.mProperty_arguments = in_arguments ;
  result.mProperty_endOfArguments = in_endOfArguments ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primaryInExpressionAccessAST_2E_funcCall::isValid (void) const {
  return mProperty_methodName.isValid () && mProperty_arguments.isValid () && mProperty_endOfArguments.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_funcCall::drop (void) {
  mProperty_methodName.drop () ;
  mProperty_arguments.drop () ;
  mProperty_endOfArguments.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_funcCall::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @primaryInExpressionAccessAST.funcCall:") ;
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
//     @primaryInExpressionAccessAST.funcCall generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall ("primaryInExpressionAccessAST.funcCall",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessAST_2E_funcCall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessAST_2E_funcCall::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessAST_2E_funcCall (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall GGS_primaryInExpressionAccessAST_2E_funcCall::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_funcCall result ;
  const GGS_primaryInExpressionAccessAST_2E_funcCall * p = (const GGS_primaryInExpressionAccessAST_2E_funcCall *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessAST_2E_funcCall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST.funcCall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @primaryInExpressionAccessAST_2E_funcCall_3F_
//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ (const GGS_primaryInExpressionAccessAST_2E_funcCall & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::init_nil (void) {
  GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::isValid (void) const {
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

bool GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_primaryInExpressionAccessAST_2E_funcCall () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::description (String & ioString,
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
//     @primaryInExpressionAccessAST.funcCall? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall_3F_ ("primaryInExpressionAccessAST.funcCall?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ GGS_primaryInExpressionAccessAST_2E_funcCall_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ result ;
  const GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ * p = (const GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST.funcCall?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST_2E_element::GGS_functionCallEffectiveParameterListAST_2E_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST_2E_element::GGS_functionCallEffectiveParameterListAST_2E_element (const GGS_functionCallEffectiveParameterListAST_2E_element & inSource) :
mProperty_mSelector (inSource.mProperty_mSelector),
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST_2E_element & GGS_functionCallEffectiveParameterListAST_2E_element::operator = (const GGS_functionCallEffectiveParameterListAST_2E_element & inSource) {
  mProperty_mSelector = inSource.mProperty_mSelector ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST_2E_element GGS_functionCallEffectiveParameterListAST_2E_element::init_21__21_ (const GGS_lstring & in_mSelector,
                                                                                                                         const GGS_expressionAST & in_mExpression,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionCallEffectiveParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST_2E_element::GGS_functionCallEffectiveParameterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                            const GGS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST_2E_element GGS_functionCallEffectiveParameterListAST_2E_element::class_func_new (const GGS_lstring & in_mSelector,
                                                                                                                           const GGS_expressionAST & in_mExpression,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionCallEffectiveParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_functionCallEffectiveParameterListAST_2E_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST_2E_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST_2E_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @functionCallEffectiveParameterListAST.element:") ;
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
//     @functionCallEffectiveParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2E_element ("functionCallEffectiveParameterListAST.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionCallEffectiveParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallEffectiveParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallEffectiveParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST_2E_element GGS_functionCallEffectiveParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_functionCallEffectiveParameterListAST_2E_element result ;
  const GGS_functionCallEffectiveParameterListAST_2E_element * p = (const GGS_functionCallEffectiveParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallEffectiveParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element::GGS_infixOperatorMap_2E_element (void) :
mProperty_lkey (),
mProperty_mResultType (),
mProperty_mOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element::GGS_infixOperatorMap_2E_element (const GGS_infixOperatorMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mResultType (inSource.mProperty_mResultType),
mProperty_mOperatorUsage (inSource.mProperty_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element & GGS_infixOperatorMap_2E_element::operator = (const GGS_infixOperatorMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mResultType = inSource.mProperty_mResultType ;
  mProperty_mOperatorUsage = inSource.mProperty_mOperatorUsage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_infixOperatorMap_2E_element GGS_infixOperatorMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_omnibusType & in_mResultType,
                                                                                   const GGS_omnibusInfixOperatorUsage & in_mOperatorUsage,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_infixOperatorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mResultType = in_mResultType ;
  result.mProperty_mOperatorUsage = in_mOperatorUsage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element::GGS_infixOperatorMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_omnibusType & inOperand1,
                                                                  const GGS_omnibusInfixOperatorUsage & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultType (inOperand1),
mProperty_mOperatorUsage (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element GGS_infixOperatorMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                 const GGS_omnibusType & in_mResultType,
                                                                                 const GGS_omnibusInfixOperatorUsage & in_mOperatorUsage,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_infixOperatorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mResultType = in_mResultType ;
  result.mProperty_mOperatorUsage = in_mOperatorUsage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_infixOperatorMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperatorUsage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @infixOperatorMap.element:") ;
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
//     @infixOperatorMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_infixOperatorMap_2E_element ("infixOperatorMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_infixOperatorMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_infixOperatorMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_infixOperatorMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element GGS_infixOperatorMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_infixOperatorMap_2E_element result ;
  const GGS_infixOperatorMap_2E_element * p = (const GGS_infixOperatorMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_infixOperatorMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @infixOperatorMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element_3F_::GGS_infixOperatorMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element_3F_::GGS_infixOperatorMap_2E_element_3F_ (const GGS_infixOperatorMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element_3F_ GGS_infixOperatorMap_2E_element_3F_::init_nil (void) {
  GGS_infixOperatorMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_infixOperatorMap_2E_element_3F_::isValid (void) const {
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

bool GGS_infixOperatorMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_infixOperatorMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap_2E_element_3F_::description (String & ioString,
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
//     @infixOperatorMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_infixOperatorMap_2E_element_3F_ ("infixOperatorMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_infixOperatorMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_infixOperatorMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_infixOperatorMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element_3F_ GGS_infixOperatorMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_infixOperatorMap_2E_element_3F_ result ;
  const GGS_infixOperatorMap_2E_element_3F_ * p = (const GGS_infixOperatorMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_infixOperatorMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element::GGS_prefixOperatorMap_2E_element (void) :
mProperty_lkey (),
mProperty_mReceiverType (),
mProperty_mResultType (),
mProperty_mOperator () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element::GGS_prefixOperatorMap_2E_element (const GGS_prefixOperatorMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mReceiverType (inSource.mProperty_mReceiverType),
mProperty_mResultType (inSource.mProperty_mResultType),
mProperty_mOperator (inSource.mProperty_mOperator) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element & GGS_prefixOperatorMap_2E_element::operator = (const GGS_prefixOperatorMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mReceiverType = inSource.mProperty_mReceiverType ;
  mProperty_mResultType = inSource.mProperty_mResultType ;
  mProperty_mOperator = inSource.mProperty_mOperator ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element GGS_prefixOperatorMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_omnibusType & in_mReceiverType,
                                                                                         const GGS_omnibusType & in_mResultType,
                                                                                         const GGS_prefixOperatorUsage & in_mOperator,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefixOperatorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mReceiverType = in_mReceiverType ;
  result.mProperty_mResultType = in_mResultType ;
  result.mProperty_mOperator = in_mOperator ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element::GGS_prefixOperatorMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_omnibusType & inOperand1,
                                                                    const GGS_omnibusType & inOperand2,
                                                                    const GGS_prefixOperatorUsage & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mReceiverType (inOperand1),
mProperty_mResultType (inOperand2),
mProperty_mOperator (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element GGS_prefixOperatorMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                   const GGS_omnibusType & in_mReceiverType,
                                                                                   const GGS_omnibusType & in_mResultType,
                                                                                   const GGS_prefixOperatorUsage & in_mOperator,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefixOperatorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mReceiverType = in_mReceiverType ;
  result.mProperty_mResultType = in_mResultType ;
  result.mProperty_mOperator = in_mOperator ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_prefixOperatorMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReceiverType.isValid () && mProperty_mResultType.isValid () && mProperty_mOperator.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mReceiverType.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperator.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @prefixOperatorMap.element:") ;
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
//     @prefixOperatorMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorMap_2E_element ("prefixOperatorMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element GGS_prefixOperatorMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorMap_2E_element result ;
  const GGS_prefixOperatorMap_2E_element * p = (const GGS_prefixOperatorMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @prefixOperatorMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element_3F_::GGS_prefixOperatorMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element_3F_::GGS_prefixOperatorMap_2E_element_3F_ (const GGS_prefixOperatorMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element_3F_ GGS_prefixOperatorMap_2E_element_3F_::init_nil (void) {
  GGS_prefixOperatorMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_prefixOperatorMap_2E_element_3F_::isValid (void) const {
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

bool GGS_prefixOperatorMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_prefixOperatorMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap_2E_element_3F_::description (String & ioString,
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
//     @prefixOperatorMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorMap_2E_element_3F_ ("prefixOperatorMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element_3F_ GGS_prefixOperatorMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorMap_2E_element_3F_ result ;
  const GGS_prefixOperatorMap_2E_element_3F_ * p = (const GGS_prefixOperatorMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element::GGS_sliceAssignmentListAST_2E_element (void) :
mProperty_mSliceWidth (),
mProperty_mSliceKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element::GGS_sliceAssignmentListAST_2E_element (const GGS_sliceAssignmentListAST_2E_element & inSource) :
mProperty_mSliceWidth (inSource.mProperty_mSliceWidth),
mProperty_mSliceKind (inSource.mProperty_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element & GGS_sliceAssignmentListAST_2E_element::operator = (const GGS_sliceAssignmentListAST_2E_element & inSource) {
  mProperty_mSliceWidth = inSource.mProperty_mSliceWidth ;
  mProperty_mSliceKind = inSource.mProperty_mSliceKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element GGS_sliceAssignmentListAST_2E_element::init_21__21_ (const GGS_lstring & in_mSliceWidth,
                                                                                           const GGS_sliceTargetAST & in_mSliceKind,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceAssignmentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceWidth = in_mSliceWidth ;
  result.mProperty_mSliceKind = in_mSliceKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element::GGS_sliceAssignmentListAST_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_sliceTargetAST & inOperand1) :
mProperty_mSliceWidth (inOperand0),
mProperty_mSliceKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element GGS_sliceAssignmentListAST_2E_element::class_func_new (const GGS_lstring & in_mSliceWidth,
                                                                                             const GGS_sliceTargetAST & in_mSliceKind,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceAssignmentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceWidth = in_mSliceWidth ;
  result.mProperty_mSliceKind = in_mSliceKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceAssignmentListAST_2E_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mSliceKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST_2E_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mSliceKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceAssignmentListAST.element:") ;
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
//     @sliceAssignmentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST_2E_element ("sliceAssignmentListAST.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceAssignmentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceAssignmentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceAssignmentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element GGS_sliceAssignmentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_sliceAssignmentListAST_2E_element result ;
  const GGS_sliceAssignmentListAST_2E_element * p = (const GGS_sliceAssignmentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceAssignmentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration::GGS_sliceTargetAST_2E_varDeclaration (void) :
mProperty_varName () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration::GGS_sliceTargetAST_2E_varDeclaration (const GGS_sliceTargetAST_2E_varDeclaration & inSource) :
mProperty_varName (inSource.mProperty_varName) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration & GGS_sliceTargetAST_2E_varDeclaration::operator = (const GGS_sliceTargetAST_2E_varDeclaration & inSource) {
  mProperty_varName = inSource.mProperty_varName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration GGS_sliceTargetAST_2E_varDeclaration::init_21_ (const GGS_lstring & in_varName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_varDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_varName = in_varName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_varDeclaration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration::GGS_sliceTargetAST_2E_varDeclaration (const GGS_lstring & inOperand0) :
mProperty_varName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration GGS_sliceTargetAST_2E_varDeclaration::class_func_new (const GGS_lstring & in_varName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_varDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_varName = in_varName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceTargetAST_2E_varDeclaration::isValid (void) const {
  return mProperty_varName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_varDeclaration::drop (void) {
  mProperty_varName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_varDeclaration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceTargetAST.varDeclaration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_varName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sliceTargetAST.varDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration ("sliceTargetAST.varDeclaration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceTargetAST_2E_varDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceTargetAST_2E_varDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceTargetAST_2E_varDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration GGS_sliceTargetAST_2E_varDeclaration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_varDeclaration result ;
  const GGS_sliceTargetAST_2E_varDeclaration * p = (const GGS_sliceTargetAST_2E_varDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceTargetAST_2E_varDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST.varDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @sliceTargetAST_2E_varDeclaration_3F_
//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration_3F_::GGS_sliceTargetAST_2E_varDeclaration_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration_3F_::GGS_sliceTargetAST_2E_varDeclaration_3F_ (const GGS_sliceTargetAST_2E_varDeclaration & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration_3F_ GGS_sliceTargetAST_2E_varDeclaration_3F_::init_nil (void) {
  GGS_sliceTargetAST_2E_varDeclaration_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceTargetAST_2E_varDeclaration_3F_::isValid (void) const {
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

bool GGS_sliceTargetAST_2E_varDeclaration_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_varDeclaration_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_sliceTargetAST_2E_varDeclaration () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_varDeclaration_3F_::description (String & ioString,
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
//     @sliceTargetAST.varDeclaration? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration_3F_ ("sliceTargetAST.varDeclaration?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceTargetAST_2E_varDeclaration_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceTargetAST_2E_varDeclaration_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceTargetAST_2E_varDeclaration_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration_3F_ GGS_sliceTargetAST_2E_varDeclaration_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_varDeclaration_3F_ result ;
  const GGS_sliceTargetAST_2E_varDeclaration_3F_ * p = (const GGS_sliceTargetAST_2E_varDeclaration_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceTargetAST_2E_varDeclaration_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST.varDeclaration?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration::GGS_sliceTargetAST_2E_letDeclaration (void) :
mProperty_letName () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration::GGS_sliceTargetAST_2E_letDeclaration (const GGS_sliceTargetAST_2E_letDeclaration & inSource) :
mProperty_letName (inSource.mProperty_letName) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration & GGS_sliceTargetAST_2E_letDeclaration::operator = (const GGS_sliceTargetAST_2E_letDeclaration & inSource) {
  mProperty_letName = inSource.mProperty_letName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration GGS_sliceTargetAST_2E_letDeclaration::init_21_ (const GGS_lstring & in_letName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_letDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_letName = in_letName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_letDeclaration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration::GGS_sliceTargetAST_2E_letDeclaration (const GGS_lstring & inOperand0) :
mProperty_letName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration GGS_sliceTargetAST_2E_letDeclaration::class_func_new (const GGS_lstring & in_letName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_letDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_letName = in_letName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceTargetAST_2E_letDeclaration::isValid (void) const {
  return mProperty_letName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_letDeclaration::drop (void) {
  mProperty_letName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_letDeclaration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceTargetAST.letDeclaration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_letName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sliceTargetAST.letDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration ("sliceTargetAST.letDeclaration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceTargetAST_2E_letDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceTargetAST_2E_letDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceTargetAST_2E_letDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration GGS_sliceTargetAST_2E_letDeclaration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_letDeclaration result ;
  const GGS_sliceTargetAST_2E_letDeclaration * p = (const GGS_sliceTargetAST_2E_letDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceTargetAST_2E_letDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST.letDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @sliceTargetAST_2E_letDeclaration_3F_
//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration_3F_::GGS_sliceTargetAST_2E_letDeclaration_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration_3F_::GGS_sliceTargetAST_2E_letDeclaration_3F_ (const GGS_sliceTargetAST_2E_letDeclaration & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration_3F_ GGS_sliceTargetAST_2E_letDeclaration_3F_::init_nil (void) {
  GGS_sliceTargetAST_2E_letDeclaration_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceTargetAST_2E_letDeclaration_3F_::isValid (void) const {
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

bool GGS_sliceTargetAST_2E_letDeclaration_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_letDeclaration_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_sliceTargetAST_2E_letDeclaration () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_letDeclaration_3F_::description (String & ioString,
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
//     @sliceTargetAST.letDeclaration? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration_3F_ ("sliceTargetAST.letDeclaration?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceTargetAST_2E_letDeclaration_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceTargetAST_2E_letDeclaration_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceTargetAST_2E_letDeclaration_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration_3F_ GGS_sliceTargetAST_2E_letDeclaration_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_letDeclaration_3F_ result ;
  const GGS_sliceTargetAST_2E_letDeclaration_3F_ * p = (const GGS_sliceTargetAST_2E_letDeclaration_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceTargetAST_2E_letDeclaration_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST.letDeclaration?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue::GGS_sliceTargetAST_2E_lValue (void) :
mProperty_target () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue::GGS_sliceTargetAST_2E_lValue (const GGS_sliceTargetAST_2E_lValue & inSource) :
mProperty_target (inSource.mProperty_target) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue & GGS_sliceTargetAST_2E_lValue::operator = (const GGS_sliceTargetAST_2E_lValue & inSource) {
  mProperty_target = inSource.mProperty_target ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue GGS_sliceTargetAST_2E_lValue::init_21_ (const GGS_LValueAST & in_target,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_lValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_target = in_target ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_lValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue::GGS_sliceTargetAST_2E_lValue (const GGS_LValueAST & inOperand0) :
mProperty_target (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue GGS_sliceTargetAST_2E_lValue::class_func_new (const GGS_LValueAST & in_target,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_lValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_target = in_target ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceTargetAST_2E_lValue::isValid (void) const {
  return mProperty_target.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_lValue::drop (void) {
  mProperty_target.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_lValue::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceTargetAST.lValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_target.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sliceTargetAST.lValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue ("sliceTargetAST.lValue",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceTargetAST_2E_lValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceTargetAST_2E_lValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceTargetAST_2E_lValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue GGS_sliceTargetAST_2E_lValue::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_lValue result ;
  const GGS_sliceTargetAST_2E_lValue * p = (const GGS_sliceTargetAST_2E_lValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceTargetAST_2E_lValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST.lValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @sliceTargetAST_2E_lValue_3F_
//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue_3F_::GGS_sliceTargetAST_2E_lValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue_3F_::GGS_sliceTargetAST_2E_lValue_3F_ (const GGS_sliceTargetAST_2E_lValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue_3F_ GGS_sliceTargetAST_2E_lValue_3F_::init_nil (void) {
  GGS_sliceTargetAST_2E_lValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceTargetAST_2E_lValue_3F_::isValid (void) const {
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

bool GGS_sliceTargetAST_2E_lValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_lValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_sliceTargetAST_2E_lValue () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST_2E_lValue_3F_::description (String & ioString,
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
//     @sliceTargetAST.lValue? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue_3F_ ("sliceTargetAST.lValue?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceTargetAST_2E_lValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceTargetAST_2E_lValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceTargetAST_2E_lValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue_3F_ GGS_sliceTargetAST_2E_lValue_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_sliceTargetAST_2E_lValue_3F_ result ;
  const GGS_sliceTargetAST_2E_lValue_3F_ * p = (const GGS_sliceTargetAST_2E_lValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceTargetAST_2E_lValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST.lValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element::GGS_procEffectiveParameterList_2E_element (void) :
mProperty_mEffectiveParameterPassingMode (),
mProperty_mSelector (),
mProperty_mParameterType () {
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element::GGS_procEffectiveParameterList_2E_element (const GGS_procEffectiveParameterList_2E_element & inSource) :
mProperty_mEffectiveParameterPassingMode (inSource.mProperty_mEffectiveParameterPassingMode),
mProperty_mSelector (inSource.mProperty_mSelector),
mProperty_mParameterType (inSource.mProperty_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element & GGS_procEffectiveParameterList_2E_element::operator = (const GGS_procEffectiveParameterList_2E_element & inSource) {
  mProperty_mEffectiveParameterPassingMode = inSource.mProperty_mEffectiveParameterPassingMode ;
  mProperty_mSelector = inSource.mProperty_mSelector ;
  mProperty_mParameterType = inSource.mProperty_mParameterType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element GGS_procEffectiveParameterList_2E_element::init_21__21__21_ (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                                       const GGS_lstring & in_mSelector,
                                                                                                       const GGS_omnibusType & in_mParameterType,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEffectiveParameterPassingMode = in_mEffectiveParameterPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mParameterType = in_mParameterType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element::GGS_procEffectiveParameterList_2E_element (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                      const GGS_lstring & inOperand1,
                                                                                      const GGS_omnibusType & inOperand2) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mParameterType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element GGS_procEffectiveParameterList_2E_element::class_func_new (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                                     const GGS_lstring & in_mSelector,
                                                                                                     const GGS_omnibusType & in_mParameterType,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEffectiveParameterPassingMode = in_mEffectiveParameterPassingMode ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mParameterType = in_mParameterType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_procEffectiveParameterList_2E_element::isValid (void) const {
  return mProperty_mEffectiveParameterPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mParameterType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList_2E_element::drop (void) {
  mProperty_mEffectiveParameterPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mParameterType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @procEffectiveParameterList.element:") ;
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
//     @procEffectiveParameterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2E_element ("procEffectiveParameterList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procEffectiveParameterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procEffectiveParameterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procEffectiveParameterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element GGS_procEffectiveParameterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_procEffectiveParameterList_2E_element result ;
  const GGS_procEffectiveParameterList_2E_element * p = (const GGS_procEffectiveParameterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procEffectiveParameterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property::GGS_accessInAssignmentAST_2E_property (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property::GGS_accessInAssignmentAST_2E_property (const GGS_accessInAssignmentAST_2E_property & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property & GGS_accessInAssignmentAST_2E_property::operator = (const GGS_accessInAssignmentAST_2E_property & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property GGS_accessInAssignmentAST_2E_property::init_21_ (const GGS_lstring & in_name,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentAST_2E_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_property::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property::GGS_accessInAssignmentAST_2E_property (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property GGS_accessInAssignmentAST_2E_property::class_func_new (const GGS_lstring & in_name,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentAST_2E_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_accessInAssignmentAST_2E_property::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_property::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_property::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @accessInAssignmentAST.property:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @accessInAssignmentAST.property generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_property ("accessInAssignmentAST.property",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_accessInAssignmentAST_2E_property::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_property ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_accessInAssignmentAST_2E_property::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_accessInAssignmentAST_2E_property (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property GGS_accessInAssignmentAST_2E_property::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_accessInAssignmentAST_2E_property result ;
  const GGS_accessInAssignmentAST_2E_property * p = (const GGS_accessInAssignmentAST_2E_property *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_accessInAssignmentAST_2E_property *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST.property", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @accessInAssignmentAST_2E_property_3F_
//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property_3F_::GGS_accessInAssignmentAST_2E_property_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property_3F_::GGS_accessInAssignmentAST_2E_property_3F_ (const GGS_accessInAssignmentAST_2E_property & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property_3F_ GGS_accessInAssignmentAST_2E_property_3F_::init_nil (void) {
  GGS_accessInAssignmentAST_2E_property_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_accessInAssignmentAST_2E_property_3F_::isValid (void) const {
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

bool GGS_accessInAssignmentAST_2E_property_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_property_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_accessInAssignmentAST_2E_property () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_property_3F_::description (String & ioString,
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
//     @accessInAssignmentAST.property? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_property_3F_ ("accessInAssignmentAST.property?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_accessInAssignmentAST_2E_property_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_property_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_accessInAssignmentAST_2E_property_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_accessInAssignmentAST_2E_property_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property_3F_ GGS_accessInAssignmentAST_2E_property_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_accessInAssignmentAST_2E_property_3F_ result ;
  const GGS_accessInAssignmentAST_2E_property_3F_ * p = (const GGS_accessInAssignmentAST_2E_property_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_accessInAssignmentAST_2E_property_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST.property?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property::GGS_LValueOperandAST_2E_property (void) :
mProperty_name (),
mProperty_next () {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property::GGS_LValueOperandAST_2E_property (const GGS_LValueOperandAST_2E_property & inSource) :
mProperty_name (inSource.mProperty_name),
mProperty_next (inSource.mProperty_next) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property & GGS_LValueOperandAST_2E_property::operator = (const GGS_LValueOperandAST_2E_property & inSource) {
  mProperty_name = inSource.mProperty_name ;
  mProperty_next = inSource.mProperty_next ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_LValueOperandAST_2E_property GGS_LValueOperandAST_2E_property::init_21__21_ (const GGS_lstring & in_name,
                                                                                 const GGS_LValueOperandAST & in_next,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST_2E_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_next = in_next ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST_2E_property::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property::GGS_LValueOperandAST_2E_property (const GGS_lstring & inOperand0,
                                                                    const GGS_LValueOperandAST & inOperand1) :
mProperty_name (inOperand0),
mProperty_next (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property GGS_LValueOperandAST_2E_property::class_func_new (const GGS_lstring & in_name,
                                                                                   const GGS_LValueOperandAST & in_next,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST_2E_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_next = in_next ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_LValueOperandAST_2E_property::objectCompare (const GGS_LValueOperandAST_2E_property & inOperand) const {
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

bool GGS_LValueOperandAST_2E_property::isValid (void) const {
  return mProperty_name.isValid () && mProperty_next.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST_2E_property::drop (void) {
  mProperty_name.drop () ;
  mProperty_next.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST_2E_property::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @LValueOperandAST.property:") ;
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
//     @LValueOperandAST.property generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_property ("LValueOperandAST.property",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_LValueOperandAST_2E_property::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST_2E_property ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueOperandAST_2E_property::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueOperandAST_2E_property (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property GGS_LValueOperandAST_2E_property::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_LValueOperandAST_2E_property result ;
  const GGS_LValueOperandAST_2E_property * p = (const GGS_LValueOperandAST_2E_property *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueOperandAST_2E_property *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST.property", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @LValueOperandAST_2E_property_3F_
//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property_3F_::GGS_LValueOperandAST_2E_property_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property_3F_::GGS_LValueOperandAST_2E_property_3F_ (const GGS_LValueOperandAST_2E_property & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property_3F_ GGS_LValueOperandAST_2E_property_3F_::init_nil (void) {
  GGS_LValueOperandAST_2E_property_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_LValueOperandAST_2E_property_3F_::isValid (void) const {
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

bool GGS_LValueOperandAST_2E_property_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST_2E_property_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_LValueOperandAST_2E_property () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_LValueOperandAST_2E_property_3F_::objectCompare (const GGS_LValueOperandAST_2E_property_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST_2E_property_3F_::description (String & ioString,
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
//     @LValueOperandAST.property? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_property_3F_ ("LValueOperandAST.property?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_LValueOperandAST_2E_property_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST_2E_property_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueOperandAST_2E_property_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueOperandAST_2E_property_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property_3F_ GGS_LValueOperandAST_2E_property_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_LValueOperandAST_2E_property_3F_ result ;
  const GGS_LValueOperandAST_2E_property_3F_ * p = (const GGS_LValueOperandAST_2E_property_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueOperandAST_2E_property_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST.property?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input::GGS_effectiveArgumentPassingModeAST_2E_input (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input::GGS_effectiveArgumentPassingModeAST_2E_input (const GGS_effectiveArgumentPassingModeAST_2E_input & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input & GGS_effectiveArgumentPassingModeAST_2E_input::operator = (const GGS_effectiveArgumentPassingModeAST_2E_input & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input GGS_effectiveArgumentPassingModeAST_2E_input::init_21_ (const GGS_lstring & in_name,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_input result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_input::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input::GGS_effectiveArgumentPassingModeAST_2E_input (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input GGS_effectiveArgumentPassingModeAST_2E_input::class_func_new (const GGS_lstring & in_name,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_input result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_input::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_input::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_input::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentPassingModeAST.input:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @effectiveArgumentPassingModeAST.input generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_input ("effectiveArgumentPassingModeAST.input",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_input::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_input ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_input::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_input (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input GGS_effectiveArgumentPassingModeAST_2E_input::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_input result ;
  const GGS_effectiveArgumentPassingModeAST_2E_input * p = (const GGS_effectiveArgumentPassingModeAST_2E_input *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_input *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.input", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @effectiveArgumentPassingModeAST_2E_input_3F_
//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input_3F_::GGS_effectiveArgumentPassingModeAST_2E_input_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input_3F_::GGS_effectiveArgumentPassingModeAST_2E_input_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_input & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input_3F_ GGS_effectiveArgumentPassingModeAST_2E_input_3F_::init_nil (void) {
  GGS_effectiveArgumentPassingModeAST_2E_input_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_input_3F_::isValid (void) const {
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

bool GGS_effectiveArgumentPassingModeAST_2E_input_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_input_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_effectiveArgumentPassingModeAST_2E_input () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_input_3F_::description (String & ioString,
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
//     @effectiveArgumentPassingModeAST.input? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_input_3F_ ("effectiveArgumentPassingModeAST.input?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_input_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_input_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_input_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_input_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input_3F_ GGS_effectiveArgumentPassingModeAST_2E_input_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_input_3F_ result ;
  const GGS_effectiveArgumentPassingModeAST_2E_input_3F_ * p = (const GGS_effectiveArgumentPassingModeAST_2E_input_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_input_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.input?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType::GGS_effectiveArgumentPassingModeAST_2E_inputWithType (void) :
mProperty_constant (),
mProperty_typeName (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType::GGS_effectiveArgumentPassingModeAST_2E_inputWithType (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType & inSource) :
mProperty_constant (inSource.mProperty_constant),
mProperty_typeName (inSource.mProperty_typeName),
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType & GGS_effectiveArgumentPassingModeAST_2E_inputWithType::operator = (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType & inSource) {
  mProperty_constant = inSource.mProperty_constant ;
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType GGS_effectiveArgumentPassingModeAST_2E_inputWithType::init_21__21__21_ (const GGS_bool & in_constant,
                                                                                                                             const GGS_lstring & in_typeName,
                                                                                                                             const GGS_lstring & in_name,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_inputWithType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constant = in_constant ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_inputWithType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType::GGS_effectiveArgumentPassingModeAST_2E_inputWithType (const GGS_bool & inOperand0,
                                                                                                            const GGS_lstring & inOperand1,
                                                                                                            const GGS_lstring & inOperand2) :
mProperty_constant (inOperand0),
mProperty_typeName (inOperand1),
mProperty_name (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType GGS_effectiveArgumentPassingModeAST_2E_inputWithType::class_func_new (const GGS_bool & in_constant,
                                                                                                                           const GGS_lstring & in_typeName,
                                                                                                                           const GGS_lstring & in_name,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_inputWithType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constant = in_constant ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_inputWithType::isValid (void) const {
  return mProperty_constant.isValid () && mProperty_typeName.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_inputWithType::drop (void) {
  mProperty_constant.drop () ;
  mProperty_typeName.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_inputWithType::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentPassingModeAST.inputWithType:") ;
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
//     @effectiveArgumentPassingModeAST.inputWithType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_inputWithType ("effectiveArgumentPassingModeAST.inputWithType",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_inputWithType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_inputWithType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_inputWithType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_inputWithType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType GGS_effectiveArgumentPassingModeAST_2E_inputWithType::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_inputWithType result ;
  const GGS_effectiveArgumentPassingModeAST_2E_inputWithType * p = (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_inputWithType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.inputWithType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @effectiveArgumentPassingModeAST_2E_inputWithType_3F_
//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::init_nil (void) {
  GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::isValid (void) const {
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

bool GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_effectiveArgumentPassingModeAST_2E_inputWithType () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::description (String & ioString,
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
//     @effectiveArgumentPassingModeAST.inputWithType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ ("effectiveArgumentPassingModeAST.inputWithType?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ result ;
  const GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ * p = (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.inputWithType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput::GGS_effectiveArgumentPassingModeAST_2E_outputInput (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput::GGS_effectiveArgumentPassingModeAST_2E_outputInput (const GGS_effectiveArgumentPassingModeAST_2E_outputInput & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput & GGS_effectiveArgumentPassingModeAST_2E_outputInput::operator = (const GGS_effectiveArgumentPassingModeAST_2E_outputInput & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput GGS_effectiveArgumentPassingModeAST_2E_outputInput::init_21_ (const GGS_lstring & in_name,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInput result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInput::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput::GGS_effectiveArgumentPassingModeAST_2E_outputInput (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput GGS_effectiveArgumentPassingModeAST_2E_outputInput::class_func_new (const GGS_lstring & in_name,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInput result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_outputInput::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInput::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInput::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentPassingModeAST.outputInput:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @effectiveArgumentPassingModeAST.outputInput generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInput ("effectiveArgumentPassingModeAST.outputInput",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_outputInput::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInput ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_outputInput::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_outputInput (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput GGS_effectiveArgumentPassingModeAST_2E_outputInput::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInput result ;
  const GGS_effectiveArgumentPassingModeAST_2E_outputInput * p = (const GGS_effectiveArgumentPassingModeAST_2E_outputInput *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_outputInput *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.outputInput", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @effectiveArgumentPassingModeAST_2E_outputInput_3F_
//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_outputInput & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::init_nil (void) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::isValid (void) const {
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

bool GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_effectiveArgumentPassingModeAST_2E_outputInput () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::description (String & ioString,
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
//     @effectiveArgumentPassingModeAST.outputInput? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ ("effectiveArgumentPassingModeAST.outputInput?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ result ;
  const GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ * p = (const GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.outputInput?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable & GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::operator = (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::init_21_ (const GGS_lstring & in_name,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::class_func_new (const GGS_lstring & in_name,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentPassingModeAST.outputInputSelfVariable:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @effectiveArgumentPassingModeAST.outputInputSelfVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable ("effectiveArgumentPassingModeAST.outputInputSelfVariable",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable result ;
  const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable * p = (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.outputInputSelfVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_
//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::init_nil (void) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::isValid (void) const {
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

bool GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::description (String & ioString,
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
//     @effectiveArgumentPassingModeAST.outputInputSelfVariable? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ ("effectiveArgumentPassingModeAST.outputInputSelfVariable?",
                                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ result ;
  const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ * p = (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.outputInputSelfVariable?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element::GGS_effectiveArgumentListAST_2E_element (void) :
mProperty_mEffectiveParameterKind (),
mProperty_mSelector () {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element::GGS_effectiveArgumentListAST_2E_element (const GGS_effectiveArgumentListAST_2E_element & inSource) :
mProperty_mEffectiveParameterKind (inSource.mProperty_mEffectiveParameterKind),
mProperty_mSelector (inSource.mProperty_mSelector) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element & GGS_effectiveArgumentListAST_2E_element::operator = (const GGS_effectiveArgumentListAST_2E_element & inSource) {
  mProperty_mEffectiveParameterKind = inSource.mProperty_mEffectiveParameterKind ;
  mProperty_mSelector = inSource.mProperty_mSelector ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element GGS_effectiveArgumentListAST_2E_element::init_21__21_ (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                               const GGS_lstring & in_mSelector,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEffectiveParameterKind = in_mEffectiveParameterKind ;
  result.mProperty_mSelector = in_mSelector ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element::GGS_effectiveArgumentListAST_2E_element (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                  const GGS_lstring & inOperand1) :
mProperty_mEffectiveParameterKind (inOperand0),
mProperty_mSelector (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element GGS_effectiveArgumentListAST_2E_element::class_func_new (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                                 const GGS_lstring & in_mSelector,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEffectiveParameterKind = in_mEffectiveParameterKind ;
  result.mProperty_mSelector = in_mSelector ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentListAST_2E_element::isValid (void) const {
  return mProperty_mEffectiveParameterKind.isValid () && mProperty_mSelector.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST_2E_element::drop (void) {
  mProperty_mEffectiveParameterKind.drop () ;
  mProperty_mSelector.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentListAST.element:") ;
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
//     @effectiveArgumentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2E_element ("effectiveArgumentListAST.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element GGS_effectiveArgumentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentListAST_2E_element result ;
  const GGS_effectiveArgumentListAST_2E_element * p = (const GGS_effectiveArgumentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference::GGS_objectIR_2E_reference (void) :
mProperty_type (),
mProperty_llvmName () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference::GGS_objectIR_2E_reference (const GGS_objectIR_2E_reference & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_llvmName (inSource.mProperty_llvmName) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference & GGS_objectIR_2E_reference::operator = (const GGS_objectIR_2E_reference & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_llvmName = inSource.mProperty_llvmName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_reference GGS_objectIR_2E_reference::init_21__21_ (const GGS_omnibusType & in_type,
                                                                   const GGS_string & in_llvmName,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_reference result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_reference::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference::GGS_objectIR_2E_reference (const GGS_omnibusType & inOperand0,
                                                      const GGS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference GGS_objectIR_2E_reference::class_func_new (const GGS_omnibusType & in_type,
                                                                     const GGS_string & in_llvmName,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_reference result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_reference::objectCompare (const GGS_objectIR_2E_reference & inOperand) const {
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

bool GGS_objectIR_2E_reference::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_reference::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_reference::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.reference:") ;
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
//     @objectIR.reference generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_reference ("objectIR.reference",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_reference::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_reference ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_reference::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_reference (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference GGS_objectIR_2E_reference::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_reference result ;
  const GGS_objectIR_2E_reference * p = (const GGS_objectIR_2E_reference *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_reference *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.reference", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_reference_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference_3F_::GGS_objectIR_2E_reference_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference_3F_::GGS_objectIR_2E_reference_3F_ (const GGS_objectIR_2E_reference & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference_3F_ GGS_objectIR_2E_reference_3F_::init_nil (void) {
  GGS_objectIR_2E_reference_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_reference_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_reference_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_reference_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_reference () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_reference_3F_::objectCompare (const GGS_objectIR_2E_reference_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_reference_3F_::description (String & ioString,
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
//     @objectIR.reference? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_reference_3F_ ("objectIR.reference?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_reference_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_reference_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_reference_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_reference_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference_3F_ GGS_objectIR_2E_reference_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_reference_3F_ result ;
  const GGS_objectIR_2E_reference_3F_ * p = (const GGS_objectIR_2E_reference_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_reference_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.reference?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null::GGS_objectIR_2E_null (void) :
mProperty_type () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null::GGS_objectIR_2E_null (const GGS_objectIR_2E_null & inSource) :
mProperty_type (inSource.mProperty_type) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null & GGS_objectIR_2E_null::operator = (const GGS_objectIR_2E_null & inSource) {
  mProperty_type = inSource.mProperty_type ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_null GGS_objectIR_2E_null::init_21_ (const GGS_omnibusType & in_type,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_null result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_null::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null::GGS_objectIR_2E_null (const GGS_omnibusType & inOperand0) :
mProperty_type (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null GGS_objectIR_2E_null::class_func_new (const GGS_omnibusType & in_type,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_null result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_null::objectCompare (const GGS_objectIR_2E_null & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_null::isValid (void) const {
  return mProperty_type.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_null::drop (void) {
  mProperty_type.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_null::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.null:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @objectIR.null generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_null ("objectIR.null",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_null::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_null ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_null::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_null (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null GGS_objectIR_2E_null::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_null result ;
  const GGS_objectIR_2E_null * p = (const GGS_objectIR_2E_null *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_null *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.null", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_null_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null_3F_::GGS_objectIR_2E_null_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null_3F_::GGS_objectIR_2E_null_3F_ (const GGS_objectIR_2E_null & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null_3F_ GGS_objectIR_2E_null_3F_::init_nil (void) {
  GGS_objectIR_2E_null_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_null_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_null_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_null_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_null () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_null_3F_::objectCompare (const GGS_objectIR_2E_null_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_null_3F_::description (String & ioString,
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
//     @objectIR.null? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_null_3F_ ("objectIR.null?",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_null_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_null_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_null_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_null_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null_3F_ GGS_objectIR_2E_null_3F_::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_null_3F_ result ;
  const GGS_objectIR_2E_null_3F_ * p = (const GGS_objectIR_2E_null_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_null_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.null?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue::GGS_objectIR_2E_llvmNamedValue (void) :
mProperty_type (),
mProperty_llvmName () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue::GGS_objectIR_2E_llvmNamedValue (const GGS_objectIR_2E_llvmNamedValue & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_llvmName (inSource.mProperty_llvmName) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue & GGS_objectIR_2E_llvmNamedValue::operator = (const GGS_objectIR_2E_llvmNamedValue & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_llvmName = inSource.mProperty_llvmName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue GGS_objectIR_2E_llvmNamedValue::init_21__21_ (const GGS_omnibusType & in_type,
                                                                             const GGS_string & in_llvmName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmNamedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmNamedValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue::GGS_objectIR_2E_llvmNamedValue (const GGS_omnibusType & inOperand0,
                                                                const GGS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue GGS_objectIR_2E_llvmNamedValue::class_func_new (const GGS_omnibusType & in_type,
                                                                               const GGS_string & in_llvmName,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmNamedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmNamedValue::objectCompare (const GGS_objectIR_2E_llvmNamedValue & inOperand) const {
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

bool GGS_objectIR_2E_llvmNamedValue::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmNamedValue::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmNamedValue::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.llvmNamedValue:") ;
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
//     @objectIR.llvmNamedValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmNamedValue ("objectIR.llvmNamedValue",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmNamedValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmNamedValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmNamedValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmNamedValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue GGS_objectIR_2E_llvmNamedValue::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmNamedValue result ;
  const GGS_objectIR_2E_llvmNamedValue * p = (const GGS_objectIR_2E_llvmNamedValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmNamedValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmNamedValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_llvmNamedValue_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue_3F_::GGS_objectIR_2E_llvmNamedValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue_3F_::GGS_objectIR_2E_llvmNamedValue_3F_ (const GGS_objectIR_2E_llvmNamedValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue_3F_ GGS_objectIR_2E_llvmNamedValue_3F_::init_nil (void) {
  GGS_objectIR_2E_llvmNamedValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_llvmNamedValue_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_llvmNamedValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmNamedValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_llvmNamedValue () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmNamedValue_3F_::objectCompare (const GGS_objectIR_2E_llvmNamedValue_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmNamedValue_3F_::description (String & ioString,
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
//     @objectIR.llvmNamedValue? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmNamedValue_3F_ ("objectIR.llvmNamedValue?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmNamedValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmNamedValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmNamedValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmNamedValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue_3F_ GGS_objectIR_2E_llvmNamedValue_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmNamedValue_3F_ result ;
  const GGS_objectIR_2E_llvmNamedValue_3F_ * p = (const GGS_objectIR_2E_llvmNamedValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmNamedValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmNamedValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger::GGS_objectIR_2E_literalInteger (void) :
mProperty_type (),
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger::GGS_objectIR_2E_literalInteger (const GGS_objectIR_2E_literalInteger & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_value (inSource.mProperty_value) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger & GGS_objectIR_2E_literalInteger::operator = (const GGS_objectIR_2E_literalInteger & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_value = inSource.mProperty_value ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_literalInteger GGS_objectIR_2E_literalInteger::init_21__21_ (const GGS_omnibusType & in_type,
                                                                             const GGS_bigint & in_value,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_literalInteger result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_literalInteger::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger::GGS_objectIR_2E_literalInteger (const GGS_omnibusType & inOperand0,
                                                                const GGS_bigint & inOperand1) :
mProperty_type (inOperand0),
mProperty_value (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger GGS_objectIR_2E_literalInteger::class_func_new (const GGS_omnibusType & in_type,
                                                                               const GGS_bigint & in_value,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_literalInteger result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_literalInteger::objectCompare (const GGS_objectIR_2E_literalInteger & inOperand) const {
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

bool GGS_objectIR_2E_literalInteger::isValid (void) const {
  return mProperty_type.isValid () && mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_literalInteger::drop (void) {
  mProperty_type.drop () ;
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_literalInteger::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.literalInteger:") ;
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
//     @objectIR.literalInteger generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_literalInteger ("objectIR.literalInteger",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_literalInteger::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_literalInteger ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_literalInteger::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_literalInteger (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger GGS_objectIR_2E_literalInteger::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_literalInteger result ;
  const GGS_objectIR_2E_literalInteger * p = (const GGS_objectIR_2E_literalInteger *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_literalInteger *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.literalInteger", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_literalInteger_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger_3F_::GGS_objectIR_2E_literalInteger_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger_3F_::GGS_objectIR_2E_literalInteger_3F_ (const GGS_objectIR_2E_literalInteger & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger_3F_ GGS_objectIR_2E_literalInteger_3F_::init_nil (void) {
  GGS_objectIR_2E_literalInteger_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_literalInteger_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_literalInteger_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_literalInteger_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_literalInteger () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_literalInteger_3F_::objectCompare (const GGS_objectIR_2E_literalInteger_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_literalInteger_3F_::description (String & ioString,
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
//     @objectIR.literalInteger? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_literalInteger_3F_ ("objectIR.literalInteger?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_literalInteger_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_literalInteger_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_literalInteger_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_literalInteger_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger_3F_ GGS_objectIR_2E_literalInteger_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_literalInteger_3F_ result ;
  const GGS_objectIR_2E_literalInteger_3F_ * p = (const GGS_objectIR_2E_literalInteger_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_literalInteger_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.literalInteger?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue::GGS_objectIR_2E_llvmStructureValue (void) :
mProperty_type (),
mProperty_values () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue::GGS_objectIR_2E_llvmStructureValue (const GGS_objectIR_2E_llvmStructureValue & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_values (inSource.mProperty_values) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue & GGS_objectIR_2E_llvmStructureValue::operator = (const GGS_objectIR_2E_llvmStructureValue & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_values = inSource.mProperty_values ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue GGS_objectIR_2E_llvmStructureValue::init_21__21_ (const GGS_omnibusType & in_type,
                                                                                     const GGS_sortedOperandIRList & in_values,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmStructureValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmStructureValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue::GGS_objectIR_2E_llvmStructureValue (const GGS_omnibusType & inOperand0,
                                                                        const GGS_sortedOperandIRList & inOperand1) :
mProperty_type (inOperand0),
mProperty_values (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue GGS_objectIR_2E_llvmStructureValue::class_func_new (const GGS_omnibusType & in_type,
                                                                                       const GGS_sortedOperandIRList & in_values,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmStructureValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmStructureValue::objectCompare (const GGS_objectIR_2E_llvmStructureValue & inOperand) const {
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

bool GGS_objectIR_2E_llvmStructureValue::isValid (void) const {
  return mProperty_type.isValid () && mProperty_values.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmStructureValue::drop (void) {
  mProperty_type.drop () ;
  mProperty_values.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmStructureValue::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.llvmStructureValue:") ;
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
//     @objectIR.llvmStructureValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmStructureValue ("objectIR.llvmStructureValue",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmStructureValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmStructureValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmStructureValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmStructureValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue GGS_objectIR_2E_llvmStructureValue::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmStructureValue result ;
  const GGS_objectIR_2E_llvmStructureValue * p = (const GGS_objectIR_2E_llvmStructureValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmStructureValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmStructureValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_llvmStructureValue_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue_3F_::GGS_objectIR_2E_llvmStructureValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue_3F_::GGS_objectIR_2E_llvmStructureValue_3F_ (const GGS_objectIR_2E_llvmStructureValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue_3F_ GGS_objectIR_2E_llvmStructureValue_3F_::init_nil (void) {
  GGS_objectIR_2E_llvmStructureValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_llvmStructureValue_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_llvmStructureValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmStructureValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_llvmStructureValue () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmStructureValue_3F_::objectCompare (const GGS_objectIR_2E_llvmStructureValue_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmStructureValue_3F_::description (String & ioString,
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
//     @objectIR.llvmStructureValue? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmStructureValue_3F_ ("objectIR.llvmStructureValue?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmStructureValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmStructureValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmStructureValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmStructureValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue_3F_ GGS_objectIR_2E_llvmStructureValue_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmStructureValue_3F_ result ;
  const GGS_objectIR_2E_llvmStructureValue_3F_ * p = (const GGS_objectIR_2E_llvmStructureValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmStructureValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmStructureValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero::GGS_objectIR_2E_zero (void) :
mProperty_type () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero::GGS_objectIR_2E_zero (const GGS_objectIR_2E_zero & inSource) :
mProperty_type (inSource.mProperty_type) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero & GGS_objectIR_2E_zero::operator = (const GGS_objectIR_2E_zero & inSource) {
  mProperty_type = inSource.mProperty_type ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_zero GGS_objectIR_2E_zero::init_21_ (const GGS_omnibusType & in_type,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_zero result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_zero::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero::GGS_objectIR_2E_zero (const GGS_omnibusType & inOperand0) :
mProperty_type (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero GGS_objectIR_2E_zero::class_func_new (const GGS_omnibusType & in_type,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_zero result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_zero::objectCompare (const GGS_objectIR_2E_zero & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_zero::isValid (void) const {
  return mProperty_type.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_zero::drop (void) {
  mProperty_type.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_zero::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.zero:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @objectIR.zero generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_zero ("objectIR.zero",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_zero::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_zero ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_zero::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_zero (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero GGS_objectIR_2E_zero::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_zero result ;
  const GGS_objectIR_2E_zero * p = (const GGS_objectIR_2E_zero *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_zero *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.zero", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_zero_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero_3F_::GGS_objectIR_2E_zero_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero_3F_::GGS_objectIR_2E_zero_3F_ (const GGS_objectIR_2E_zero & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero_3F_ GGS_objectIR_2E_zero_3F_::init_nil (void) {
  GGS_objectIR_2E_zero_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_zero_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_zero_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_zero_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_zero () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_zero_3F_::objectCompare (const GGS_objectIR_2E_zero_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_zero_3F_::description (String & ioString,
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
//     @objectIR.zero? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_zero_3F_ ("objectIR.zero?",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_zero_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_zero_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_zero_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_zero_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero_3F_ GGS_objectIR_2E_zero_3F_::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_zero_3F_ result ;
  const GGS_objectIR_2E_zero_3F_ * p = (const GGS_objectIR_2E_zero_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_zero_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.zero?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues::GGS_objectIR_2E_llvmArrayStaticValues (void) :
mProperty_type (),
mProperty_values (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues::GGS_objectIR_2E_llvmArrayStaticValues (const GGS_objectIR_2E_llvmArrayStaticValues & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_values (inSource.mProperty_values),
mProperty_index (inSource.mProperty_index) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues & GGS_objectIR_2E_llvmArrayStaticValues::operator = (const GGS_objectIR_2E_llvmArrayStaticValues & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_values = inSource.mProperty_values ;
  mProperty_index = inSource.mProperty_index ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues GGS_objectIR_2E_llvmArrayStaticValues::init_21__21__21_ (const GGS_omnibusType & in_type,
                                                                                               const GGS_operandIRList & in_values,
                                                                                               const GGS_uint & in_index,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayStaticValues result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayStaticValues::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues::GGS_objectIR_2E_llvmArrayStaticValues (const GGS_omnibusType & inOperand0,
                                                                              const GGS_operandIRList & inOperand1,
                                                                              const GGS_uint & inOperand2) :
mProperty_type (inOperand0),
mProperty_values (inOperand1),
mProperty_index (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues GGS_objectIR_2E_llvmArrayStaticValues::class_func_new (const GGS_omnibusType & in_type,
                                                                                             const GGS_operandIRList & in_values,
                                                                                             const GGS_uint & in_index,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayStaticValues result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmArrayStaticValues::objectCompare (const GGS_objectIR_2E_llvmArrayStaticValues & inOperand) const {
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

bool GGS_objectIR_2E_llvmArrayStaticValues::isValid (void) const {
  return mProperty_type.isValid () && mProperty_values.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayStaticValues::drop (void) {
  mProperty_type.drop () ;
  mProperty_values.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayStaticValues::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.llvmArrayStaticValues:") ;
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
//     @objectIR.llvmArrayStaticValues generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayStaticValues ("objectIR.llvmArrayStaticValues",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmArrayStaticValues::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayStaticValues ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmArrayStaticValues::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmArrayStaticValues (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues GGS_objectIR_2E_llvmArrayStaticValues::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayStaticValues result ;
  const GGS_objectIR_2E_llvmArrayStaticValues * p = (const GGS_objectIR_2E_llvmArrayStaticValues *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmArrayStaticValues *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmArrayStaticValues", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_llvmArrayStaticValues_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues_3F_::GGS_objectIR_2E_llvmArrayStaticValues_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues_3F_::GGS_objectIR_2E_llvmArrayStaticValues_3F_ (const GGS_objectIR_2E_llvmArrayStaticValues & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues_3F_ GGS_objectIR_2E_llvmArrayStaticValues_3F_::init_nil (void) {
  GGS_objectIR_2E_llvmArrayStaticValues_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_llvmArrayStaticValues_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_llvmArrayStaticValues_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayStaticValues_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_llvmArrayStaticValues () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmArrayStaticValues_3F_::objectCompare (const GGS_objectIR_2E_llvmArrayStaticValues_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayStaticValues_3F_::description (String & ioString,
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
//     @objectIR.llvmArrayStaticValues? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayStaticValues_3F_ ("objectIR.llvmArrayStaticValues?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmArrayStaticValues_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayStaticValues_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmArrayStaticValues_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmArrayStaticValues_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues_3F_ GGS_objectIR_2E_llvmArrayStaticValues_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayStaticValues_3F_ result ;
  const GGS_objectIR_2E_llvmArrayStaticValues_3F_ * p = (const GGS_objectIR_2E_llvmArrayStaticValues_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmArrayStaticValues_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmArrayStaticValues?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues::GGS_objectIR_2E_llvmArrayDynamicValues (void) :
mProperty_type (),
mProperty_values () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues::GGS_objectIR_2E_llvmArrayDynamicValues (const GGS_objectIR_2E_llvmArrayDynamicValues & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_values (inSource.mProperty_values) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues & GGS_objectIR_2E_llvmArrayDynamicValues::operator = (const GGS_objectIR_2E_llvmArrayDynamicValues & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_values = inSource.mProperty_values ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues GGS_objectIR_2E_llvmArrayDynamicValues::init_21__21_ (const GGS_omnibusType & in_type,
                                                                                             const GGS_operandIRList & in_values,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayDynamicValues result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayDynamicValues::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues::GGS_objectIR_2E_llvmArrayDynamicValues (const GGS_omnibusType & inOperand0,
                                                                                const GGS_operandIRList & inOperand1) :
mProperty_type (inOperand0),
mProperty_values (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues GGS_objectIR_2E_llvmArrayDynamicValues::class_func_new (const GGS_omnibusType & in_type,
                                                                                               const GGS_operandIRList & in_values,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayDynamicValues result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_values = in_values ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmArrayDynamicValues::objectCompare (const GGS_objectIR_2E_llvmArrayDynamicValues & inOperand) const {
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

bool GGS_objectIR_2E_llvmArrayDynamicValues::isValid (void) const {
  return mProperty_type.isValid () && mProperty_values.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayDynamicValues::drop (void) {
  mProperty_type.drop () ;
  mProperty_values.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayDynamicValues::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.llvmArrayDynamicValues:") ;
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
//     @objectIR.llvmArrayDynamicValues generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayDynamicValues ("objectIR.llvmArrayDynamicValues",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmArrayDynamicValues::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayDynamicValues ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmArrayDynamicValues::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmArrayDynamicValues (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues GGS_objectIR_2E_llvmArrayDynamicValues::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayDynamicValues result ;
  const GGS_objectIR_2E_llvmArrayDynamicValues * p = (const GGS_objectIR_2E_llvmArrayDynamicValues *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmArrayDynamicValues *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmArrayDynamicValues", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_llvmArrayDynamicValues_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues_3F_::GGS_objectIR_2E_llvmArrayDynamicValues_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues_3F_::GGS_objectIR_2E_llvmArrayDynamicValues_3F_ (const GGS_objectIR_2E_llvmArrayDynamicValues & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues_3F_ GGS_objectIR_2E_llvmArrayDynamicValues_3F_::init_nil (void) {
  GGS_objectIR_2E_llvmArrayDynamicValues_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_llvmArrayDynamicValues_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_llvmArrayDynamicValues_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayDynamicValues_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_llvmArrayDynamicValues () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmArrayDynamicValues_3F_::objectCompare (const GGS_objectIR_2E_llvmArrayDynamicValues_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayDynamicValues_3F_::description (String & ioString,
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
//     @objectIR.llvmArrayDynamicValues? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayDynamicValues_3F_ ("objectIR.llvmArrayDynamicValues?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmArrayDynamicValues_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayDynamicValues_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmArrayDynamicValues_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmArrayDynamicValues_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues_3F_ GGS_objectIR_2E_llvmArrayDynamicValues_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayDynamicValues_3F_ result ;
  const GGS_objectIR_2E_llvmArrayDynamicValues_3F_ * p = (const GGS_objectIR_2E_llvmArrayDynamicValues_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmArrayDynamicValues_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmArrayDynamicValues?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue::GGS_objectIR_2E_llvmArrayRepeatedStaticValue (void) :
mProperty_type (),
mProperty_arraySize (),
mProperty_value (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue::GGS_objectIR_2E_llvmArrayRepeatedStaticValue (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_arraySize (inSource.mProperty_arraySize),
mProperty_value (inSource.mProperty_value),
mProperty_index (inSource.mProperty_index) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue & GGS_objectIR_2E_llvmArrayRepeatedStaticValue::operator = (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_arraySize = inSource.mProperty_arraySize ;
  mProperty_value = inSource.mProperty_value ;
  mProperty_index = inSource.mProperty_index ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue GGS_objectIR_2E_llvmArrayRepeatedStaticValue::init_21__21__21__21_ (const GGS_omnibusType & in_type,
                                                                                                                 const GGS_uint & in_arraySize,
                                                                                                                 const GGS_objectIR & in_value,
                                                                                                                 const GGS_uint & in_index,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayRepeatedStaticValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_value = in_value ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedStaticValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue::GGS_objectIR_2E_llvmArrayRepeatedStaticValue (const GGS_omnibusType & inOperand0,
                                                                                            const GGS_uint & inOperand1,
                                                                                            const GGS_objectIR & inOperand2,
                                                                                            const GGS_uint & inOperand3) :
mProperty_type (inOperand0),
mProperty_arraySize (inOperand1),
mProperty_value (inOperand2),
mProperty_index (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue GGS_objectIR_2E_llvmArrayRepeatedStaticValue::class_func_new (const GGS_omnibusType & in_type,
                                                                                                           const GGS_uint & in_arraySize,
                                                                                                           const GGS_objectIR & in_value,
                                                                                                           const GGS_uint & in_index,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayRepeatedStaticValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_value = in_value ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmArrayRepeatedStaticValue::objectCompare (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue & inOperand) const {
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

bool GGS_objectIR_2E_llvmArrayRepeatedStaticValue::isValid (void) const {
  return mProperty_type.isValid () && mProperty_arraySize.isValid () && mProperty_value.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedStaticValue::drop (void) {
  mProperty_type.drop () ;
  mProperty_arraySize.drop () ;
  mProperty_value.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedStaticValue::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.llvmArrayRepeatedStaticValue:") ;
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
//     @objectIR.llvmArrayRepeatedStaticValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedStaticValue ("objectIR.llvmArrayRepeatedStaticValue",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmArrayRepeatedStaticValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedStaticValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmArrayRepeatedStaticValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmArrayRepeatedStaticValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue GGS_objectIR_2E_llvmArrayRepeatedStaticValue::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayRepeatedStaticValue result ;
  const GGS_objectIR_2E_llvmArrayRepeatedStaticValue * p = (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmArrayRepeatedStaticValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmArrayRepeatedStaticValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_llvmArrayRepeatedStaticValue_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::init_nil (void) {
  GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_llvmArrayRepeatedStaticValue () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::objectCompare (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::description (String & ioString,
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
//     @objectIR.llvmArrayRepeatedStaticValue? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ ("objectIR.llvmArrayRepeatedStaticValue?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ result ;
  const GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ * p = (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmArrayRepeatedStaticValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::GGS_objectIR_2E_llvmArrayRepeatedDynamicValue (void) :
mProperty_type (),
mProperty_arraySize (),
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::GGS_objectIR_2E_llvmArrayRepeatedDynamicValue (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_arraySize (inSource.mProperty_arraySize),
mProperty_value (inSource.mProperty_value) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue & GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::operator = (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_arraySize = inSource.mProperty_arraySize ;
  mProperty_value = inSource.mProperty_value ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::init_21__21__21_ (const GGS_omnibusType & in_type,
                                                                                                               const GGS_uint & in_arraySize,
                                                                                                               const GGS_objectIR & in_value,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayRepeatedDynamicValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::GGS_objectIR_2E_llvmArrayRepeatedDynamicValue (const GGS_omnibusType & inOperand0,
                                                                                              const GGS_uint & inOperand1,
                                                                                              const GGS_objectIR & inOperand2) :
mProperty_type (inOperand0),
mProperty_arraySize (inOperand1),
mProperty_value (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::class_func_new (const GGS_omnibusType & in_type,
                                                                                                             const GGS_uint & in_arraySize,
                                                                                                             const GGS_objectIR & in_value,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayRepeatedDynamicValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::objectCompare (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue & inOperand) const {
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

bool GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::isValid (void) const {
  return mProperty_type.isValid () && mProperty_arraySize.isValid () && mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::drop (void) {
  mProperty_type.drop () ;
  mProperty_arraySize.drop () ;
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.llvmArrayRepeatedDynamicValue:") ;
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
//     @objectIR.llvmArrayRepeatedDynamicValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedDynamicValue ("objectIR.llvmArrayRepeatedDynamicValue",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedDynamicValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmArrayRepeatedDynamicValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue GGS_objectIR_2E_llvmArrayRepeatedDynamicValue::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayRepeatedDynamicValue result ;
  const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue * p = (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmArrayRepeatedDynamicValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_llvmArrayRepeatedDynamicValue_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::init_nil (void) {
  GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_llvmArrayRepeatedDynamicValue () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::objectCompare (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::description (String & ioString,
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
//     @objectIR.llvmArrayRepeatedDynamicValue? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ ("objectIR.llvmArrayRepeatedDynamicValue?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ result ;
  const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ * p = (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.llvmArrayRepeatedDynamicValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element::GGS_controlRegisterGroupArrayList_2E_element (void) :
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element::GGS_controlRegisterGroupArrayList_2E_element (const GGS_controlRegisterGroupArrayList_2E_element & inSource) :
mProperty_mGroupName (inSource.mProperty_mGroupName),
mProperty_mBaseAddresses (inSource.mProperty_mBaseAddresses) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element & GGS_controlRegisterGroupArrayList_2E_element::operator = (const GGS_controlRegisterGroupArrayList_2E_element & inSource) {
  mProperty_mGroupName = inSource.mProperty_mGroupName ;
  mProperty_mBaseAddresses = inSource.mProperty_mBaseAddresses ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element GGS_controlRegisterGroupArrayList_2E_element::init_21__21_ (const GGS_lstring & in_mGroupName,
                                                                                                         const GGS_lbigintlist & in_mBaseAddresses,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupArrayList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mBaseAddresses = in_mBaseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element::GGS_controlRegisterGroupArrayList_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_lbigintlist & inOperand1) :
mProperty_mGroupName (inOperand0),
mProperty_mBaseAddresses (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element GGS_controlRegisterGroupArrayList_2E_element::class_func_new (const GGS_lstring & in_mGroupName,
                                                                                                           const GGS_lbigintlist & in_mBaseAddresses,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupArrayList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mBaseAddresses = in_mBaseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupArrayList_2E_element::isValid (void) const {
  return mProperty_mGroupName.isValid () && mProperty_mBaseAddresses.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList_2E_element::drop (void) {
  mProperty_mGroupName.drop () ;
  mProperty_mBaseAddresses.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterGroupArrayList.element:") ;
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
//     @controlRegisterGroupArrayList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2E_element ("controlRegisterGroupArrayList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupArrayList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupArrayList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupArrayList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element GGS_controlRegisterGroupArrayList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupArrayList_2E_element result ;
  const GGS_controlRegisterGroupArrayList_2E_element * p = (const GGS_controlRegisterGroupArrayList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupArrayList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR_2E_element::GGS_routineListIR_2E_element (void) :
mProperty_mRoutine () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR_2E_element::GGS_routineListIR_2E_element (const GGS_routineListIR_2E_element & inSource) :
mProperty_mRoutine (inSource.mProperty_mRoutine) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR_2E_element & GGS_routineListIR_2E_element::operator = (const GGS_routineListIR_2E_element & inSource) {
  mProperty_mRoutine = inSource.mProperty_mRoutine ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineListIR_2E_element GGS_routineListIR_2E_element::init_21_ (const GGS_abstractRoutineIR & in_mRoutine,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutine = in_mRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR_2E_element::GGS_routineListIR_2E_element (const GGS_abstractRoutineIR & inOperand0) :
mProperty_mRoutine (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR_2E_element GGS_routineListIR_2E_element::class_func_new (const GGS_abstractRoutineIR & in_mRoutine,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutine = in_mRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineListIR_2E_element::isValid (void) const {
  return mProperty_mRoutine.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR_2E_element::drop (void) {
  mProperty_mRoutine.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutine.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineListIR_2E_element ("routineListIR.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR_2E_element GGS_routineListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_routineListIR_2E_element result ;
  const GGS_routineListIR_2E_element * p = (const GGS_routineListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element::GGS_routineAccessibilityIR_2E_element (void) :
mProperty_mRoutine (),
mProperty_mAccessibleRoutineSet () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element::GGS_routineAccessibilityIR_2E_element (const GGS_routineAccessibilityIR_2E_element & inSource) :
mProperty_mRoutine (inSource.mProperty_mRoutine),
mProperty_mAccessibleRoutineSet (inSource.mProperty_mAccessibleRoutineSet) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element & GGS_routineAccessibilityIR_2E_element::operator = (const GGS_routineAccessibilityIR_2E_element & inSource) {
  mProperty_mRoutine = inSource.mProperty_mRoutine ;
  mProperty_mAccessibleRoutineSet = inSource.mProperty_mAccessibleRoutineSet ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element GGS_routineAccessibilityIR_2E_element::init_21__21_ (const GGS_abstractRoutineIR & in_mRoutine,
                                                                                           const GGS_stringset & in_mAccessibleRoutineSet,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineAccessibilityIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutine = in_mRoutine ;
  result.mProperty_mAccessibleRoutineSet = in_mAccessibleRoutineSet ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element::GGS_routineAccessibilityIR_2E_element (const GGS_abstractRoutineIR & inOperand0,
                                                                              const GGS_stringset & inOperand1) :
mProperty_mRoutine (inOperand0),
mProperty_mAccessibleRoutineSet (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element GGS_routineAccessibilityIR_2E_element::class_func_new (const GGS_abstractRoutineIR & in_mRoutine,
                                                                                             const GGS_stringset & in_mAccessibleRoutineSet,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineAccessibilityIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutine = in_mRoutine ;
  result.mProperty_mAccessibleRoutineSet = in_mAccessibleRoutineSet ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineAccessibilityIR_2E_element::isValid (void) const {
  return mProperty_mRoutine.isValid () && mProperty_mAccessibleRoutineSet.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR_2E_element::drop (void) {
  mProperty_mRoutine.drop () ;
  mProperty_mAccessibleRoutineSet.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineAccessibilityIR.element:") ;
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
//     @routineAccessibilityIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineAccessibilityIR_2E_element ("routineAccessibilityIR.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineAccessibilityIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAccessibilityIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineAccessibilityIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineAccessibilityIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element GGS_routineAccessibilityIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineAccessibilityIR_2E_element result ;
  const GGS_routineAccessibilityIR_2E_element * p = (const GGS_routineAccessibilityIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineAccessibilityIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAccessibilityIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element::GGS_ctCheckMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element::GGS_ctCheckMap_2E_element (const GGS_ctCheckMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element & GGS_ctCheckMap_2E_element::operator = (const GGS_ctCheckMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ctCheckMap_2E_element GGS_ctCheckMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctCheckMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element::GGS_ctCheckMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element GGS_ctCheckMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctCheckMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ctCheckMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ctCheckMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ctCheckMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctCheckMap_2E_element ("ctCheckMap.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctCheckMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctCheckMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctCheckMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element GGS_ctCheckMap_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_ctCheckMap_2E_element result ;
  const GGS_ctCheckMap_2E_element * p = (const GGS_ctCheckMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctCheckMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctCheckMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ctCheckMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element_3F_::GGS_ctCheckMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element_3F_::GGS_ctCheckMap_2E_element_3F_ (const GGS_ctCheckMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element_3F_ GGS_ctCheckMap_2E_element_3F_::init_nil (void) {
  GGS_ctCheckMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ctCheckMap_2E_element_3F_::isValid (void) const {
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

bool GGS_ctCheckMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ctCheckMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap_2E_element_3F_::description (String & ioString,
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
//     @ctCheckMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctCheckMap_2E_element_3F_ ("ctCheckMap.element?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctCheckMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctCheckMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctCheckMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element_3F_ GGS_ctCheckMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_ctCheckMap_2E_element_3F_ result ;
  const GGS_ctCheckMap_2E_element_3F_ * p = (const GGS_ctCheckMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctCheckMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctCheckMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element::GGS_ctMap_2E_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element::GGS_ctMap_2E_element (const GGS_ctMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element & GGS_ctMap_2E_element::operator = (const GGS_ctMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ctMap_2E_element GGS_ctMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                         const GGS_bigint & in_mValue,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element::GGS_ctMap_2E_element (const GGS_lstring & inOperand0,
                                            const GGS_bigint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element GGS_ctMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                           const GGS_bigint & in_mValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ctMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap_2E_element::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ctMap.element:") ;
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
//     @ctMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctMap_2E_element ("ctMap.element",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element GGS_ctMap_2E_element::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_ctMap_2E_element result ;
  const GGS_ctMap_2E_element * p = (const GGS_ctMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ctMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element_3F_::GGS_ctMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element_3F_::GGS_ctMap_2E_element_3F_ (const GGS_ctMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element_3F_ GGS_ctMap_2E_element_3F_::init_nil (void) {
  GGS_ctMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ctMap_2E_element_3F_::isValid (void) const {
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

bool GGS_ctMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ctMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap_2E_element_3F_::description (String & ioString,
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
//     @ctMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctMap_2E_element_3F_ ("ctMap.element?",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element_3F_ GGS_ctMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_ctMap_2E_element_3F_ result ;
  const GGS_ctMap_2E_element_3F_ * p = (const GGS_ctMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant::GGS_genericFormalParameter_2E_constant (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant::GGS_genericFormalParameter_2E_constant (const GGS_genericFormalParameter_2E_constant & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant & GGS_genericFormalParameter_2E_constant::operator = (const GGS_genericFormalParameter_2E_constant & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant GGS_genericFormalParameter_2E_constant::init_21_ (const GGS_lstring & in_name,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter_2E_constant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter_2E_constant::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant::GGS_genericFormalParameter_2E_constant (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant GGS_genericFormalParameter_2E_constant::class_func_new (const GGS_lstring & in_name,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter_2E_constant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_genericFormalParameter_2E_constant::objectCompare (const GGS_genericFormalParameter_2E_constant & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericFormalParameter_2E_constant::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter_2E_constant::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter_2E_constant::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericFormalParameter.constant:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @genericFormalParameter.constant generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter_2E_constant ("genericFormalParameter.constant",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericFormalParameter_2E_constant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter_2E_constant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericFormalParameter_2E_constant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericFormalParameter_2E_constant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant GGS_genericFormalParameter_2E_constant::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_genericFormalParameter_2E_constant result ;
  const GGS_genericFormalParameter_2E_constant * p = (const GGS_genericFormalParameter_2E_constant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericFormalParameter_2E_constant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter.constant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @genericFormalParameter_2E_constant_3F_
//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant_3F_::GGS_genericFormalParameter_2E_constant_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant_3F_::GGS_genericFormalParameter_2E_constant_3F_ (const GGS_genericFormalParameter_2E_constant & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant_3F_ GGS_genericFormalParameter_2E_constant_3F_::init_nil (void) {
  GGS_genericFormalParameter_2E_constant_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericFormalParameter_2E_constant_3F_::isValid (void) const {
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

bool GGS_genericFormalParameter_2E_constant_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter_2E_constant_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_genericFormalParameter_2E_constant () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_genericFormalParameter_2E_constant_3F_::objectCompare (const GGS_genericFormalParameter_2E_constant_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter_2E_constant_3F_::description (String & ioString,
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
//     @genericFormalParameter.constant? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter_2E_constant_3F_ ("genericFormalParameter.constant?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericFormalParameter_2E_constant_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter_2E_constant_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericFormalParameter_2E_constant_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericFormalParameter_2E_constant_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant_3F_ GGS_genericFormalParameter_2E_constant_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_genericFormalParameter_2E_constant_3F_ result ;
  const GGS_genericFormalParameter_2E_constant_3F_ * p = (const GGS_genericFormalParameter_2E_constant_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericFormalParameter_2E_constant_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter.constant?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

